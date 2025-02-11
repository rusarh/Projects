// Other linker flags: /opt/homebrew/lib/libSDL2.dylib
// System header search paths: /opt/homebrew/include/SDL2

#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "sdl.h"
#define _HOST
#include "cicoemu.h"
#include "ega.h"
CSdl mSdl;
//CEga mVideo;
CEga mEga;
CCga mCga;
CVideoAdapter* mVideo = &mEga;
int lastKey = -1;

uint8_t mem[0x50000];
extern unsigned char font[2048];

void _sync()
{
    for (int y=0; y<200; y++)
      for (int x=0; x<320; x++)
        mSdl.SetPixel(x, y, mVideo->GetPixel(x, y));
    mSdl.Loop();
}

void onKey(int k, int p)
{
  if (k == SDL_SCANCODE_ESCAPE) exit(1);
    if (p)
        switch (k)
        {
            case SDL_SCANCODE_ESCAPE: lastKey = 28; break;
            case SDL_SCANCODE_RETURN: lastKey = 28; break;

//            case SDL_SCANCODE_SPACE: lastKey = 57; break;
            case SDL_SCANCODE_LEFT: lastKey = 75; break;
            case SDL_SCANCODE_RIGHT: lastKey = 77; break;
            case SDL_SCANCODE_UP: lastKey = 72; break;
            case SDL_SCANCODE_DOWN: lastKey = 80; break;
            case SDL_SCANCODE_TAB: lastKey = 'L'; break;
            case SDL_SCANCODE_A: lastKey = 0x1f; break;
            case SDL_SCANCODE_B: lastKey = 0x10; break;
            case SDL_SCANCODE_C: lastKey = 0x13; break; // reset high scores
            case SDL_SCANCODE_D: lastKey = 0x01; break;
            
            case SDL_SCANCODE_N: lastKey = 0x31; break;
            case SDL_SCANCODE_Y: lastKey = 0x15; break;
        }
}
namespace CicoContext
{
uint8_t memoryBiosGet8(int seg, int ofs)
{
    if (seg == 0xf000 && ofs == 0xfffe)
        return 0xfc; // pc at
    if (seg == 0x0040 && ofs == 0x0087)
        return 0x00; // ega active
    if (seg == 0x0040 && ofs == 0x0017) // http://www.powernet.co.za/info/bios/mem/40_0017.htm
        return 0x00; // shift keys
    if (seg == 0xf000 && ofs >= 0xfa6e && ofs < (0xfa6e + sizeof(font)))
        return font[ofs-0xfa6e];
    assert(0);
    return 0;
}
uint8_t cicocontext_t::memoryAGet8(int seg, int ofs)
{
    ofs &= 0xffff;
    if (seg >= 0x1000 && seg < 0xa000)
        return memory8(seg, ofs);
    else if (seg >= 0xa000 && seg < 0xe000)
        return memoryVideoGet8(seg, ofs);
    else
        return memoryBiosGet8(seg, ofs); // bios
}
void memoryBiosSet8(int seg, int ofs, uint8_t v)
{
    printf("skip bios write %x:%x = %x\n", seg, ofs, v);
}
void memoryBiosSet16(int seg, int ofs, uint16_t v)
{
    printf("skip bios write %x:%x = %x\n", seg, ofs, v);
}

uint16_t memoryBiosGet16(int seg, int ofs)
{
    if (seg == 0x0040 && ofs == 0x006c) // timer
        return 0;
    if (seg == 0x0000 && ofs == 0x041a) // int?
        return 0;
    assert(0);
    return 0;
}
uint16_t cicocontext_t::memoryAGet16(int seg, int ofs)
{
    ofs &= 0xffff;
    if (seg >= 0x1000 && seg < 0xa000)
        return memory16(seg, ofs);
    else if (seg >= 0xa000 && seg < 0xe000)
        return memoryVideoGet16(seg, ofs);
    else
        return memoryBiosGet16(seg, ofs);
        //assert(0); // bios
}

void cicocontext_t::memoryASet8(int seg, int ofs, uint8_t val)
{
    ofs &= 0xffff;
    if (seg >= 0x1000 && seg < 0xa000)
        memory8(seg, ofs) = val;
    else if (seg >= 0xa000 && seg < 0xe000)
        memoryVideoSet8(seg, ofs, val);
    else
        memoryBiosSet8(seg, ofs, val);
}

void cicocontext_t::memoryASet16(int seg, int ofs, uint16_t val)
{
    ofs &= 0xffff;
    if (seg >= 0x1000 && seg < 0xa000)
        memory16(seg, ofs) = val;
    else if (seg >= 0xa000 && seg < 0xe000)
        memoryVideoSet16(seg, ofs, val);
    else
        memoryBiosSet16(seg, ofs, val);
}

uint8_t& cicocontext_t::memory8(int seg, int ofs){
    assert(seg >= 0x1000 && seg < 0xa000 && ofs >= 0 && ofs <= 0xffff);
    int addr = seg*16 + ofs;
    addr -= 0x10000 - 0x50;
    assert(addr > 0 && addr < sizeof(mem));
    if (addr == 0x86d2)
    {
        int f = 9;
    }
    return mem[addr];
}

uint16_t& cicocontext_t::memory16(int seg, int ofs){
    assert(seg >= 0x1000 && seg < 0xa000 && ofs >= 0 && ofs <= 0xffff);
    int addr = seg*16 + ofs;
    addr -= 0x10000 - 0x50;
    assert(addr > 0 && addr < sizeof(mem));
    if (addr == 0x86d2)
    {
        int f = 9;
    }

    return *(uint16_t*)&mem[addr];
}

uint8_t cicocontext_t::memoryVideoGet8(int seg, int ofs)
{
    return mVideo->Read(seg*16+ofs);
}

void cicocontext_t::memoryVideoSet8(int seg, int ofs, uint8_t data)
{
    mVideo->Write(seg*16+ofs, data);
}

uint16_t cicocontext_t::memoryVideoGet16(int seg, int ofs)
{
    assert(0);
    return 0;
}

void cicocontext_t::memoryVideoSet16(int seg, int ofs, uint16_t data)
{
    assert(0);
}

void cicocontext_t::_int(int i)
{
    static FILE* f = nullptr;
    if (i == 0x12)
    {
        ctx->a.r16 = 0x800;
        return;
    }
    if (i == 0x21 && ctx->a.r8.h == 0x09)
    {
        for(int i=0; i<200; i++)
        {
            char c = ctx->memory8(ctx->_ds, ctx->d.r16+i);
            assert(c);
            if (c == '$')
                return;
            printf("%c", c);
        }
        assert(0);
    }

    if (i == 0x21 && ctx->a.r8.h == 0x3d)
    {
        // read file DS:DX filename
        // AX = file handle
        char filename[100];
        for (int i=0; i<100; i++)
        {
            char c = ctx->memory8(ctx->_ds, ctx->d.r16+i);
            if (!c)
                break;
            if (c >= 'a' && c <= 'z')
                c -= 'a' - 'A';
            filename[i] = c;
            filename[i+1] = 0;
        }
        printf("Opening %s\n", filename);
        //char fullname[128] = "/Users/gabrielvalky/Documents/git/Projects/XenonResurrection/Input/binary/";
        char fullname[128] = "dos/";
        strcat(fullname, filename);
        for (int i=0; i<128 && fullname[i]; i++)
            if (fullname[i] == '\\')
                fullname[i] = '/';
        
        ctx->carry = 0;
        assert(f == nullptr);
        ctx->a.r16 = 1;
        
        f = fopen(fullname, "rb");
        if(!f)
        {
            printf("Not found: %s\n", filename);
            ctx->carry = 1;
            ctx->a.r16 = 0;
        }
        return;

    }
    if (i == 0x21 && ctx->a.r8.h == 0x3f)
    {
        // read file CX bytes => CS:DX
        if (!f)
        {
            printf("no file opened!\n");
            return;
        } else {
            uint8_t* buf = new uint8_t[ctx->c.r16];
            int c = fread(buf, 1, (size_t)ctx->c.r16, f);
            for (int i=0; i<ctx->c.r16; i++)
                ctx->memory8(ctx->_ds, ctx->d.r16+i) = buf[i];
            delete[] buf;
            //std::cout << "read " << _cx << " (" << c << ")" << endl;
            assert(c);
            ctx->carry = 0;
            return;
        }
    }
    if (i == 0x21 && ctx->a.r8.h == 0x3e)
    {
        fclose(f);
        f = nullptr;
        ctx->carry = 0;
        return;
    }
    if (i == 0x10 && mVideo)
    {
        if (mVideo->Interrupt(ctx))
            return;
    }
    if (i == 0x10 && ctx->a.r8.h == 0x00)
    {
        // set video mode
        printf("Set video mode: %d\n", ctx->a.r8.l);
        switch (ctx->a.r8.l)
        {
            case 13:
            case 1:
                mVideo = &mEga; break;
            case 4:
                mVideo = &mCga; break;
            case 3: // exit
                break;
            default:
                assert(0);
        }
        return;
    }
    if (i == 0x21 && ctx->a.r8.h == 0x25)
    {
        // set int vect AL DS:DX
        printf("Set int vector - ignore\n");
        return;
    }
    if (i == 0x21 && ctx->a.r8.h == 0x35)
    {
        printf("Get int vector - ignore\n");
        ctx->_es = 0;
        ctx->b.r16 = 0;
        return;
    }
    if (i == 0x33)
    {
        // mouse
        ctx->a.r16 = 0;
        return;
    }
    if (i == 0x21 && ctx->a.r8.h == 0x3c)
    {
        // create file
        ctx->carry = true;
        return;
    }
    //static int lastKey = -1;
    if (i == 0x16 && ctx->a.r8.h == 0x00)
    {
        ctx->a.r16 = lastKey<<8;
        lastKey = -1;
        return;
    }
    if (i == 0x16 && ctx->a.r8.h == 0x01)
    {
        ctx->zero = lastKey == -1;
        return;
    }
    if (i == 0x10 && ctx->a.r8.h == 0x06)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x4a)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x48)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x40)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x3e)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x49)
        return;
    if (i == 0x21 && ctx->a.r8.h == 0x0a)
    {
        memory8(ctx->_ds, ctx->d.r16) = 'n';
        return;
    }
    printf("int %d\n", i);
    assert(0);
}
void cicocontext_t::out(int port, uint16_t val)
{
    if (mVideo->PortWrite16(port, val))
    {
        return;
    }
    printf("skip write %x, %x\n", port, val);
}
void cicocontext_t::out(int port, uint8_t val)
{
    if (mVideo->PortWrite8(port, val))
    {
        return;
    }
    printf("skip write %x, %x\n", port, val);
}

void cicocontext_t::in(uint8_t& val, int port)
{
    if (port == 0x3da)
    {
        static int retrace = 0;
        retrace++;
        val = (retrace & 1) ? 8 : 0;
        return;
    }
    if (port == 0x201)
    {
        printf("joystick skip\n");
        val = 0;
        return;
    }
    assert(0);
}

void cicocontext_t::push(const uint16_t& r)
{
    ctx->_sp -= 2;
    memory16(ctx->_ss, ctx->_sp) = r;
    assert(ctx->_sp > 0);
}
uint16_t cicocontext_t::pop(void)
{
    assert(ctx->_sp <= 0xffff);
    uint16_t aux = memory16(ctx->_ss, ctx->_sp);
    ctx->_sp += 2;
    return aux;
}
void cicocontext_t::push(const int& r)
{
    assert(r >= 0 && r <= 0xffff);
    ctx->_sp -= 2;
    memory16(ctx->_ss, ctx->_sp) = r;
}
//void cicocontext_t::pop(int& r)
//{
//    ctx->_sp += 2;
//    r = memory16(ctx->_ss, ctx->_sp);
//}
bool cicocontext_t::stop(const char* msg)
{
    assert(0);
    return false;
}

void cicocontext_t::cbw()
{
    ctx->a.r8.h = (ctx->a.r8.l & 0x80) ? 0xff : 0;
}
void cicocontext_t::div(uint16_t r)
{
    uint16_t result = ctx->a.r16 / r;
    uint16_t remain = ctx->a.r16 % r;
    ctx->a.r16 = result;
    ctx->d.r16 = remain;
}
void cicocontext_t::div(uint8_t r)
{
    uint16_t result = ctx->a.r16 / r;
    uint16_t remain = ctx->a.r16 % r;
    ctx->a.r8.l = result;
    ctx->d.r8.h = remain;
}
}

void CicoContext::cicocontext_t::callIndirect(int a)
{
    assert(0);
}
void CicoContext::cicocontext_t::cmc()
{
    ctx->carry = !ctx->carry;
}
void CicoContext::cicocontext_t::aaa()
{
    if ((ctx->a.r8.l & 0x0F) > 9 /*|| (r8[af] = 1)*/)
    {
        ctx->a.r8.l = (ctx->a.r8.l + 6) & 0x0f;
        ctx->a.r8.h ++;
        //af = 1;
        ctx->carry = 1;
    } else {
        ctx->carry = 0;
        //af = 0;
    }
}
namespace CicoContext {
void cicocontext_t::mul(uint8_t r)
{
    int v = r * ctx->a.r8.l;
    ctx->a.r16 = v & 0xffff;
}
void cicocontext_t::mul(uint16_t r)
{
    int v = r * ctx->a.r16;
    ctx->a.r16 = v & 0xffff;
    ctx->d.r16 = v >> 16;
}
//void cicocontext_t::imul(uint8_t r)
//{
//    int v = (char)r * (short)ctx->a.r16;
//    ctx->a.r16 = v & 0xffff;
//}
uint8_t cicocontext_t::rcr(uint8_t r, int i)
{
    assert(i == 1);
    int newCarry = !!(r & 0x1);
    r >>= 1;
    r |= ctx->carry ? 0x80 : 0;
    ctx->carry = newCarry;
    return r;
}
uint8_t cicocontext_t::rcl(uint8_t r, int i)
{
    assert(i == 1);
    int newCarry = !!(r & 0x80);
    r <<= 1;
    r |= ctx->carry;
    ctx->carry = newCarry;
    return r;
}
uint16_t cicocontext_t::rcl(uint16_t r, int i)
{
    while (i > 0)
    {
        int newCarry = !!(r & 0x8000);
        r <<= 1;
        r |= ctx->carry ? 0x0001 : 0x0000;
        ctx->carry = newCarry;
        i--;
    }
    return r;
}
uint16_t cicocontext_t::rcr(uint16_t r, int i)
{
    while (i > 0)
    {
        int newCarry = !!(r & 0x0001);
        r >>= 1;
        r |= ctx->carry ? 0x8000 : 0x0000;
        ctx->carry = newCarry;
        i--;
    }
    return r;
}
uint8_t cicocontext_t::rol(uint8_t r, int l)
{
    assert(0);
    return 0;
}
uint16_t cicocontext_t::rol(uint16_t r, int l)
{
    assert(0);
    return 0;
}


uint8_t cicocontext_t::ror(uint8_t r, int l)
{
    return (r >> l) | (r << (8-l));
}
uint16_t cicocontext_t::ror(uint16_t r, int l)
{
    assert(0);
    return 0;
}
void cicocontext_t::sync(void)
{
    _sync();
}

}
void start();
int main(int argc, const char * argv[])
{
    CicoContext::ctx = new CicoContext::cicocontext_t();

    memset(mem, 0, sizeof(mem));
    FILE* f = fopen("dos/ETETRIS.EXE", "rb");
    fread(mem, 45152, 1, f);
    fclose(f);

    mSdl.Init();
    start();
    mSdl.Deinit();
    return 0;
}


//#include "goose.cpp"


unsigned char font[2048] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x81, 0xa5, 0x81,
  0xbd, 0x99, 0x81, 0x7e, 0x7e, 0xff, 0xdb, 0xff, 0xc3, 0xe7, 0xff, 0x7e,
  0x6c, 0xfe, 0xfe, 0xfe, 0x7c, 0x38, 0x10, 0x00, 0x10, 0x38, 0x7c, 0xfe,
  0x7c, 0x38, 0x10, 0x00, 0x38, 0x7c, 0x38, 0xfe, 0xfe, 0x7c, 0x38, 0x7c,
  0x10, 0x10, 0x38, 0x7c, 0xfe, 0x7c, 0x38, 0x7c, 0x00, 0x00, 0x18, 0x3c,
  0x3c, 0x18, 0x00, 0x00, 0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff,
  0x00, 0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x00, 0xff, 0xc3, 0x99, 0xbd,
  0xbd, 0x99, 0xc3, 0xff, 0x0f, 0x07, 0x0f, 0x7d, 0xcc, 0xcc, 0xcc, 0x78,
  0x3c, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x7e, 0x18, 0x3f, 0x33, 0x3f, 0x30,
  0x30, 0x70, 0xf0, 0xe0, 0x7f, 0x63, 0x7f, 0x63, 0x63, 0x67, 0xe6, 0xc0,
  0x99, 0x5a, 0x3c, 0xe7, 0xe7, 0x3c, 0x5a, 0x99, 0x80, 0xe0, 0xf8, 0xfe,
  0xf8, 0xe0, 0x80, 0x00, 0x02, 0x0e, 0x3e, 0xfe, 0x3e, 0x0e, 0x02, 0x00,
  0x18, 0x3c, 0x7e, 0x18, 0x18, 0x7e, 0x3c, 0x18, 0x66, 0x66, 0x66, 0x66,
  0x66, 0x00, 0x66, 0x00, 0x7f, 0xdb, 0xdb, 0x7b, 0x1b, 0x1b, 0x1b, 0x00,
  0x3e, 0x63, 0x38, 0x6c, 0x6c, 0x38, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x00,
  0x7e, 0x7e, 0x7e, 0x00, 0x18, 0x3c, 0x7e, 0x18, 0x7e, 0x3c, 0x18, 0xff,
  0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18,
  0x7e, 0x3c, 0x18, 0x00, 0x00, 0x18, 0x0c, 0xfe, 0x0c, 0x18, 0x00, 0x00,
  0x00, 0x30, 0x60, 0xfe, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0,
  0xc0, 0xfe, 0x00, 0x00, 0x00, 0x24, 0x66, 0xff, 0x66, 0x24, 0x00, 0x00,
  0x00, 0x18, 0x3c, 0x7e, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x7e,
  0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x78, 0x78, 0x30, 0x30, 0x00, 0x30, 0x00, 0x6c, 0x6c, 0x6c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00,
  0x30, 0x7c, 0xc0, 0x78, 0x0c, 0xf8, 0x30, 0x00, 0x00, 0xc6, 0xcc, 0x18,
  0x30, 0x66, 0xc6, 0x00, 0x38, 0x6c, 0x38, 0x76, 0xdc, 0xcc, 0x76, 0x00,
  0x60, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0x60,
  0x60, 0x30, 0x18, 0x00, 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00,
  0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 0x00, 0x30, 0x30, 0xfc,
  0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x60,
  0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x30, 0x30, 0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x80, 0x00,
  0x7c, 0xc6, 0xce, 0xde, 0xf6, 0xe6, 0x7c, 0x00, 0x30, 0x70, 0x30, 0x30,
  0x30, 0x30, 0xfc, 0x00, 0x78, 0xcc, 0x0c, 0x38, 0x60, 0xcc, 0xfc, 0x00,
  0x78, 0xcc, 0x0c, 0x38, 0x0c, 0xcc, 0x78, 0x00, 0x1c, 0x3c, 0x6c, 0xcc,
  0xfe, 0x0c, 0x1e, 0x00, 0xfc, 0xc0, 0xf8, 0x0c, 0x0c, 0xcc, 0x78, 0x00,
  0x38, 0x60, 0xc0, 0xf8, 0xcc, 0xcc, 0x78, 0x00, 0xfc, 0xcc, 0x0c, 0x18,
  0x30, 0x30, 0x30, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0xcc, 0xcc, 0x78, 0x00,
  0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0x18, 0x70, 0x00, 0x00, 0x30, 0x30, 0x00,
  0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x60,
  0x18, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x18, 0x00, 0x00, 0x00, 0xfc, 0x00,
  0x00, 0xfc, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x60, 0x00,
  0x78, 0xcc, 0x0c, 0x18, 0x30, 0x00, 0x30, 0x00, 0x7c, 0xc6, 0xde, 0xde,
  0xde, 0xc0, 0x78, 0x00, 0x30, 0x78, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0x00,
  0xfc, 0x66, 0x66, 0x7c, 0x66, 0x66, 0xfc, 0x00, 0x3c, 0x66, 0xc0, 0xc0,
  0xc0, 0x66, 0x3c, 0x00, 0xf8, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0xf8, 0x00,
  0xfe, 0x62, 0x68, 0x78, 0x68, 0x62, 0xfe, 0x00, 0xfe, 0x62, 0x68, 0x78,
  0x68, 0x60, 0xf0, 0x00, 0x3c, 0x66, 0xc0, 0xc0, 0xce, 0x66, 0x3e, 0x00,
  0xcc, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00, 0x78, 0x30, 0x30, 0x30,
  0x30, 0x30, 0x78, 0x00, 0x1e, 0x0c, 0x0c, 0x0c, 0xcc, 0xcc, 0x78, 0x00,
  0xe6, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0xe6, 0x00, 0xf0, 0x60, 0x60, 0x60,
  0x62, 0x66, 0xfe, 0x00, 0xc6, 0xee, 0xfe, 0xfe, 0xd6, 0xc6, 0xc6, 0x00,
  0xc6, 0xe6, 0xf6, 0xde, 0xce, 0xc6, 0xc6, 0x00, 0x38, 0x6c, 0xc6, 0xc6,
  0xc6, 0x6c, 0x38, 0x00, 0xfc, 0x66, 0x66, 0x7c, 0x60, 0x60, 0xf0, 0x00,
  0x78, 0xcc, 0xcc, 0xcc, 0xdc, 0x78, 0x1c, 0x00, 0xfc, 0x66, 0x66, 0x7c,
  0x6c, 0x66, 0xe6, 0x00, 0x78, 0xcc, 0xe0, 0x70, 0x1c, 0xcc, 0x78, 0x00,
  0xfc, 0xb4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0xcc, 0xcc, 0xcc, 0xcc,
  0xcc, 0xcc, 0xfc, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00,
  0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0xee, 0xc6, 0x00, 0xc6, 0xc6, 0x6c, 0x38,
  0x38, 0x6c, 0xc6, 0x00, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x30, 0x78, 0x00,
  0xfe, 0xc6, 0x8c, 0x18, 0x32, 0x66, 0xfe, 0x00, 0x78, 0x60, 0x60, 0x60,
  0x60, 0x60, 0x78, 0x00, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02, 0x00,
  0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00, 0x10, 0x38, 0x6c, 0xc6,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
  0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0c,
  0x7c, 0xcc, 0x76, 0x00, 0xe0, 0x60, 0x60, 0x7c, 0x66, 0x66, 0xdc, 0x00,
  0x00, 0x00, 0x78, 0xcc, 0xc0, 0xcc, 0x78, 0x00, 0x1c, 0x0c, 0x0c, 0x7c,
  0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00,
  0x38, 0x6c, 0x60, 0xf0, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x76, 0xcc,
  0xcc, 0x7c, 0x0c, 0xf8, 0xe0, 0x60, 0x6c, 0x76, 0x66, 0x66, 0xe6, 0x00,
  0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, 0x0c, 0x00, 0x0c, 0x0c,
  0x0c, 0xcc, 0xcc, 0x78, 0xe0, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0xe6, 0x00,
  0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0xcc, 0xfe,
  0xfe, 0xd6, 0xc6, 0x00, 0x00, 0x00, 0xf8, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
  0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x00, 0xdc, 0x66,
  0x66, 0x7c, 0x60, 0xf0, 0x00, 0x00, 0x76, 0xcc, 0xcc, 0x7c, 0x0c, 0x1e,
  0x00, 0x00, 0xdc, 0x76, 0x66, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x7c, 0xc0,
  0x78, 0x0c, 0xf8, 0x00, 0x10, 0x30, 0x7c, 0x30, 0x30, 0x34, 0x18, 0x00,
  0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0xcc, 0xcc,
  0xcc, 0x78, 0x30, 0x00, 0x00, 0x00, 0xc6, 0xd6, 0xfe, 0xfe, 0x6c, 0x00,
  0x00, 0x00, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0xcc, 0xcc,
  0xcc, 0x7c, 0x0c, 0xf8, 0x00, 0x00, 0xfc, 0x98, 0x30, 0x64, 0xfc, 0x00,
  0x1c, 0x30, 0x30, 0xe0, 0x30, 0x30, 0x1c, 0x00, 0x18, 0x18, 0x18, 0x00,
  0x18, 0x18, 0x18, 0x00, 0xe0, 0x30, 0x30, 0x1c, 0x30, 0x30, 0xe0, 0x00,
  0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x6c,
  0xc6, 0xc6, 0xfe, 0x00, 0x78, 0xcc, 0xc0, 0xcc, 0x78, 0x18, 0x0c, 0x78,
  0x00, 0xcc, 0x00, 0xcc, 0xcc, 0xcc, 0x7e, 0x00, 0x1c, 0x00, 0x78, 0xcc,
  0xfc, 0xc0, 0x78, 0x00, 0x7e, 0xc3, 0x3c, 0x06, 0x3e, 0x66, 0x3f, 0x00,
  0xcc, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x7e, 0x00, 0xe0, 0x00, 0x78, 0x0c,
  0x7c, 0xcc, 0x7e, 0x00, 0x30, 0x30, 0x78, 0x0c, 0x7c, 0xcc, 0x7e, 0x00,
  0x00, 0x00, 0x78, 0xc0, 0xc0, 0x78, 0x0c, 0x38, 0x7e, 0xc3, 0x3c, 0x66,
  0x7e, 0x60, 0x3c, 0x00, 0xcc, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00,
  0xe0, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00, 0xcc, 0x00, 0x70, 0x30,
  0x30, 0x30, 0x78, 0x00, 0x7c, 0xc6, 0x38, 0x18, 0x18, 0x18, 0x3c, 0x00,
  0xe0, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, 0xc6, 0x38, 0x6c, 0xc6,
  0xfe, 0xc6, 0xc6, 0x00, 0x30, 0x30, 0x00, 0x78, 0xcc, 0xfc, 0xcc, 0x00,
  0x1c, 0x00, 0xfc, 0x60, 0x78, 0x60, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0x0c,
  0x7f, 0xcc, 0x7f, 0x00, 0x3e, 0x6c, 0xcc, 0xfe, 0xcc, 0xcc, 0xce, 0x00,
  0x78, 0xcc, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0xcc, 0x00, 0x78,
  0xcc, 0xcc, 0x78, 0x00, 0x00, 0xe0, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00,
  0x78, 0xcc, 0x00, 0xcc, 0xcc, 0xcc, 0x7e, 0x00, 0x00, 0xe0, 0x00, 0xcc,
  0xcc, 0xcc, 0x7e, 0x00, 0x00, 0xcc, 0x00, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8,
  0xc3, 0x18, 0x3c, 0x66, 0x66, 0x3c, 0x18, 0x00, 0xcc, 0x00, 0xcc, 0xcc,
  0xcc, 0xcc, 0x78, 0x00, 0x18, 0x18, 0x7e, 0xc0, 0xc0, 0x7e, 0x18, 0x18,
  0x38, 0x6c, 0x64, 0xf0, 0x60, 0xe6, 0xfc, 0x00, 0xcc, 0xcc, 0x78, 0xfc,
  0x30, 0xfc, 0x30, 0x30, 0xf8, 0xcc, 0xcc, 0xfa, 0xc6, 0xcf, 0xc6, 0xc7,
  0x0e, 0x1b, 0x18, 0x3c, 0x18, 0x18, 0xd8, 0x70, 0x1c, 0x00, 0x78, 0x0c,
  0x7c, 0xcc, 0x7e, 0x00, 0x38, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00,
  0x00, 0x1c, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x1c, 0x00, 0xcc,
  0xcc, 0xcc, 0x7e, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0xcc, 0xcc, 0xcc, 0x00,
  0xfc, 0x00, 0xcc, 0xec, 0xfc, 0xdc, 0xcc, 0x00, 0x3c, 0x6c, 0x6c, 0x3e,
  0x00, 0x7e, 0x00, 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x00, 0x7c, 0x00, 0x00,
  0x30, 0x00, 0x30, 0x60, 0xc0, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x00, 0xfc,
  0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x0c, 0x0c, 0x00, 0x00,
  0xc3, 0xc6, 0xcc, 0xde, 0x33, 0x66, 0xcc, 0x0f, 0xc3, 0xc6, 0xcc, 0xdb,
  0x37, 0x6f, 0xcf, 0x03, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00,
  0x00, 0x33, 0x66, 0xcc, 0x66, 0x33, 0x00, 0x00, 0x00, 0xcc, 0x66, 0x33,
  0x66, 0xcc, 0x00, 0x00, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88,
  0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0xdb, 0x77, 0xdb, 0xee,
  0xdb, 0x77, 0xdb, 0xee, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0x18,
  0xf8, 0x18, 0x18, 0x18, 0x36, 0x36, 0x36, 0x36, 0xf6, 0x36, 0x36, 0x36,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x36, 0x36, 0x36, 0x00, 0x00, 0xf8, 0x18,
  0xf8, 0x18, 0x18, 0x18, 0x36, 0x36, 0xf6, 0x06, 0xf6, 0x36, 0x36, 0x36,
  0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00, 0xfe, 0x06,
  0xf6, 0x36, 0x36, 0x36, 0x36, 0x36, 0xf6, 0x06, 0xfe, 0x00, 0x00, 0x00,
  0x36, 0x36, 0x36, 0x36, 0xfe, 0x00, 0x00, 0x00, 0x18, 0x18, 0xf8, 0x18,
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x1f, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18,
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x1f, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,
  0xff, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18, 0x36, 0x36, 0x36, 0x36,
  0x37, 0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x30, 0x3f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3f, 0x30, 0x37, 0x36, 0x36, 0x36, 0x36, 0x36, 0xf7, 0x00,
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf7, 0x36, 0x36, 0x36,
  0x36, 0x36, 0x37, 0x30, 0x37, 0x36, 0x36, 0x36, 0x00, 0x00, 0xff, 0x00,
  0xff, 0x00, 0x00, 0x00, 0x36, 0x36, 0xf7, 0x00, 0xf7, 0x36, 0x36, 0x36,
  0x18, 0x18, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x36, 0x36, 0x36, 0x36,
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x18, 0x18, 0x18,
  0x00, 0x00, 0x00, 0x00, 0xff, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,
  0x3f, 0x00, 0x00, 0x00, 0x18, 0x18, 0x1f, 0x18, 0x1f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xff, 0x36, 0x36, 0x36,
  0x18, 0x18, 0xff, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x18, 0x18, 0x18,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
  0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xdc, 0xc8, 0xdc, 0x76, 0x00,
  0x00, 0x78, 0xcc, 0xf8, 0xcc, 0xf8, 0xc0, 0xc0, 0x00, 0xfc, 0xcc, 0xc0,
  0xc0, 0xc0, 0xc0, 0x00, 0x00, 0xfe, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x00,
  0xfc, 0xcc, 0x60, 0x30, 0x60, 0xcc, 0xfc, 0x00, 0x00, 0x00, 0x7e, 0xd8,
  0xd8, 0xd8, 0x70, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x60, 0xc0,
  0x00, 0x76, 0xdc, 0x18, 0x18, 0x18, 0x18, 0x00, 0xfc, 0x30, 0x78, 0xcc,
  0xcc, 0x78, 0x30, 0xfc, 0x38, 0x6c, 0xc6, 0xfe, 0xc6, 0x6c, 0x38, 0x00,
  0x38, 0x6c, 0xc6, 0xc6, 0x6c, 0x6c, 0xee, 0x00, 0x1c, 0x30, 0x18, 0x7c,
  0xcc, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x7e, 0xdb, 0xdb, 0x7e, 0x00, 0x00,
  0x06, 0x0c, 0x7e, 0xdb, 0xdb, 0x7e, 0x60, 0xc0, 0x38, 0x60, 0xc0, 0xf8,
  0xc0, 0x60, 0x38, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
  0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0x00, 0x30, 0x30, 0xfc, 0x30,
  0x30, 0x00, 0xfc, 0x00, 0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0xfc, 0x00,
  0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0xfc, 0x00, 0x0e, 0x1b, 0x1b, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xd8, 0xd8, 0x70,
  0x30, 0x30, 0x00, 0xfc, 0x00, 0x30, 0x30, 0x00, 0x00, 0x76, 0xdc, 0x00,
  0x76, 0xdc, 0x00, 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x0f, 0x0c, 0x0c, 0x0c, 0xec, 0x6c, 0x3c, 0x1c,
  0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x70, 0x18, 0x30, 0x60,
  0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
