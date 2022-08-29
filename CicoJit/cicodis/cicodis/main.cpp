//
//  main.cpp
//  cicodis
//
//  Created by Gabriel Valky on 27/08/2022.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <capstone/platform.h>
#include <capstone/capstone.h>

csh _handle;
static void print_insn_detail(csh ud, cs_mode mode, cs_insn *ins);

struct address_t {
    int segment{-1};
    int offset{-1};
    operator bool() const
    {
        return segment != -1;
    }
    operator int() const
    {
        assert(segment != -1);
        return segment*0x10+offset;
    }
    int linearOffset() const
    {
        return segment*0x10+offset;
    }
};

enum class inject_t {
    none = 0,
    carry = 1
};

address_t operator +(const address_t a, int b)
{
    return address_t{a.segment, a.offset+b};
}

bool operator==(const address_t& a, const address_t& b)
{
    return a.linearOffset() == b.linearOffset();
}
/*
bool operator==(const address_t& a, const address_t& b)
{
    return a.segment == b.segment && a.offset == b.offset;
}
bool operator!=(const address_t& a, const address_t& b)
{
    return a.segment != b.segment || a.offset != b.offset;
}
*/

struct cmp_adress_t {
    bool operator()(const address_t& a, const address_t& b) const {
        return a.segment*0x10+a.offset < b.segment*0x10+b.offset;
    }
};

std::string format(const char* fmt, ...)
{
    char buf[256];
    va_list args;
    va_start(args, fmt);
    vsprintf(buf, fmt, args);
    va_end(args);
    return std::string(buf);
}

class CapInstr
{
public: // remove!
    x86_insn mId;
    //uint64_t mAddress;
    cs_x86 mDetail;
    int mSize;
    char mMnemonic[64];
    char mOperands[64];
    address_t mAddress;
    address_t mNextInstr;
    address_t mBranchInstr;
    bool mLabel{false};
    bool mMark{false};
    inject_t mInject{inject_t::none};
    std::string mComment;
    
public:
    CapInstr(address_t addr, const std::string& comment)
    {
        mMark = true;
        mComment = comment;
    }
    
    CapInstr(address_t addr, cs_insn* p)
    {
        assert(addr.segment != -1);
        //mDetail = p->detail->x86;
        memcpy(&mDetail, &p->detail->x86, sizeof(cs_x86));
        mId = (x86_insn)p->id;
        mAddress = addr;
        mSize = p->size;
        //mAddress = p->address;
        strcpy(mMnemonic, p->mnemonic);
        strcpy(mOperands, p->op_str);
        mNextInstr = {addr.segment, addr.offset + p->size};
        
        cs_x86 *x86 = &(p->detail->x86);
        //Dump();
        //print_insn_detail(_handle, CS_MODE_16, p);
        
        switch (mId)
        {
            case X86_INS_MOV:
                break;

            case X86_INS_JMP:
                assert(x86->op_count == 1 &&
                       x86->operands[0].type == X86_OP_IMM &&
                       x86->operands[0].size == 2);
                mNextInstr = {addr.segment, (int)x86->operands[0].imm};
                sprintf(mOperands, "loc_%x", mNextInstr.segment*0x10+mNextInstr.offset);
                //print_insn_detail(_handle, CS_MODE_16, p);
                break;
                
                //tuto
            case X86_INS_LOOP:
            case X86_INS_JAE ... X86_INS_JL:
            case X86_INS_JNE ... X86_INS_JS:
                //print_insn_detail(_handle, CS_MODE_16, p);
                assert(x86->op_count == 1 &&
                       x86->operands[0].type == X86_OP_IMM &&
                       x86->operands[0].size == 2);
                mBranchInstr = {addr.segment, (int)x86->operands[0].imm};
                sprintf(mOperands, "loc_%x", mBranchInstr.segment*0x10+mBranchInstr.offset);
                break;
            case X86_INS_RET:
                mNextInstr = address_t{};
                break;
            default:
                break;
        }
    }
    address_t Next()
    {
        return mNextInstr;
    }
    address_t NextBranch()
    {
        return mBranchInstr;
    }
    address_t NextFollowing()
    {
        return mAddress + mSize;
    }
    /*
    address_t Next()
    {
        address_t temp = mNextInstr;
        mNextInstr = mBranchInstr;
        mBranchInstr = address_t{};

        return temp;
    }*/
    bool isConditionalBranch()
    {
        return false;
    }
    void Dump() const
    {
        if (mLabel)
            printf("        \tloc_%x:\n", mAddress.segment*0x10+mAddress.offset);
        printf("%04x:%04x\t  %s\t%s\n", mAddress.segment, mAddress.offset, mMnemonic, mOperands);
    }
};

class Capstone
{
    csh mHandle;
    cs_insn* mInsn;
    const uint8_t* mpBuffer;
    size_t mSize;
    uint64_t mBase;
    
public:
    Capstone()
    {
        cs_err err = cs_open(CS_ARCH_X86, CS_MODE_16, &mHandle);
        if (err) {
            printf("Failed on cs_open() with error returned: %u\n", err);
            abort();
        }
        cs_option(mHandle, CS_OPT_DETAIL, CS_OPT_ON);
        mInsn = cs_malloc(mHandle);
        _handle = mHandle;
    }
    ~Capstone()
    {
        cs_free(mInsn, 1);
        cs_close(&mHandle);
    }
    
    void Set(const std::vector<char>& buffer, uint64_t base)
    {
        mpBuffer = (const uint8_t*)buffer.data();
        mSize = buffer.size();
        mBase = base;
    }
    
    std::shared_ptr<CapInstr> Disasm(address_t addr)
    {
        uint64_t address = addr.segment*16 + addr.offset;
        size_t codeSize = 32;
        assert(address - mBase > 0x200 && address - mBase+32 < mSize);
        const uint8_t* buf = mpBuffer + address - mBase;
        cs_disasm_iter(mHandle, &buf, &codeSize, &address, mInsn);
/*
        print_insn_detail(_handle, CS_MODE_16, mInsn);
        
        cs_x86 *x86 = &(mInsn->detail->x86);
        for (int i=0; i<x86->op_count; i++)
            if (x86->operands[i].type == X86_OP_MEM)
                assert(x86->operands[i].mem.disp >= 0);
*/
        
        return std::shared_ptr<CapInstr>(new CapInstr(addr, mInsn));
    }
};

bool ExtractMethod(Capstone& cap, address_t address, std::vector<std::shared_ptr<CapInstr>>& code)
{
    std::list<address_t> trace;
    trace.push_back(address);
    std::map<address_t, std::shared_ptr<CapInstr>, cmp_adress_t> instructions;
    
    while (!trace.empty())
    {
        address_t pc = trace.front();
        trace.pop_front();
        std::shared_ptr<CapInstr> instr = cap.Disasm(pc);
        instructions.insert(std::pair<address_t, std::shared_ptr<CapInstr>>(pc, instr));
        
        //instr->Dump();
        if ((pc = instr->Next()).segment != -1)
            if (instructions.find(pc) == instructions.end())
            {
                if ((int)pc < (int)address)
                {
                    instr->mMark = true;
                    continue;
                } else {
                    assert((int)pc >= (int)address);
                    trace.push_back(pc);
                }
            }
        if ((pc = instr->NextBranch()).segment != -1)
            if (instructions.find(pc) == instructions.end())
            {
                assert((int)pc >= (int)address);
                trace.push_back(pc);
            }
    }

    for( auto iter = instructions.begin(); iter != instructions.end(); iter++ )
    {
        address_t branch = iter->second->NextBranch();
        if (iter->second->Next() &&
            (int)iter->second->Next() != (int)iter->second->NextFollowing())
            branch = iter->second->Next();
        if (branch.segment != -1)
            instructions.find(branch)->second->mLabel = true;
    }

    
    // fix small gaps
    address_t nextAddr;
    for( auto iter = instructions.begin(); iter != instructions.end(); iter++ )
    {
        address_t addr = iter->first;
        std::shared_ptr<CapInstr> instr = iter->second;
        if (nextAddr.segment != -1 && (int)addr != (int)nextAddr)
        {
            int gapsize = (int)addr - (int)nextAddr;
            assert(gapsize <= 4);
            std::shared_ptr<CapInstr> gap = std::shared_ptr<CapInstr>(new CapInstr(nextAddr, format("gap of %d bytes", gapsize)));
            instructions.insert(std::pair<address_t, std::shared_ptr<CapInstr>>(nextAddr, gap));
        }

//        printf("%04x:%04x %s %s (%d)\n", iter->first.segment, iter->first.offset,
//               iter->second->mMnemonic, iter->second->mOperands, instr->mSize);
        nextAddr = instr->NextFollowing();
    }
    
    nextAddr = address_t{};
    for( auto iter = instructions.begin(); iter != instructions.end(); iter++ )
    {
        address_t addr = iter->first;
        std::shared_ptr<CapInstr> instr = iter->second;
        if (nextAddr.segment != -1)
        {
            if ((int)addr != (int)nextAddr)
                return false;
            
            assert((int)addr == (int)nextAddr);
        }
            
        nextAddr = instr->NextFollowing();
        code.push_back(instr);
    }
    return true;
}

void DumpCode(const std::vector<std::shared_ptr<CapInstr>>& code)
{
    for (const std::shared_ptr<CapInstr>& instr : code)
        instr->Dump();
}

std::string ToCString(const cs_x86_op& op)
{
    if (op.type == X86_OP_REG)
        return cs_reg_name(_handle, op.reg);
    if (op.type == X86_OP_IMM && op.size == 1)
    {
        char tmp[32];
        sprintf(tmp, "0x%02llx", op.imm);
        return tmp;
    }
    if (op.type == X86_OP_IMM && op.size == 2)
    {
        char tmp[32];
        sprintf(tmp, "0x%04llx", op.imm & 0xffff);
        return tmp;
    }
    if (op.type == X86_OP_MEM)
    {
        char offset[32] = "";
        if (op.mem.base == X86_REG_INVALID && op.mem.scale == 1 && op.mem.index == X86_REG_INVALID)
            sprintf(offset, "0x%04x", op.mem.disp & 0xffff);
        else if (op.mem.base != X86_REG_INVALID && op.mem.scale == 1 && op.mem.index == X86_REG_INVALID && op.mem.disp == 0)
            sprintf(offset, "%s", cs_reg_name(_handle, op.mem.base));
        else if (op.mem.base != X86_REG_INVALID && op.mem.scale == 1 && op.mem.index == X86_REG_INVALID)
            sprintf(offset, "%s %c %d", cs_reg_name(_handle, op.mem.base), op.mem.disp >= 0 ? '+' : '-', abs(op.mem.disp & 0xffff));
        else if (op.mem.base != X86_REG_INVALID && op.mem.scale == 1 && op.mem.index != X86_REG_INVALID && op.mem.disp == 0)
            sprintf(offset, "%s + %s", cs_reg_name(_handle, op.mem.base),  cs_reg_name(_handle, op.mem.index));
        else
            assert(0);
        
        char tmp[64];
        sprintf(tmp, "memory%s(%s, %s)", op.size == 2 ? "16" : "", op.mem.segment == X86_REG_INVALID ? "ds" : cs_reg_name(_handle, op.mem.segment), offset);
        return tmp;
    }

    /*
    if (op.type == X86_OP_MEM && op.size == 2 && op.mem.base == X86_REG_INVALID)
    {
        char tmp[32];
        sprintf(tmp, "memory16(%s, 0x%04llx)", op.mem.segment == X86_REG_INVALID ? "ds" : cs_reg_name(_handle, op.mem.segment), op.mem.disp & 0xffff);
        return tmp;
    }
    if (op.type == X86_OP_MEM && op.size == 1 && op.mem.base == X86_REG_INVALID)
    {
        char tmp[32];
        sprintf(tmp, "memory(%s, 0x%04llx)", op.mem.segment == X86_REG_INVALID ? "ds" : cs_reg_name(_handle, op.mem.segment), op.mem.disp & 0xffff);
        return tmp;
    }
    if (op.type == X86_OP_MEM && op.size == 1 && op.mem.base != X86_REG_INVALID && op.mem.disp == 0)
    {
        char tmp[32];
        sprintf(tmp, "memory(%s, %s)", op.mem.segment == X86_REG_INVALID ? "ds" : cs_reg_name(_handle, op.mem.segment), cs_reg_name(_handle, op.mem.base));
        return tmp;
    }
    if (op.type == X86_OP_MEM && op.size == 1 && op.mem.base != X86_REG_INVALID && op.mem.disp > 0)
    {
        char tmp[32];
        sprintf(tmp, "memory(%s, %s + %d)", op.mem.segment == X86_REG_INVALID ? "ds" : cs_reg_name(_handle, op.mem.segment), cs_reg_name(_handle, op.mem.base), (int)op.mem.disp);
        return tmp;
    }*/
    assert(0);
    return "?";
}

std::string SignedType(const cs_x86_op& op)
{
    if (op.size == 1)
        return "char";
    if (op.size == 2)
        return "short";
    assert(0);
    return "?";
}

std::string MakeCCondition(std::shared_ptr<CapInstr>& inst, x86_insn op)
{
    const cs_x86& x86 = inst->mDetail;

    char tmp[64];
    switch(inst->mId)
    {
        case X86_INS_CMP:
            assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
            switch (op)
            {
                case X86_INS_JE:
                    sprintf(tmp, "%s == %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JNE:
                    sprintf(tmp, "%s != %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JAE:
                    sprintf(tmp, "%s >= %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JGE:
                    sprintf(tmp, "(%s)%s >= (%s)%s", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str(), SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JG:
                    sprintf(tmp, "(%s)%s > (%s)%s", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str(), SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JNS:
                    sprintf(tmp, "(%s)%s >= 0", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str());
                    return tmp;
                case X86_INS_JLE:
                    sprintf(tmp, "(%s)%s <= (%s)%s", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str(), SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JBE:
                    sprintf(tmp, "%s <= %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JB:
                    sprintf(tmp, "%s < %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JA:
                    sprintf(tmp, "%s > %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                default:
                    assert(0);
            }
            break;
        case X86_INS_TEST:
            assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
            switch (op)
            {
                case X86_INS_JE:
                    sprintf(tmp, "!(%s & %s)", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                case X86_INS_JNE:
                    sprintf(tmp, "%s & %s", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str());
                    return tmp;
                default:
                    assert(0);
            }
            break;
        case X86_INS_SUB:
        case X86_INS_AND:
        case X86_INS_DEC:
        case X86_INS_SHR:
            assert(x86.op_count >= 1);
            //assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
            switch (op)
            {
                case X86_INS_JE:
                    sprintf(tmp, "%s == 0", ToCString(x86.operands[0]).c_str());
                    return tmp;
                case X86_INS_JNE:
                    sprintf(tmp, "%s != 0", ToCString(x86.operands[0]).c_str());
                    return tmp;
                case X86_INS_JNS:
                    sprintf(tmp, "(%s)%s >= 0", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str());
                    return tmp;
                case X86_INS_JS:
                    sprintf(tmp, "(%s)%s < 0", SignedType(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str());
                    return tmp;
                case X86_INS_JAE:
                    if (inst->mInject != inject_t::carry)
                    {
                        inst->mInject = inject_t::carry;
                        sprintf(tmp, "stop()");
                    } else {
                        sprintf(tmp, "!flags.carry");
                    }
                    return tmp;
                default:
                    assert(0);
            }
            break;
        case X86_INS_INT:
            switch (op)
            {
                case X86_INS_JAE:
                    sprintf(tmp, "!flags.carry");
                    return tmp;
                default:
                    assert(0);
            }
            break;
        default:
            assert(0);
    }
}

void FindCalls(const std::vector<std::shared_ptr<CapInstr>>& code, std::list<address_t>& toProcess)
{
    for (const std::shared_ptr<CapInstr>& instr : code)
        if (instr->mId == X86_INS_CALL)
        {
            const cs_x86& x86 = instr->mDetail;

            if (x86.op_count == 1 && x86.operands[0].type == X86_OP_IMM && x86.operands[0].size == 2)
            {
                toProcess.push_back(address_t{instr->mAddress.segment, (int)x86.operands[0].imm});
            } else if (x86.op_count == 1 && x86.operands[0].type == X86_OP_MEM && x86.operands[0].size == 2)
            {
                // indirect
            } else
                assert(0);
        }
}

bool DumpCodeAsC(const std::vector<std::shared_ptr<CapInstr>>& code, std::vector<std::string>& text)
{
    bool modified = false;
    text.push_back(format("void sub_%x()", (int)code[0]->mAddress));
    text.push_back(format("{"));
    std::shared_ptr<CapInstr> lastCompare;
    bool keepLastCompare{false};
    for (const std::shared_ptr<CapInstr>& instr : code)
    {
        const cs_x86& x86 = instr->mDetail;
        keepLastCompare = false;
        
        if (instr->mMark)
        {
            text.push_back(format("stop(0); // %s %s %s", instr->mMnemonic, instr->mOperands, instr->mComment.c_str()));
            continue;
        }
        
        if (instr->mLabel)
        {
            lastCompare.reset();
            text.push_back(format("loc_%x:", (int)instr->mAddress));
        }

        if (instr->mInject != inject_t::none)
        {
            if ((int)instr->mInject & (int)inject_t::carry)
            {
                switch (instr->mId)
                {
                    case X86_INS_SHR:
                        text.push_back(format("flags.carry = %s & 1;", ToCString(x86.operands[0]).c_str()));
                    default:
                        break;
                }
            } else
                assert(0);
        }

        switch (instr->mId)
        {
            case X86_INS_DIV:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_REG);
                text.push_back(format("div(%s);", ToCString(x86.operands[0]).c_str()));
                break;

            case X86_INS_CWDE:
                text.push_back(format("cbw();"));
                break;

            case X86_INS_NOT:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_REG &&
                       x86.operands[0].size == 2);
                text.push_back(format("%s = ~%s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str()));
                break;
            case X86_INS_NEG:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_REG);
                text.push_back(format("%s = -%s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[0]).c_str()));
                break;
            case X86_INS_PUSH:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_REG &&
                       x86.operands[0].size == 2);
                text.push_back(format("push(%s);", ToCString(x86.operands[0]).c_str()));
                keepLastCompare = true;
                break;
            case X86_INS_POP:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_REG &&
                       x86.operands[0].size == 2);
                text.push_back(format("pop(%s);", ToCString(x86.operands[0]).c_str()));
                keepLastCompare = true;
                break;

            case X86_INS_STOSW:
                if (strcmp(instr->mMnemonic, "rep stosw") == 0 &&
                    strcmp(instr->mOperands, "word ptr es:[di], ax") == 0)
                {
                    text.push_back(format("rep_stosw<MemAuto, DirAuto>();"));
                    break;
                }
                assert(0);
                break;
            case X86_INS_STOSB:
                if (strcmp(instr->mMnemonic, "rep stosb") == 0 &&
                    strcmp(instr->mOperands, "byte ptr es:[di], al") == 0)
                {
                    text.push_back(format("rep_stosb<MemAuto, DirAuto>();"));
                    break;
                }
                assert(0);
                break;
            case X86_INS_MOVSB:
                if (strcmp(instr->mMnemonic, "rep movsb") == 0 &&
                    strcmp(instr->mOperands, "byte ptr es:[di], byte ptr [si]") == 0)
                {
                    text.push_back(format("rep_movsb<MemAuto, MemAuto, DirAuto>();"));
                    break;
                }
                assert(0);
                break;
            case X86_INS_MOVSW:
                if (strcmp(instr->mMnemonic, "movsw") == 0 &&
                    strcmp(instr->mOperands, "word ptr es:[di], word ptr [si]") == 0)
                {
                    text.push_back(format("movsw<MemAuto, MemAuto, DirAuto>();"));
                    break;
                }
                assert(0);
                break;
            case X86_INS_LODSB:
                if (strcmp(instr->mMnemonic, "lodsb") == 0 &&
                    strcmp(instr->mOperands, "al, byte ptr [si]") == 0)
                {
                    text.push_back(format("lodsb<MemAuto, DirAuto>();"));
                    break;
                }
                assert(0);
                break;
            case X86_INS_INC:
                text.push_back(format("%s++;", ToCString(x86.operands[0]).c_str()));
                break;
            case X86_INS_DEC:
                text.push_back(format("%s--;", ToCString(x86.operands[0]).c_str()));
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_IN:
                text.push_back(format("in(%s, %s);", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                break;
            case X86_INS_OUT:
                text.push_back(format("out(%s, %s);", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                break;
            case X86_INS_CLD:
                text.push_back(format("flags.direction = false;"));
                break;
            case X86_INS_STD:
                text.push_back(format("flags.direction = true;"));
                break;
            case X86_INS_CLI:
                text.push_back(format("flags.interrupts = false;"));
                break;
            case X86_INS_STI:
                text.push_back(format("flags.interrupts = true;"));
                break;
            case X86_INS_INT:
                assert(x86.op_count == 1 && x86.operands[0].type == X86_OP_IMM);
                text.push_back(format("interrupt(0x%x);", (int)x86.operands[0].imm));
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_ADD:
                assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
                text.push_back(format("%s += %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                break;
            case X86_INS_AND:
                assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
                text.push_back(format("%s &= %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_OR:
                assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
                text.push_back(format("%s |= %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                //lastCompare = instr;
                //keepLastCompare = true;
                break;
            case X86_INS_SUB:
                assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
                text.push_back(format("%s -= %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_SAR:
                assert(x86.op_count == 2 && x86.operands[1].type == X86_OP_IMM);
                text.push_back(format("sar(%s, %d);", ToCString(x86.operands[0]).c_str(), (int)x86.operands[1].imm));
                break;
            case X86_INS_SHL:
                assert(x86.op_count == 2 && x86.operands[1].type == X86_OP_IMM);
                text.push_back(format("%s <<= %d;", ToCString(x86.operands[0]).c_str(), (int)x86.operands[1].imm));
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_SHR:
                if (x86.op_count == 2 && x86.operands[1].type == X86_OP_IMM)
                {
                    assert(x86.op_count == 2 && x86.operands[1].type == X86_OP_IMM);
                    text.push_back(format("%s >>= %d;", ToCString(x86.operands[0]).c_str(), (int)x86.operands[1].imm));
                } else
                if (x86.op_count == 2 && x86.operands[1].type == X86_OP_REG)
                {
                    text.push_back(format("%s >>= %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                } else
                    assert(0);
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_RET:
                if (x86.op_count == 0)
                    text.push_back(format("return;"));
                else if (x86.op_count == 1 && x86.operands[0].type == X86_OP_IMM)
                {
                    text.push_back(format("sp += %d;", x86.operands[0].imm));
                    text.push_back(format("return;"));
                }
                else
                    assert(0);
                break;
            case X86_INS_CMP:
            case X86_INS_TEST:
                lastCompare = instr;
                keepLastCompare = true;
                break;
            case X86_INS_JE:
            case X86_INS_JAE:
            case X86_INS_JNE:
            case X86_INS_JGE:
            case X86_INS_JLE:
            case X86_INS_JBE:
            case X86_INS_JNS:
            case X86_INS_JS:
            case X86_INS_JB:
            case X86_INS_JG:
            case X86_INS_JA:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_IMM &&
                       x86.operands[0].size == 2);

                if (!lastCompare)
                {
                    if (code[0]->mAddress == address_t{0x1000, 0x0541} ||
                        code[0]->mAddress == address_t{0x1000, 0x0c24} ||
                        code[0]->mAddress == address_t{0x1000, 0x22c1} ||
                        false)
                    {
                        text.push_back(format("stop();")); // TODO!\n");
                        break;
                    }
                }
                {
                    assert(lastCompare);
                    inject_t injectPrev = lastCompare ? lastCompare->mInject : inject_t::none;

                    text.push_back(format("if (%s)", MakeCCondition(lastCompare, instr->mId).c_str()));
                    text.push_back(format("goto loc_%x;", (int)address_t{instr->mAddress.segment, (int)x86.operands[0].imm}));
                    keepLastCompare = true;
                    if (injectPrev != (lastCompare ? lastCompare->mInject : inject_t::none))
                        modified = true;
                }
                break;
            case X86_INS_JCXZ:
                text.push_back(format("if (cx == 0)"));
                text.push_back(format("goto loc_%x;", (int)address_t{instr->mAddress.segment, (int)x86.operands[0].imm}));
                break;
            case X86_INS_JMP:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_IMM &&
                       x86.operands[0].size == 2);

                text.push_back(format("goto loc_%x;", (int)address_t{instr->mAddress.segment, (int)x86.operands[0].imm}));
                break;
            case X86_INS_LOOP:
                assert(x86.op_count == 1 &&
                       x86.operands[0].type == X86_OP_IMM &&
                       x86.operands[0].size == 2);

               text.push_back(format("if (--cx)"));
               text.push_back(format("goto loc_%x;", (int)address_t{instr->mAddress.segment, (int)x86.operands[0].imm}));
                break;

            case X86_INS_CALL:
                if (x86.op_count == 1 && x86.operands[0].type == X86_OP_IMM && x86.operands[0].size == 2)
                {
                    text.push_back(format("sub_%x();", (int)address_t{instr->mAddress.segment, (int)x86.operands[0].imm}));
                } else if (x86.op_count == 1 && x86.operands[0].type == X86_OP_MEM && x86.operands[0].size == 2)
                {
                    // TODO: possible to use switch after analysis finish
                    text.push_back(format("callIndirect(%s);", ToCString(x86.operands[0]).c_str()));
                } else
                    assert(0);
                break;
            case X86_INS_MOV:
                assert(x86.op_count == 2 && x86.operands[0].size == x86.operands[1].size);
                text.push_back(format("%s = %s;", ToCString(x86.operands[0]).c_str(), ToCString(x86.operands[1]).c_str()));
                break;
                
            default:
                assert(0);
        }

        if (!keepLastCompare)
            lastCompare.reset();
    }
    text.push_back(format("}"));
    return modified;
    //X86_INS_MOV
}

void ReplaceAll(std::vector<std::string>& text, const std::string& from, const std::string& to)
{
    for (auto i=text.begin(); i!=text.end(); i++)
        if (*i == from)
            *i = to;
}

void OptimizeCode(std::vector<std::string>& text)
{
    if (text[text.size()-2] == "return;")
    {
        const std::string& label = text[text.size()-3];
        if (label.substr(0, 4) == "loc_")
        {
            // replace all local labels with return
            ReplaceAll(text, "goto "+label.substr(0, label.length()-1) + ";", "return;");
            text.erase(std::prev(text.end(), 3));
        }
        text.erase(std::prev(text.end(), 2));
    }
}


int main(int argc, const char * argv[]) {
    std::ifstream file("/Users/gabrielvalky/Documents/git/Projects/CicoJit/capst/GOOSE.EXE", std::ios::binary | std::ios::ate);
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<char> buffer(size);
    if (!file.read(buffer.data(), size))
        throw "problem";

    Capstone cap;
    cap.Set(buffer, 0x10000 - 0x200);
    
    std::vector<address_t> processed;
    std::vector<address_t> failed;
    std::list<address_t> toProcess;
    toProcess.push_back({0x1000, 0x0010});
    //toProcess.push_back({0x1000, 0x2872});
    //toProcess.push_back({0x1000, 0x2762});
    while (!toProcess.empty())
    {
        address_t method = toProcess.front();
        toProcess.pop_front();
        
        if (std::find(processed.begin(), processed.end(), method) != processed.end())
            continue;
        processed.push_back(method);

        std::vector<std::shared_ptr<CapInstr>> code;
        printf("// extracting %04x:%04x, converted %d, to convert %d, failed %d\n", method.segment, method.offset, processed.size(), toProcess.size(), failed.size());
        if (!ExtractMethod(cap, method, code))
        {
            printf("Conversion failed!\n");
            failed.push_back(method);
            continue;
        }
        //DumpCode(code);
        FindCalls(code, toProcess);
        std::vector<std::string> text;
        if (DumpCodeAsC(code, text))
        {
            text.clear();
            DumpCodeAsC(code, text);
        }
        OptimizeCode(text);
        for (const auto& l : text)
            printf("%s\n", l.c_str());
    }
    for (const auto decl : processed)
        printf("void sub_%x();\n", decl.linearOffset());
    return 0;
}











static const char *get_fpu_flag_name(uint64_t flag)
{
  return "xxxx";
}

static const char *get_eflag_name(uint64_t flag)
{
  return "yyyy";
}

static void print_string_hex(const char *comment, unsigned char *str, size_t len)
{
    unsigned char *c;

    printf("%s", comment);
    for (c = str; c < str + len; c++) {
        printf("0x%02x ", *c & 0xff);
    }

    printf("\n");
}




static void print_insn_detail(csh ud, cs_mode mode, cs_insn *ins)
{
    int count, i;
    cs_x86 *x86;
    cs_regs regs_read, regs_write;
    uint8_t regs_read_count, regs_write_count;

    // detail can be NULL on "data" instruction if SKIPDATA option is turned ON
    if (ins->detail == NULL)
        return;

    x86 = &(ins->detail->x86);

    print_string_hex("\tPrefix:", x86->prefix, 4);

    print_string_hex("\tOpcode:", x86->opcode, 4);

    printf("\trex: 0x%x\n", x86->rex);

    printf("\taddr_size: %u\n", x86->addr_size);
    printf("\tmodrm: 0x%x\n", x86->modrm);
    if (x86->encoding.modrm_offset != 0) {
        printf("\tmodrm_offset: 0x%x\n", x86->encoding.modrm_offset);
    }
    
    printf("\tdisp: 0x%" PRIx64 "\n", x86->disp);
    if (x86->encoding.disp_offset != 0) {
        printf("\tdisp_offset: 0x%x\n", x86->encoding.disp_offset);
    }
    
    if (x86->encoding.disp_size != 0) {
        printf("\tdisp_size: 0x%x\n", x86->encoding.disp_size);
    }
    
    // SIB is not available in 16-bit mode
    if ((mode & CS_MODE_16) == 0) {
        printf("\tsib: 0x%x\n", x86->sib);
        if (x86->sib_base != X86_REG_INVALID)
            printf("\t\tsib_base: %s\n", cs_reg_name(_handle, x86->sib_base));
        if (x86->sib_index != X86_REG_INVALID)
            printf("\t\tsib_index: %s\n", cs_reg_name(_handle, x86->sib_index));
        if (x86->sib_scale != 0)
            printf("\t\tsib_scale: %d\n", x86->sib_scale);
    }

    // XOP code condition
    if (x86->xop_cc != X86_XOP_CC_INVALID) {
        printf("\txop_cc: %u\n", x86->xop_cc);
    }

    // SSE code condition
    if (x86->sse_cc != X86_SSE_CC_INVALID) {
        printf("\tsse_cc: %u\n", x86->sse_cc);
    }

    // AVX code condition
    if (x86->avx_cc != X86_AVX_CC_INVALID) {
        printf("\tavx_cc: %u\n", x86->avx_cc);
    }

    // AVX Suppress All Exception
    if (x86->avx_sae) {
        printf("\tavx_sae: %u\n", x86->avx_sae);
    }

    // AVX Rounding Mode
    if (x86->avx_rm != X86_AVX_RM_INVALID) {
        printf("\tavx_rm: %u\n", x86->avx_rm);
    }

    // Print out all immediate operands
    count = cs_op_count(ud, ins, X86_OP_IMM);
    if (count) {
        printf("\timm_count: %u\n", count);
        for (i = 1; i < count + 1; i++) {
            int index = cs_op_index(ud, ins, X86_OP_IMM, i);
            printf("\t\timms[%u]: 0x%" PRIx64 "\n", i, x86->operands[index].imm);
            if (x86->encoding.imm_offset != 0) {
                printf("\timm_offset: 0x%x\n", x86->encoding.imm_offset);
            }
            
            if (x86->encoding.imm_size != 0) {
                printf("\timm_size: 0x%x\n", x86->encoding.imm_size);
            }
        }
    }

    if (x86->op_count)
        printf("\top_count: %u\n", x86->op_count);

    // Print out all operands
    for (i = 0; i < x86->op_count; i++) {
        cs_x86_op *op = &(x86->operands[i]);

        switch((int)op->type) {
            case X86_OP_REG:
                printf("\t\toperands[%u].type: REG = %s\n", i, cs_reg_name(_handle, op->reg));
                break;
            case X86_OP_IMM:
                printf("\t\toperands[%u].type: IMM = 0x%" PRIx64 "\n", i, op->imm);
                break;
            case X86_OP_MEM:
                printf("\t\toperands[%u].type: MEM\n", i);
                if (op->mem.segment != X86_REG_INVALID)
                    printf("\t\t\toperands[%u].mem.segment: REG = %s\n", i, cs_reg_name(_handle, op->mem.segment));
                if (op->mem.base != X86_REG_INVALID)
                    printf("\t\t\toperands[%u].mem.base: REG = %s\n", i, cs_reg_name(_handle, op->mem.base));
                if (op->mem.index != X86_REG_INVALID)
                    printf("\t\t\toperands[%u].mem.index: REG = %s\n", i, cs_reg_name(_handle, op->mem.index));
                if (op->mem.scale != 1)
                    printf("\t\t\toperands[%u].mem.scale: %u\n", i, op->mem.scale);
                if (op->mem.disp != 0)
                    printf("\t\t\toperands[%u].mem.disp: 0x%" PRIx64 ", %d\n", i, op->mem.disp, (int)op->mem.disp);
                break;
            default:
                break;
        }

        // AVX broadcast type
        if (op->avx_bcast != X86_AVX_BCAST_INVALID)
            printf("\t\toperands[%u].avx_bcast: %u\n", i, op->avx_bcast);

        // AVX zero opmask {z}
        if (op->avx_zero_opmask != false)
            printf("\t\toperands[%u].avx_zero_opmask: TRUE\n", i);

        printf("\t\toperands[%u].size: %u\n", i, op->size);

        switch(op->access) {
            default:
                break;
            case CS_AC_READ:
                printf("\t\toperands[%u].access: READ\n", i);
                break;
            case CS_AC_WRITE:
                printf("\t\toperands[%u].access: WRITE\n", i);
                break;
            case CS_AC_READ | CS_AC_WRITE:
                printf("\t\toperands[%u].access: READ | WRITE\n", i);
                break;
        }
    }

    // Print out all registers accessed by this instruction (either implicit or explicit)
    if (!cs_regs_access(ud, ins,
                regs_read, &regs_read_count,
                regs_write, &regs_write_count)) {
        if (regs_read_count) {
            printf("\tRegisters read:");
            for(i = 0; i < regs_read_count; i++) {
                printf(" %s", cs_reg_name(_handle, regs_read[i]));
            }
            printf("\n");
        }

        if (regs_write_count) {
            printf("\tRegisters modified:");
            for(i = 0; i < regs_write_count; i++) {
                printf(" %s", cs_reg_name(_handle, regs_write[i]));
            }
            printf("\n");
        }
    }

    if (x86->eflags || x86->fpu_flags) {
        for(i = 0; i < ins->detail->groups_count; i++) {
            if (ins->detail->groups[i] == X86_GRP_FPU) {
                printf("\tFPU_FLAGS:");
                for(i = 0; i <= 63; i++)
                    if (x86->fpu_flags & ((uint64_t)1 << i)) {
                        printf(" %s", get_fpu_flag_name((uint64_t)1 << i));
                    }
                printf("\n");
                break;
            }
        }

        if (i == ins->detail->groups_count) {
            printf("\tEFLAGS:");
            for(i = 0; i <= 63; i++)
                if (x86->eflags & ((uint64_t)1 << i)) {
                    printf(" %s", get_eflag_name((uint64_t)1 << i));
                }
            printf("\n");
        }
    }

    printf("\n");
}
