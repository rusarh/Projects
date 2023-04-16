#include "cicoemu.h"
using namespace CicoContext;

class stackguard
{
    uint16_t* ms;
    uint16_t minit;
public:
    stackguard(uint16_t& s):ms(&s),minit(s) {}
    ~stackguard() { assert(minit == *ms); }
};

void sub_104f2();

void start()
{
  headerSize = 0x0800;
  ds = 0x1000;
  cs = 0x1000;
  ss = 0x447b;
  sp = 0x0200;
  sub_104f2();
}
// skipping indirect call
// skipping indirect call
// skipping indirect call
void sub_10000();
void sub_10067();
void sub_10089();
void sub_10097();
void sub_10101();
void sub_1011c();
void sub_10174();
void sub_1019a();
void sub_10230();
void sub_102a8();
void sub_102d4();
void sub_1034c();
void sub_10373();
void sub_103dd();
void sub_103fd();
void sub_10423();
void sub_104c9();
void sub_104f2();
void sub_105a3();
void sub_1066e();
void sub_106fe();
void sub_10761();
void sub_10762();
void sub_1077c();
void sub_1078e();
void sub_107a0();
void sub_107c0();
void sub_107dc();
void sub_107ed();
void sub_1080f();
void sub_10831();
void sub_10853();
void sub_10875();
void sub_10897();
void sub_108b9();
void sub_1091f();
void sub_10941();
void sub_10963();
void sub_10985();
void sub_109a7();
void sub_109eb();
void sub_10a0d();
void sub_10a2f();
void sub_10a51();
void sub_10a73();
void sub_10a95();
void sub_10afb();
void sub_10b3f();
void sub_10b83();
void sub_10ba5();
void sub_10bc7();
void sub_10be9();
void sub_10c0b();
void sub_10c2d();
void sub_10c4f();
void sub_10c71();
void sub_10c93();
void sub_10cb5();
void sub_10cd7();
void sub_10cf9();
void sub_10d1b();
void sub_10d5f();
void sub_10d81();
void sub_10da3();
void sub_10dc5();
void sub_10de7();
void sub_10e09();
void sub_10e2b();
void sub_10e4d();
void sub_10e6f();
void sub_10e91();
void sub_10eb3();
void sub_10ed5();
void sub_10ed9();
void sub_10edd();
void sub_10ee1();
void sub_10ee5();
void sub_10ee9();
void sub_10ef1();
void sub_10ef5();
void sub_10f2b();
void sub_10f2f();
void sub_10f5a();
void sub_10f78();
void sub_10f96();
void sub_10fb4();
void sub_10fd2();
void sub_10ff0();
void sub_1100e();
void sub_11022();
void sub_11588();
void sub_115e4();
void sub_11689();
void sub_116a9();
void sub_116ba();
void sub_11827();
void sub_118f5();
void sub_1193c();
void sub_1195b();
void sub_11a19();
void sub_11a62();
void sub_11a65();
void sub_11aaf();
void sub_11b43();
void sub_11b90();
void sub_11ba2();
void sub_11bb4();
void sub_11bea();
void sub_11c18();
void sub_11ccc();
void sub_11d1e();
void sub_11e02();
void sub_11e29();
void sub_11e61();
void sub_11ed3();
void sub_11f4d();
void sub_121e9();
void sub_1246d();
void sub_125a8();
void sub_128b8();
void sub_128df();
void sub_129d7();
void sub_12a48();
void sub_12a6e();
void sub_12aa4();
void sub_12ab2();
void sub_12ad0();
void sub_12b22();
void sub_12bcc();
void sub_12c32();
void sub_12ca6();
void sub_12e73();
void sub_12e84();
void sub_1308c();
void sub_13117();
void sub_131b6();
void sub_13246();
void sub_13319();
void sub_13326();
void sub_13589();
void sub_135eb();
void sub_135f2();
void sub_13615();
void sub_13682();
void sub_136fc();
void sub_1370b();
void sub_1371a();
void sub_1373d();
void sub_13760();
void sub_1376f();
void sub_13788();
void sub_137a9();
void sub_137ca();
void sub_137df();
void sub_13835();
void sub_13998();
void sub_139ee();
void sub_13a33();
void sub_13a36();
void sub_13a39();
void sub_13a99();
void sub_13aa7();
void sub_13ab2();
void sub_13b76();
void sub_13bdf();
void sub_13c01();
void sub_13c4f();
void sub_13c75();
void sub_14191();
void sub_141a1();
void sub_141b1();
void sub_141e2();
void sub_141fb();
void sub_1421c();
void sub_1426a();
void sub_142ae();
void sub_14311();
void sub_144f3();
void sub_145f4();
void sub_1465c();
void sub_14675();
void sub_1472d();
void sub_14759();
void sub_1480b();
void sub_1480e();
void sub_14865();
void sub_14871();
void sub_14a69();
void sub_14bc7();
void sub_14c48();
void sub_14c59();
void sub_14cad();
void sub_14cfa();
void sub_14d0d();
void sub_14d38();
void sub_14e12();
void sub_14e29();
void sub_14e78();
void sub_14f96();
void sub_14fe3();
void sub_15119();
void sub_15154();
void sub_1521a();
void sub_15240();
void sub_15319();
void sub_15369();
void sub_15435();
void sub_15488();
void sub_154db();
void sub_154fc();
void sub_15510();
void sub_1558e();
void sub_155d0();
void sub_15612();
void sub_1561c();
void sub_15691();
void sub_156b8();
void sub_1576d();
void sub_1577d();
void sub_15787();
void sub_157fa();
void sub_1580d();
void sub_15829();
void sub_15835();
void sub_15863();
void sub_15926();
void sub_15935();
void sub_15950();
void sub_1595d();
void sub_159aa();
void sub_159c8();
void sub_15b0b();
void sub_15b10();
void sub_15b21();
void sub_15c0f();
void sub_15c7c();
void sub_15c8b();
void sub_15cc5();
void sub_15e24();
void sub_15e35();
void sub_15e52();
void sub_15e59();
void sub_15e5e();
void sub_15e7a();
void sub_15e8a();
void sub_15ec3();
void sub_16058();
void sub_160a5();
void sub_160ef();
void sub_16284();
void sub_1655b();
void sub_16696();
void sub_166a6();
void sub_16807();
void sub_16823();
void sub_169c8();
void sub_169d0();
void sub_16a0a();
void sub_16aad();
void sub_16ac7();
void sub_16bca();
void sub_16d22();
void sub_16e2c();
void sub_16eef();
void sub_170f1();
void sub_1714a();
void sub_1714d();
void sub_171dd();
void sub_172c4();
void sub_17520();
void sub_17569();
void sub_1758f();
void sub_17dde();
void sub_17f32();
void sub_17f79();
void sub_180ca();
void sub_180f5();
void sub_18114();
void sub_18126();
void sub_1818c();
void sub_181be();
void sub_181e7();
void sub_1866d();
void sub_18783();
void sub_187d5();
void sub_188a9();
void sub_189ae();
void sub_18c3e();
void sub_18c85();
void sub_18ca7();
void sub_18df0();
void sub_18e01();
void sub_19f02();
void sub_19f4e();
void sub_19f9a();
void sub_19fe6();
void sub_1ebd0();
void sub_1ebd7();
void sub_1ec6f();
void sub_1f2ba();
void sub_1f2d5();
void sub_1f324();
void sub_1f325();
void sub_1f363();
void sub_1f38c();
void sub_1f3a7();
void sub_1f3ae();
void sub_1f3b5();
void sub_1f3c7();
void sub_1f3d7();
void sub_1f3ef();
void sub_1f492();
void sub_1f57c();
void sub_1f585();
void sub_1f6f8();
void sub_1f787();
void sub_1f816();
void sub_1f891();
void sub_1f909();
void sub_1f970();
void sub_1f9d4();
void sub_1fa27();
void sub_1fadb();
void sub_1fb64();
void sub_1fbd8();
void sub_1fc37();
void sub_1fd05();
void sub_1fd84();
void sub_1fdf2();
void sub_1fe4d();
void sub_1fe70();
void sub_1fea1();
void sub_1fede();
void sub_1ff41();
void sub_203da();
void sub_20482();
void sub_20568();
void sub_2058d();
void sub_205a9();
void sub_205ae();
void sub_205ed();
void sub_20627();
void sub_20653();
void sub_20854();
void sub_208dc();
void sub_208f9();
void sub_20919();
void sub_2095f();
void sub_20973();
void sub_2098c();
void sub_209e9();
void sub_20a1d();
void sub_20a2e();
void sub_20a39();
void sub_20a3c();
void sub_20a47();
void sub_20a5c();
void sub_20ac0();
void sub_20ad0();
void sub_20b5b();
void sub_20b8a();
void sub_20bbf();
void sub_20be5();
void sub_20c5e();
void sub_20c7b();
void sub_20cbb();
void sub_20cfe();
void sub_20d18();
void sub_20d87();
void sub_20d8a();
void sub_20f54();
void sub_20f91();
void sub_21090();
void sub_21132();
void sub_211b0();
void sub_211cc();
void sub_10000()
{
  stackguard sg(sp);

  ax = ds;
  es = ax;
  cx = 0x0008;
  di = 0x8e58;
  al = 0xff;
  rep_stosb<MemAuto, DirAuto>();
  ax = 0x1a00;
  interrupt(0x10);
  if (al != 0x1a)
    goto loc_10032;
  if (bl >= bh)
    goto loc_1001d;
  bl = bh;
loc_1001d:
  if (bl < 0x0b)
    goto loc_1002c;
  if (bl > 0x0c)
    goto loc_1002c;
  memoryASet(ds, 0x8e5a, 0x00);
loc_1002c:
  memoryASet(ds, 0x8e58, 0x00);
  return;
loc_10032:
  memoryASet(ds, 0x8e59, 0x00);
  sub_10067();
  sub_10089();
  sub_10097();
  dx = 0x03b4;
  sub_10101();
  if (flags.carry)
    goto loc_1005c;
  dl = 0xba;
  in(al, dx);
  al &= 0x80;
  ah = al;
  cx = 0x8000;
  in(al, dx);
  al &= 0x80;
  if (--cx && al == ah)
      stop(); //goto loc_10052;
  if (stop(/*1*/))
    goto loc_10061;
  return;
loc_1005c:
  memoryASet(ds, 0x8e5c, 0x00);
loc_10061:
  memoryASet(ds, 0x8e5d, 0x00);
}
void sub_10067()
{
  stackguard sg(sp);

  bl = 0x10;
  ah = 0x12;
  interrupt(0x10);
  if (bl == 0x10)
    goto loc_10083;
  ah = 0x12;
  bl = 0x10;
  interrupt(0x10);
  if (bl >= 0x03)
    goto loc_10082;
  memoryASet(ds, 0x8e5e, 0x00);
loc_10082:
  return;
loc_10083:
  memoryASet(ds, 0x8e5a, 0x00);
}
void sub_10089()
{
  stackguard sg(sp);

  dx = 0x03d4;
  sub_10101();
  if (!flags.carry)
    return;
  memoryASet(ds, 0x8e5b, 0x00);
}
void sub_10097()
{
  stackguard sg(sp);

  bx = 0xb800;
  es = bx;
  di = 0;
  push(memoryAGet16(es, 0x0000));
  memoryASet16(es, 0x0000, 0x414a);
  interrupt(0x12);
  ax += 0x003f;
  ax &= 0xffc0;
  ax -= 0x0040;
  cl = 0x06;
  ax <<= cl;
  es = ax;
  dx = ax;
  ax = 0x414a;
  cx = 0x8000;
loc_100c3:
  stop(); // repne scasw ax, word ptr es:[di]
  if (stop(/*1*/))
    goto loc_100d6;
  es = bx;
  di = 0;
  memoryASet16(es, 0x0000, pop());
  memoryASet(ds, 0x8e58, 0x00);
  return;
loc_100d6:
  di -= 0x0002;
  es = bx;
  memoryASet16(es, 0x0000, 0x4849);
  es = dx;
  if (memoryAGet16(es, di) != 0x4849)
    goto loc_100f1;
  memoryASet16(es, 0x0000, pop());
  return;
loc_100f1:
  es = bx;
  memoryASet16(es, 0x0000, 0x414a);
  es = dx;
  di += 0x0002;
  goto loc_100c3;
}
void sub_10101()
{
  stackguard sg(sp);

  al = 0x0f;
  out(dx, al);
  out(dx, al);
  dx++;
  in(al, dx);
  ah = al;
  al = 0x66;
  out(dx, al);
  cx = 0x0100;
loc_1010f:
  if (--cx)
    goto loc_1010f;
  in(al, dx);
  tl = ah;
  ah = al;
  al = tl;
  out(dx, al);
  if (ah == 0x66)
    return;
  flags.carry = true;
}
void sub_1011c()
{
  stackguard sg(sp);

  ax = 0x3d00;
  interrupt(0x21);
  if (!flags.carry)
    goto loc_10126;
  goto loc_15e04;
loc_10126:
  push(ds);
  bx = 0x2565;
  ds = bx;
  memoryASet16(ds, 0x236c, di);
  memoryASet16(ds, 0x236e, es);
  es = bx;
  memoryASet16(ds, 0x2370, ax);
  ah = 0x3f;
  bx = memoryAGet16(ds, 0x2370);
  cx = 0x0200;
  dx = 0x216c;
  interrupt(0x21);
  if (!flags.carry)
    goto loc_1014c;
  goto loc_15e04;
loc_1014c:
  ax = memoryAGet16(ds, 0x2177);
  memoryASet16(ds, 0x0000, ax);
  ax = memoryAGet16(ds, 0x2179);
  memoryASet16(ds, 0x0002, ax);
  al = memoryAGet(ds, 0x216c);
  ah = 0;
  ax += 0x216e;
  memoryASet16(ds, 0x216a, ax);
  sub_1019a();
  ah = 0x3e;
  bx = memoryAGet16(ds, 0x2370);
  interrupt(0x21);
  ax = pop();
  ds = ax;
  es = ax;
  return;
  //   gap of 987 bytes
loc_1054f:
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_10585;
  dx = 0x03b8;
  al = 0x00;
  out(dx, al);
  dx = 0x03b4;
  si = 0x2ee0;
  cx = 0x0009;
loc_10565:
  lodsw<MemAuto, DirAuto>();
  out(dx, ax);
  if (--cx)
    goto loc_10565;
  push(es);
  ax = 0xb000;
  es = ax;
  di = 0;
  cx = 0x4000;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  es = pop();
  dx = 0x03b8;
  al = 0x08;
  out(dx, al);
  dx = 0x03bf;
  al = 0x00;
  out(dx, al);
loc_10585:
  ah = 0x01;
  interrupt(0x80);
  sub_15ec3();
  sub_15e7a();
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_1059c;
  ax = 0x0007;
loc_1059c:
  interrupt(0x10);
  ax = 0x4c00;
  interrupt(0x21);
  memoryASet(ds, 0x8f57, 0x00);
  sub_10000();
  ax = ds;
  es = ax;
  ax = 0x0004;
  if (memoryAGet(ds, 0x8e59) != 0x00)
    goto loc_105da;
  ax = 0x0003;
  if (memoryAGet(ds, 0x8e5a) != 0x00)
    goto loc_105da;
  ax = 0x0002;
  if (memoryAGet(ds, 0x8e58) != 0x00)
    goto loc_105da;
  ax = 0x0000;
  if (memoryAGet(ds, 0x8e5d) != 0x00)
    goto loc_105da;
  ax = 0x0001;
loc_105da:
  memoryASet16(ds, 0x3044, ax);
  ah = 0x0f;
  interrupt(0x10);
  memoryASet(ds, 0x2ef3, bh);
  memoryASet(ds, 0x2ef4, al);
  memoryASet(ds, 0x2ef5, ah);
  ah = 0x01;
  ch = 0x20;
  cl = 0x20;
  interrupt(0x10);
loc_105f4:
  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
loc_10605:
  sub_106fe();
loc_10608:
  ah = 0;
  interrupt(0x16);
  if (ah == 0x1c)
    goto loc_10657;
  if (ah == 0x41)
    goto loc_10652;
  if (ah == 0x39)
    goto loc_10631;
  if (ah == 0x50)
    goto loc_10631;
  if (ah == 0x4d)
    goto loc_10631;
  if (ah == 0x48)
    goto loc_10644;
  if (ah == 0x4b)
    goto loc_10644;
  goto loc_10608;
loc_10631:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) + 1);
  if ((short)memoryAGet16(ds, 0x3044) < (short)0x0006)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0000);
  goto loc_10605;
loc_10644:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) - 1);
  if ((short)memoryAGet16(ds, 0x3044) >= 0)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0005);
  goto loc_10605;
loc_10652:
  memoryASet(ds, 0x8f57, 0xff);
loc_10657:
  if (memoryAGet16(ds, 0x3044) != 0x0005)
    goto loc_10663;
  sub_1066e();
  goto loc_105f4;
loc_10663:
  ax = memoryAGet16(ds, 0x3044);
  bx = 0x2ef8;
  al = memory(ds, bx+al);
  memoryASet16(ds, 0x3044, ax);
  return;
  //   gap of 22422 bytes
loc_15e04:
  ax = 0x2853;
  ds = ax;
  es = ax;
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_15e18;
  ax = 0x0007;
loc_15e18:
  interrupt(0x10);
  dx = 0x300f;
  ah = 0x09;
  interrupt(0x21);
  goto loc_1054f;
}
void sub_10174()
{
  stackguard sg(sp);

  push(di);
  push(bx);
  push(cx);
  push(dx);
  ax = 0;
  di = 0x216c;
  cx = 0x0100;
  rep_stosw<MemAuto, DirAuto>();
  bx = memoryAGet16(ds, 0x2370);
  cx = 0x0200;
  dx = 0x216c;
  ah = 0x3f;
  interrupt(0x21);
  if (!flags.carry)
    goto loc_10195;
  goto loc_15e04;
loc_10195:
  dx = pop();
  cx = pop();
  bx = pop();
  di = pop();
  return;
  //   gap of 949 bytes
loc_1054f:
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_10585;
  dx = 0x03b8;
  al = 0x00;
  out(dx, al);
  dx = 0x03b4;
  si = 0x2ee0;
  cx = 0x0009;
loc_10565:
  lodsw<MemAuto, DirAuto>();
  out(dx, ax);
  if (--cx)
    goto loc_10565;
  push(es);
  ax = 0xb000;
  es = ax;
  di = 0;
  cx = 0x4000;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  es = pop();
  dx = 0x03b8;
  al = 0x08;
  out(dx, al);
  dx = 0x03bf;
  al = 0x00;
  out(dx, al);
loc_10585:
  ah = 0x01;
  interrupt(0x80);
  sub_15ec3();
  sub_15e7a();
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_1059c;
  ax = 0x0007;
loc_1059c:
  interrupt(0x10);
  ax = 0x4c00;
  interrupt(0x21);
  memoryASet(ds, 0x8f57, 0x00);
  sub_10000();
  ax = ds;
  es = ax;
  ax = 0x0004;
  if (memoryAGet(ds, 0x8e59) != 0x00)
    goto loc_105da;
  ax = 0x0003;
  if (memoryAGet(ds, 0x8e5a) != 0x00)
    goto loc_105da;
  ax = 0x0002;
  if (memoryAGet(ds, 0x8e58) != 0x00)
    goto loc_105da;
  ax = 0x0000;
  if (memoryAGet(ds, 0x8e5d) != 0x00)
    goto loc_105da;
  ax = 0x0001;
loc_105da:
  memoryASet16(ds, 0x3044, ax);
  ah = 0x0f;
  interrupt(0x10);
  memoryASet(ds, 0x2ef3, bh);
  memoryASet(ds, 0x2ef4, al);
  memoryASet(ds, 0x2ef5, ah);
  ah = 0x01;
  ch = 0x20;
  cl = 0x20;
  interrupt(0x10);
loc_105f4:
  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
loc_10605:
  sub_106fe();
loc_10608:
  ah = 0;
  interrupt(0x16);
  if (ah == 0x1c)
    goto loc_10657;
  if (ah == 0x41)
    goto loc_10652;
  if (ah == 0x39)
    goto loc_10631;
  if (ah == 0x50)
    goto loc_10631;
  if (ah == 0x4d)
    goto loc_10631;
  if (ah == 0x48)
    goto loc_10644;
  if (ah == 0x4b)
    goto loc_10644;
  goto loc_10608;
loc_10631:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) + 1);
  if ((short)memoryAGet16(ds, 0x3044) < (short)0x0006)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0000);
  goto loc_10605;
loc_10644:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) - 1);
  if ((short)memoryAGet16(ds, 0x3044) >= 0)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0005);
  goto loc_10605;
loc_10652:
  memoryASet(ds, 0x8f57, 0xff);
loc_10657:
  if (memoryAGet16(ds, 0x3044) != 0x0005)
    goto loc_10663;
  sub_1066e();
  goto loc_105f4;
loc_10663:
  ax = memoryAGet16(ds, 0x3044);
  bx = 0x2ef8;
  al = memory(ds, bx+al);
  memoryASet16(ds, 0x3044, ax);
  return;
  //   gap of 22422 bytes
loc_15e04:
  ax = 0x2853;
  ds = ax;
  es = ax;
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_15e18;
  ax = 0x0007;
loc_15e18:
  interrupt(0x10);
  dx = 0x300f;
  ah = 0x09;
  interrupt(0x21);
  goto loc_1054f;
}
void sub_1019a()
{
  stackguard sg(sp);

  push(si);
  push(di);
  push(bp);
  ax = memoryAGet16(ds, 0x0000);
  ax |= memoryAGet16(ds, 0x0002);
  if (ax)
    goto loc_101a9;
  goto loc_1022c;
loc_101a9:
  sub_10230();
  sub_102a8();
  di = 0x0fc4;
loc_101b2:
  push(di);
  sub_102d4();
  di = ax;
  if ((short)ax >= (short)0x0100)
    goto loc_101e0;
  di = pop();
  push(es);
  push(di);
    di = memoryAGet16(ds, 0x236c);
    es = memoryAGet16(ds, 0x236c + 2); // gabo
  stosb<MemAuto, DirAuto>();
  memoryASet16(ds, 0x236c, di);
  di = pop();
  es = pop();
  memoryASet(ds, di + 4399, al);
  di++;
  di &= 0x0fff;
  flags.carry = memoryAGet16(ds, 0x0000) < 0x0001;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) - 0x0001);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) - flags.carry);
  goto loc_1021d;
loc_101e0:
  sub_1034c();
  cx = di;
  di = pop();
  si = di;
  si -= ax;
  si--;
  si &= 0x0fff;
  cx -= 0x00fd;
  flags.carry = memoryAGet16(ds, 0x0000) < cx;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) - cx);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) - flags.carry);
loc_101fc:
  al = memoryAGet(ds, si + 4399);
  memoryASet(ds, di + 4399, al);
  si++;
  di++;
  si &= 0x0fff;
  di &= 0x0fff;
  push(es);
  push(di);
    di = memoryAGet16(ds, 0x236c);
    es = memoryAGet16(ds, 0x236c + 2); // gabo
  stosb<MemAuto, DirAuto>();
  memoryASet16(ds, 0x236c, di);
  di = pop();
  es = pop();
  if (--cx)
    goto loc_101fc;
loc_1021d:
  ax = memoryAGet16(ds, 0x0002);
  if (ax & 0x8000)
    goto loc_1022c;
  ax |= memoryAGet16(ds, 0x0000);
  if (!ax)
    goto loc_1022c;
  goto loc_101b2;
loc_1022c:
  bp = pop();
  di = pop();
  si = pop();
}
void sub_10230()
{
  stackguard sg(sp);

  push(si);
  push(di);
  ax = ds;
  es = ax;
  flags.direction = false;
  ax = 0x0001;
  cx = 0x013a;
  di = 0x0004;
  rep_stosw<MemAuto, DirAuto>();
  ax = 0x04e6;
  dx = 0x0000;
  cx = 0x013a;
  di = 0x0c46;
  bx = 0x09d2;
loc_10251:
  stosw<MemAuto, DirAuto>();
  ax += 0x0002;
  memoryASet16(ds, bx, dx);
  bx += 0x0002;
  dx += 0x0002;
  if (--cx)
    goto loc_10251;
  si = 0x0000;
  di = 0x0002;
  bx = 0x0274;
  cx = 0x0139;
loc_1026b:
  ax = memoryAGet16(ds, si + 4);
  ax += memoryAGet16(ds, di + 4);
  memoryASet16(ds, bx + 4, ax);
  memoryASet16(ds, bx + 3142, si);
  memoryASet16(ds, si + 1260, bx);
  memoryASet16(ds, di + 1260, bx);
  si += 0x0004;
  di += 0x0004;
  bx += 0x0002;
  if (--cx)
    goto loc_1026b;
  ax = 0;
  memoryASet16(ds, 0x112c, ax);
  memoryASet16(ds, 0x112c, ax);
  memoryASet(ds, 0x112e, al);
  memoryASet(ds, 0x112e, al);
  memoryASet16(ds, 0x04ea, 0xffff);
  memoryASet16(ds, 0x09d0, ax);
  di = pop();
  si = pop();
}
void sub_102a8()
{
  stackguard sg(sp);

  flags.direction = false;
  di = ds;
  es = di;
  di = 0x112f;
  al = 0x00;
  bx = 0x000d;
loc_102b5:
  cx = bx;
  rep_stosb<MemAuto, DirAuto>();
  al++;
  if (al != 0)
    goto loc_102b5;
loc_102bd:
  stosb<MemAuto, DirAuto>();
  al++;
  if (al != 0)
    goto loc_102bd;
loc_102c2:
  al--;
  stosb<MemAuto, DirAuto>();
    if (al != 0)
    goto loc_102c2;
  cx = 0x0080;
  rep_stosb<MemAuto, DirAuto>();
  cx = 0x0080;
  al = 0x20;
  rep_stosb<MemAuto, DirAuto>();
}
void sub_102d4()
{
  stackguard sg(sp);

  si = memoryAGet16(ds, 0x112a);
  dx = memoryAGet16(ds, 0x112c);
  cl = memoryAGet(ds, 0x112e);
  cx &= 0x00ff;
  goto loc_102f4;
loc_102e6:
  si >>= 1;
  flags.carry = !!(dx & 0x8000);
  dx <<= 1;
  si += flags.carry;
  si <<= 1;
  si = memoryAGet16(ds, si + 3142);
  cx--;
loc_102f4:
  if (cx == 0)
    goto loc_10312;
loc_102f6:
  if (si < 0x04e6)
    goto loc_102e6;
  memoryASet16(ds, 0x112c, dx);
  memoryASet(ds, 0x112e, cl);
  si -= 0x04e6;
  dx = si;
  sub_10373();
  ax = dx;
  ax >>= 1;
  return;
loc_10312:
  push(si);
  si = memoryAGet16(ds, 0x216a);
  if ((short)si < (short)0x236c)
    goto loc_10323;
  sub_10174();
  si = 0x216c;
loc_10323:
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  memoryASet16(ds, 0x216a, si);
  si = pop();
  dh = al;
  push(si);
  si = memoryAGet16(ds, 0x216a);
  if ((short)si < (short)0x236c)
    goto loc_1033e;
  sub_10174();
  si = 0x216c;
loc_1033e:
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  memoryASet16(ds, 0x216a, si);
  si = pop();
  dl = al;
  cl = 0x10;
  goto loc_102f6;
}
void sub_1034c()
{
  stackguard sg(sp);

  sub_103dd();
  si = ax;
  dl = memoryAGet(ds, si + 9074);
  dh = 0x00;
  cl = 0x06;
  dx <<= cl;
  push(dx);
  cl = memoryAGet(ds, si + 9330);
  ch = 0x00;
  cx -= 0x0002;
  sub_103fd();
  ax |= si;
  ax = rol(ax, cl);
  ax &= 0x003f;
  dx = pop();
  ax += dx;
}
void sub_10373()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x04e8) < 0x8000)
    goto loc_1037e;
  sub_10423();
loc_1037e:
  si = memoryAGet16(ds, si + 2514);
loc_10382:
  ax = memoryAGet16(ds, si + 4);
  ax++;
  memoryASet16(ds, si + 4, ax);
  di = si + 0x2;
  if (ax > memoryAGet16(ds, di + 4))
    goto loc_10396;
  goto loc_103d2;
loc_10396:
  di++;
  di++;
  if (ax > memoryAGet16(ds, di + 4))
    goto loc_10396;
  di--;
  di--;
  tx = memoryAGet16(ds, di + 4);
  memoryASet16(ds, di + 4, ax);
  ax = tx;
  memoryASet16(ds, si + 4, ax);
  bx = memoryAGet16(ds, si + 3142);
  memoryASet16(ds, bx + 1260, di);
  if (bx >= 0x04e6)
    goto loc_103ba;
  memoryASet16(ds, bx + 1262, di);
loc_103ba:
  tx = memoryAGet16(ds, di + 3142);
  memoryASet16(ds, di + 3142, bx);
  bx = tx;
  memoryASet16(ds, bx + 1260, si);
  if (bx >= 0x04e6)
    goto loc_103cc;
  memoryASet16(ds, bx + 1262, si);
loc_103cc:
  memoryASet16(ds, si + 3142, bx);
  si = di;
loc_103d2:
  si = memoryAGet16(ds, si + 1260);
  if (!si)
    return;
  goto loc_10382;
}
void sub_103dd()
{
  stackguard sg(sp);

  dx = memoryAGet16(ds, 0x112c);
  if ((char)memoryAGet(ds, 0x112e) > (char)0x08)
    goto loc_103eb;
  sub_104c9();
loc_103eb:
  tl = dh;
  dh = dl;
  dl = tl;
  ax = dx;
  dl = 0;
  memoryASet16(ds, 0x112c, dx);
  memoryASet(ds, 0x112e, memoryAGet(ds, 0x112e) - 0x08);
  ah = 0;
}
void sub_103fd()
{
  stackguard sg(sp);

  push(cx);
  dx = memoryAGet16(ds, 0x112c);
  if ((char)memoryAGet(ds, 0x112e) > (char)0x08)
    goto loc_1040c;
  sub_104c9();
loc_1040c:
  cx = pop();
  ax = dx;
  dx <<= cl;
  memoryASet16(ds, 0x112c, dx);
  memoryASet(ds, 0x112e, memoryAGet(ds, 0x112e) - cl);
  dx = 0xffff;
  dx >>= cl;
  dx = ~dx;
  ax &= dx;
}
void sub_10423()
{
  stackguard sg(sp);

  push(si);
  ax = ds;
  es = ax;
  si = 0;
  di = si;
loc_1042c:
  if (memoryAGet16(ds, si + 3142) < 0x04e6)
    goto loc_10449;
  ax = memoryAGet16(ds, si + 4);
  ax++;
  ax >>= 1;
  memoryASet16(ds, di + 4, ax);
  ax = memoryAGet16(ds, si + 3142);
  memoryASet16(ds, di + 3142, ax);
  di++;
  di++;
loc_10449:
  si++;
  si++;
  if (si < 0x04e6)
    goto loc_1042c;
  si = 0;
  di = 0x0274;
loc_10456:
  bx = si;
  bx++;
  bx++;
  ax = memoryAGet16(ds, si + 4);
  ax += memoryAGet16(ds, bx + 4);
  memoryASet16(ds, di + 4, ax);
  bx = di;
loc_10468:
  bx--;
  bx--;
  if (ax < memoryAGet16(ds, bx + 4))
    goto loc_10468;
  bx++;
  bx++;
  cx = di;
  cx -= bx;
  cx >>= 1;
  flags.direction = true;
  push(cx);
  push(si);
  push(di);
  si = di + 0x4;
  di = si;
  si--;
  si--;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  memoryASet16(ds, bx + 4, ax);
  di = pop();
  si = pop();
  cx = pop();
  push(si);
  push(di);
  si = di + 0xc46;
  di = si;
  si--;
  si--;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  di = pop();
  si = pop();
  memoryASet16(ds, bx + 3142, si);
  si += 0x0004;
  di += 0x0002;
  if (di < 0x04e6)
    goto loc_10456;
  si = 0;
loc_104ad:
  di = memoryAGet16(ds, si + 3142);
  memoryASet16(ds, di + 1260, si);
  if (di >= 0x04e6)
    goto loc_104bf;
  memoryASet16(ds, di + 1262, si);
loc_104bf:
  si++;
  si++;
  if (si < 0x04e6)
    goto loc_104ad;
  si = pop();
}
void sub_104c9()
{
  stackguard sg(sp);

  push(si);
  si = memoryAGet16(ds, 0x216a);
  if ((short)si < (short)0x236c)
    goto loc_104da;
  sub_10174();
  si = 0x216c;
loc_104da:
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  memoryASet16(ds, 0x216a, si);
  si = pop();
  cl = 0x08;
  cl -= memoryAGet(ds, 0x112e);
  ax <<= cl;
  dx |= ax;
  memoryASet(ds, 0x112e, memoryAGet(ds, 0x112e) + 0x08);
}
void sub_104f2()
{
  stackguard sg(sp);

  ax = 0x2853;
  ds = ax;
  es = ax;
  flags.direction = false;
  memoryASet16(ds, 0x8e6a, sp);
  sub_105a3();
  memoryASet16(ds, 0x8e6c, 0x0000);
  sub_107ed();
  memoryASet16(ds, 0x8e88, 0x0000);
  memoryASet16(ds, 0x8e8a, 0x0000);
  push(es);
  ax = 0;
  es = ax;
  flags.interrupts = false;
  memoryASet16(es, 0x0200, 0x0000);
  memoryASet16(es, 0x0202, 0x24b9);
  flags.interrupts = true;
  es = pop();
  ah = 0x22;
  al = 0x16;
  interrupt(0x80);
  sub_15e8a();
  memoryASet16(ds, 0x3048, 0x0000);
loc_1053b:
    sync();
//  if ((short)memoryAGet16(ds, 0x3048) < (short)0x0028)
//    goto loc_1053b;
  sub_15e5e();
  sub_15c8b();
  ax = ds;
  es = ax;
  sub_13c75();
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_10585;
  dx = 0x03b8;
  al = 0x00;
  out(dx, al);
  dx = 0x03b4;
  si = 0x2ee0;
  cx = 0x0009;
loc_10565:
  lodsw<MemAuto, DirAuto>();
  out(dx, ax);
  if (--cx)
    goto loc_10565;
  push(es);
  ax = 0xb000;
  es = ax;
  di = 0;
  cx = 0x4000;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  es = pop();
  dx = 0x03b8;
  al = 0x08;
  out(dx, al);
  dx = 0x03bf;
  al = 0x00;
  out(dx, al);
loc_10585:
  ah = 0x01;
  interrupt(0x80);
  sub_15ec3();
  sub_15e7a();
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_1059c;
  ax = 0x0007;
loc_1059c:
  interrupt(0x10);
  ax = 0x4c00;
  interrupt(0x21);
  memoryASet(ds, 0x8f57, 0x00);
  sub_10000();
  ax = ds;
  es = ax;
  ax = 0x0004;
  if (memoryAGet(ds, 0x8e59) != 0x00)
    goto loc_105da;
  ax = 0x0003;
  if (memoryAGet(ds, 0x8e5a) != 0x00)
    goto loc_105da;
  ax = 0x0002;
  if (memoryAGet(ds, 0x8e58) != 0x00)
    goto loc_105da;
  ax = 0x0000;
  if (memoryAGet(ds, 0x8e5d) != 0x00)
    goto loc_105da;
  ax = 0x0001;
loc_105da:
  memoryASet16(ds, 0x3044, ax);
  ah = 0x0f;
  interrupt(0x10);
  memoryASet(ds, 0x2ef3, bh);
  memoryASet(ds, 0x2ef4, al);
  memoryASet(ds, 0x2ef5, ah);
  ah = 0x01;
  ch = 0x20;
  cl = 0x20;
  interrupt(0x10);
loc_105f4:
  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
loc_10605:
  sub_106fe();
loc_10608:
  ah = 0;
  interrupt(0x16);
  if (ah == 0x1c)
    goto loc_10657;
  if (ah == 0x41)
    goto loc_10652;
  if (ah == 0x39)
    goto loc_10631;
  if (ah == 0x50)
    goto loc_10631;
  if (ah == 0x4d)
    goto loc_10631;
  if (ah == 0x48)
    goto loc_10644;
  if (ah == 0x4b)
    goto loc_10644;
  goto loc_10608;
loc_10631:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) + 1);
  if ((short)memoryAGet16(ds, 0x3044) < (short)0x0006)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0000);
  goto loc_10605;
loc_10644:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) - 1);
  if ((short)memoryAGet16(ds, 0x3044) >= 0)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0005);
  goto loc_10605;
loc_10652:
  memoryASet(ds, 0x8f57, 0xff);
loc_10657:
  if (memoryAGet16(ds, 0x3044) != 0x0005)
    goto loc_10663;
  sub_1066e();
  goto loc_105f4;
loc_10663:
  ax = memoryAGet16(ds, 0x3044);
  bx = 0x2ef8;
  al = memory(ds, bx+al);
  memoryASet16(ds, 0x3044, ax);
}
void sub_105a3()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f57, 0x00);
  sub_10000();
  ax = ds;
  es = ax;
  ax = 0x0004;
  if (memoryAGet(ds, 0x8e59) != 0x00)
    goto loc_105da;
  ax = 0x0003;
  if (memoryAGet(ds, 0x8e5a) != 0x00)
    goto loc_105da;
  ax = 0x0002;
  if (memoryAGet(ds, 0x8e58) != 0x00)
    goto loc_105da;
  ax = 0x0000;
  if (memoryAGet(ds, 0x8e5d) != 0x00)
    goto loc_105da;
  ax = 0x0001;
loc_105da:
  memoryASet16(ds, 0x3044, ax);
  ah = 0x0f;
  interrupt(0x10);
  memoryASet(ds, 0x2ef3, bh);
  memoryASet(ds, 0x2ef4, al);
  memoryASet(ds, 0x2ef5, ah);
  ah = 0x01;
  ch = 0x20;
  cl = 0x20;
  interrupt(0x10);
loc_105f4:
  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
loc_10605:
  sub_106fe();
loc_10608:
  ah = 0;
  interrupt(0x16);
  //if (ah == 0x1c)
    goto loc_10657;
  if (ah == 0x41)
    goto loc_10652;
  if (ah == 0x39)
    goto loc_10631;
  if (ah == 0x50)
    goto loc_10631;
  if (ah == 0x4d)
    goto loc_10631;
  if (ah == 0x48)
    goto loc_10644;
  if (ah == 0x4b)
    goto loc_10644;
  goto loc_10608;
loc_10631:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) + 1);
  if ((short)memoryAGet16(ds, 0x3044) < (short)0x0006)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0000);
  goto loc_10605;
loc_10644:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) - 1);
  if ((short)memoryAGet16(ds, 0x3044) >= 0)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0005);
  goto loc_10605;
loc_10652:
  memoryASet(ds, 0x8f57, 0xff);
loc_10657:
  if (memoryAGet16(ds, 0x3044) != 0x0005)
    goto loc_10663;
  sub_1066e();
  goto loc_105f4;
loc_10663:
  ax = memoryAGet16(ds, 0x3044);
  bx = 0x2ef8;
  al = memory(ds, bx+al);
  memoryASet16(ds, 0x3044, ax);
}
void sub_1066e()
{
  stackguard sg(sp);

  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
  si = 0x2f9a;
  cx = 0x0006;
loc_10685:
  push(cx);
  dl = 0;
  lodsb<MemAuto, DirAuto>();
  dh = al;
  bh = memoryAGet(ds, 0x2ef3);
  ah = 0x02;
  interrupt(0x10);
loc_10693:
  ax = 0x0920;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x07;
  cx = 0x0001;
  interrupt(0x10);
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    goto loc_106b2;
  ah = 0x0e;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x07;
  interrupt(0x10);
  goto loc_10693;
loc_106b2:
  ah = 0;
  interrupt(0x16);
  memoryASet(ds, si, ah);
  si++;
  ah ^= 0x80;
  memoryASet(ds, si, ah);
  si++;
  if ((char)al >= (char)0x20)
    goto loc_106e0;
  push(ax);
  ax = 0x0920;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x07;
  cx = 0x0001;
  interrupt(0x10);
  ax = 0x0e5e;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x0f;
  interrupt(0x10);
  ax = pop();
  al += 0x41;
loc_106e0:
  push(ax);
  ax = 0x0920;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x07;
  cx = 0x0001;
  interrupt(0x10);
  ax = pop();
  ah = 0x0e;
  bh = memoryAGet(ds, 0x2ef3);
  bl = 0x0f;
  interrupt(0x10);
  cx = pop();
  if (--cx)
    goto loc_10685;
}
void sub_106fe()
{
  stackguard sg(sp);

  si = 0x2efd;
  cx = 0;
loc_10703:
  bl = 0x07;
  if (cx != memoryAGet16(ds, 0x3044))
    goto loc_10716;
  bl = 0x1f;
  if (memoryAGet(ds, 0x2ef4) != 0x07)
    goto loc_10716;
  bl = 0xf0;
loc_10716:
  memoryASet(ds, 0x2ef7, bl);
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    return;
  al -= memoryAGet(ds, 0x2ef5);
  al = -al;
  al >>= 1;
  memoryASet(ds, 0x2ef2, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(ds, 0x2ef6, al);
  push(cx);
loc_1072f:
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    goto loc_1075c;
  ah = 0x02;
  bh = memoryAGet(ds, 0x2ef3);
  dh = memoryAGet(ds, 0x2ef6);
  dl = memoryAGet(ds, 0x2ef2);
  interrupt(0x10);
  memoryASet(ds, 0x2ef2, memoryAGet(ds, 0x2ef2) + 1);
  al = memoryAGet(ds, si + 65535);
  ah = 0x09;
  bl = memoryAGet(ds, 0x2ef7);
  bh = memoryAGet(ds, 0x2ef3);
  cx = 0x0001;
  interrupt(0x10);
  goto loc_1072f;
loc_1075c:
  cx = pop();
  cx++;
  goto loc_10703;
}
void sub_10761()
{
  stackguard sg(sp);

}
void sub_10762()
{
  stackguard sg(sp);

  memoryASet16(ds, si, 0x0000);
  memoryASet16(ds, si + 10, si);
  memoryASet16(ds, si + 8, si);
  memoryASet16(ds, si + 2, 0x0761);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x0761);
}
void sub_1077c()
{
  stackguard sg(sp);

  push(bx);
  bx = memoryAGet16(ds, di + 10);
  memoryASet16(ds, di + 10, si);
  memoryASet16(ds, si + 10, bx);
  memoryASet16(ds, si + 8, di);
  memoryASet16(ds, bx + 8, si);
  bx = pop();
}
void sub_1078e()
{
  stackguard sg(sp);

  push(bx);
  bx = memoryAGet16(ds, di + 8);
  memoryASet16(ds, di + 8, si);
  memoryASet16(ds, si + 8, bx);
  memoryASet16(ds, si + 10, di);
  memoryASet16(ds, bx + 10, si);
  bx = pop();
}
void sub_107a0()
{
  stackguard sg(sp);

  push(di);
  push(bx);
  di = memoryAGet16(ds, si + 8);
  bx = memoryAGet16(ds, si + 10);
  memoryASet16(ds, di + 10, bx);
  memoryASet16(ds, bx + 8, di);
  bx = memoryAGet16(ds, 0x8e7c);
  memoryASet16(ds, si + 8, bx);
  memoryASet16(ds, 0x8e7c, si);
  memoryASet16(ds, si, 0x0000);
  bx = pop();
  di = pop();
}
void sub_107c0()
{
  stackguard sg(sp);

  memoryASet16(ds, si, 0x0004);
  memoryASet16(ds, si + 2, 0x0f2b);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x0761);
  memoryASet(ds, si + 38, 0x00);
  memoryASet(ds, si + 74, 0x00);
}
void sub_107dc()
{
  stackguard sg(sp);

  push(di);
  push(bx);
  di = memoryAGet16(ds, si + 8);
  bx = memoryAGet16(ds, si + 10);
  memoryASet16(ds, di + 10, bx);
  memoryASet16(ds, bx + 8, di);
  bx = pop();
  di = pop();
}
void sub_107ed()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f2ba();
}
void sub_1080f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3ef();
}
void sub_10831()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f492();
}
void sub_10853()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f57c();
}
void sub_10875()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f585();
}
void sub_10897()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1fea1();
}
void sub_108b9()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1ff41();
}
void sub_1091f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_203da();
}
void sub_10941()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1ebd0();
}
void sub_10963()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1ebd7();
}
void sub_10985()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20482();
}
void sub_109a7()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20568();
}
void sub_109eb()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_2058d();
}
void sub_10a0d()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_205a9();
}
void sub_10a2f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_205ae();
}
void sub_10a51()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_205ae();
}
void sub_10a73()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_205ed();
}
void sub_10a95()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20653();
}
void sub_10afb()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_2098c();
}
void sub_10b3f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_209e9();
}
void sub_10b83()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20a39();
}
void sub_10ba5()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20ad0();
}
void sub_10bc7()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20b5b();
}
void sub_10be9()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20b8a();
}
void sub_10c0b()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20be5();
}
void sub_10c2d()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20c5e();
}
void sub_10c4f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20c7b();
}
void sub_10c71()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20d18();
}
void sub_10c93()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20d8a();
}
void sub_10cb5()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20f54();
}
void sub_10cd7()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_21090();
}
void sub_10cf9()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_21132();
}
void sub_10d1b()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_211cc();
}
void sub_10d5f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3c7();
}
void sub_10d81()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3d7();
}
void sub_10da3()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f324();
}
void sub_10dc5()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f325();
}
void sub_10de7()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3a7();
}
void sub_10e09()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3ae();
}
void sub_10e2b()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_1f3b5();
}
void sub_10e4d()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_20854();
}
void sub_10e6f()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_208dc();
}
void sub_10e91()
{
  stackguard sg(sp);

  assert(memoryAGet16(ds, 0x3044) == 3);
  sub_208f9();
}
void sub_10eb3()
{
  stackguard sg(sp);

  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 3777));
}
void sub_10ed5()
{
  stackguard sg(sp);

  sub_1421c();
}
void sub_10ed9()
{
  stackguard sg(sp);

  sub_14191();
}
void sub_10edd()
{
  stackguard sg(sp);

  sub_11ccc();
}
void sub_10ee1()
{
  stackguard sg(sp);

  sub_13a36();
}
void sub_10ee5()
{
  stackguard sg(sp);

  sub_15835();
}
void sub_10ee9()
{
  stackguard sg(sp);

  sub_1561c();
}
void sub_10ef1()
{
  stackguard sg(sp);

  sub_160a5();
}
void sub_10ef5()
{
  stackguard sg(sp);

  push(es);
  push(cx);
  push(si);
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  si = memoryAGet16(ds, si + 12);
  cx = 0x449b;
  if (!(si & 0x0001))
    goto loc_10f0e;
  cx = 0x5489;
  si--;
loc_10f0e:
  es = cx;
  ax -= memoryAGet16(es, si);
  bx -= memoryAGet16(es, si + 2);
  ax <<= 1;
  bx <<= 1;
  ax += memoryAGet16(es, si + 4);
  bx += memoryAGet16(es, si + 6);
  ax = sar(ax, 1);
  bx = sar(bx, 1);
  si = pop();
  cx = pop();
  es = pop();
}
void sub_10f2b()
{
  stackguard sg(sp);

  sub_107a0();
}
// INJECT: Error: cannot inject zero flag in sub_10f2f()!
// INJECT: Error: cannot inject zero flag in sub_10f2f()!
void sub_10f2f()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0xfcfa);
  if ((short)ax < (short)memoryAGet16(ds, 0xfce2))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcf2);
  if ((short)ax > (short)memoryAGet16(ds, 0xfcea))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcfe);
  if ((short)ax < (short)memoryAGet16(ds, 0xfce6))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcf6);
  if ((short)ax > (short)memoryAGet16(ds, 0xfcee))
    goto loc_10f57;
  ax = 0;
  ax--;
    flags.zero = false;
  return;
loc_10f57:
  ax = 0;
    flags.zero = true;
}
void sub_10f5a()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 3948));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop());
}
void sub_10f78()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 3978));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop());
}
void sub_10f96()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 4008));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop()); // todo: check zero flag!!
}
void sub_10fb4()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 4038));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop());
}
void sub_10fd2()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 4068));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop());
}
void sub_10ff0()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e74, bx);
  bx = memoryAGet16(ds, 0x991c);
  bx <<= 1;
  push(memoryAGet16(cs, bx + 4098));
  bx = memoryAGet16(ds, 0x8e74);
  callIndirect(pop());
}
// INJECT: Error: cannot inject zero flag in sub_1100e()!
void sub_1100e()
{
  stackguard sg(sp);

  bp = 0x9138;
  cx = 0x0004;
loc_11014:
  if (memoryAGet16(ds, bp) == 0x0000)
    goto loc_11021;
  bp += 0x0004;
  if (--cx)
    goto loc_11014;
  cx--;
loc_11021:
  stop(/*inject ret*/);
}
void sub_11022()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x8e7c) == 0x0000)
    goto loc_11041;
  si = memoryAGet16(ds, 0x8e7c);
  push(memoryAGet16(ds, si + 8));
  memoryASet16(ds, 0x8e7c, pop());
loc_11034:
  memoryASet(ds, si + 38, 0x00);
  memoryASet(ds, si + 74, 0x00);
  memoryASet(ds, si + 75, 0x00);
  return;
loc_11041:
  si = 0x9096;
loc_11044:
  si = memoryAGet16(ds, si + 10);
  if (memoryAGet16(ds, si) == 0x0004)
    goto loc_1106d;
  if (memoryAGet16(ds, si) == 0x000c)
    goto loc_1106d;
  if (memoryAGet16(ds, si) == 0x0010)
    goto loc_1106d;
  if (memoryAGet16(ds, si) != 0x0000)
    goto loc_11044;
  si = memoryAGet16(ds, 0x90a0);
  if (memoryAGet16(ds, si) != 0x0000)
    goto loc_1106d;
  si = memoryAGet16(ds, 0x90ec);
  if (memoryAGet16(ds, si) == 0x0000)
    goto loc_11072;
loc_1106d:
  sub_107dc();
  goto loc_11034;
loc_11072:
  si = memoryAGet16(ds, 0x9054);
loc_11076:
  if ((short)memoryAGet16(ds, si) >= (short)0x00c8)
    goto loc_1106d;
  if (memoryAGet16(ds, si) == 0x0004)
    goto loc_1106d;
  si = memoryAGet16(ds, si + 10);
  if (memoryAGet16(ds, si) != 0x0000)
    goto loc_11076;
  si = memoryAGet16(ds, 0x9054);
  goto loc_1106d;
}
void sub_11588()
{
  stackguard sg(sp);

  push(si);
loc_11589:
  push(cx);
  cx = ax;
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  memoryASet16(ds, si, 0x000c);
  memoryASet16(ds, si + 2, 0x3998);
  memoryASet16(ds, si + 4, 0x0853);
  ax = dx;
  sub_141a1();
  ax += cx;
  memoryASet16(ds, si + 18, ax);
  ax = di;
  sub_141a1();
  ax += bx;
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  bp -= 0x0004;
  ax = cx;
  cx = pop();
  cx--;
  if ((short)cx >= 0)
    goto loc_11589;
  si = pop();
  memoryASet16(ds, 0x8e88, 0x0006);
  memoryASet16(ds, 0x8e8a, 0x0006);
}
void sub_115e4()
{
  stackguard sg(sp);

  push(si);
loc_115e5:
  sub_11022();
  di = 0x9096;
  sub_1078e();
  di = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di + 2);
  memoryASet16(ds, si + 14, ax);
  di += 0x0004;
  memoryASet16(ds, si + 16, di);
  ax = 0x012c;
  sub_141a1();
  ax += 0x000a;
  memoryASet16(ds, si + 18, ax);
  ax = 0x00b4;
  sub_141a1();
  ax += 0x0006;
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, 0x9164, memoryAGet16(ds, 0x9164) + 1);
  sub_11022();
  di = 0x9096;
  sub_1078e();
  di = 0x11b4;
  memoryASet16(ds, si, 0x0018);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di + 2);
  memoryASet16(ds, si + 14, ax);
  di += 0x0004;
  memoryASet16(ds, si + 16, di);
  ax = 0x012c;
  sub_141a1();
  ax += 0x000a;
  memoryASet16(ds, si + 18, ax);
  ax = 0x00b4;
  sub_141a1();
  ax += 0x0006;
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, 0x9164, memoryAGet16(ds, 0x9164) + 1);
  cx--;
  if ((short)cx < 0)
    goto loc_11687;
  goto loc_115e5;
loc_11687:
  si = pop();
}
void sub_11689()
{
  stackguard sg(sp);

  di = memoryAGet16(ds, si + 10);
  if (memoryAGet(ds, si + 38) == 0x00)
    return;
  di = memoryAGet16(ds, si + 68);
loc_11695:
  di = memoryAGet16(ds, di + 10);
  if (memoryAGet16(ds, di) == 0x0000)
    return;
  if (memoryAGet(ds, di + 38) == 0x00)
    return;
  if (si == memoryAGet16(ds, di + 68))
    goto loc_11695;
}
void sub_116a9()
{
  stackguard sg(sp);

  sub_10e6f();
  memoryASet16(ds, 0x8e7a, memoryAGet16(ds, 0x8e7a) ^ 0x0001);
  sub_10e6f();
  memoryASet16(ds, 0x8e7a, memoryAGet16(ds, 0x8e7a) ^ 0x0001);
}
void sub_116ba()
{
  stackguard sg(sp);

  si = 0x8fb2;
  sub_10762();
  si = 0x8ffe;
  sub_10762();
  si = 0x904a;
  sub_10762();
  si = 0x9096;
  sub_10762();
  si = 0x90e2;
  sub_10762();
  si = 0x9f00;
  di = 0x8fb2;
  sub_1077c();
  memoryASet16(ds, si, 0x0008);
  memoryASet16(ds, si + 2, 0x4311);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet16(ds, si + 12, 0x077a);
  memoryASet16(ds, si + 14, 0x0000);
  memoryASet16(ds, si + 18, 0x00a0);
  memoryASet16(ds, si + 22, 0x00b0);
  bx = 0x3292;
  cx = 0x0004;
loc_11709:
  sub_11022();
  di = 0x8fb2;
  sub_1078e();
  memoryASet16(ds, si, 0x00c4);
  memoryASet16(ds, si + 2, 0x4759);
  memoryASet16(ds, si + 4, 0x0761);
  di = memoryAGet16(ds, bx);
  bx += 0x0002;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di + 2);
  memoryASet16(ds, si + 14, ax);
  di += 0x0004;
  memoryASet16(ds, si + 16, di);
  memoryASet16(ds, si + 18, 0x00a0);
  memoryASet16(ds, si + 22, 0x00b0);
  ax = cx;
  ax--;
  memoryASet16(ds, si + 34, ax);
  if (--cx)
    goto loc_11709;
  memoryASet16(ds, 0x9134, 0x0000);
  memoryASet16(ds, 0x914c, 0x0000);
  memoryASet16(ds, 0x9138, 0x0000);
  memoryASet16(ds, 0x913c, 0x0000);
  memoryASet16(ds, 0x9140, 0x0000);
  memoryASet16(ds, 0x9144, 0x0000);
  memoryASet16(ds, 0x9148, 0x0000);
  sub_12bcc();
  cx = 0x000e;
  di = 0x916a;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  sub_135eb();
  memoryASet16(ds, 0x912e, 0x0008);
  memoryASet16(ds, 0x9130, 0x0008);
  memoryASet16(ds, 0x9132, 0x0001);
  memoryASet16(ds, 0x8e7e, 0x0000);
  memoryASet16(ds, 0x9150, 0x0000);
  memoryASet16(ds, 0x8e80, 0x0000);
  memoryASet16(ds, 0x8e82, 0x0000);
  memoryASet16(ds, 0x9152, 0x0000);
  memoryASet16(ds, 0x9154, 0x0000);
  memoryASet16(ds, 0x9156, 0x0000);
  memoryASet16(ds, 0x9158, 0x0000);
  memoryASet16(ds, 0x915e, 0x0000);
  memoryASet16(ds, 0x9160, 0x0000);
  memoryASet16(ds, 0x8e84, 0x0000);
  memoryASet16(ds, 0x9162, 0x0000);
  di = 0x921c;
  cx = 0x0007;
  al = 0;
  rep_stosb<MemAuto, DirAuto>();
  memoryASet16(ds, 0x9164, 0x0000);
  memoryASet16(ds, 0x9186, 0x0027);
  memoryASet16(ds, 0x9188, 0x0000);
  memoryASet(ds, 0x9223, 0x00);
  memoryASet(ds, 0x9224, 0x00);
  memoryASet16(ds, 0x918a, 0x0003);
  memoryASet16(ds, 0x918c, 0x0001);
  memoryASet(ds, 0x9225, 0x00);
  memoryASet16(ds, 0x91b0, 0x0003);
  sub_10e91();
  memoryASet(ds, 0x8faf, 0xff);
  sub_10ba5();
}
void sub_11827()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f5c, 0x00);
  memoryASet(ds, 0x8f5d, 0xff);
  memoryASet16(ds, 0x991e, 0x0008);
  memoryASet16(ds, 0x991a, 0x0001);
  memoryASet16(ds, 0x8e7a, 0x0000);
  memoryASet(ds, 0x8f5e, 0x00);
  if (memoryAGet16(ds, 0x8e70) != 0x0002)
    goto loc_11854;
  memoryASet(ds, 0x8f5e, 0xff);
loc_11854:
  memoryASet(ds, 0x8f5f, 0x00);
  memoryASet(ds, 0x8f60, 0x00);
  sub_109a7();
  sub_10a73();
  memoryASet(ds, 0x8f61, 0x00);
  si = 0x9f4c;
  cx = 0x009e;
  memoryASet16(ds, 0x8e7c, si);
loc_11873:
  memoryASet16(ds, si, 0x0000);
  di = si + 0x4c;
  memoryASet16(ds, si + 8, di);
  si = di;
  if (--cx)
    goto loc_11873;
  memoryASet16(ds, si, 0x0000);
  memoryASet16(ds, si + 8, 0x0000);
  di = 0x9c80;
  ax = 0xffff;
  cx = 0x0140;
  rep_stosw<MemAuto, DirAuto>();
  sub_116a9();
  sub_116ba();
  if (memoryAGet(ds, 0x8f5e) == 0x00)
    goto loc_118ad;
  sub_11a19();
  sub_116ba();
  sub_11a19();
  return;
loc_118ad:
  sub_11a19();
  memoryASet16(ds, 0x918a, 0x0000);
  sub_10e91();
  sub_11a19();
}
void sub_118f5()
{
  stackguard sg(sp);

  ah = 0x01;
  interrupt(0x80);
  if (memoryAGet16(ds, 0x9162) == 0x0000)
    goto loc_11903;
  sub_1472d();
loc_11903:
  ax = memoryAGet16(ds, 0x91a6);
  ax -= memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcfe, ax);
  si = memoryAGet16(ds, 0x90ec);
  sub_1371a();
  si = memoryAGet16(ds, 0x90a0);
  sub_1371a();
  si = memoryAGet16(ds, 0x9054);
  sub_1371a();
loc_11922:
  si = memoryAGet16(ds, 0x9008);
  if (memoryAGet16(ds, si) == 0x0000)
    goto loc_11930;
  sub_137a9();
  goto loc_11922;
loc_11930:
  di = 0x9c80;
  ax = 0xffff;
  cx = 0x0140;
  rep_stosw<MemAuto, DirAuto>();
}
void sub_1193c()
{
  stackguard sg(sp);

  si = 0x916a;
  cx = 0x0007;
loc_11942:
  lodsw<MemAuto, DirAuto>();
  bx = ax;
  lodsw<MemAuto, DirAuto>();
  if (!(bx & bx))
    goto loc_11958;
  push(si);
  push(cx);
  push(ax);
  ax = bx;
  sub_129d7();
  ax = pop();
  memoryASet16(ds, di + 52, ax);
  cx = pop();
  si = pop();
loc_11958:
  if (--cx)
    goto loc_11942;
}
void sub_1195b()
{
  stackguard sg(sp);

  si = 0x9f00;
  memoryASet(ds, 0x9224, 0x00);
  ax = memoryAGet16(ds, 0x91a2);
  memoryASet16(ds, si + 18, ax);
  memoryASet16(ds, si + 22, 0x00b0);
  ax = memoryAGet16(ds, 0x91a6);
  memoryASet16(ds, 0x9190, ax);
  memoryASet16(ds, 0x91aa, ax);
  ax++;
  memoryASet16(ds, 0x9192, ax);
  ax += 0x00bf;
  memoryASet16(ds, 0x9194, ax);
  ax = memoryAGet16(ds, 0x91a6);
  ax &= 0x000f;
  memoryASet16(ds, 0x9196, ax);
  ax = memoryAGet16(ds, 0x91a6);
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  dx = 0x0028;
  mul(dx);
  memoryASet16(ds, 0x918e, ax);
  sub_1193c();
  ax = memoryAGet16(ds, 0x9166);
  memoryASet16(ds, 0x915a, ax);
  ax = memoryAGet16(ds, 0x9168);
  memoryASet16(ds, 0x915c, ax);
  di = 0x8e8c;
  cx = 0x0010;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  memoryASet16(ds, 0x8e80, 0x0000);
  memoryASet16(ds, 0x8e7e, 0x0000);
  memoryASet(ds, 0x8faf, 0xff);
  memoryASet16(ds, 0x919e, 0x0000);
  di = 0x8ebc;
  cx = 0x0004;
loc_119d3:
  ax = memoryAGet16(ds, si + 18);
  stosw<MemAuto, DirAuto>();
  ax = memoryAGet16(ds, si + 22);
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_119d3;
  di = 0x8ecc;
  cx = 0x0011;
loc_119e3:
  ax = memoryAGet16(ds, 0x9190);
  stosw<MemAuto, DirAuto>();
  ax = memoryAGet16(ds, si + 18);
  stosw<MemAuto, DirAuto>();
  ax = memoryAGet16(ds, si + 22);
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_119e3;
  push(si);
  ax = memoryAGet16(ds, 0x8e7a);
  al += 0x31;
  memoryASet(ds, 0x3727, al);
  si = 0x3715;
  memoryASet(ds, 0x374e, 0xff);
  sub_15926();
  memoryASet(ds, 0x374e, 0x00);
  sub_10d5f();
  si = pop();
  if (memoryAGet16(ds, 0x9162) == 0x0000)
    return;
  sub_12b22();
}
void sub_11a19()
{
  stackguard sg(sp);

  si = 0xce80;
  di = 0x8fb2;
  cx = 0x0146;
loc_11a22:
  lodsw<MemAuto, DirAuto>();
  bx = memoryAGet16(ds, di);
  memoryASet16(ds, si + 65534, bx);
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_11a22;
  si = 0x9f00;
  di = 0x8f62;
  cx = 0x004c;
loc_11a34:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, di);
  memoryASet(ds, si + 65535, ah);
  stosb<MemAuto, DirAuto>();
  if (--cx)
    goto loc_11a34;
  si = 0x0000;
  di = 0x0000;
  cx = 0x1770;
  ax = 0x2565;
  es = ax;
loc_11a4b:
  lodsw<MemAuto, DirAuto>();
  bx = memoryAGet16(es, di);
  memoryASet16(ds, si + 65534, bx);
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_11a4b;
  ax = ds;
  es = ax;
  memoryASet16(ds, 0x8e7a, memoryAGet16(ds, 0x8e7a) ^ 0x0001);
  sub_10f5a();
}
void sub_11a62()
{
  stackguard sg(sp);

  sub_118f5();
  bx = memoryAGet16(ds, 0x8e7a);
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_11a8e;
  bx ^= 0x0001;
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_11a84;
  if (memoryAGet(ds, bx + 36703) != 0x00)
    goto loc_11a84;
  sub_11a19();
loc_11a84:
  sub_1195b();
  memoryASet16(ds, 0x991e, 0x0008);
  return;
loc_11a8e:
  sub_11a19();
  bx = memoryAGet16(ds, 0x8e7a);
  if (memoryAGet(ds, bx + 36703) == 0x00)
    goto loc_11a84;
  memoryASet(ds, 0x8f61, 0xff);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_11a84;
  memoryASet(ds, 0x8fb0, 0xff);
  goto loc_11a84;
}
void sub_11a65()
{
  stackguard sg(sp);

  bx = memoryAGet16(ds, 0x8e7a);
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_11a8e;
  bx ^= 0x0001;
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_11a84;
  if (memoryAGet(ds, bx + 36703) != 0x00)
    goto loc_11a84;
  sub_11a19();
loc_11a84:
  sub_1195b();
  memoryASet16(ds, 0x991e, 0x0008);
  return;
loc_11a8e:
  sub_11a19();
  bx = memoryAGet16(ds, 0x8e7a);
  if (memoryAGet(ds, bx + 36703) == 0x00)
    goto loc_11a84;
  memoryASet(ds, 0x8f61, 0xff);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_11a84;
  memoryASet(ds, 0x8fb0, 0xff);
  goto loc_11a84;
}
void sub_11aaf()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x918e, 0x2d00);
  memoryASet16(ds, 0x9196, 0x0000);
  memoryASet16(ds, 0x9190, 0x1200);
  memoryASet16(ds, 0x9192, 0x7fee);
  memoryASet16(ds, 0x9194, 0x7fee);
  memoryASet16(ds, 0x91ae, 0x0010);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, 0x91a2, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, 0x91a4, ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0x91a6, ax);
  ax = memoryAGet16(ds, 0x915a);
  memoryASet16(ds, 0x9166, ax);
  ax = memoryAGet16(ds, 0x915c);
  memoryASet16(ds, 0x9168, ax);
  memoryASet16(ds, 0x9198, 0x0001);
  memoryASet16(ds, 0x919a, 0x0000);
  memoryASet16(ds, 0x919e, 0x0000);
  sub_10f78();
  memoryASet16(ds, 0x91a0, 0x0000);
  memoryASet16(ds, 0x8e7e, 0x0000);
  memoryASet16(ds, 0x919c, 0x0000);
  memoryASet16(ds, 0x915a, 0x0000);
  memoryASet16(ds, 0x915c, 0x0000);
  memoryASet16(ds, 0x9166, 0x0000);
  memoryASet16(ds, 0x9168, 0x0000);
  memoryASet16(ds, 0x9164, 0x0000);
  memoryASet16(ds, 0x91ac, 0x0001);
  memoryASet16(ds, 0x91b2, 0x0000);
}
void sub_11b43()
{
  stackguard sg(sp);

  si = 0x0000;
  di = 0x0000;
  cx = 0x1770;
  ax = 0x2565;
  es = ax;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  ax = ds;
  es = ax;
  memoryASet16(ds, 0x8f32, 0x0000);
  memoryASet16(ds, 0x8e86, 0x0000);
  di = 0x8e8c;
  cx = 0x0010;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  memoryASet(ds, 0x8fb0, 0x00);
  memoryASet(ds, 0x8f59, 0x00);
  memoryASet(ds, 0x8f5b, 0x00);
  sub_11aaf();
  if (memoryAGet16(ds, 0x8e70) != 0x0002)
    return;
  sub_11a19();
  sub_11aaf();
  sub_11a19();
}
void sub_11b90()
{
  stackguard sg(sp);

  if (stop(/*82*/))
    goto loc_11ba2;
  bx = -bx;
  sub_11ba2();
  ax -= 0x0004;
  ax = -ax;
  ax &= 0x0007;
  return;
loc_11ba2:
  if (stop(/*82*/))
    goto loc_11bb4;
  ax = -ax;
  sub_11bb4();
  ax -= 0x0008;
  ax = -ax;
  ax &= 0x0007;
  return;
loc_11bb4:
  if (!(ax & ax))
    goto loc_11bcf;
  if (!(bx & bx))
    goto loc_11be2;
  if (ax == bx)
    goto loc_11be6;
  if ((short)ax > (short)bx)
    goto loc_11bd3;
  ax >>= 1;
  dx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11bcf:
  ax = 0x0004;
  return;
loc_11bd3:
  bx >>= 1;
  dx = bx;
  bx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11be2:
  ax = 0x0002;
  return;
loc_11be6:
  ax = 0x0003;
}
void sub_11ba2()
{
  stackguard sg(sp);

  if (stop(/*82*/))
    goto loc_11bb4;
  ax = -ax;
  sub_11bb4();
  ax -= 0x0008;
  ax = -ax;
  ax &= 0x0007;
  return;
loc_11bb4:
  if (!(ax & ax))
    goto loc_11bcf;
  if (!(bx & bx))
    goto loc_11be2;
  if (ax == bx)
    goto loc_11be6;
  if ((short)ax > (short)bx)
    goto loc_11bd3;
  ax >>= 1;
  dx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11bcf:
  ax = 0x0004;
  return;
loc_11bd3:
  bx >>= 1;
  dx = bx;
  bx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11be2:
  ax = 0x0002;
  return;
loc_11be6:
  ax = 0x0003;
}
void sub_11bb4()
{
  stackguard sg(sp);

  if (!(ax & ax))
    goto loc_11bcf;
  if (!(bx & bx))
    goto loc_11be2;
  if (ax == bx)
    goto loc_11be6;
  if ((short)ax > (short)bx)
    goto loc_11bd3;
  ax >>= 1;
  dx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11bcf:
  ax = 0x0004;
  return;
loc_11bd3:
  bx >>= 1;
  dx = bx;
  bx = ax;
  ax = 0;
  div(bx);
  if ((short)ax >= (short)0x3504)
    goto loc_11be6;
loc_11be2:
  ax = 0x0002;
  return;
loc_11be6:
  ax = 0x0003;
}
// INJECT: Error: cannot inject zero flag in sub_11bea()!
void sub_11bea()
{
  stackguard sg(sp);

  push(si);
  si += 0x0028;
  lodsw<MemAuto, DirAuto>();
  memoryASet16(ds, 0xfce2, ax);
  memoryASet16(ds, 0x8eb4, ax);
  lodsw<MemAuto, DirAuto>();
  memoryASet16(ds, 0xfce6, ax);
  memoryASet16(ds, 0x8eb6, ax);
  lodsw<MemAuto, DirAuto>();
  memoryASet16(ds, 0xfcea, ax);
  memoryASet16(ds, 0x8eb8, ax);
  lodsw<MemAuto, DirAuto>();
  memoryASet16(ds, 0xfcee, ax);
  memoryASet16(ds, 0x8eba, ax);
  di = memoryAGet16(ds, 0x9054);
  sub_11c18();
  if (!flags.zero)
    goto loc_11c16;
  sub_10f96();
loc_11c16:
  si = pop();
}
// INJECT: Error: cannot inject zero flag in sub_11c18()!
void sub_11c18()
{
  stackguard sg(sp);

loc_11c18:
  if (memoryAGet16(ds, di) == 0x0000)
  {
      flags.zero = true;
    goto loc_11c4e;
  }
  ax = memoryAGet16(ds, di + 40);
  memoryASet16(ds, 0xfcf2, ax);
  ax = memoryAGet16(ds, di + 42);
  memoryASet16(ds, 0xfcf6, ax);
  ax = memoryAGet16(ds, di + 44);
  memoryASet16(ds, 0xfcfa, ax);
  ax = memoryAGet16(ds, di + 46);
  memoryASet16(ds, 0xfcfe, ax);
  sub_10f2f();
  if (!flags.zero)
    goto loc_11c48;
  if (memoryAGet16(ds, di) != 0x00b8)
    goto loc_11c43;
  di = memoryAGet16(ds, di + 70);
loc_11c43:
  di = memoryAGet16(ds, di + 10);
  goto loc_11c18;
loc_11c48:
  if (memoryAGet16(ds, di) == 0x00b8)
    goto loc_11c43;
    flags.zero = false;
loc_11c4e:
    return;
}
// INJECT: Error: cannot inject zero flag in sub_11ccc()!
// INJECT: Error: cannot inject zero flag in sub_11ccc()!
void sub_11ccc()
{
  stackguard sg(sp);

  di = memoryAGet16(ds, 0x9054);
  memoryASet16(ds, 0x8eb4, ax);
  memoryASet16(ds, 0x8eb8, ax);
  memoryASet16(ds, 0x8eb6, bx);
  memoryASet16(ds, 0x8eba, bx);
loc_11cde:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_11d0c;
  if ((short)ax < (short)memoryAGet16(ds, di + 40))
    goto loc_11cfe;
  if ((short)ax > (short)memoryAGet16(ds, di + 44))
    goto loc_11cfe;
  if ((short)bx < (short)memoryAGet16(ds, di + 42))
    goto loc_11cfe;
  if ((short)bx > (short)memoryAGet16(ds, di + 46))
    goto loc_11cfe;
  if (memoryAGet16(ds, di) == 0x00b8)
    goto loc_11d07;
  stop(/*inject ret*/);
  return;
loc_11cfe:
  if (memoryAGet16(ds, di) != 0x00b8)
    goto loc_11d07;
  di = memoryAGet16(ds, di + 70);
loc_11d07:
  di = memoryAGet16(ds, di + 10);
  goto loc_11cde;
loc_11d0c:
  memoryASet16(ds, 0xfce2, ax);
  memoryASet16(ds, 0xfce6, bx);
  memoryASet16(ds, 0xfcea, ax);
  memoryASet16(ds, 0xfcee, bx);
  sub_10f96();
  stop(/*inject ret*/);
}
void sub_11d1e()
{
  stackguard sg(sp);

  push(si);
  si = 0x0000;
  si += memoryAGet16(ds, 0x918e);
  dx += memoryAGet16(ds, 0x9196);
  bx = dx;
  bx &= 0x000f;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  ax &= 0x00fe;
  si += ax;
  ax = 0x0028;
  mul(dx);
  si += ax;
  dx = 0x0004;
  di = 0x9920;
  push(bx);
  sub_11e02();
  bx = pop();
  di = 0x9922;
  push(bx);
  sub_11e02();
  bx = pop();
  di = 0x9924;
  push(bx);
  sub_11e02();
  bx = pop();
  di -= 0x0004;
  si += 0x0022;
  cx += bx;
  cx -= 0x0010;
  if (stop(/*71*/))
    goto loc_11d97;
loc_11d71:
  bx = 0;
  push(di);
  sub_11e02();
  di = pop();
  bx = 0;
  di += 0x0002;
  push(di);
  sub_11e02();
  di = pop();
  bx = 0;
  di += 0x0002;
  push(di);
  sub_11e02();
  di = pop();
  di += 0x005c;
  si += 0x0022;
  cx -= 0x0010;
  if ((short)cx > 0)
    goto loc_11d71;
loc_11d97:
  si = pop();
}
void sub_11e02()
{
  stackguard sg(sp);

  push(cx);
  push(bx);
  bx -= 0x0010;
  bx = -bx;
  if ((short)cx <= (short)bx)
    goto loc_11e0f;
  cx = bx;
loc_11e0f:
  bx = pop();
  if (!(cx & cx))
    goto loc_11e27;
  lodsw<MemAuto, DirAuto>();
  push(si);
  si = 0x5538;
  ax >>= 1;
  si += ax;
  si += bx;
  si += bx;
loc_11e21:
  movsw<MemAuto, MemAuto, DirAuto>();
  di += dx;
  if (--cx)
    goto loc_11e21;
  si = pop();
loc_11e27:
  cx = pop();
}
// INJECT: Error: cannot inject zero flag in sub_11e29()!
// INJECT: Error: cannot inject zero flag in sub_11e29()!
void sub_11e29()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, si + 18);
  ax -= 0x000e;
  dx = memoryAGet16(ds, si + 22);
  dx -= 0x000e;
  bx = ax;
  bx &= 0x000f;
  bx <<= 1;
  push(memoryAGet16(ds, bx + 12954));
  cx = 0x0019;
  sub_11d1e();
  di = pop();
  push(si);
  si = 0x9920;
  cx = 0x004b;
loc_11e4e:
  lodsw<MemAuto, DirAuto>();
  ax &= memoryAGet16(ds, di);
  if (ax != 0)
    goto loc_11e5c;
  di += 0x0002;
  if (--cx)
    goto loc_11e4e;
  si = pop();
  ax = 0;
  stop(/*inject ret*/);
  return;
loc_11e5c:
  si = pop();
  ax = 0;
  ax--;
  stop(/*inject ret*/);
}
void sub_11e61()
{
  stackguard sg(sp);

  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di + 34);
  memoryASet16(ds, si + 34, ax);
  ax <<= 1;
  ax <<= 1;
  bx = 0x31fe;
  bx += ax;
  ax = memoryAGet16(ds, bx);
  bx += 0x0002;
  memoryASet16(ds, si, ax);
  ax <<= 1;
  dx = 0x000e;
  bp = 0x31d8;
  bp += ax;
  if (!(memoryAGet16(ds, bp) & 0x0001))
    goto loc_11e98;
  dx = 0x000e;
loc_11e98:
  memoryASet16(ds, 0x8e88, dx);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  bx = memoryAGet16(ds, bx);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  memoryASet16(ds, si + 26, 0x0007);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_11ed3()
{
  stackguard sg(sp);

  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x0014);
  memoryASet16(ds, di + 2, 0x1f4d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 12, bp);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 18, ax);
  memoryASet16(ds, di + 22, bx);
  memoryASet16(ds, di + 28, cx);
  memoryASet16(ds, di + 66, dx);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
}
void sub_11f4d()
{
  stackguard sg(sp);

  sub_141b1();
  bx = memoryAGet16(ds, si + 28);
  bx <<= 1;
  ax = memoryAGet16(cs, bx + 7949);
  imul(memoryAGet16(ds, si + 66));
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = (memoryAGet16(ds, si + 20) + ax) >= 0x10000;
  memoryASet16(ds, si + 20, memoryAGet16(ds, si + 20) + ax);
  memoryASet16(ds, si + 18, memoryAGet16(ds, si + 18) + (dx + flags.carry));
  ax = memoryAGet16(cs, bx + 7981);
  imul(memoryAGet16(ds, si + 66));
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = (memoryAGet16(ds, si + 24) + ax) >= 0x10000;
  memoryASet16(ds, si + 24, memoryAGet16(ds, si + 24) + ax);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + (dx + flags.carry));
  ax = memoryAGet16(ds, 0x9198);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  if (memoryAGet16(ds, si + 18) >= 0x0140)
    goto loc_11fb0;
  if (memoryAGet16(ds, si + 22) >= 0x00c0)
    goto loc_11fb0;
  sub_13589();
  sub_142ae();
  if (flags.zero)
    return;
  if (memoryAGet16(ds, 0x9188) != 0x0000)
    goto loc_11fb0;
  ax = 0x0004;
  sub_13c4f();
  memoryASet16(ds, 0x9f04, 0x08b9);
loc_11fb0:
  sub_107c0();
}
void sub_121e9()
{
  stackguard sg(sp);

  sub_141b1();
  di = memoryAGet16(ds, si + 28);
  if (memoryAGet16(ds, di) != 0x0034)
    goto loc_12216;
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, si + 22, ax);
  if (memoryAGet16(ds, 0x991e) == 0x0000)
    goto loc_12210;
  goto loc_147a9;
loc_12210:
  memoryASet16(ds, si + 4, 0x0853);
  return;
loc_12216:
  sub_107c0();
  return;
  //   gap of 9615 bytes
loc_147a9:
  if (memoryAGet16(ds, 0x991e) != 0x0010)
    goto loc_147b6;
  memoryASet16(ds, si + 4, 0x0761);
  return;
loc_147b6:
  memoryASet16(ds, si + 4, 0x0853);
  sub_10ef5();
  cx = ax;
  di = bx;
  push(si);
  si = 0x9f00;
  sub_10ef5();
  si = pop();
  cx -= ax;
  di -= bx;
  bp = ax;
  ax = memoryAGet16(ds, 0x991e);
  imul(cx);
  ax += bp;
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x991e);
  imul(di);
  ax += bx;
  memoryASet16(ds, si + 22, ax);
}
void sub_1246d()
{
  stackguard sg(sp);

  sub_141b1();
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, si + 48);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, si + 50);
  memoryASet16(ds, si + 22, ax);
  if (memoryAGet16(ds, 0x991e) == 0x0000)
    goto loc_1248c;
  goto loc_147a9;
loc_1248c:
  memoryASet16(ds, si + 4, 0x0853);
  if (memoryAGet16(ds, si + 12) == 0x8786)
    goto loc_124c4;
  if (memoryAGet(ds, 0x8fae) == 0x00)
    goto loc_1250a;
  if (memoryAGet16(ds, si + 12) != 0x8626)
    goto loc_1250a;
  memoryASet16(ds, 0x8e88, 0x0015);
  di = 0x12ca;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di + 2);
  memoryASet16(ds, si + 14, ax);
  di += 0x0004;
  memoryASet16(ds, si + 16, di);
  goto loc_1250a;
loc_124c4:
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  bp = 0x132c;
  memoryASet16(ds, di, 0x0030);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 2, 0x28b8);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, si + 18);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= 0x000b;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
loc_1250a:
  return;
  //   gap of 8862 bytes
loc_147a9:
  if (memoryAGet16(ds, 0x991e) != 0x0010)
    goto loc_147b6;
  memoryASet16(ds, si + 4, 0x0761);
  return;
loc_147b6:
  memoryASet16(ds, si + 4, 0x0853);
  sub_10ef5();
  cx = ax;
  di = bx;
  push(si);
  si = 0x9f00;
  sub_10ef5();
  si = pop();
  cx -= ax;
  di -= bx;
  bp = ax;
  ax = memoryAGet16(ds, 0x991e);
  imul(cx);
  ax += bp;
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x991e);
  imul(di);
  ax += bx;
  memoryASet16(ds, si + 22, ax);
}
void sub_125a8()
{
  stackguard sg(sp);

  di = memoryAGet16(ds, si + 68);
  bp = memoryAGet16(ds, di + 10);
  if (bp == si)
    goto loc_12624;
loc_125b2:
  if (memoryAGet16(ds, bp + 4) != 0x0761)
    goto loc_125cd;
  bp = memoryAGet16(ds, bp + 10);
  if (bp != si)
    goto loc_125b2;
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  return;
loc_125cd:
  ax = memoryAGet16(ds, bp + 40);
  bx = memoryAGet16(ds, bp + 42);
  cx = memoryAGet16(ds, bp + 44);
  dx = memoryAGet16(ds, bp + 46);
loc_125dd:
  bp = memoryAGet16(ds, bp + 10);
  if (si == bp)
    goto loc_12617;
  if (memoryAGet16(ds, bp + 4) == 0x0761)
    goto loc_125dd;
  if ((short)ax <= (short)memoryAGet16(ds, bp + 40))
    goto loc_125f7;
  ax = memoryAGet16(ds, bp + 40);
loc_125f7:
  if ((short)bx <= (short)memoryAGet16(ds, bp + 42))
    goto loc_12601;
  bx = memoryAGet16(ds, bp + 42);
loc_12601:
  if ((short)cx >= (short)memoryAGet16(ds, bp + 44))
    goto loc_1260b;
  cx = memoryAGet16(ds, bp + 44);
loc_1260b:
  if ((short)dx >= (short)memoryAGet16(ds, bp + 46))
    goto loc_125dd;
  dx = memoryAGet16(ds, bp + 46);
  goto loc_125dd;
loc_12617:
  memoryASet16(ds, di + 40, ax);
  memoryASet16(ds, di + 42, bx);
  memoryASet16(ds, di + 44, cx);
  memoryASet16(ds, di + 46, dx);
  return;
loc_12624:
  push(di);
  sub_107c0();
  si = pop();
  sub_107c0();
}
void sub_128b8()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x9224) == 0x00)
    goto loc_128c2;
  goto loc_13a2f;
loc_128c2:
  sub_141b1();
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) - 0x000a);
  if ((short)memoryAGet16(ds, si + 22) >= 0)
    goto loc_128cf;
  sub_107c0();
  return;
loc_128cf:
  sub_13589();
  sub_11bea();
  if (flags.zero)
    goto loc_128de;
  ax = memoryAGet16(cs, 0x3da4);
  goto loc_13a36;
loc_128de:
  return;
  //   gap of 4432 bytes
loc_13a2f:
  sub_107c0();
  return;
  //   gap of 3 bytes
loc_13a36:
  stop(/*2*/); // (jmp word ptr [di + 6]) jump Indirect memoryAGet16(ds, di + 6)
}
void sub_128df()
{
  stackguard sg(sp);

  sub_141b1();
  if (memoryAGet16(ds, si + 26) == 0x0000)
    goto loc_128fe;
  if ((short)memoryAGet16(ds, si + 26) >= 0)
    goto loc_1291f;
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  ax = memoryAGet16(ds, si + 26);
  ax &= 0x0003;
  if (ax != 0)
    goto loc_1295e;
  memoryASet16(ds, si + 28, memoryAGet16(ds, si + 28) + 1);
  memoryASet16(ds, si + 28, memoryAGet16(ds, si + 28) & 0x0007);
  goto loc_1295e;
loc_128fe:
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + 0x0008);
  if ((short)memoryAGet16(ds, si + 22) < (short)0x00c8)
    goto loc_12976;
  if (memoryAGet16(ds, 0x9164) == 0x0000)
    goto loc_1291b;
  memoryASet16(ds, 0x9164, memoryAGet16(ds, 0x9164) - 1);
  if (memoryAGet16(ds, 0x9164) != 0)
    goto loc_1291b;
  memoryASet(ds, 0x8fb0, 0xff);
loc_1291b:
  sub_107c0();
  return;
loc_1291f:
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) & 0x0007);
  if (memoryAGet16(ds, si + 26) != 0)
    goto loc_12937;
  ax = 0x00a0;
  ax -= memoryAGet16(ds, si + 18);
  bx = 0x0064;
  bx -= memoryAGet16(ds, si + 22);
  sub_11b90();
  memoryASet16(ds, si + 28, ax);
loc_12937:
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  ax = 0x00a0;
  ax -= memoryAGet16(ds, si + 18);
  imul(ax);
  bx = ax;
  cx = dx;
  ax = 0x0064;
  ax -= memoryAGet16(ds, si + 22);
  imul(ax);
  flags.carry = (ax + bx) >= 0x10000;
  ax += bx;
  dx += cx + flags.carry;
  if (dx != 0)
    goto loc_1295e;
  if (ax >= 0x0190)
    goto loc_1295e;
  memoryASet16(ds, si + 26, 0xffde);
loc_1295e:
  bx = memoryAGet16(ds, si + 28);
  bx <<= 1;
  bx <<= 1;
  bx &= 0x001c;
  ax = memoryAGet16(ds, bx + 12728);
  memoryASet16(ds, si + 18, memoryAGet16(ds, si + 18) + ax);
  ax = memoryAGet16(ds, bx + 12730);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
loc_12976:
  sub_13589();
  sub_142ae();
  if (flags.zero)
    goto loc_129b4;
  ax = memoryAGet16(ds, si);
  dx = 0x0064;
  if (ax == 0x0018)
    goto loc_12990;
  dx = 0x0032;
  if (ax != 0x0060)
    goto loc_129b5;
loc_12990:
  flags.carry = (memoryAGet16(ds, 0x915a) + dx) >= 0x10000;
  memoryASet16(ds, 0x915a, memoryAGet16(ds, 0x915a) + dx);
  memoryASet16(ds, 0x915c, memoryAGet16(ds, 0x915c) + flags.carry);
  memoryASet16(ds, 0x8e88, 0x0004);
  if (memoryAGet16(ds, 0x9164) == 0x0000)
    goto loc_129b1;
  memoryASet16(ds, 0x9164, memoryAGet16(ds, 0x9164) - 1);
  if (memoryAGet16(ds, 0x9164) != 0)
    goto loc_129b1;
  memoryASet(ds, 0x8fb0, 0xff);
loc_129b1:
  sub_107c0();
loc_129b4:
  return;
loc_129b5:
  push(memoryAGet16(ds, si + 34));
  sub_107c0();
  bx = pop();
  bx <<= 1;
  di = memoryAGet16(ds, bx + 12760);
  ax = 0x000f;
  if (!(di & 0x0001))
    goto loc_129cf;
  di--;
  ax = 0x000f;
loc_129cf:
  memoryASet16(ds, 0x8e88, ax);
  push(si);
  callIndirect(di);
  si = pop();
}
void sub_129d7()
{
  stackguard sg(sp);

  if (ax != 0x0044)
    goto loc_129df;
  goto loc_1308c;
loc_129df:
  if (ax != 0x0098)
    goto loc_129e7;
  goto loc_12ca6;
loc_129e7:
  if (ax != 0x0034)
    goto loc_129ef;
  goto loc_13246;
loc_129ef:
  if (ax != 0x002c)
    goto loc_129f7;
  goto loc_12e84;
loc_129f7:
  if (ax != 0x0020)
    goto loc_129ff;
  goto loc_131b6;
loc_129ff:
  if (ax != 0x004c)
    goto loc_12a07;
  goto loc_12f08;
loc_12a07:
  if (ax != 0x003c)
    goto loc_12a0f;
  goto loc_13004;
loc_12a0f:
  if (ax != 0x0038)
    goto loc_12a17;
  goto loc_12f7c;
loc_12a17:
  if (ax != 0x00c0)
    goto loc_12a1f;
  goto loc_12c32;
loc_12a1f:
  if (ax != 0x0090)
    goto loc_12a27;
  goto loc_13126;
loc_12a27:
  if (ax != 0x0048)
    goto loc_12a2f;
  goto loc_12d86;
loc_12a2f:
  if (ax != 0x00b0)
    goto loc_12a37;
  goto loc_12df0;
loc_12a37:
  if (ax != 0x0028)
    goto loc_12a3f;
  goto loc_12d2a;
loc_12a3f:
  if (ax != 0x0094)
    goto loc_12a47;
  goto loc_12bcc;
loc_12a47:
  return;
  //   gap of 388 bytes
loc_12bcc:
  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_12bdc;
  push(si);
  si = memoryAGet16(ds, 0x9136);
  sub_107c0();
  si = pop();
loc_12bdc:
  memoryASet16(ds, 0x9134, 0x0094);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x9136, si);
  memoryASet16(ds, si, 0x0094);
  memoryASet16(ds, si + 2, 0x37df);
  memoryASet16(ds, si + 6, 0x9134);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x0001);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
  return;
loc_12c21:
  di = memoryAGet16(ds, 0x9136);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    goto loc_12c30;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
loc_12c30:
  return;
  //   gap of 1 bytes
loc_12c32:
  if (memoryAGet16(ds, 0x9134) == 0x00c0)
    goto loc_12c21;
  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_12c4a;
  push(si);
  si = memoryAGet16(ds, 0x9136);
  sub_107c0();
  si = pop();
loc_12c4a:
  memoryASet16(ds, 0x9134, 0x00c0);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x9136, si);
  memoryASet16(ds, si, 0x00c0);
  memoryASet16(ds, si + 2, 0x20f7);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet16(ds, si + 6, 0x9134);
  memoryASet16(ds, si + 12, 0xa658);
  memoryASet16(ds, si + 14, 0x0000);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x000e);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
  return;
  //   gap of 1 bytes
loc_12ca6:
  if (memoryAGet16(ds, 0x914c) == 0x0098)
    goto loc_12d19;
  if (memoryAGet16(ds, 0x914c) == 0x0000)
    goto loc_12cbe;
  push(si);
  si = memoryAGet16(ds, 0x914e);
  sub_107c0();
  si = pop();
loc_12cbe:
  if (memoryAGet16(ds, 0x9148) != 0x0044)
    goto loc_12cd4;
  push(si);
  si = memoryAGet16(ds, 0x914a);
  sub_107c0();
  si = pop();
  memoryASet16(ds, 0x9148, 0x0000);
loc_12cd4:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x914c, 0x0098);
  memoryASet16(ds, 0x914e, si);
  memoryASet16(ds, si, 0x0098);
  memoryASet16(ds, si + 2, 0x3801);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x914c);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x000a);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
  return;
loc_12d19:
  di = memoryAGet16(ds, 0x914e);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    goto loc_12d28;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
loc_12d28:
  return;
  //   gap of 1 bytes
loc_12d2a:
  if (memoryAGet16(ds, 0x914c) == 0x0028)
    goto loc_12d19;
  if (memoryAGet16(ds, 0x914c) == 0x0000)
    goto loc_12d41;
  push(si);
  si = memoryAGet16(ds, 0x914e);
  sub_107c0();
  si = pop();
loc_12d41:
  memoryASet16(ds, 0x914c, 0x0028);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x914e, si);
  memoryASet16(ds, si, 0x009c);
  memoryASet16(ds, si + 2, 0x3872);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x914c);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0000);
  memoryASet16(ds, si + 54, 0x0015);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x000c);
  return;
loc_12d86:
  if (memoryAGet16(ds, 0x9148) != 0x0048)
    goto loc_12d90;
  goto loc_12ef8;
loc_12d90:
  if (memoryAGet16(ds, 0x914c) == 0x0048)
    goto loc_12d19;
  bx = 0x9148;
  if (memoryAGet16(ds, bx) == 0x0000)
    goto loc_12daf;
  bx = 0x914c;
  if (memoryAGet16(ds, bx) == 0x0000)
    goto loc_12daf;
  push(si);
  si = memoryAGet16(ds, bx + 2);
  sub_107c0();
  si = pop();
loc_12daf:
  memoryASet16(ds, bx, 0x0048);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, bx + 2, si);
  memoryASet16(ds, si, 0x00a0);
  memoryASet16(ds, si + 2, 0x3900);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, bx);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0000);
  memoryASet16(ds, si + 54, 0x0017);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x001e);
  return;
  //   gap of 1 bytes
loc_12df0:
  if (memoryAGet16(ds, 0x9134) != 0x00b0)
    goto loc_12dfb;
  goto loc_12c21;
loc_12dfb:
  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_12e0b;
  push(si);
  si = memoryAGet16(ds, 0x9136);
  sub_107c0();
  si = pop();
loc_12e0b:
  memoryASet16(ds, 0x9134, 0x00b0);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x9136, si);
  memoryASet16(ds, si, 0x00b0);
  memoryASet16(ds, si + 2, 0x213c);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet16(ds, si + 6, 0x9134);
  bp = 0x110c;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x0014);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
  return;
  //   gap of 17 bytes
loc_12e84:
  if (memoryAGet16(ds, 0x9148) == 0x002c)
    goto loc_12ef8;
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x002c);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x002c);
  memoryASet16(ds, di + 2, 0x221a);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x115a;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += 0x0019;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0013);
  memoryASet16(ds, di + 72, 0xffff);
  return;
loc_12ef8:
  di = memoryAGet16(ds, 0x914a);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    goto loc_12f07;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
loc_12f07:
  return;
loc_12f08:
  if (memoryAGet16(ds, 0x9148) == 0x004c)
    goto loc_12ef8;
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x004c);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x004c);
  memoryASet16(ds, di + 2, 0x229b);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x140c;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += 0x0019;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0000);
  memoryASet16(ds, di + 54, 0x000b);
  memoryASet16(ds, di + 72, 0xffff);
  return;
loc_12f7c:
  if (memoryAGet16(ds, 0x9148) != 0x0038)
    goto loc_12f86;
  goto loc_12ef8;
loc_12f86:
  if (memoryAGet16(ds, 0x9148) != 0x003c)
    goto loc_12f90;
  goto loc_12ef8;
loc_12f90:
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x0038);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x0038);
  memoryASet16(ds, di + 2, 0x2697);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x1342;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += 0x0019;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0001);
  memoryASet16(ds, di + 54, 0x0009);
  memoryASet16(ds, di + 72, 0xffff);
  memoryASet16(ds, 0x8f38, 0xff9c);
  return;
  //   gap of 1 bytes
loc_13004:
  if (memoryAGet16(ds, 0x9148) != 0x0038)
    goto loc_1300e;
  goto loc_12ef8;
loc_1300e:
  if (memoryAGet16(ds, 0x9148) != 0x003c)
    goto loc_13018;
  goto loc_12ef8;
loc_13018:
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x003c);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x003c);
  memoryASet16(ds, di + 2, 0x2697);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x1354;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += 0x0019;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0001);
  memoryASet16(ds, di + 36, 0x0001);
  memoryASet16(ds, di + 54, 0x000d);
  memoryASet16(ds, di + 72, 0xffff);
  memoryASet16(ds, 0x8f38, 0xff9c);
  return;
  //   gap of 1 bytes
loc_1308c:
  if (memoryAGet16(ds, 0x9148) != 0x0044)
    goto loc_13096;
  goto loc_12ef8;
loc_13096:
  if (memoryAGet16(ds, 0x914c) != 0x0098)
    goto loc_130ad;
  push(si);
  si = memoryAGet16(ds, 0x914e);
  sub_107c0();
  si = pop();
  memoryASet16(ds, 0x914c, 0x0000);
loc_130ad:
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x0044);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x0044);
  memoryASet16(ds, di + 2, 0x3835);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x12f8;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0008);
  memoryASet16(ds, di + 72, 0xffff);
  return;
  //   gap of 15 bytes
loc_13126:
  ax = 0x0090;
  sub_13117();
  if (!flags.zero)
    goto loc_13131;
  goto loc_131b3;
loc_13131:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, bp, 0x0090);
  memoryASet16(ds, bp + 2, di);
  memoryASet16(ds, di, 0x0090);
  memoryASet16(ds, di + 2, 0x250b);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, bp);
  cx--;
  cx <<= 1;
  cx <<= 1;
  bp = 0x30a8;
  bp += cx;
  ax = memoryAGet16(ds, bp);
  memoryASet16(ds, di + 48, ax);
  ax = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 50, ax);
  bp = 0x1566;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0000);
  memoryASet16(ds, di + 54, 0x0011);
  memoryASet16(ds, di + 72, 0xffff);
loc_131b3:
  goto loc_13319;
loc_131b6:
  ax = 0x0020;
  sub_13117();
  if (!flags.zero)
    goto loc_131c1;
  goto loc_13243;
loc_131c1:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, bp, 0x0020);
  memoryASet16(ds, bp + 2, di);
  memoryASet16(ds, di, 0x0020);
  memoryASet16(ds, di + 2, 0x237e);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, bp);
  cx--;
  cx <<= 1;
  cx <<= 1;
  bp = 0x30a8;
  bp += cx;
  ax = memoryAGet16(ds, bp);
  memoryASet16(ds, di + 48, ax);
  ax = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 50, ax);
  bp = 0x118e;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0012);
  memoryASet16(ds, di + 72, 0xffff);
loc_13243:
  goto loc_13319;
loc_13246:
  ax = 0x0034;
  sub_13117();
  if (!flags.zero)
    goto loc_13251;
  goto loc_13319;
loc_13251:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, bp, 0x0034);
  memoryASet16(ds, bp + 2, di);
  memoryASet16(ds, di, 0x0034);
  memoryASet16(ds, di + 2, 0x246d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, bp);
  cx--;
  cx <<= 1;
  cx <<= 1;
  bp = 0x30a8;
  bp += cx;
  ax = memoryAGet16(ds, bp);
  memoryASet16(ds, di + 48, ax);
  ax = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 50, ax);
  bp = 0x12da;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0000);
  memoryASet16(ds, di + 54, 0x000f);
  memoryASet16(ds, di + 72, 0xffff);
  if (memoryAGet16(ds, di + 48) == 0x0000)
    goto loc_13319;
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1078e();
  di = pop();
  memoryASet16(ds, si, 0x0040);
  memoryASet16(ds, si + 2, 0x21e9);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet(ds, si + 74, 0xff);
  bp = 0x1366;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  memoryASet16(ds, si + 28, di);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  si = pop();
loc_13319:
  if (memoryAGet16(ds, 0x9134) != 0x0000)
    return;
  push(di);
  sub_12bcc();
  di = pop();
}
void sub_12a48()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x9186, memoryAGet16(ds, 0x9186) + 0x0014);
  memoryASet16(ds, 0x8e88, 0x0012);
  if ((short)memoryAGet16(ds, 0x9186) <= (short)0x0027)
    goto loc_12a60;
  memoryASet16(ds, 0x9186, 0x0027);
loc_12a60:
  memoryASet(ds, 0x8faf, 0xff);
}
void sub_12a6e()
{
  stackguard sg(sp);

  di = 0x9134;
  bp = di;
  ax = 0x007f;
  cx = 0x0007;
loc_12a79:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_12a91;
  bx = memoryAGet16(ds, di + 2);
  dx = memoryAGet16(ds, bx + 52);
  if (dx == memoryAGet16(ds, bx + 36))
    goto loc_12a91;
  if ((short)dx >= (short)ax)
    goto loc_12a91;
  ax = dx;
  bp = di;
loc_12a91:
  di += 0x0004;
  if (--cx)
    goto loc_12a79;
  if (ax == 0x007f)
    return;
  di = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
}
void sub_12aa4()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x9132) >= (short)0x0004)
    return;
  memoryASet16(ds, 0x9132, memoryAGet16(ds, 0x9132) + 1);
}
void sub_12ab2()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x915e) == 0x0002)
    return;
  memoryASet16(ds, 0x915e, memoryAGet16(ds, 0x915e) + 1);
}
void sub_12ad0()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8e88, 0x000b);
  sub_10eb3();
  di = memoryAGet16(ds, 0x9054);
loc_12add:
  ax = memoryAGet16(ds, di);
  if (!(ax & ax))
    goto loc_12afe;
  si = di;
  sub_11689();
  push(di);
  if (ax == 0x0050)
    goto loc_12afb;
  if (ax == 0x0054)
    goto loc_12afb;
  di = si;
  si = 0x8ffe;
  sub_13a33();
loc_12afb:
  di = pop();
  goto loc_12add;
loc_12afe:
  di = memoryAGet16(ds, 0x90a0);
loc_12b02:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_12b17;
  push(memoryAGet16(ds, di + 10));
  if (memoryAGet16(ds, di) != 0x0014)
    goto loc_12b14;
  si = di;
  sub_107c0();
loc_12b14:
  di = pop();
  goto loc_12b02;
loc_12b17:
  di = 0x8e8c;
  ax = 0;
  cx = 0x0010;
  rep_stosw<MemAuto, DirAuto>();
}
void sub_12b22()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9008);
  memoryASet16(ds, 0x91b4, ax);
  ax = memoryAGet16(ds, 0x9006);
  memoryASet16(ds, 0x91b6, ax);
  di = 0x9134;
  bx = 0x91b8;
  cx = 0x000e;
loc_12b37:
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, bx, ax);
  bx += 0x0002;
  memoryASet16(ds, di, 0x0000);
  di += 0x0002;
  if (--cx)
    goto loc_12b37;
  si = 0x8ffe;
  sub_10762();
  sub_12bcc();
  sub_13246();
  sub_13246();
  sub_131b6();
  memoryASet16(ds, di + 52, 0x0002);
  sub_131b6();
  memoryASet16(ds, di + 52, 0x0002);
  sub_12e84();
  memoryASet16(ds, di + 52, 0x0002);
  sub_12ca6();
  memoryASet16(ds, di + 52, 0x0002);
  sub_12c32();
  memoryASet16(ds, di + 52, 0x0002);
}
void sub_12bcc()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_12bdc;
  push(si);
  si = memoryAGet16(ds, 0x9136);
  sub_107c0();
  si = pop();
loc_12bdc:
  memoryASet16(ds, 0x9134, 0x0094);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x9136, si);
  memoryASet16(ds, si, 0x0094);
  memoryASet16(ds, si + 2, 0x37df);
  memoryASet16(ds, si + 6, 0x9134);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x0001);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
}
void sub_12c32()
{
  stackguard sg(sp);

  goto loc_12c32;
loc_12c21:
  di = memoryAGet16(ds, 0x9136);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    goto loc_12c30;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
loc_12c30:
  return;
  //   gap of 1 bytes
loc_12c32:
  if (memoryAGet16(ds, 0x9134) == 0x00c0)
    goto loc_12c21;
  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_12c4a;
  push(si);
  si = memoryAGet16(ds, 0x9136);
  sub_107c0();
  si = pop();
loc_12c4a:
  memoryASet16(ds, 0x9134, 0x00c0);
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x9136, si);
  memoryASet16(ds, si, 0x00c0);
  memoryASet16(ds, si + 2, 0x20f7);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet16(ds, si + 6, 0x9134);
  memoryASet16(ds, si + 12, 0xa658);
  memoryASet16(ds, si + 14, 0x0000);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x000e);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
}
void sub_12ca6()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x914c) == 0x0098)
    goto loc_12d19;
  if (memoryAGet16(ds, 0x914c) == 0x0000)
    goto loc_12cbe;
  push(si);
  si = memoryAGet16(ds, 0x914e);
  sub_107c0();
  si = pop();
loc_12cbe:
  if (memoryAGet16(ds, 0x9148) != 0x0044)
    goto loc_12cd4;
  push(si);
  si = memoryAGet16(ds, 0x914a);
  sub_107c0();
  si = pop();
  memoryASet16(ds, 0x9148, 0x0000);
loc_12cd4:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  memoryASet16(ds, 0x914c, 0x0098);
  memoryASet16(ds, 0x914e, si);
  memoryASet16(ds, si, 0x0098);
  memoryASet16(ds, si + 2, 0x3801);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x914c);
  memoryASet16(ds, si + 52, 0x0000);
  memoryASet16(ds, si + 36, 0x0002);
  memoryASet16(ds, si + 54, 0x000a);
  memoryASet16(ds, si + 72, 0xffff);
  di = si;
  si = pop();
  memoryASet16(ds, 0x9130, 0x0008);
  return;
loc_12d19:
  di = memoryAGet16(ds, 0x914e);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    return;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
}
void sub_12e73()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9148) == 0x0000)
    return;
  push(si);
  si = memoryAGet16(ds, 0x914a);
  sub_107c0();
  si = pop();
}
void sub_12e84()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9148) == 0x002c)
    goto loc_12ef8;
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x002c);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x002c);
  memoryASet16(ds, di + 2, 0x221a);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x115a;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += 0x0019;
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0013);
  memoryASet16(ds, di + 72, 0xffff);
  return;
loc_12ef8:
  di = memoryAGet16(ds, 0x914a);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    return;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
}
void sub_1308c()
{
  stackguard sg(sp);

  goto loc_1308c;
loc_12ef8:
  di = memoryAGet16(ds, 0x914a);
  ax = memoryAGet16(ds, di + 36);
  if ((short)ax <= (short)memoryAGet16(ds, di + 52))
    goto loc_12f07;
  memoryASet16(ds, di + 52, memoryAGet16(ds, di + 52) + 1);
loc_12f07:
  return;
  //   gap of 388 bytes
loc_1308c:
  if (memoryAGet16(ds, 0x9148) != 0x0044)
    goto loc_13096;
  goto loc_12ef8;
loc_13096:
  if (memoryAGet16(ds, 0x914c) != 0x0098)
    goto loc_130ad;
  push(si);
  si = memoryAGet16(ds, 0x914e);
  sub_107c0();
  si = pop();
  memoryASet16(ds, 0x914c, 0x0000);
loc_130ad:
  sub_12e73();
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, 0x9148, 0x0044);
  memoryASet16(ds, 0x914a, di);
  memoryASet16(ds, di, 0x0044);
  memoryASet16(ds, di + 2, 0x3835);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x9148);
  bp = 0x12f8;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0008);
  memoryASet16(ds, di + 72, 0xffff);
}
// INJECT: Error: cannot inject zero flag in sub_13117()!
// INJECT: Error: cannot inject zero flag in sub_13117()!
void sub_13117()
{
  stackguard sg(sp);

  sub_1100e();
  if (!flags.zero)
    goto loc_13122;
  ax = 0xffff;
  stop(/*inject ret*/);
  return;
loc_13122:
  ax = 0;
  stop(/*inject ret*/);
}
void sub_131b6()
{
  stackguard sg(sp);

  ax = 0x0020;
  sub_13117();
  if (!flags.zero)
    goto loc_131c1;
  goto loc_13243;
loc_131c1:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, bp, 0x0020);
  memoryASet16(ds, bp + 2, di);
  memoryASet16(ds, di, 0x0020);
  memoryASet16(ds, di + 2, 0x237e);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, bp);
  cx--;
  cx <<= 1;
  cx <<= 1;
  bp = 0x30a8;
  bp += cx;
  ax = memoryAGet16(ds, bp);
  memoryASet16(ds, di + 48, ax);
  ax = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 50, ax);
  bp = 0x118e;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 26, 0x0000);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0002);
  memoryASet16(ds, di + 54, 0x0012);
  memoryASet16(ds, di + 72, 0xffff);
loc_13243:
  goto loc_13319;
  //   gap of 211 bytes
loc_13319:
  if (memoryAGet16(ds, 0x9134) != 0x0000)
    return;
  push(di);
  sub_12bcc();
  di = pop();
}
void sub_13246()
{
  stackguard sg(sp);

  ax = 0x0034;
  sub_13117();
  if (!flags.zero)
    goto loc_13251;
  goto loc_13319;
loc_13251:
  push(si);
  sub_11022();
  di = 0x8ffe;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, bp, 0x0034);
  memoryASet16(ds, bp + 2, di);
  memoryASet16(ds, di, 0x0034);
  memoryASet16(ds, di + 2, 0x246d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, bp);
  cx--;
  cx <<= 1;
  cx <<= 1;
  bp = 0x30a8;
  bp += cx;
  ax = memoryAGet16(ds, bp);
  memoryASet16(ds, di + 48, ax);
  ax = memoryAGet16(ds, bp + 2);
  memoryASet16(ds, di + 50, ax);
  bp = 0x12da;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
  ax = memoryAGet16(ds, 0x9f12);
  ax += memoryAGet16(ds, di + 48);
  memoryASet16(ds, di + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, di + 50);
  memoryASet16(ds, di + 22, ax);
  memoryASet16(ds, di + 52, 0x0000);
  memoryASet16(ds, di + 36, 0x0000);
  memoryASet16(ds, di + 54, 0x000f);
  memoryASet16(ds, di + 72, 0xffff);
  if (memoryAGet16(ds, di + 48) == 0x0000)
    goto loc_13319;
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1078e();
  di = pop();
  memoryASet16(ds, si, 0x0040);
  memoryASet16(ds, si + 2, 0x21e9);
  memoryASet16(ds, si + 4, 0x0853);
  memoryASet(ds, si + 74, 0xff);
  bp = 0x1366;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  memoryASet16(ds, si + 28, di);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  si = pop();
loc_13319:
  if (memoryAGet16(ds, 0x9134) != 0x0000)
    return;
  push(di);
  sub_12bcc();
  di = pop();
}
void sub_13319()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9134) != 0x0000)
    return;
  push(di);
  sub_12bcc();
  di = pop();
}
void sub_13326()
{
  stackguard sg(sp);

  push(si);
  push(di);
  memoryASet16(ds, 0x8e8a, 0x0006);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  memoryASet16(ds, si, 0x000c);
  memoryASet16(ds, si + 2, 0x3998);
  memoryASet16(ds, si + 4, dx);
  memoryASet16(ds, si + 18, ax);
  memoryASet16(ds, si + 22, bx);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  di = pop();
  si = pop();
}
void sub_13589()
{
  stackguard sg(sp);

  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
}
void sub_135eb()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9162) != 0x0000)
    return;
  di = 0x9134;
  si = 0x916a;
  cx = 0x0007;
loc_135fb:
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  if (!(ax & ax))
    goto loc_13609;
  bx = memoryAGet16(ds, di + 2);
  ax = memoryAGet16(ds, bx + 52);
loc_13609:
  memoryASet16(ds, si + 2, ax);
  si += 0x0004;
  di += 0x0004;
  if (--cx)
    goto loc_135fb;
}
void sub_135f2()
{
  stackguard sg(sp);

  di = 0x9134;
  si = 0x916a;
  cx = 0x0007;
loc_135fb:
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  if (!(ax & ax))
    goto loc_13609;
  bx = memoryAGet16(ds, di + 2);
  ax = memoryAGet16(ds, bx + 52);
loc_13609:
  memoryASet16(ds, si + 2, ax);
  si += 0x0004;
  di += 0x0004;
  if (--cx)
    goto loc_135fb;
}
void sub_13615()
{
  stackguard sg(sp);

  si = 0xd274;
  bx = memoryAGet16(ds, 0x9192);
  cx = memoryAGet16(ds, 0x9190);
loc_13620:
  ax = memoryAGet16(ds, si);
    if ((short)ax < 0)                         //js short loc_13643
    goto loc_13643;
  if ((short)bx <= (short)ax)
    goto loc_1363e;
  if ((short)cx > (short)ax)
    goto loc_1363e;
  bx = memoryAGet16(ds, si + 2);  // bx = sprite/object index??
  push(si);
  sub_10fb4();
  si = pop();
  bx = memoryAGet16(ds, 0x9192);
  cx = memoryAGet16(ds, 0x9190);
loc_1363e:
  si += 0x000e;
  goto loc_13620;
loc_13643:
  if ((short)cx >= (short)bx)
    return;
  memoryASet16(ds, 0x9192, cx);
  si = 0xda9e;
  bx = memoryAGet16(ds, 0x9194);
  cx = memoryAGet16(ds, 0x9190);
loc_13656:
  ax = memoryAGet16(ds, si);
  if ((short)ax < 0)
    goto loc_13679;
  if ((short)bx <= (short)ax)
    goto loc_13674;
  if ((short)cx > (short)ax)
    goto loc_13674;
  bx = memoryAGet16(ds, si + 2);
  push(si);
  sub_10fd2();
  si = pop();
  bx = memoryAGet16(ds, 0x9194);
  cx = memoryAGet16(ds, 0x9190);
loc_13674:
  si += 0x000e;
  goto loc_13656;
loc_13679:
  if ((short)cx >= (short)bx)
    return;
  memoryASet16(ds, 0x9194, cx);
}
void sub_13682()
{
  stackguard sg(sp);

  si = memoryAGet16(ds, 0x8fbc);
  sub_136fc();
  si = memoryAGet16(ds, 0x9054);
  sub_136fc();
  si = memoryAGet16(ds, 0x9008);
  al = memoryAGet(ds, 0x8f5b);
  memoryASet(ds, 0x8fae, al);
  memoryASet(ds, 0x8f5b, 0x00);
  sub_136fc();
  si = memoryAGet16(ds, 0x90a0);
  sub_136fc();
  si = memoryAGet16(ds, 0x90ec);
  sub_136fc();
  si = memoryAGet16(ds, 0x8fbc);
  sub_1370b();
  si = memoryAGet16(ds, 0x9008);
  sub_1370b();
  si = memoryAGet16(ds, 0x9054);
  sub_1370b();
  si = memoryAGet16(ds, 0x90a0);
  sub_1370b();
  si = memoryAGet16(ds, 0x90ec);
  sub_1370b();
  si = 0x8e8c;
  cx = 0x0008;
loc_136d9:
  ax = memoryAGet16(ds, si);
  if (!(ax & ax))
    goto loc_136f6;
  di = memoryAGet16(ds, 0x9054);
loc_136e3:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_136f2;
  if (ax == memoryAGet16(ds, di + 54))
    goto loc_136f6;
  di = memoryAGet16(ds, di + 10);
  goto loc_136e3;
loc_136f2:
  memoryASet16(ds, si, 0x0000);
loc_136f6:
  si += 0x0004;
  if (--cx)
    goto loc_136d9;
}
void sub_136fc()
{
  stackguard sg(sp);

loc_136fc:
  if (memoryAGet16(ds, si) == 0x0000)
    return;
  push(memoryAGet16(ds, si + 10));
  callIndirect(memoryAGet16(ds, si + 2));
  si = pop();
  goto loc_136fc;
}
void sub_1370b()
{
  stackguard sg(sp);

loc_1370b:
  if (memoryAGet16(ds, si) == 0x0000)
    return;
  push(memoryAGet16(ds, si + 10));
  callIndirect(memoryAGet16(ds, si + 4));
  si = pop();
  goto loc_1370b;
}
void sub_1371a()
{
  stackguard sg(sp);

loc_1371a:
  if (memoryAGet16(ds, si) == 0x0000)
    return;
  push(memoryAGet16(ds, si + 10));
  if (memoryAGet(ds, si + 74) != 0x00)
    goto loc_1372d;
  sub_107a0();
  goto loc_13739;
loc_1372d:
  if (memoryAGet(ds, si + 75) != 0x00)
    goto loc_13739;
  ax = memoryAGet16(ds, 0xfcfe);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) - ax);
loc_13739:
  si = pop();
  goto loc_1371a;
}
void sub_1373d()
{
  stackguard sg(sp);

  si = memoryAGet16(ds, 0x9054);
  cx = 0;
loc_13743:
  ax = memoryAGet16(ds, si);
  if (!(ax & ax))
    goto loc_1375b;
  if (ax == 0x0050)
    goto loc_13754;
  if (ax == 0x0054)
    goto loc_13754;
  cx++;
loc_13754:
  sub_11689();
  si = di;
  goto loc_13743;
loc_1375b:
  memoryASet16(ds, 0x8f32, cx);
}
void sub_13760()
{
  stackguard sg(sp);

loc_13760:
  if (memoryAGet16(ds, si) == 0x0000)
    return;
  push(memoryAGet16(ds, si + 10));
  sub_107a0();
  si = pop();
  goto loc_13760;
}
void sub_1376f()
{
  stackguard sg(sp);

  di = memoryAGet16(ds, 0x90a0);
loc_13773:
  if (memoryAGet16(ds, di) == 0x0000)
    return;
  if (memoryAGet16(ds, di) != 0x0040)
    goto loc_13782;
  if (si == memoryAGet16(ds, di + 28))
    return;
loc_13782:
  di = memoryAGet16(ds, di + 10);
  goto loc_13773;
}
void sub_13788()
{
  stackguard sg(sp);

  push(di);
  if (memoryAGet16(ds, si) != 0x0034)
    goto loc_1379d;
  sub_1376f();
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_1379d;
  push(si);
  si = di;
  sub_107c0();
  si = pop();
loc_1379d:
  di = memoryAGet16(ds, si + 6);
  memoryASet16(ds, di, 0x0000);
  sub_107c0();
  si = pop();
}
void sub_137a9()
{
  stackguard sg(sp);

  push(di);
  if (memoryAGet16(ds, si) != 0x0034)
    goto loc_137be;
  sub_1376f();
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_137be;
  push(si);
  si = di;
  sub_107a0();
  si = pop();
loc_137be:
  di = memoryAGet16(ds, si + 6);
  memoryASet16(ds, di, 0x0000);
  sub_107a0();
  di = pop();
}
void sub_137ca()
{
  stackguard sg(sp);

  goto loc_137ca;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 508 bytes
loc_137ca:
  sub_141b1();
  di = memoryAGet16(ds, si + 68);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  goto loc_13589;
}
void sub_137df()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x8e80) == 0x0000)
    goto loc_137e7;
  return;
loc_137e7:
  if (memoryAGet(ds, 0x8fae) == 0x00)
    return;
  ax = 0x0000;
  bx = 0xfff7;
  cx = 0x0000;
  dx = 0xfffa;
  bp = 0x12b8;
  sub_145f4();
}
void sub_13835()
{
  stackguard sg(sp);

  sub_141b1();
  ax = memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, si + 22, ax);
  if (memoryAGet16(ds, 0x991e) == 0x0000)
    goto loc_1384e;
  goto loc_147a9;
loc_1384e:
  memoryASet16(ds, si + 4, 0x0853);
  if (memoryAGet(ds, 0x8fae) == 0x00)
    goto loc_13871;
  memoryASet16(ds, si + 14, 0x0001);
  ax = 0x0000;
  bx = 0x0009;
  cx = 0x0000;
  dx = 0x0012;
  bp = 0x12c4;
  sub_145f4();
loc_13871:
  return;
  //   gap of 3895 bytes
loc_147a9:
  if (memoryAGet16(ds, 0x991e) != 0x0010)
    goto loc_147b6;
  memoryASet16(ds, si + 4, 0x0761);
  return;
loc_147b6:
  memoryASet16(ds, si + 4, 0x0853);
  sub_10ef5();
  cx = ax;
  di = bx;
  push(si);
  si = 0x9f00;
  sub_10ef5();
  si = pop();
  cx -= ax;
  di -= bx;
  bp = ax;
  ax = memoryAGet16(ds, 0x991e);
  imul(cx);
  ax += bp;
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x991e);
  imul(di);
  ax += bx;
  memoryASet16(ds, si + 22, ax);
}
void sub_13998()
{
  stackguard sg(sp);

  sub_141b1();
}
void sub_139ee()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x9224) != 0x00)
    goto loc_13a2f;
  sub_141b1();
  ax = memoryAGet16(ds, si + 28);
  memoryASet16(ds, si + 18, memoryAGet16(ds, si + 18) + ax);
  if (memoryAGet16(ds, si + 18) >= 0x0138)
    goto loc_13a12;
  ax = memoryAGet16(ds, si + 32);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  if (memoryAGet16(ds, si + 22) < 0x00c0)
    goto loc_13a16;
loc_13a12:
  sub_107c0();
  return;
loc_13a16:
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  sub_11ccc();
  if (flags.zero)
    goto loc_13a2e;
  ax = memoryAGet16(ds, si + 52);
  ax += memoryAGet16(cs, 0x3daa);
  sub_107c0();
  goto loc_13a36;
loc_13a2e:
  return;
loc_13a2f:
  sub_107c0();
  return;
  //   gap of 3 bytes
loc_13a36:
  stop(/*2*/); // (jmp word ptr [di + 6]) jump Indirect memoryAGet16(ds, di + 6)
}
void sub_13a33()
{
  stackguard sg(sp);

  ax = 0x007f;
  stop(/*2*/); // (jmp word ptr [di + 6]) jump Indirect memoryAGet16(ds, di + 6)
}
void sub_13a36()
{
  stackguard sg(sp);

  stop(/*2*/); // (jmp word ptr [di + 6]) jump Indirect memoryAGet16(ds, di + 6)
}
void sub_13a39()
{
  stackguard sg(sp);

  push(di);
  di = memoryAGet16(ds, di + 68);
  bx = di;
loc_13a3f:
  memoryASet16(ds, bx + 4, 0x08b9);
  if (memoryAGet16(ds, bx + 70) == 0x0000)
    goto loc_13a4f;
  bx = memoryAGet16(ds, bx + 70);
  goto loc_13a3f;
loc_13a4f:
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*ja*/))
    goto loc_13a8c;
  push(memoryAGet16(ds, di + 70));
loc_13a57:
  bx = pop();
  if (!(bx & bx))
    goto loc_13a89;
  if (stop(/*72*/))
    goto loc_13a7d;
  push(bx);
  push(si);
  si = bx;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13a76;
  bp = 0x124c;
loc_13a76:
  dx = 0x0853;
  sub_13326();
  bx = pop();
loc_13a7d:
  push(memoryAGet16(ds, bx + 70));
  push(si);
  si = bx;
  sub_107c0();
  si = pop();
  goto loc_13a57;
loc_13a89:
  sub_13ab2();
loc_13a8c:
  di = pop();
}
void sub_13a99()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, si) == 0x0000)
    return;
  if (memoryAGet16(ds, si) == 0x0008)
    return;
  sub_107c0();
}
void sub_13aa7()
{
  stackguard sg(sp);

  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_13ab2;
  return;
loc_13ab2:
  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13ac5;
  bp = 0x124c;
loc_13ac5:
  dx = 0x0853;
  sub_13326();
  ax = memoryAGet16(ds, di + 54);
  if (!(ax & ax))
    goto loc_13b41;
  bx = 0x8e8c;
  cx = 0x0008;
loc_13ad8:
  if (ax == memoryAGet16(ds, bx))
    goto loc_13ae3;
  bx += 0x0004;
  if (--cx)
    goto loc_13ad8;
  goto loc_13b41;
loc_13ae3:
  memoryASet16(ds, bx + 2, memoryAGet16(ds, bx + 2) - 1);
  if (memoryAGet16(ds, bx + 2) != 0)
    goto loc_13b41;
  memoryASet16(ds, bx, 0x0000);
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  bx = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13b0c;
  bx = 0x11b4;
  memoryASet16(ds, si, 0x0018);
loc_13b0c:
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  sub_14191();
  memoryASet16(ds, si + 28, ax);
  si = pop();
loc_13b41:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  push(si);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_13ab2()
{
  stackguard sg(sp);

  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13ac5;
  bp = 0x124c;
loc_13ac5:
  dx = 0x0853;
  sub_13326();
  ax = memoryAGet16(ds, di + 54);
  if (!(ax & ax))
    goto loc_13b41;
  bx = 0x8e8c;
  cx = 0x0008;
loc_13ad8:
  if (ax == memoryAGet16(ds, bx))
    goto loc_13ae3;
  bx += 0x0004;
  if (--cx)
    goto loc_13ad8;
  goto loc_13b41;
loc_13ae3:
  memoryASet16(ds, bx + 2, memoryAGet16(ds, bx + 2) - 1);
  if (memoryAGet16(ds, bx + 2) != 0)
    goto loc_13b41;
  memoryASet16(ds, bx, 0x0000);
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  bx = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13b0c;
  bx = 0x11b4;
  memoryASet16(ds, si, 0x0018);
loc_13b0c:
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  sub_14191();
  memoryASet16(ds, si + 28, ax);
  si = pop();
loc_13b41:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  push(si);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_13b76()
{
  stackguard sg(sp);

  memoryASet16(ds, di + 4, 0x3bdf);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_13b81;
  return;
loc_13b81:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  ax = memoryAGet16(ds, di + 48);
  ax++;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax += memoryAGet16(ds, di + 18);
  bx = memoryAGet16(ds, di + 50);
  bx++;
  bx <<= 1;
  bx <<= 1;
  bx <<= 1;
  bx += memoryAGet16(ds, di + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bp = 0x124c;
  dx = 0x0853;
  sub_13326();
  push(si);
  bx = memoryAGet16(ds, di + 56);
  bp = memoryAGet16(ds, di + 16);
  si = memoryAGet16(ds, di + 50);
loc_13bbe:
  cx = memoryAGet16(ds, di + 48);
  cx++;
  dx = bx + 0x28;
loc_13bc5:
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, bx, ax);
  bx += 0x0002;
  bp += 0x0002;
  if (--cx)
    goto loc_13bc5;
  bx = dx;
  si--;
  if ((short)si >= 0)
    goto loc_13bbe;
  si = di;
  sub_107c0();
  si = pop();
}
void sub_13bdf()
{
  stackguard sg(sp);

  memoryASet16(ds, si + 4, 0x0761);
  ax = memoryAGet16(ds, si + 48);
  ax++;
  bx = memoryAGet16(ds, si + 50);
  bx++;
  dx = memoryAGet16(ds, si + 22);
  dx -= memoryAGet16(ds, 0x9190);
  cx = memoryAGet16(ds, si + 18);
  cx >>= 1;
  push(si);
  si = memoryAGet16(ds, si + 12);
  sub_10963();
  si = pop();
}
void sub_13c01()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9164) != 0x0000)
    return;
  memoryASet(ds, 0x9224, 0xff);
  memoryASet16(ds, 0x9186, 0x0000);
  memoryASet(ds, 0x8faf, 0xff);
  memoryASet16(ds, 0x8e88, 0x0006);
  memoryASet16(ds, 0x8e8a, 0x0006);
  memoryASet16(ds, 0x8e80, 0x0001);
  memoryASet16(ds, 0x8e84, 0x0000);
  bp = 0x1264;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, 0x9f0c, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, 0x9f0e, ax);
  bp += 0x0004;
  memoryASet16(ds, 0x9f10, bp);
  memoryASet16(ds, 0x9f04, 0x0853);
}
void sub_13c4f()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x8f56) != 0x00)
    return;
  if (memoryAGet16(ds, 0x9164) != 0x0000)
    return;
  if (memoryAGet(ds, 0x9223) == 0x00)
    goto loc_13c66;
  ax >>= 1;
loc_13c66:
  memoryASet(ds, 0x8faf, 0xff);
  memoryASet16(ds, 0x9186, memoryAGet16(ds, 0x9186) - ax);
  if (stop(/*ja*/))
    return;
  sub_13c01();
}
void sub_13c75()
{
  stackguard sg(sp);

  sub_16058();
  memoryASet(ds, 0x8f54, 0x00);
  memoryASet16(ds, 0x8e6e, 0x0001);
  memoryASet(ds, 0x8f55, 0x00);
  memoryASet(ds, 0x8f56, 0x00);
  memoryASet16(ss, 0x0010, 0x00bf);
  sub_1426a();
  memoryASet16(ds, 0x8e70, 0x0001);
loc_13c9d:
  sp = memoryAGet16(ds, 0x8e6a);
  sub_10d5f();
  memoryASet(ds, 0x8f58, 0x00);
  memoryASet(ds, 0x8f59, 0x00);
  memoryASet(ds, 0x8f5b, 0x00);
  memoryASet16(ds, 0x8e88, 0x0000);
  memoryASet16(ds, 0x8e8a, 0x0000);
  sub_15863();
  sub_15b21();
  sub_10d5f();
  memoryASet16(ds, 0x991c, 0x0001);
  memoryASet(ds, 0x3550, 0x31);
  sub_15cc5();
  sub_11827();
  sub_11b43();
  memoryASet(ds, 0x3727, 0x31);
  if (memoryAGet(ds, 0x8f5d) != 0x00)
    goto loc_13ced;
  memoryASet(ds, 0x3727, 0x32);
loc_13ced:
  si = 0x3715;
  memoryASet(ds, 0x374e, 0xff);
  sub_15926();
  memoryASet(ds, 0x374e, 0x00);
  sub_10d5f();
  if (memoryAGet(ds, 0x8f54) == 0x00)
    goto loc_13d0d;
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
loc_13d0d:
  sub_10985();
  sub_1080f();
  sub_10a2f();
  sub_10e2b();
  sub_10d81();
  memoryASet(ds, 0x8f59, 0x00);
  memoryASet(ds, 0x8f5b, 0x00);
loc_13d26:
  memoryASet16(ds, 0x919c, memoryAGet16(ds, 0x919c) + 1);
  ax = memoryAGet16(ds, 0x919c);
  ax &= 0x0003;
  if (ax != 0)
    goto loc_13d47;
  ax = memoryAGet16(ds, 0x91ac);
  memoryASet16(ds, 0x8eb0, ax);
  ax = memoryAGet16(ds, 0x91ac);
  memoryASet16(ds, 0x8eb2, ax);
  memoryASet16(ds, 0x8eb2, memoryAGet16(ds, 0x8eb2) + 1);
  memoryASet16(ds, 0x91ac, memoryAGet16(ds, 0x91ac) + 0x0002);
loc_13d47:
  sub_10985();
  memoryASet16(ds, 0x919a, 0x0001);
  sub_10e4d();
  sub_10ba5();
  sub_1373d();
  sub_10ff0();
  sub_13682();
  sub_1080f();
  sub_14675();
  sub_10a95();
  sub_13615();
  al = memoryAGet(ds, 0x8f58);
  if (al & al)
    goto loc_13d75;
  goto loc_13e1a;
loc_13d75:
  memoryASet(ds, 0x8f58, 0x00);
  si = 0x3d8f;
  memoryASet(cs, 0x3d9b, al);
loc_13d81:
  if (al == memoryAGet(cs, si))
    goto loc_13d8b;
  si += 0x0003;
  goto loc_13d81;
loc_13d8b:
  stop(/*2*/); // (jmp word ptr cs:[si + 1]) jump Indirect memoryAGet16(cs, si + 1)
  //   gap of 139 bytes
loc_13e1a:
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcfe, ax);
  ax = memoryAGet16(ds, 0x919a);
  memoryASet16(ds, 0xfce2, ax);
  ax = memoryAGet16(ds, 0xfce2);
  if (ax == memoryAGet16(ds, 0x918c))
    goto loc_13e46;
  memoryASet16(ds, 0x91a0, memoryAGet16(ds, 0x91a0) + 1);
  if ((short)memoryAGet16(ds, 0x91a0) < (short)0x0023)
    goto loc_13e4c;
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) << 1);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, 0x919a, ax);
  goto loc_13e4c;
loc_13e46:
  memoryASet16(ds, 0x91a0, 0x0000);
loc_13e4c:
  ax = memoryAGet16(ds, 0x9196);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, 0x918e);
  memoryASet16(ds, 0xfcea, ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcee, ax);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) - ax);
  ax = memoryAGet16(ds, 0x91a8);
  if ((short)memoryAGet16(ds, 0xfcee) >= (short)ax)
    goto loc_13e82;
  ax = memoryAGet16(ds, 0x91a8);
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) - ax);
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) + ax);
  ax = memoryAGet16(ds, 0x91a8);
  memoryASet16(ds, 0xfcee, ax);
loc_13e82:
  ax = memoryAGet16(ds, 0x91aa);
  if ((short)memoryAGet16(ds, 0xfcee) <= (short)ax)
    goto loc_13e9f;
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) + ax);
  ax = memoryAGet16(ds, 0x91aa);
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) - ax);
  ax = memoryAGet16(ds, 0x91aa);
  memoryASet16(ds, 0xfcee, ax);
loc_13e9f:
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) - ax);
  if ((short)memoryAGet16(ds, 0xfce6) < 0)
    goto loc_13ebb;
  if ((short)memoryAGet16(ds, 0xfce6) < (short)0x0010)
    goto loc_13ec5;
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) - 0x0010);
  memoryASet16(ds, 0xfcea, memoryAGet16(ds, 0xfcea) + 0x0028);
  goto loc_13ec5;
loc_13ebb:
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + 0x0010);
  memoryASet16(ds, 0xfcea, memoryAGet16(ds, 0xfcea) - 0x0028);
loc_13ec5:
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, 0x9198, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, 0x9196, ax);
  ax = memoryAGet16(ds, 0xfcea);
  memoryASet16(ds, 0x918e, ax);
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, 0x9190, ax);
  ax = memoryAGet16(ds, 0x91aa);
  if (memoryAGet16(ds, 0xfcfe) != ax)
    goto loc_13eed;
  if (memoryAGet(ds, 0x8f59) & 0x02)
    goto loc_13ef4;
loc_13eed:
  ax = memoryAGet16(ds, 0x91ae);
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) + ax);
loc_13ef4:
  ax = memoryAGet16(ds, 0x91aa);
  if ((short)memoryAGet16(ds, 0xfcee) > (short)ax)
    goto loc_13f03;
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, 0x91aa, ax);
loc_13f03:
  sub_10a2f();
  sub_10d81();
  if (memoryAGet(ds, 0x8f5c) != 0x00)
    goto loc_13f13;
  goto loc_13faa;
loc_13f13:
  memoryASet(ds, 0x8f5c, 0x00);
  memoryASet16(ds, 0x9132, 0x0001);
  memoryASet16(ds, 0x9186, 0x0027);
  memoryASet(ds, 0x8faf, 0xff);
  memoryASet16(ds, 0x918a, memoryAGet16(ds, 0x918a) - 1);
  sub_10e91();
  if (memoryAGet16(ds, 0x918a) != 0x0000)
    goto loc_13f9a;
  sub_10d5f();
  sub_159c8();
  sub_10d5f();
  memoryASet16(ds, 0x91b0, memoryAGet16(ds, 0x91b0) - 1);
  if (memoryAGet16(ds, 0x91b0) == 0)
    goto loc_13f7b;
  sub_15c0f();
  if (flags.zero)
    goto loc_13f7b;
  memoryASet16(ds, 0x918a, 0x0003);
  sub_10e91();
  memoryASet16(ds, 0x9152, 0x0000);
  memoryASet16(ds, 0x9154, 0x0000);
  di = 0x921c;
  cx = 0x0007;
  al = 0;
  rep_stosb<MemAuto, DirAuto>();
  memoryASet16(ds, 0x9156, 0x0000);
  memoryASet16(ds, 0x9158, 0x0000);
  sub_10e6f();
  goto loc_13f9a;
loc_13f7b:
  si = 0x3729;
  cx = 0x001e;
  sub_15926();
  bx = memoryAGet16(ds, 0x8e7a);
  memoryASet(ds, bx + 36701, 0x00);
  bx ^= 0x0001;
  if (memoryAGet(ds, bx + 36701) != 0x00)
    goto loc_13f9a;
  goto loc_13c9d;
loc_13f9a:
  sub_11a62();
  if (memoryAGet(ds, 0x8f54) == 0x00)
    goto loc_13faa;
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
loc_13faa:
  if (memoryAGet16(ds, 0x9164) == 0x0000)
    goto loc_13fb4;
  goto loc_13d26;
loc_13fb4:
  if (memoryAGet(ds, 0x8fb0) != 0x00)
    goto loc_13fc8;
  if (memoryAGet(ds, 0x8f61) == 0x00)
    goto loc_13fc5;
  goto loc_140a7;
loc_13fc5:
  goto loc_13d26;
loc_13fc8:
  ah = 0x01;
  interrupt(0x80);
  if ((short)memoryAGet16(ds, 0x9190) > (short)0x01e0)
    goto loc_1400d;
  ax = memoryAGet16(ds, 0x8eac);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, 0x8f4a, ax);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + 0x0190);
  if (memoryAGet16(ds, 0x915c) != 0x0000)
    goto loc_1403e;
  ax = memoryAGet16(ds, 0x915a);
  if ((short)memoryAGet16(ds, 0xfce6) <= (short)ax)
    goto loc_1403e;
  sub_14191();
  ax &= 0x0003;
  dx = 0x0032;
  mul(dx);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, 0x915a, ax);
  goto loc_1403e;
loc_1400d:
  ax = memoryAGet16(ds, 0x8eae);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, 0x8f4a, ax);
  if (memoryAGet16(ds, 0x915c) != 0x0000)
    goto loc_1403e;
  ax = memoryAGet16(ds, 0x915a);
  if ((short)memoryAGet16(ds, 0xfce6) <= (short)ax)
    goto loc_1403e;
  sub_14191();
  ax &= 0x0003;
  dx = 0x0032;
  mul(dx);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, 0x915a, ax);
loc_1403e:
  memoryASet(ds, 0x9223, 0x00);
  memoryASet(ds, 0x8fb1, 0x00);
  if ((short)memoryAGet16(ds, 0x9190) > (short)0x03c0)
    goto loc_14078;
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14078;
  memoryASet(ds, 0x8fb1, 0xff);
  if (memoryAGet16(ds, 0x8e70) != 0x0002)
    goto loc_14078;
  bx = memoryAGet16(ds, 0x8e7a);
  bx ^= 0x0001;
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_14078;
  if (memoryAGet(ds, bx + 36703) == 0x00)
    goto loc_1407e;
loc_14078:
  sub_14a69();
  sub_10e91();
loc_1407e:
  memoryASet(ds, 0x8fb0, 0x00);
  if (memoryAGet16(ds, 0x9162) == 0x0000)
    goto loc_1408d;
  sub_12b22();
loc_1408d:
  if (memoryAGet(ds, 0x8f61) != 0x00)
    goto loc_140a7;
  if (memoryAGet(ds, 0x8f54) != 0x00)
    goto loc_1409e;
  goto loc_13d26;
loc_1409e:
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
  goto loc_13d26;
loc_140a7:
  memoryASet(ds, 0x8f61, 0x00);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_140cb;
loc_140b3:
  si = memoryAGet16(ds, 0x9008);
  if (memoryAGet16(ds, si) == 0x0000)
    goto loc_140c1;
  sub_137a9();
  goto loc_140b3;
loc_140c1:
  sub_13319();
  sub_135eb();
  memoryASet16(ds, 0x91b0, memoryAGet16(ds, 0x91b0) + 1);
loc_140cb:
  bx = memoryAGet16(ds, 0x8e7a);
  bx ^= 0x0001;
  if (memoryAGet(ds, bx + 36701) == 0x00)
    goto loc_14116;
  if (memoryAGet(ds, bx + 36703) != 0x00)
    goto loc_14116;
  bx ^= 0x0001;
  memoryASet(ds, bx + 36703, 0xff);
  sub_118f5();
  si = memoryAGet16(ds, 0x9054);
  sub_13760();
  si = memoryAGet16(ds, 0x90ec);
  sub_13760();
  si = memoryAGet16(ds, 0x90a0);
  sub_13760();
  sub_11a65();
  if (memoryAGet(ds, 0x8f54) != 0x00)
    goto loc_1410d;
  goto loc_13d26;
loc_1410d:
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
  goto loc_13d26;
loc_14116:
  sub_10d5f();
  sub_118f5();
  si = memoryAGet16(ds, 0x9054);
  sub_13760();
  si = memoryAGet16(ds, 0x90ec);
  sub_13760();
  si = memoryAGet16(ds, 0x90a0);
  sub_13760();
  memoryASet16(ds, 0x991c, memoryAGet16(ds, 0x991c) + 1);
  if ((short)memoryAGet16(ds, 0x991c) < (short)0x0006)
    goto loc_14146;
  memoryASet16(ds, 0x991c, 0x0001);
  memoryASet16(ds, 0x991a, memoryAGet16(ds, 0x991a) + 1);
loc_14146:
  ax = memoryAGet16(ds, 0x991c);
  ax += 0x0030;
  memoryASet(ds, 0x3550, al);
  sub_15cc5();
  sub_1193c();
  if (memoryAGet16(ds, 0x9162) == 0x0000)
    goto loc_1415f;
  sub_12b22();
loc_1415f:
  sub_11b43();
  memoryASet(ds, 0x8f5f, 0x00);
  memoryASet(ds, 0x8f60, 0x00);
  sub_11a62();
  sub_10985();
  sub_1080f();
  sub_10a2f();
  sub_10e2b();
  sub_10d81();
  if (memoryAGet(ds, 0x8f54) != 0x00)
    goto loc_14188;
  goto loc_13d26;
loc_14188:
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
  goto loc_13d26;
}
void sub_14191()
{
  stackguard sg(sp);

  push(dx);
  ax = 0x6255;
  mul(memoryAGet16(ds, 0x304a));
  ax += 0x3619;
  memoryASet16(ds, 0x304a, ax);
  dx = pop();
}
void sub_141a1()
{
  stackguard sg(sp);

  push(dx);
  push(cx);
  push(ax);
  sub_14191();
  dx = 0;
  cx = pop();
  div(cx);
  ax = dx;
  cx = pop();
  dx = pop();
}
void sub_141b1()
{
  stackguard sg(sp);

  memoryASet16(ds, si + 14, memoryAGet16(ds, si + 14) - 1);
  if ((short)memoryAGet16(ds, si + 14) < 0)
    goto loc_141dc;
  if (memoryAGet16(ds, si + 14) != 0)
    goto loc_141db;
  di = memoryAGet16(ds, si + 16);
  ax = memoryAGet16(cs, di);
  di += 0x0002;
  if (ax & ax)
    goto loc_141cc;
  di += 0x0002;
  //stop(/*2*/); // (jmp word ptr cs:[di - 2]) jump Indirect memoryAGet16(cs, di + 65534)
    callIndirect(memory16(cs, di-2));
    return;

loc_141cc:
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di);
  di += 0x0002;
  memoryASet16(ds, si + 14, ax);
  memoryASet16(ds, si + 16, di);
loc_141db:
  return;
loc_141dc:
  memoryASet16(ds, si + 14, 0x0000);
}
void sub_141e2()
{
  stackguard sg(sp);

  di = memoryAGet16(cs, di);
  ax = memoryAGet16(cs, di);
  di += 0x0002;
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, di);
  di += 0x0002;
  memoryASet16(ds, si + 14, ax);
  memoryASet16(ds, si + 16, di);
}
void sub_141fb()
{
  stackguard sg(sp);

  if (memoryAGet(ds, si + 38) != 0x00)
    goto loc_14205;
  sub_107c0();
  return;
loc_14205:
  push(si);
  si = memoryAGet16(ds, si + 68);
  push(memoryAGet16(ds, si + 70));
loc_1420c:
  si = pop();
  if (!(si & si))
    goto loc_14219;
  push(memoryAGet16(ds, si + 70));
  sub_107c0();
  goto loc_1420c;
loc_14219:
  si = pop();
}
void sub_1421c()
{
  stackguard sg(sp);

  si = 0x9a40;
  dx = ax;
  cl = 0x03;
  dx <<= cl;
  bx = ax;
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 12422);
  cx = 0x0030;
  bp = dx;
loc_14232:
  bx = memoryAGet16(ds, si + 4);
  bx += dx;
  if ((short)bx >= 0)
    goto loc_14247;
loc_14239:
  memoryASet16(ds, si, memoryAGet16(ds, si) - 1);
  if ((short)memoryAGet16(ds, si) >= 0)
    goto loc_14241;
  memoryASet16(ds, si, 0x00bf);
loc_14241:
  bx += 0x0180;
  if ((short)bx < 0)
    goto loc_14239;
loc_14247:
  if ((short)bx < (short)0x0180)
    goto loc_1425f;
  memoryASet16(ds, si, memoryAGet16(ds, si) + 1);
  if ((short)memoryAGet16(ds, si) < (short)0x00c0)
    goto loc_14259;
  memoryASet16(ds, si, 0x0000);
loc_14259:
  bx -= 0x0180;
  goto loc_14247;
loc_1425f:
  memoryASet16(ds, si + 4, bx);
  si += 0x0006;
  dx += bp;
  if (--cx)
    goto loc_14232;
}
void sub_1426a()
{
  stackguard sg(sp);

  si = 0x9a40;
  cx = 0x0030;
loc_14270:
  ax = 0x00c0;
  sub_141a1();
  memoryASet16(ds, si, ax);
  ax = 0x0028;
  if (memoryAGet16(ds, 0x3044) == 0x0000)
    goto loc_1429d;
  if (memoryAGet16(ds, 0x3044) == 0x0003)
    goto loc_1429d;
  ax = 0x0050;
  if (memoryAGet16(ds, 0x3044) == 0x0002)
    goto loc_1429d;
  if (memoryAGet16(ds, 0x3044) == 0x0004)
    goto loc_1429d;
  ax = 0x00a0;
loc_1429d:
  sub_141a1();
  memoryASet16(ds, si + 2, ax);
  memoryASet16(ds, si + 4, 0x0000);
  si += 0x0006;
  if (--cx)
    goto loc_14270;
}
// INJECT: Error: cannot inject zero flag in sub_142ae()!
// INJECT: Error: cannot inject zero flag in sub_142ae()!
// INJECT: Error: cannot inject zero flag in sub_142ae()!
void sub_142ae()
{
  stackguard sg(sp);

  goto loc_142ae;
loc_10f2f:
  ax = memoryAGet16(ds, 0xfcfa);
  if ((short)ax < (short)memoryAGet16(ds, 0xfce2))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcf2);
  if ((short)ax > (short)memoryAGet16(ds, 0xfcea))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcfe);
  if ((short)ax < (short)memoryAGet16(ds, 0xfce6))
    goto loc_10f57;
  ax = memoryAGet16(ds, 0xfcf6);
  if ((short)ax > (short)memoryAGet16(ds, 0xfcee))
    goto loc_10f57;
  ax = 0;
  ax--;
  stop(/*inject ret*/);
  return;
loc_10f57:
  ax = 0;
  stop(/*inject ret*/);
  return;
  //   gap of 13140 bytes
loc_142ae:
  if (memoryAGet16(ds, 0x8e80) != 0x0000)
    goto loc_142e8;
  ax = memoryAGet16(ds, si + 40);
  memoryASet16(ds, 0xfce2, ax);
  ax = memoryAGet16(ds, si + 42);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, si + 44);
  memoryASet16(ds, 0xfcea, ax);
  ax = memoryAGet16(ds, si + 46);
  memoryASet16(ds, 0xfcee, ax);
  ax = memoryAGet16(ds, 0x9f28);
  memoryASet16(ds, 0xfcf2, ax);
  ax = memoryAGet16(ds, 0x9f2a);
  memoryASet16(ds, 0xfcf6, ax);
  ax = memoryAGet16(ds, 0x9f2c);
  memoryASet16(ds, 0xfcfa, ax);
  ax = memoryAGet16(ds, 0x9f2e);
  memoryASet16(ds, 0xfcfe, ax);
  goto loc_10f2f;
loc_142e8:
  ax = 0;
  stop(/*inject ret*/);
}
void sub_14311()
{
  stackguard sg(sp);

  memoryASet16(ds, si + 4, 0x0853);
  if (memoryAGet(ds, 0x9224) == 0x00)
    goto loc_1433e;
  memoryASet16(ds, 0x919a, 0x0000);
  sub_141b1();
  if (memoryAGet16(ds, si + 14) != 0x0000)
    goto loc_1433d;
  memoryASet16(ds, si + 4, 0x0761);
  if ((short)memoryAGet16(ds, 0x991e) < (short)0x0010)
    goto loc_1433d;
  memoryASet(ds, 0x8f5c, 0xff);
loc_1433d:
  return;
loc_1433e:
  if (memoryAGet16(ds, 0x8e80) != 0x0000)
    goto loc_143b6;
  if (memoryAGet16(ds, 0x9150) != 0x0000)
    goto loc_14356;
  sub_13589();
  sub_11bea();
  if (!flags.zero)
    goto loc_14381;
  goto loc_143b6;
loc_14356:
  ax = memoryAGet16(ds, si + 18);
  ax -= 0x0040;
  memoryASet16(ds, si + 40, ax);
  ax += 0x0080;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= 0x0040;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0080;
  memoryASet16(ds, si + 46, ax);
  sub_11bea();
  if (flags.zero)
    goto loc_1437c;
  sub_13a33();
loc_1437c:
  sub_13589();
  goto loc_143b6;
loc_14381:
  if (memoryAGet16(ds, 0x9188) != 0x0000)
    goto loc_143a9;
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_143b6;
  memoryASet16(ds, si + 4, 0x08b9);
  ax = 0x0008;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_1439e;
  ax = 0x0010;
loc_1439e:
  sub_13c4f();
  if (memoryAGet(ds, 0x9224) == 0x00)
    goto loc_143a9;
  return;
loc_143a9:
  if (memoryAGet16(ds, di) == 0x0050)
    goto loc_143b6;
  if (memoryAGet16(ds, di) == 0x0054)
    goto loc_143b6;
  sub_13a33();
loc_143b6:
  if (memoryAGet16(ds, 0x8e7e) == 0x0000)
    goto loc_14430;
  if ((short)memoryAGet16(ds, 0x8e7e) >= 0)
    goto loc_143d7;
  sub_11e29();
  if (!flags.zero)
    goto loc_143cc;
  memoryASet16(ds, 0x8e7e, 0x0000);
  goto loc_14430;
loc_143cc:
  if (memoryAGet16(ds, 0x8e7e) != 0xffef)
    goto loc_143d7;
  sub_13c01();
  return;
loc_143d7:
  memoryASet16(ds, 0x8e7e, memoryAGet16(ds, 0x8e7e) - 1);
  ax = memoryAGet16(ds, 0x918c);
  memoryASet16(ds, 0x919a, ax);
  ax = memoryAGet16(ds, 0x8ed2);
  ax -= memoryAGet16(ds, 0x9190);
  bx = memoryAGet16(ds, 0x8ed4);
  memoryASet16(ds, si + 18, bx);
  ax += memoryAGet16(ds, 0x8ed6);
  if ((short)ax <= (short)0x00b0)
    goto loc_14402;
  ax -= 0x00b0;
  memoryASet16(ds, 0x919a, memoryAGet16(ds, 0x919a) - ax);
  ax = 0x00b0;
loc_14402:
  if ((short)ax >= (short)0x0010)
    goto loc_14411;
  ax -= 0x0010;
  memoryASet16(ds, 0x919a, memoryAGet16(ds, 0x919a) - ax);
  ax = 0x0010;
loc_14411:
  memoryASet16(ds, si + 22, ax);
  push(si);
  si = 0x8ed2;
  di = 0x8ecc;
  cx = 0x0030;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  si = pop();
  if (memoryAGet16(ds, 0x8e7e) != 0x0000)
    goto loc_14483;
  memoryASet16(ds, 0x8e7e, 0xffff);
  goto loc_14483;
loc_14430:
  sub_144f3();
  push(si);
  si = 0x8f2a;
  di = 0x8f30;
  cx = 0x0030;
  flags.direction = true;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  flags.direction = false;
  si = pop();
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0x8ecc, ax);
  ax = memoryAGet16(ds, si + 18);
  memoryASet16(ds, 0x8ece, ax);
  ax = memoryAGet16(ds, si + 22);
  memoryASet16(ds, 0x8ed0, ax);
  if (memoryAGet16(ds, 0x8e80) != 0x0000)
    goto loc_14483;
  if (flags.zero)
    goto loc_14483;
  sub_11e29();
  if (flags.zero)
    goto loc_14483;
  ax = memoryAGet16(ds, 0x8e6e);
  memoryASet16(ds, 0x8e7e, ax);
  memoryASet16(ds, 0x919e, 0x0000);
  ax = memoryAGet16(ds, 0x9190);
  ax += memoryAGet16(ds, 0x91ae);
  if ((short)ax <= (short)memoryAGet16(ds, 0x91aa))
    goto loc_14483;
  memoryASet16(ds, 0x91aa, ax);
loc_14483:
  push(si);
  si = 0x8ec0;
  di = 0x8ebc;
  cx = 0x0004;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  si = pop();
  ax = memoryAGet16(ds, 0x8f34);
  memoryASet16(ds, di, ax);
  ax = memoryAGet16(ds, 0x8f36);
  memoryASet16(ds, di + 2, ax);
  bx = memoryAGet16(ds, 0x8e80);
  if (bx & bx)
    goto loc_144b4;
  bx = memoryAGet16(ds, 0x919e);
  bx += 0x0006;
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 12364);
  memoryASet16(ds, si + 12, ax);
  return;
loc_144b4:
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 12888);
  memoryASet16(ds, si + 12, ax);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, 0x8e82);
  ax += memoryAGet16(ds, 0x8e80);
  memoryASet16(ds, 0x8e80, ax);
  if (ax == 0)
    goto loc_144e6;
  if (ax != 0x0004)
    goto loc_144e5;
  if (memoryAGet16(ds, 0x8e82) != 0x0000)
    goto loc_144df;
  memoryASet16(ds, si + 4, 0x0897);
loc_144df:
  memoryASet16(ds, 0x8e82, 0x0000);
loc_144e5:
  return;
loc_144e6:
  memoryASet16(ds, 0x8e82, 0x0000);
  memoryASet16(ds, 0x8e7e, 0xfff1);
}
void sub_144f3()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, si + 18);
  memoryASet16(ds, 0x8f34, ax);
  ax = memoryAGet16(ds, si + 22);
  memoryASet16(ds, 0x8f36, ax);
  if (memoryAGet(ds, 0x8f59) & 0x04)
    goto loc_14518;
  if (memoryAGet(ds, 0x8f59) & 0x08)
    goto loc_14532;
  ax = memoryAGet16(ds, 0x919e);
  if (!(ax & ax))
    goto loc_1454a;
  if (stop(/*82*/))
    goto loc_14546;
  goto loc_1452c;
loc_14518:
  if ((short)memoryAGet16(ds, 0x919e) <= (short)0x0000)
    goto loc_14525;
  memoryASet16(ds, 0x919e, 0x0000);
loc_14525:
  if ((short)memoryAGet16(ds, 0x919e) <= (short)0xfffa)
    goto loc_1454a;
loc_1452c:
  memoryASet16(ds, 0x919e, memoryAGet16(ds, 0x919e) - 1);
  goto loc_1454a;
loc_14532:
  if ((short)memoryAGet16(ds, 0x919e) >= (short)0x0000)
    goto loc_1453f;
  memoryASet16(ds, 0x919e, 0x0000);
loc_1453f:
  if ((short)memoryAGet16(ds, 0x919e) >= (short)0x0006)
    goto loc_1454a;
loc_14546:
  memoryASet16(ds, 0x919e, memoryAGet16(ds, 0x919e) + 1);
loc_1454a:
  ax = memoryAGet16(ds, 0x918c);
  memoryASet16(ds, 0x919a, ax);
  if (!(memoryAGet(ds, 0x8f59) & 0x01))
    goto loc_14576;
  if ((short)memoryAGet16(ds, si + 22) <= (short)0x0010)
    goto loc_14569;
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) - 0x0003);
  ax = memoryAGet16(ds, 0x915e);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) - ax);
  goto loc_14576;
loc_14569:
  memoryASet16(ds, si + 22, 0x0010);
  memoryASet16(ds, 0x919a, 0x0001);
  goto loc_145a4;
loc_14576:
  if (!(memoryAGet(ds, 0x8f59) & 0x02))
    goto loc_145a4;
  if ((short)memoryAGet16(ds, si + 22) >= (short)0x00b0)
    goto loc_14590;
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + 0x0003);
  ax = memoryAGet16(ds, 0x915e);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  goto loc_145a4;
loc_14590:
  ax = memoryAGet16(ds, 0x9190);
  if (ax == memoryAGet16(ds, 0x91aa))
    goto loc_145a4;
  memoryASet16(ds, 0x919a, 0xffff);
  memoryASet16(ds, si + 22, 0x00b0);
loc_145a4:
  ax = memoryAGet16(ds, 0x919e);
  if (!(ax & ax))
    goto loc_145c3;
  if ((short)ax < 0)
    goto loc_145b9;
  if (!(memoryAGet(ds, 0x8f59) & 0x08))
    goto loc_145c3;
  ax = 0x0006;
  goto loc_145c3;
loc_145b9:
  if (!(memoryAGet(ds, 0x8f59) & 0x04))
    goto loc_145c3;
  ax = 0xfffa;
loc_145c3:
  if (memoryAGet16(ds, 0x915e) != 0x0000)
    goto loc_145cc;
  ax = sar(ax, 1);
loc_145cc:
  if ((short)memoryAGet16(ds, 0x915e) < (short)0x0002)
    goto loc_145d9;
  bx = ax;
  bx = sar(bx, 1);
  ax += bx;
loc_145d9:
  memoryASet16(ds, si + 18, memoryAGet16(ds, si + 18) + ax);
  if ((short)memoryAGet16(ds, si + 18) >= (short)0x0010)
    goto loc_145e7;
  memoryASet16(ds, si + 18, 0x0010);
loc_145e7:
  if ((short)memoryAGet16(ds, si + 18) <= (short)0x012e)
    return;
  memoryASet16(ds, si + 18, 0x012e);
}
void sub_145f4()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x8e88) != 0x0000)
    goto loc_14601;
  memoryASet16(ds, 0x8e88, 0x0002);
loc_14601:
  if (memoryAGet16(ds, si + 52) == 0x0000)
    goto loc_14613;
  if (memoryAGet16(ds, si + 52) == 0x0001)
    goto loc_14610;
  bp += 0x0002;
loc_14610:
  bp += 0x0002;
loc_14613:
  push(di);
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di + 28, ax);
  memoryASet16(ds, di + 32, bx);
  cx += memoryAGet16(ds, 0x9f12);
  memoryASet16(ds, di + 18, cx);
  dx += memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, di + 22, dx);
  memoryASet16(ds, di, 0x0010);
  memoryASet16(ds, di + 2, 0x39ee);
  memoryASet16(ds, di + 4, 0x091f);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 26, 0x0000);
  ax = memoryAGet16(ds, si + 52);
  memoryASet16(ds, di + 52, ax);
  di = pop();
}
void sub_1465c()
{
  stackguard sg(sp);

  goto loc_1465c;
loc_10875:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 2179));
  return;
  //   gap of 15833 bytes
loc_1465c:
  dx++;
  push(ax);
  push(dx);
  ax = 0x000a;
  mul(cx);
  cx = pop();
  div(cx);
  si = ax;
  si <<= 1;
  si = memoryAGet16(ds, si + 12898);
  cx = pop();
  dx = bx;
  goto loc_10875;
}
void sub_14675()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x8e80) != 0x0000)
    goto loc_14690;
  if (memoryAGet(ds, 0x9224) != 0x00)
    goto loc_14690;
  if (memoryAGet16(ds, 0x991e) == 0x0000)
    goto loc_1469b;
  memoryASet16(ds, 0x991e, memoryAGet16(ds, 0x991e) - 1);
  goto loc_1469b;
loc_14690:
  if (memoryAGet16(ds, 0x991e) == 0x0010)
    goto loc_1469b;
  memoryASet16(ds, 0x991e, memoryAGet16(ds, 0x991e) + 1);
loc_1469b:
  if (memoryAGet16(ds, 0x9150) == 0x0000)
    goto loc_146b6;
  memoryASet16(ds, 0x9150, memoryAGet16(ds, 0x9150) - 1);
  dx = 0x00dd;
  cx = memoryAGet16(ds, 0x9150);
  ax = 0x0126;
  bx = 0x0008;
  sub_1465c();
loc_146b6:
  if (memoryAGet16(ds, 0x8e84) == 0x0000)
    goto loc_146e4;
  memoryASet16(ds, 0x8e84, memoryAGet16(ds, 0x8e84) - 1);
  dx = 0x0088;
  cx = memoryAGet16(ds, 0x8e84);
  ax = 0x0098;
  bx = 0x0008;
  sub_1465c();
  if (memoryAGet16(ds, 0x8e84) != 0x0000)
    goto loc_146e4;
  memoryASet16(ds, 0x8e82, 0xffff);
  memoryASet16(ds, 0x8e88, 0x0018);
loc_146e4:
  if (memoryAGet16(ds, 0x9162) == 0x0000)
    goto loc_14709;
  memoryASet16(ds, 0x9162, memoryAGet16(ds, 0x9162) - 1);
  dx = 0x00aa;
  cx = memoryAGet16(ds, 0x9162);
  ax = 0x0098;
  bx = 0x00a0;
  sub_1465c();
  if (memoryAGet16(ds, 0x9162) != 0x0000)
    goto loc_14709;
  sub_1472d();
loc_14709:
  if (memoryAGet(ds, 0x8f59) & 0x80)
    goto loc_14717;
  ax = memoryAGet16(ds, 0x9130);
  memoryASet16(ds, 0x912e, ax);
  return;
loc_14717:
  ax = memoryAGet16(ds, 0x9132);
  memoryASet16(ds, 0x912e, memoryAGet16(ds, 0x912e) - ax);
  if ((short)memoryAGet16(ds, 0x912e) > 0)
    return;
  ax = memoryAGet16(ds, 0x9130);
  memoryASet16(ds, 0x912e, memoryAGet16(ds, 0x912e) + ax);
  memoryASet(ds, 0x8f5b, 0xff);
}
void sub_1472d()
{
  stackguard sg(sp);

  push(si);
  si = memoryAGet16(ds, 0x9008);
loc_14732:
  if (memoryAGet16(ds, si) == 0x0000)
    goto loc_14740;
  push(memoryAGet16(ds, si + 10));
  sub_137a9();
  si = pop();
  goto loc_14732;
loc_14740:
  ax = memoryAGet16(ds, 0x91b4);
  memoryASet16(ds, 0x9008, ax);
  ax = memoryAGet16(ds, 0x91b6);
  memoryASet16(ds, 0x9006, ax);
  si = 0x91b8;
  di = 0x9134;
  cx = 0x000e;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  si = pop();
}
void sub_14759()
{
  stackguard sg(sp);

  sub_141b1();
  ax = memoryAGet16(ds, 0x9f12);
  bx = memoryAGet16(ds, 0x919e);
    if ((short)bx >= 0)                        //jns short loc_14769
    goto loc_14769;
  bx = -bx;
loc_14769:
  bx <<= 1;
  if (!(memoryAGet16(ds, si + 34) & 0x0001))
    goto loc_14775;
  bx += 0x000e;
loc_14775:
  ax += memoryAGet16(ds, bx + 12918);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0x9f16);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 4, 0x0761);
  if (memoryAGet16(ds, 0x8e80) == 0x0000)
    goto loc_1478f;
  return;
loc_1478f:
  if ((short)memoryAGet16(ds, si + 34) < (short)0x0002)
    goto loc_147a2;
loc_1479a:
  if (!(memoryAGet(ds, 0x8f59) & 0x02))
    goto loc_147a1;
  memoryASet16(ds, si + 4, 0x0853);
loc_147a1:
  return;
loc_147a2:
  goto loc_1479a;
}
void sub_1480b()
{
  stackguard sg(sp);

  sub_141b1();
  sub_14865();
  if (memoryAGet16(ds, si) == 0x0004)
    return;
  if (memoryAGet(ds, si + 73) == 0x00)
    return;
  al = memoryAGet(ds, si + 73);
loc_1481f:
  if (al < 0x64)
    goto loc_14827;
  al -= 0x64;
  goto loc_1481f;
loc_14827:
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    return;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
  if (memoryAGet(ds, si + 73) >= 0x64)
    goto loc_14842;
  sub_14191();
  ax &= 0x0007;
  goto loc_14852;
loc_14842:
  ax = memoryAGet16(ds, 0x9f12);
  ax -= memoryAGet16(ds, si + 18);
  dx = memoryAGet16(ds, 0x9f16);
  dx -= memoryAGet16(ds, si + 22);
  sub_11b90();
loc_14852:
  cx = ax;
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  dx = 0x0006;
  bp = memoryAGet16(ds, 0x8e72);
  sub_11ed3();
}
void sub_1480e()
{
  stackguard sg(sp);

  sub_14865();
  if (memoryAGet16(ds, si) == 0x0004)
    return;
  if (memoryAGet(ds, si + 73) == 0x00)
    return;
  al = memoryAGet(ds, si + 73);
loc_1481f:
  if (al < 0x64)
    goto loc_14827;
  al -= 0x64;
  goto loc_1481f;
loc_14827:
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    return;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
  if (memoryAGet(ds, si + 73) >= 0x64)
    goto loc_14842;
  sub_14191();
  ax &= 0x0007;
  goto loc_14852;
loc_14842:
  ax = memoryAGet16(ds, 0x9f12);
  ax -= memoryAGet16(ds, si + 18);
  dx = memoryAGet16(ds, 0x9f16);
  dx -= memoryAGet16(ds, si + 22);
  sub_11b90();
loc_14852:
  cx = ax;
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  dx = 0x0006;
  bp = memoryAGet16(ds, 0x8e72);
  sub_11ed3();
}
void sub_14865()
{
  stackguard sg(sp);

  goto loc_14865;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 4759 bytes
loc_14865:
  sub_14871();
  if (memoryAGet16(ds, si) == 0x0004)
    return;
  goto loc_13589;
}
void sub_14871()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, si + 66);
  memoryASet16(ds, 0xfcfe, ax);
  if (!(ax & ax))
    goto loc_1489d;
  if (memoryAGet16(ds, si + 26) != 0x0000)
    goto loc_14884;
  goto loc_1499f;
loc_14884:
  if ((short)memoryAGet16(ds, si + 26) >= 0)
    goto loc_1489e;
  ax = memoryAGet16(ds, si + 26);
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) + ax);
  if ((short)memoryAGet16(ds, 0xfcfe) <= (short)0x0000)
    goto loc_14897;
  goto loc_1499f;
loc_14897:
  ax = memoryAGet16(ds, 0xfcfe);
  memoryASet16(ds, si + 26, ax);
loc_1489d:
  return;
loc_1489e:
  di = 0x6116;
  ax = memoryAGet16(ds, si + 18);
  memoryASet16(ds, 0xfce2, ax);
  ax = memoryAGet16(ds, si + 20);
  memoryASet16(ds, 0xfce4, ax);
  ax = memoryAGet16(ds, si + 22);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, si + 24);
  memoryASet16(ds, 0xfce8, ax);
  ax = memoryAGet16(ds, si + 28);
  memoryASet16(ds, 0xfcee, ax);
  ax = memoryAGet16(ds, si + 30);
  memoryASet16(ds, 0xfcf0, ax);
  ax = memoryAGet16(ds, si + 60);
  memoryASet16(ds, 0xfcf2, ax);
  ax = memoryAGet16(ds, si + 62);
  memoryASet16(ds, 0xfcf4, ax);
  ax = memoryAGet16(ds, si + 64);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  memoryASet16(ds, 0xfcf6, ax);
  memoryASet16(ds, 0xfcf8, dx);
  goto loc_1492d;
loc_148de:
  bx = memoryAGet16(ds, 0xfcee);
  ah = memoryAGet(cs, bx + di);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = (memoryAGet(ds, 0xfce9) + ah) >= 0x100;
  memoryASet(ds, 0xfce9, memoryAGet(ds, 0xfce9) + ah);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + (dx + flags.carry));
  ah = memoryAGet(cs, bx + di + 64);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = (memoryAGet(ds, 0xfce5) + ah) >= 0x100;
  memoryASet(ds, 0xfce5, memoryAGet(ds, 0xfce5) + ah);
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) + (dx + flags.carry));
  ax = memoryAGet16(ds, 0xfcf2);
  flags.carry = (memoryAGet16(ds, 0xfcf0) + ax) >= 0x10000;
  memoryASet16(ds, 0xfcf0, memoryAGet16(ds, 0xfcf0) + ax);
  ax = memoryAGet16(ds, 0xfcf4);
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) + (ax + flags.carry));
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) & 0x00ff);
  ax = memoryAGet16(ds, 0xfcf6);
  flags.carry = (memoryAGet16(ds, 0xfcf2) + ax) >= 0x10000;
  memoryASet16(ds, 0xfcf2, memoryAGet16(ds, 0xfcf2) + ax);
  ax = memoryAGet16(ds, 0xfcf8);
  memoryASet16(ds, 0xfcf4, memoryAGet16(ds, 0xfcf4) + (ax + flags.carry));
loc_1492d:
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) - 1);
  if ((short)memoryAGet16(ds, 0xfcfe) < 0)
    goto loc_1496e;
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) - 1);
  if ((short)memoryAGet16(ds, si + 26) >= 0)
    goto loc_148de;
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) + 1);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0xfce4);
  memoryASet16(ds, si + 20, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(ds, 0xfce8);
  memoryASet16(ds, si + 24, ax);
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, si + 28, ax);
  ax = memoryAGet16(ds, 0xfcf0);
  memoryASet16(ds, si + 30, ax);
  ax = memoryAGet16(ds, 0xfcf2);
  memoryASet16(ds, si + 60, ax);
  ax = memoryAGet16(ds, 0xfcf4);
  memoryASet16(ds, si + 62, ax);
  goto loc_1499f;
loc_1496e:
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0xfce4);
  memoryASet16(ds, si + 20, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(ds, 0xfce8);
  memoryASet16(ds, si + 24, ax);
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, si + 28, ax);
  ax = memoryAGet16(ds, 0xfcf0);
  memoryASet16(ds, si + 30, ax);
  ax = memoryAGet16(ds, 0xfcf2);
  memoryASet16(ds, si + 60, ax);
  ax = memoryAGet16(ds, 0xfcf4);
  memoryASet16(ds, si + 62, ax);
  return;
loc_1499f:
  di = memoryAGet16(ds, si + 58);
  bx = memoryAGet16(ds, di);
  stop(/*2*/); // (jmp word ptr cs:[bx + 0x49a9]) jump Indirect memoryAGet16(cs, bx + 18857)
}
void sub_14a69()
{
  stackguard sg(sp);

  memoryASet16(ss, 0x0010, 0x00c7);
  sub_10bc7();
  sub_10d5f();
  sub_10c0b();
  memoryASet(ds, 0x3ade, 0xff);
  memoryASet(ds, 0x3adf, 0xff);
  memoryASet(ds, 0x3ae0, 0x00);
  memoryASet16(ds, 0x3816, 0x0000);
  si = 0x3cb6;
  cx = 0x0014;
loc_14a94:
  memoryASet16(ds, si, 0xfff7);
  si += 0x000c;
  if (--cx)
    goto loc_14a94;
  memoryASet16(ds, 0x8f3c, 0x0030);
  memoryASet16(ds, 0x8f3e, 0x0044);
  memoryASet16(ds, 0x8f40, 0x0000);
  memoryASet16(ds, 0x8f42, 0x0000);
  memoryASet16(ds, 0x8f44, 0x0004);
  sub_15488();
  memoryASet16(ds, 0x8f42, 0x0001);
  memoryASet16(ds, 0x8f44, 0x0004);
  sub_15488();
  sub_1577d();
  sub_15612();
  sub_10a51();
  sub_15612();
  sub_10e09();
  sub_10d81();
  memoryASet16(ds, 0x8e88, 0x0000);
  sub_14bc7();
  memoryASet16(ds, 0x8e88, 0x0007);
  sub_14c59();
  if (memoryAGet(ds, 0x8fb1) == 0x00)
    goto loc_14afd;
  sub_14e12();
  goto loc_14b00;
loc_14afd:
  sub_15119();
loc_14b00:
  sub_1558e();
  sub_15510();
  sub_1576d();
  if (memoryAGet(ds, 0x8fb1) == 0x00)
    goto loc_14b13;
  goto loc_14bd4;
loc_14b13:
  si = 0x3da6;
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14b3e;
  si = 0x3e82;
  sub_15787();
  cx = 0x0011;
  sub_154fc();
  sub_1576d();
  si = 0x3ea6;
  sub_15787();
  cx = 0x0011;
  sub_154fc();
  sub_1576d();
  si = 0x3eb9;
loc_14b3e:
  sub_15787();
  sub_15154();
  sub_155d0();
  memoryASet(ds, 0x3ade, 0x00);
  memoryASet16(ds, 0x8f42, 0x0001);
  memoryASet16(ds, 0x8f44, 0x0004);
  sub_15488();
  sub_14d38();
  sub_1558e();
  sub_1576d();
  si = 0x3dc4;
  sub_15787();
  sub_14e78();
  sub_155d0();
  memoryASet16(ds, 0x8e88, 0x0007);
  sub_14cad();
  memoryASet16(ds, 0x8e88, 0x0000);
  sub_10a51();
  sub_14bc7();
  sub_15612();
  sub_10a51();
  sub_15612();
loc_14b8e:
  sub_10d5f();
  sub_10be9();
  memoryASet16(ss, 0x0010, 0x00bf);
  sub_13319();
  sub_135f2();
  if (memoryAGet(ds, 0x8f61) != 0x00)
    goto loc_14bc0;
  ax = memoryAGet16(ds, 0x3048);
loc_14bab:
  if (ax == memoryAGet16(ds, 0x3048))
    goto loc_14bab;
  sub_10985();
  sub_1080f();
  sub_10a51();
  sub_10e2b();
  sub_10d81();
loc_14bc0:
  memoryASet16(ds, 0x91b2, 0x000c);
  return;
  //   gap of 13 bytes
loc_14bd4:
  si = 0x3796;
  sub_15787();
  cx = 0x001e;
  sub_14c48();
  si = 0x37b1;
  sub_15787();
  cx = 0x001e;
  sub_14c48();
  sub_1576d();
  si = 0x37d8;
  sub_15787();
  cx = 0x0011;
  sub_14c48();
  sub_155d0();
  memoryASet16(ds, 0x8e88, 0x0007);
  sub_14cad();
  memoryASet16(ds, 0x8e88, 0x0000);
  sub_10a51();
  sub_14bc7();
  sub_15612();
  sub_10a51();
  sub_15612();
  sub_10d5f();
  memoryASet16(ds, 0x8e88, 0x0000);
  cx = 0x0096;
loc_14c28:
  push(cx);
  sub_10c4f();
  sub_10a51();
  sub_10e2b();
  sub_10d81();
  cx = pop();
  if (--cx)
    goto loc_14c28;
  sub_10d5f();
  cx = 0x0050;
loc_14c3e:
  push(cx);
  sub_10a51();
  cx = pop();
  if (--cx)
    goto loc_14c3e;
  goto loc_14b8e;
}
void sub_14bc7()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x3046);
  ax += 0x0009;
loc_14bcd:
  if (ax != memoryAGet16(ds, 0x3046))
    goto loc_14bcd;
}
void sub_14c48()
{
  stackguard sg(sp);

loc_14c48:
  push(cx);
  sub_10c93();
  sub_15691();
  sub_156b8();
  sub_10a51();
  cx = pop();
  if (--cx)
    goto loc_14c48;
}
void sub_14c59()
{
  stackguard sg(sp);

loc_14c59:
  sub_10a51();
  if (memoryAGet16(ds, 0x8f3c) == 0x0000)
    goto loc_14c7c;
  memoryASet16(ds, 0x8f3c, memoryAGet16(ds, 0x8f3c) - 0x0004);
  if ((short)memoryAGet16(ds, 0x8f3c) < 0)
    goto loc_14c6c;
  if (memoryAGet16(ds, 0x8f3c) != 0)
    goto loc_14c7c;
loc_14c6c:
  ah = 0x01;
  interrupt(0x80);
  ah = 0x02;
  al = 0x01;
  interrupt(0x80);
  memoryASet16(ds, 0x8f3c, 0x0000);
loc_14c7c:
  if (memoryAGet16(ds, 0x8f3e) == 0x0000)
    goto loc_14c92;
  memoryASet16(ds, 0x8f3e, memoryAGet16(ds, 0x8f3e) - 0x0004);
  if (memoryAGet16(ds, 0x8f3e) == 0)
    goto loc_14c92;
  if ((short)memoryAGet16(ds, 0x8f3e) >= 0)
    goto loc_14c92;
  memoryASet16(ds, 0x8f3e, 0x0000);
loc_14c92:
  sub_15612();
  sub_14cfa();
  sub_14d0d();
  if (memoryAGet16(ds, 0x8f3c) != 0x0000)
    goto loc_14c59;
  if (memoryAGet16(ds, 0x8f3e) != 0x0000)
    goto loc_14c59;
  sub_10c71();
}
void sub_14cad()
{
  stackguard sg(sp);

  sub_10c71();
loc_14cb0:
  sub_10a51();
  if (memoryAGet16(ds, 0x8f3e) == 0x0044)
    goto loc_14ccc;
  memoryASet16(ds, 0x8f3e, memoryAGet16(ds, 0x8f3e) + 0x0004);
  if ((short)memoryAGet16(ds, 0x8f3e) <= (short)0x0044)
    goto loc_14ccc;
  memoryASet16(ds, 0x8f3e, 0x0044);
loc_14ccc:
  if (memoryAGet16(ds, 0x8f3c) == 0x0030)
    goto loc_14ce5;
  memoryASet16(ds, 0x8f3c, memoryAGet16(ds, 0x8f3c) + 0x0004);
  if ((short)memoryAGet16(ds, 0x8f3c) <= (short)0x0030)
    goto loc_14ce5;
  memoryASet16(ds, 0x8f3c, 0x0030);
loc_14ce5:
  sub_15612();
  sub_14d0d();
  sub_14cfa();
  if (memoryAGet16(ds, 0x8f3e) != 0x0044)
    goto loc_14cb0;
  ah = 0x01;
  interrupt(0x80);
}
void sub_14cfa()
{
  stackguard sg(sp);

  goto loc_14cfa;
loc_10c2d:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 3131));
  return;
  //   gap of 16575 bytes
loc_14cfa:
  dx = 0x0004;
  si = 0xb144;
  if (!(memoryAGet16(ds, 0x8f3c) & 0x0004))
    goto loc_14d1e;
  si = 0xb1ae;
  goto loc_14d1e;
  //   gap of 17 bytes
loc_14d1e:
  push(dx);
  push(si);
  cx = 0x00e2;
  sub_10c2d();
  si = pop();
  dx = pop();
  push(dx);
  push(si);
  cx = 0x0102;
  sub_10c2d();
  si = pop();
  dx = pop();
  cx = 0x0122;
  goto loc_10c2d;
}
void sub_14d0d()
{
  stackguard sg(sp);

  goto loc_14d0d;
loc_10c2d:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 3131));
  return;
  //   gap of 16594 bytes
loc_14d0d:
  dx = 0x006d;
  si = 0xb144;
  if (!(memoryAGet16(ds, 0x8f3e) & 0x0004))
    goto loc_14d1e;
  si = 0xb1ae;
loc_14d1e:
  push(dx);
  push(si);
  cx = 0x00e2;
  sub_10c2d();
  si = pop();
  dx = pop();
  push(dx);
  push(si);
  cx = 0x0102;
  sub_10c2d();
  si = pop();
  dx = pop();
  cx = 0x0122;
  goto loc_10c2d;
}
void sub_14d38()
{
  stackguard sg(sp);

  bx = memoryAGet16(ds, 0x3816);
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 14544);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14d4b;
  ax >>= 1;
loc_14d4b:
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  if ((short)dx < (short)memoryAGet16(ds, 0x915c))
    goto loc_14d60;
  if (dx != memoryAGet16(ds, 0x915c))
    goto loc_14d5a;
  if (ax <= memoryAGet16(ds, 0x915a))
    goto loc_14d60;
loc_14d5a:
  memoryASet16(ds, 0x3816, 0x0000);
loc_14d60:
  si = 0x3cb6;
  bp = memoryAGet16(ds, 0x3816);
  bp += 0x0002;
  bx = bp;
  bx--;
  bx <<= 1;
  di = 0x38d0;
  di += bx;
  bx += 0x389a;
loc_14d78:
  ax = memoryAGet16(ds, di);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14d83;
  ax >>= 1;
loc_14d83:
  if ((short)ax > (short)memoryAGet16(ds, 0x8f4a))
    goto loc_14da2;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  if ((short)dx > (short)memoryAGet16(ds, 0x915c))
    goto loc_14da2;
  if (dx != memoryAGet16(ds, 0x915c))
    goto loc_14d98;
  if (ax > memoryAGet16(ds, 0x915a))
    goto loc_14da2;
loc_14d98:
  memoryASet16(ds, si + 6, bp);
  ax = memoryAGet16(ds, bx);
  memoryASet16(ds, si + 8, ax);
  goto loc_14dac;
loc_14da2:
  memoryASet16(ds, si + 6, 0x001a);
  memoryASet16(ds, si + 8, 0x3ae8);
loc_14dac:
  bp++;
  di += 0x0002;
  bx += 0x0002;
  si += 0x000c;
  if (bp == 0x001a)
    goto loc_14df5;
  if ((short)si < (short)0x3d9a)
    goto loc_14d78;
  if ((short)si > (short)0x3d9a)
    return;
  if (memoryAGet16(ds, 0x3816) != 0x0000)
    goto loc_14dea;
  ax = memoryAGet16(ds, di);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14dd5;
  ax >>= 1;
loc_14dd5:
  if ((short)ax > (short)memoryAGet16(ds, 0x8f4a))
    goto loc_14da2;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  if ((short)dx > (short)memoryAGet16(ds, 0x915c))
    goto loc_14da2;
  if (dx != memoryAGet16(ds, 0x915c))
    goto loc_14dea;
  if (ax > memoryAGet16(ds, 0x915a))
    goto loc_14da2;
loc_14dea:
  memoryASet16(ds, si + 6, 0x001b);
  memoryASet16(ds, si + 8, 0x3ae2);
  return;
loc_14df5:
  if (si == 0x3d9a)
    goto loc_14e05;
  memoryASet16(ds, si + 6, 0x0000);
  si += 0x000c;
  goto loc_14df5;
loc_14e05:
  if (memoryAGet16(ds, 0x3816) != 0x0000)
    goto loc_14dea;
  memoryASet16(ds, si + 6, 0x0000);
}
void sub_14e12()
{
  stackguard sg(sp);

  si = 0x3cb6;
loc_14e15:
  memoryASet16(ds, si + 6, 0x001a);
  memoryASet16(ds, si + 8, 0x3ae8);
  si += 0x000c;
  if ((short)si < (short)0x3d9a)
    goto loc_14e15;
}
void sub_14e29()
{
  stackguard sg(sp);

  si = 0x3cb6;
  cx = 0x0014;
loc_14e2f:
  ax = memoryAGet16(ds, si + 6);
  if (!(ax & ax))
    goto loc_14e72;
  if (ax != 0x001b)
    goto loc_14e43;
  if (memoryAGet16(ds, si + 65530) == 0x001a)
    goto loc_14e68;
  goto loc_14e72;
loc_14e43:
  if ((short)ax >= (short)0x001a)
    goto loc_14e72;
  bx = ax;
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 14542);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_14e59;
  ax >>= 1;
loc_14e59:
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  if ((short)dx < (short)memoryAGet16(ds, 0x915c))
    goto loc_14e72;
  if (dx != memoryAGet16(ds, 0x915c))
    goto loc_14e68;
  if (ax <= memoryAGet16(ds, 0x915a))
    goto loc_14e72;
loc_14e68:
  memoryASet16(ds, si + 6, 0x001a);
  memoryASet16(ds, si + 8, 0x3ae8);
loc_14e72:
  si += 0x000c;
  if (--cx)
    goto loc_14e2f;
}
void sub_14e78()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8f42, 0x0000);
  memoryASet16(ds, 0x8f44, 0x0000);
  memoryASet16(ds, 0x3818, 0xffff);
  sub_15435();
  memoryASet16(ds, 0x39b2, 0xffff);
loc_14e93:
  memoryASet(ds, 0x8f5b, 0x00);
  sub_15369();
  if (memoryAGet16(ds, 0x8f44) == 0x0004)
    goto loc_14f20;
  ax = memoryAGet16(ds, 0x8f42);
  bx = memoryAGet16(ds, 0x8f44);
  if (ax != memoryAGet16(ds, 0x3818))
    goto loc_14eb5;
  if (bx == memoryAGet16(ds, 0x381a))
    goto loc_14f27;
loc_14eb5:
  dx = bx;
  bx <<= 1;
  bx <<= 1;
  bx += dx;
  ax += bx;
  bx = 0x000c;
  mul(bx);
  si = 0x3cb6;
  si += ax;
  ax = memoryAGet16(ds, si + 6);
  if (!(ax & ax))
    goto loc_14e93;
  if (ax == 0x001a)
    goto loc_14ef3;
  if (ax == 0x001b)
    goto loc_14f04;
  ax = memoryAGet16(ds, 0x8f42);
  memoryASet16(ds, 0x3818, ax);
  ax = memoryAGet16(ds, 0x8f44);
  memoryASet16(ds, 0x381a, ax);
  push(si);
  ax = memoryAGet16(ds, si + 6);
  sub_15319();
  si = pop();
  sub_1521a();
  goto loc_14e93;
loc_14ef3:
  sub_1576d();
  si = 0x392b;
  sub_15787();
  memoryASet16(ds, 0x39b2, 0xffff);
  goto loc_14e93;
loc_14f04:
  ax = memoryAGet16(ds, 0x3816);
  ax += 0x0013;
  if ((short)ax < (short)0x0019)
    goto loc_14f11;
  ax = 0;
loc_14f11:
  memoryASet16(ds, 0x3816, ax);
  sub_14d38();
  memoryASet16(ds, 0x39b2, 0xffff);
  goto loc_14e93;
loc_14f20:
  if (memoryAGet16(ds, 0x8f42) == 0x0000)
    goto loc_14f92;
loc_14f27:
  memoryASet16(ds, 0x3818, 0xffff);
  if ((short)memoryAGet16(ds, 0x39b2) >= 0)
    goto loc_14f37;
  goto loc_14e93;
loc_14f37:
  sub_14fe3();
  if (flags.zero)
    goto loc_14f80;
  sub_1576d();
  si = 0x3952;
  sub_15787();
  ax = memoryAGet16(ds, 0x39b2);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = memoryAGet16(ds, 0x915a) < ax;
  memoryASet16(ds, 0x915a, memoryAGet16(ds, 0x915a) - ax);
  memoryASet16(ds, 0x915c, memoryAGet16(ds, 0x915c) - (dx + flags.carry));
  si = memoryAGet16(ds, 0x39b4);
  bx = memoryAGet16(ds, si + 6);
  bx <<= 1;
  callIndirect(memoryAGet16(ds, bx + 14362));
  memoryASet16(ds, 0x39b2, 0xffff);
  sub_1577d();
  sub_14e29();
  si = memoryAGet16(ds, 0x39b4);
  if (memoryAGet16(ds, si + 6) != 0x0002)
    goto loc_14f77;
  goto loc_14e93;
loc_14f77:
  si = 0x3967;
  sub_15787();
  goto loc_14e93;
loc_14f80:
  sub_1576d();
  si = 0x3902;
  sub_15787();
  memoryASet16(ds, 0x39b2, 0xffff);
  goto loc_14e93;
loc_14f92:
  sub_15488();
}
void sub_14f96()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x9162, 0x00aa);
}
// INJECT: Error: cannot inject zero flag in sub_14fe3()!
// INJECT: Error: cannot inject zero flag in sub_14fe3()!
void sub_14fe3()
{
  stackguard sg(sp);

  si = memoryAGet16(ds, 0x39b4);
  bx = memoryAGet16(ds, si + 6);
  if (bx != 0x0003)
    goto loc_14ff2;
  goto loc_150b4;
loc_14ff2:
  if (bx != 0x0004)
    goto loc_14ffa;
  goto loc_150bd;
loc_14ffa:
  if (bx != 0x0007)
    goto loc_15002;
  goto loc_150bd;
loc_15002:
  if (bx != 0x0005)
    goto loc_1500a;
  goto loc_150c6;
loc_1500a:
  if (bx != 0x0006)
    goto loc_15012;
  goto loc_150cf;
loc_15012:
  if (bx != 0x000c)
    goto loc_1501a;
  goto loc_150d8;
loc_1501a:
  if (bx != 0x0010)
    goto loc_15022;
  goto loc_150f5;
loc_15022:
  if (bx != 0x0016)
    goto loc_1502a;
  goto loc_150fe;
loc_1502a:
  if (bx != 0x0018)
    goto loc_15032;
  goto loc_15107;
loc_15032:
  if (bx != 0x0019)
    goto loc_1503a;
  goto loc_15110;
loc_1503a:
  al = memoryAGet(ds, bx + 14413);
  if (al & 0x01)
    goto loc_1508e;
  if (al & 0x02)
    goto loc_150a8;
  if (al & 0x04)
    goto loc_15074;
  if (!(al & 0x10))
    goto loc_1505e;
  if (memoryAGet16(ds, 0x914c) == 0x0000)
    goto loc_150b0;
  if (memoryAGet16(ds, 0x9148) == 0x0000)
    goto loc_150b0;
  goto loc_150ad;
loc_1505e:
  if (!(al & 0x08))
    goto loc_150b0;
  if (memoryAGet16(ds, 0x914c) == 0x0000)
    goto loc_150b0;
  di = memoryAGet16(ds, 0x914e);
  if (bx == memoryAGet16(ds, di + 54))
    goto loc_15084;
  goto loc_150ad;
loc_15074:
  if (memoryAGet16(ds, 0x9148) == 0x0000)
    goto loc_150b0;
  di = memoryAGet16(ds, 0x914a);
  if (bx != memoryAGet16(ds, di + 54))
    goto loc_150ad;
loc_15084:
  ax = memoryAGet16(ds, di + 52);
  if (ax != memoryAGet16(ds, di + 36))
    goto loc_150b0;
  goto loc_150ad;
loc_1508e:
  di = memoryAGet16(ds, 0x9136);
  if (bx == memoryAGet16(ds, di + 54))
    goto loc_15084;
  if (memoryAGet16(ds, 0x9134) == 0x0000)
    goto loc_150b0;
  if (memoryAGet16(ds, 0x9134) == 0x0094)
    goto loc_150b0;
  goto loc_150ad;
loc_150a8:
  sub_1100e();
  if (flags.zero)
    goto loc_150b0;
loc_150ad:
  ax = 0;
  stop(/*inject ret*/);
  return;
loc_150b0:
  ax = 0;
  ax--;
  stop(/*inject ret*/);
  return;
loc_150b4:
  if (memoryAGet16(ds, 0x915e) == 0x0002)
    goto loc_150ad;
  goto loc_150b0;
loc_150bd:
  if (memoryAGet16(ds, 0x9186) == 0x0027)
    goto loc_150ad;
  goto loc_150b0;
loc_150c6:
  if (memoryAGet16(ds, 0x9132) == 0x0003)
    goto loc_150ad;
  goto loc_150b0;
loc_150cf:
  if (memoryAGet16(ds, 0x9162) != 0x0000)
    goto loc_150ad;
  goto loc_150b0;
loc_150d8:
  di = 0x9134;
  cx = 0x0007;
loc_150de:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_150ee;
  bx = memoryAGet16(ds, di + 2);
  ax = memoryAGet16(ds, bx + 52);
  if (ax != memoryAGet16(ds, bx + 36))
    goto loc_150b0;
loc_150ee:
  di += 0x0006;
  if (--cx)
    goto loc_150de;
  goto loc_150ad;
loc_150f5:
  if (memoryAGet16(ds, 0x9160) != 0x0000)
    goto loc_150ad;
  goto loc_150b0;
loc_150fe:
  if (memoryAGet16(ds, 0x918a) == 0x0009)
    goto loc_150ad;
  goto loc_150b0;
loc_15107:
  if (memoryAGet(ds, 0x9223) != 0x00)
    goto loc_150ad;
  goto loc_150b0;
loc_15110:
  if (memoryAGet16(ds, 0x9150) != 0x0000)
    goto loc_150ad;
  goto loc_150b0;
}
void sub_15119()
{
  stackguard sg(sp);

  si = 0x3cb6;
  di = memoryAGet16(ds, 0x9008);
loc_15120:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_15145;
  if (memoryAGet16(ds, di) == 0x0094)
    goto loc_15140;
  bx = memoryAGet16(ds, di + 54);
  memoryASet16(ds, si + 6, bx);
  memoryASet16(ds, si + 10, di);
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 14488);
  memoryASet16(ds, si + 8, ax);
  si += 0x000c;
loc_15140:
  di = memoryAGet16(ds, di + 10);
  goto loc_15120;
loc_15145:
  memoryASet16(ds, si + 6, 0x0000);
  si += 0x000c;
  if ((short)si <= (short)0x3d9a)
    goto loc_15145;
}
void sub_15154()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8f42, 0x0000);
  memoryASet16(ds, 0x8f44, 0x0000);
  memoryASet16(ds, 0x3818, 0xffff);
  sub_15435();
  memoryASet16(ds, 0x39b2, 0xffff);
loc_1516f:
  memoryASet(ds, 0x8f5b, 0x00);
  sub_15369();
  if (memoryAGet16(ds, 0x8f44) == 0x0004)
    goto loc_151d5;
  ax = memoryAGet16(ds, 0x8f42);
  bx = memoryAGet16(ds, 0x8f44);
  if (ax != memoryAGet16(ds, 0x3818))
    goto loc_15191;
  if (bx == memoryAGet16(ds, 0x381a))
    goto loc_151dc;
loc_15191:
  dx = bx;
  bx <<= 1;
  bx <<= 1;
  bx += dx;
  ax += bx;
  bx = 0x000c;
  mul(bx);
  si = 0x3cb6;
  si += ax;
  ax = memoryAGet16(ds, si + 6);
  if (!(ax & ax))
    goto loc_1516f;
  ax = memoryAGet16(ds, 0x8f42);
  memoryASet16(ds, 0x3818, ax);
  ax = memoryAGet16(ds, 0x8f44);
  memoryASet16(ds, 0x381a, ax);
  push(si);
  ax = memoryAGet16(ds, si + 6);
  si = memoryAGet16(ds, si + 10);
  memoryASet(ds, 0x3ae1, 0xff);
  bx = memoryAGet16(ds, si + 52);
  sub_15319();
  si = pop();
  sub_15240();
  memoryASet(ds, 0x3ae1, 0x00);
  goto loc_1516f;
loc_151d5:
  if (memoryAGet16(ds, 0x8f42) == 0x0000)
    goto loc_15216;
loc_151dc:
  memoryASet16(ds, 0x3818, 0xffff);
  ax = memoryAGet16(ds, 0x39b2);
  if (stop(/*82*/))
    goto loc_1516f;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = (memoryAGet16(ds, 0x915a) + ax) >= 0x10000;
  memoryASet16(ds, 0x915a, memoryAGet16(ds, 0x915a) + ax);
  memoryASet16(ds, 0x915c, memoryAGet16(ds, 0x915c) + (dx + flags.carry));
  memoryASet16(ds, 0x39b2, 0xffff);
  sub_1577d();
  si = memoryAGet16(ds, 0x39b4);
  memoryASet16(ds, si + 6, 0x0000);
  si = memoryAGet16(ds, si + 10);
  sub_13788();
  sub_1576d();
  si = 0x3980;
  sub_15787();
  goto loc_1516f;
loc_15216:
  sub_15488();
}
void sub_1521a()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x39b4, si);
  si = 0x3ac2;
  sub_15787();
  si = memoryAGet16(ds, 0x39b4);
  bx = memoryAGet16(ds, si + 6);
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 14542);
  if (memoryAGet16(ds, 0x991c) != 0x0005)
    goto loc_1523a;
  ax >>= 1;
loc_1523a:
  memoryASet16(ds, 0x39b2, ax);
  goto loc_157fa;
  //   gap of 1466 bytes
loc_157fa:
  memoryASet(ds, 0x8f40, 0xff);
  push(ax);
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  ax = pop();
  if ((short)ax < (short)0x000a)
    goto loc_1581d;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  bx = 0x000a;
  div(bx);
  push(dx);
  sub_1580d();
  ax = pop();
loc_1581d:
  ax += 0x0030;
  sub_10cf9();
  memoryASet(ds, 0x8f40, 0x00);
}
void sub_15240()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x39b4, si);
  memoryASet16(ds, 0x3c9a, 0x00f7);
  memoryASet16(ds, 0x3c9c, 0x0078);
  memoryASet16(ds, 0x3c9e, 0xf700);
loc_15256:
  sub_10a51();
  sub_10c93();
  sub_15691();
  sub_156b8();
  sub_154db();
  memoryASet16(ds, 0x3c9c, memoryAGet16(ds, 0x3c9c) - 0x0002);
  if ((short)memoryAGet16(ds, 0x3c9c) > (short)0x0068)
    goto loc_15256;
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf470);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf700);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf990);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf700);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf470);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf700);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf990);
  cx = 0x0003;
  sub_154fc();
  memoryASet16(ds, 0x3c9e, 0xf700);
  cx = 0x0003;
  sub_154fc();
loc_152d7:
  sub_10a51();
  sub_10c93();
  sub_15691();
  sub_156b8();
  sub_154db();
  memoryASet16(ds, 0x3c9c, memoryAGet16(ds, 0x3c9c) + 0x0002);
  if ((short)memoryAGet16(ds, 0x3c9c) < (short)0x0080)
    goto loc_152d7;
  si = 0x3ab4;
  sub_15787();
  si = memoryAGet16(ds, 0x39b4);
  bx = memoryAGet16(ds, si + 6);
  bx <<= 1;
  bx = memoryAGet16(ds, bx + 14542);
  di = memoryAGet16(ds, si + 10);
  ax = 0x07d0;
  mul(memoryAGet16(ds, di + 52));
  ax += bx;
  ax >>= 1;
  memoryASet16(ds, 0x39b2, ax);
  goto loc_157fa;
  //   gap of 1249 bytes
loc_157fa:
  memoryASet(ds, 0x8f40, 0xff);
  push(ax);
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  ax = pop();
  if ((short)ax < (short)0x000a)
    goto loc_1581d;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  bx = 0x000a;
  div(bx);
  push(dx);
  sub_1580d();
  ax = pop();
loc_1581d:
  ax += 0x0030;
  sub_10cf9();
  memoryASet(ds, 0x8f40, 0x00);
}
void sub_15319()
{
  stackguard sg(sp);

  push(bx);
  push(ax);
  sub_1576d();
  bx = pop();
  push(bx);
  bx <<= 1;
  si = memoryAGet16(ds, bx + 14438);
  sub_15787();
  ax = pop();
  bx = pop();
  if (memoryAGet(ds, 0x3ade) == 0x00)
    return;
  if (ax == 0x0001)
    goto loc_1535c;
  if (ax == 0x0013)
    goto loc_1535c;
  if (ax == 0x0012)
    goto loc_1535c;
  if (ax == 0x0008)
    goto loc_1535c;
  if (ax == 0x000a)
    goto loc_1535c;
  if (ax == 0x000e)
    goto loc_1535c;
  if (ax == 0x0009)
    goto loc_1535c;
  if (ax == 0x000d)
    goto loc_1535c;
  return;
loc_1535c:
  push(bx);
  si = 0x3ad4;
  sub_15787();
  ax = pop();
  ax++;
  sub_157fa();
}
void sub_15369()
{
  stackguard sg(sp);

loc_15369:
  if (memoryAGet16(ds, 0x3adc) == 0x0000)
    goto loc_15377;
  memoryASet16(ds, 0x3adc, memoryAGet16(ds, 0x3adc) - 1);
  goto loc_15416;
loc_15377:
  if (memoryAGet(ds, 0x8f5b) == 0x00)
    goto loc_15381;
  goto loc_15429;
loc_15381:
  if (memoryAGet(ds, 0x8f59) != 0x00)
    goto loc_1538b;
  goto loc_15416;
loc_1538b:
  memoryASet16(ds, 0x8e88, 0x0008);
  memoryASet16(ds, 0x3adc, 0x0004);
  sub_15488();
  if (!(memoryAGet(ds, 0x8f59) & 0x04))
    goto loc_153c5;
  if (memoryAGet16(ds, 0x8f44) != 0x0004)
    goto loc_153b7;
loc_153a8:
  ax = 0;
  if (memoryAGet16(ds, 0x8f42) != 0x0000)
    goto loc_153b2;
  ax++;
loc_153b2:
  memoryASet16(ds, 0x8f42, ax);
  goto loc_15413;
loc_153b7:
  memoryASet16(ds, 0x8f42, memoryAGet16(ds, 0x8f42) - 1);
  if ((short)memoryAGet16(ds, 0x8f42) >= 0)
    goto loc_15413;
  memoryASet16(ds, 0x8f42, 0x0004);
  goto loc_15413;
loc_153c5:
  if (!(memoryAGet(ds, 0x8f59) & 0x08))
    goto loc_153e6;
  if (memoryAGet16(ds, 0x8f44) == 0x0004)
    goto loc_153a8;
  memoryASet16(ds, 0x8f42, memoryAGet16(ds, 0x8f42) + 1);
  if ((short)memoryAGet16(ds, 0x8f42) <= (short)0x0004)
    goto loc_15413;
  memoryASet16(ds, 0x8f42, 0x0000);
  goto loc_15413;
loc_153e6:
  if (!(memoryAGet(ds, 0x8f59) & 0x01))
    goto loc_153fb;
  memoryASet16(ds, 0x8f44, memoryAGet16(ds, 0x8f44) - 1);
  if ((short)memoryAGet16(ds, 0x8f44) >= 0)
    goto loc_15413;
  memoryASet16(ds, 0x8f44, 0x0004);
  goto loc_15413;
loc_153fb:
  if (!(memoryAGet(ds, 0x8f59) & 0x02))
    goto loc_15413;
  memoryASet16(ds, 0x8f44, memoryAGet16(ds, 0x8f44) + 1);
  if ((short)memoryAGet16(ds, 0x8f44) <= (short)0x0004)
    goto loc_15413;
  memoryASet16(ds, 0x8f44, 0x0000);
loc_15413:
  sub_15435();
loc_15416:
  sub_10c93();
  sub_15691();
  sub_156b8();
  sub_10a51();
  memoryASet16(ds, 0x919c, memoryAGet16(ds, 0x919c) + 1);
  goto loc_15369;
loc_15429:
  memoryASet(ds, 0x8f5b, 0x00);
  memoryASet16(ds, 0x8e88, 0x0009);
}
void sub_15435()
{
  stackguard sg(sp);

  goto loc_15435;
loc_10c2d:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 3131));
  return;
  //   gap of 18426 bytes
loc_15435:
  bx = memoryAGet16(ds, 0x8f44);
  if (bx == 0x0004)
    goto loc_15465;
  bp = bx;
  bx <<= 1;
  bx <<= 1;
  bx += bp;
  bx += memoryAGet16(ds, 0x8f42);
  ax = 0x000c;
  mul(bx);
  bx = ax;
  cx = memoryAGet16(ds, bx + 15544);
  dx = memoryAGet16(ds, bx + 15546);
  cx += 0x000a;
  dx += 0x001f;
  si = 0xb282;
  goto loc_10c2d;
loc_15465:
  cx = 0x0004;
  si = 0xdde0;
  if (memoryAGet16(ds, 0x8f42) == 0x0000)
    goto loc_15482;
  cx = 0x002d;
  si = 0xe1e8;
  if (memoryAGet(ds, 0x3ade) != 0x00)
    goto loc_15482;
  si = 0xdfe4;
loc_15482:
  dx = 0x00a8;
  goto loc_10c2d;
}
void sub_15488()
{
  stackguard sg(sp);

  goto loc_15488;
loc_10c2d:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 3131));
  return;
  //   gap of 18509 bytes
loc_15488:
  bx = memoryAGet16(ds, 0x8f44);
  if (bx == 0x0004)
    goto loc_154b8;
  ax = bx;
  bx <<= 1;
  bx <<= 1;
  bx += ax;
  bx += memoryAGet16(ds, 0x8f42);
  ax = 0x000c;
  mul(bx);
  bx = ax;
  cx = memoryAGet16(ds, bx + 15544);
  dx = memoryAGet16(ds, bx + 15546);
  cx += 0x000a;
  dx += 0x001f;
  si = 0xb218;
  goto loc_10c2d;
loc_154b8:
  cx = 0x0004;
  si = 0xe3ec;
  if (memoryAGet16(ds, 0x8f42) == 0x0000)
    goto loc_154d5;
  cx = 0x002d;
  si = 0xe7f4;
  if (memoryAGet(ds, 0x3ade) != 0x00)
    goto loc_154d5;
  si = 0xe5f0;
loc_154d5:
  dx = 0x00a8;
  goto loc_10c2d;
}
void sub_154db()
{
  stackguard sg(sp);

  push(memoryAGet16(ss, 0x0010));
  memoryASet16(ss, 0x0010, 0x0068);
  cx = memoryAGet16(ds, 0x3c9a);
  dx = memoryAGet16(ds, 0x3c9c);
  si = memoryAGet16(ds, 0x3c9e);
  sub_10875();
  memoryASet16(ss, 0x0010, pop());
}
void sub_154fc()
{
  stackguard sg(sp);

loc_154fc:
  push(cx);
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  sub_154db();
  cx = pop();
  if (--cx)
    goto loc_154fc;
}
void sub_15510()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x3c9a, 0x0106);
  memoryASet16(ds, 0x3c9c, 0x0088);
  memoryASet16(ds, 0x3c9e, 0xf700);
loc_15522:
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  sub_154db();
  if (memoryAGet16(ds, 0x3c9a) == 0x011c)
    goto loc_15545;
  memoryASet16(ds, 0x3c9a, memoryAGet16(ds, 0x3c9a) + 0x0002);
  memoryASet16(ds, 0x3c9c, memoryAGet16(ds, 0x3c9c) - 0x0002);
  goto loc_15522;
loc_15545:
  memoryASet16(ds, 0x3c9e, 0xf990);
  cx = 0x0006;
  sub_154fc();
  ah = 0x01;
  interrupt(0x80);
  memoryASet16(ds, 0x8e88, 0x0008);
  memoryASet(ds, 0x3adf, 0x00);
  memoryASet16(ds, 0x3c9e, 0xf700);
  cx = 0x0006;
  sub_154fc();
loc_1556c:
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  sub_154db();
  memoryASet16(ds, 0x3c9a, memoryAGet16(ds, 0x3c9a) - 0x0002);
  memoryASet16(ds, 0x3c9c, memoryAGet16(ds, 0x3c9c) + 0x0002);
  if ((short)memoryAGet16(ds, 0x3c9a) > (short)0x0106)
    goto loc_1556c;
}
void sub_1558e()
{
  stackguard sg(sp);

loc_1558e:
  sub_10a51();
  si = 0x3cb6;
  cx = 0x0014;
loc_15597:
  memoryASet16(ds, si, memoryAGet16(ds, si) + 1);
  si += 0x000c;
  if (--cx)
    goto loc_15597;
  if (memoryAGet16(ds, 0x3cb6) == 0x0000)
    goto loc_155ad;
  sub_156b8();
  sub_10c93();
  goto loc_1558e;
loc_155ad:
  si = 0x3cb6;
  cx = 0x0014;
loc_155b3:
  memoryASet16(ds, si, 0x0001);
  si += 0x000c;
  if (--cx)
    goto loc_155b3;
  cx = 0x0005;
  push(cx);
  goto loc_155c6;
loc_155c2:
  push(cx);
  sub_10a51();
loc_155c6:
  sub_156b8();
  sub_10c93();
  cx = pop();
  if (--cx)
    goto loc_155c2;
}
void sub_155d0()
{
  stackguard sg(sp);

  si = 0x3cb6;
  cx = 0x0014;
loc_155d6:
  memoryASet16(ds, si, 0x0000);
  si += 0x000c;
  if (--cx)
    goto loc_155d6;
loc_155df:
  sub_10a51();
  si = 0x3cb6;
  cx = 0x0014;
loc_155e8:
  memoryASet16(ds, si, memoryAGet16(ds, si) - 1);
  si += 0x000c;
  if (--cx)
    goto loc_155e8;
  if (memoryAGet16(ds, 0x3cb6) == 0xfff7)
    goto loc_155fe;
  sub_156b8();
  sub_10c93();
  goto loc_155df;
loc_155fe:
  cx = 0x000b;
  push(cx);
  goto loc_15608;
loc_15604:
  push(cx);
  sub_10a51();
loc_15608:
  sub_156b8();
  sub_10c93();
  cx = pop();
  if (--cx)
    goto loc_15604;
}
void sub_15612()
{
  stackguard sg(sp);

  sub_156b8();
  sub_10c93();
  sub_10cb5();
}
void sub_1561c()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x3adf) != 0x00)
    goto loc_15632;
  if (memoryAGet(ds, 0x3ae0) != 0x00)
    goto loc_1563e;
  sub_14191();
  ax &= 0x2654;
  if (ax != 0)
    goto loc_15655;
loc_15632:
  cx = 0x0107;
  dx = 0x0029;
  si = 0xea9e;
  sub_10875();
loc_1563e:
  cx = 0x00f7;
  dx = 0x0029;
  si = 0xe9f8;
  sub_10875();
  if (memoryAGet(ds, 0x3ae0) == 0x00)
    goto loc_15655;
  memoryASet(ds, 0x3ae0, memoryAGet(ds, 0x3ae0) - 1);
loc_15655:
  if (memoryAGet(ds, 0x3adf) != 0x00)
    return;
  if (stop(/*72*/))
    goto loc_15684;
  if (memoryAGet(ds, 0x3ae1) == 0x00)
    goto loc_1566b;
  memoryASet(ds, 0x3ae1, memoryAGet(ds, 0x3ae1) - 1);
  goto loc_15678;
loc_1566b:
  sub_14191();
  ax &= 0x2654;
  if (ax != 0)
    return;
  memoryASet(ds, 0x3ae1, 0x08);
loc_15678:
  cx = 0x0107;
  dx = 0x0023;
  si = 0xebea;
  sub_10875();
loc_15684:
  cx = 0x00f5;
  dx = 0x0023;
  si = 0xeb44;
  sub_10875();
}
void sub_15691()
{
  stackguard sg(sp);

  si = 0x3cb6;
  cx = 0x0014;
loc_15697:
  if (memoryAGet16(ds, si + 6) != 0x0000)
    goto loc_156a3;
  memoryASet16(ds, si, 0x0000);
  goto loc_156b2;
loc_156a3:
  memoryASet16(ds, si, memoryAGet16(ds, si) - 1);
  if ((short)memoryAGet16(ds, si) > 0)
    goto loc_156b2;
  sub_14191();
  ax &= 0x00ff;
  ax += 0x0014;
  memoryASet16(ds, si, ax);
loc_156b2:
  si += 0x000c;
  if (--cx)
    goto loc_15697;
}
void sub_156b8()
{
  stackguard sg(sp);

  di = 0x3cb6;
  cx = 0x0014;
loc_156be:
  push(cx);
  if ((short)memoryAGet16(ds, di) > (short)0x0000)
    goto loc_156ec;
  if (memoryAGet16(ds, di) == 0xfff8)
    goto loc_156d4;
  sub_10cd7();
  if (memoryAGet16(ds, di) != 0x0000)
    goto loc_156d4;
  goto loc_15761;
loc_156d4:
  push(di);
  cx = memoryAGet16(ds, di + 2);
  dx = memoryAGet16(ds, di + 4);
  bx = memoryAGet16(ds, di);
  bx += 0x0009;
  bx <<= 1;
  si = memoryAGet16(ds, bx + 15520);
  sub_10875();
  di = pop();
  goto loc_15761;
loc_156ec:
  if ((short)memoryAGet16(ds, di) > (short)0x0002)
    goto loc_15705;
  if (memoryAGet16(ds, di) != 0x0002)
    goto loc_15700;
  if ((short)memoryAGet16(ds, 0x8e88) >= 0)
    goto loc_15700;
  memoryASet16(ds, 0x8e8a, 0x0000);
loc_15700:
  sub_10cd7();
  goto loc_15761;
loc_15705:
  bx = pop();
  push(bx);
  bx &= 0x0001;
  bx <<= 1;
  si = memoryAGet16(ds, bx + 15538);
  cx = memoryAGet16(ds, di + 2);
  dx = memoryAGet16(ds, di + 4);
  push(di);
  sub_10875();
  di = pop();
  bx = memoryAGet16(ds, di + 8);
  si = memoryAGet16(ds, bx);
  bx += 0x0002;
  if (si & si)
    goto loc_1572e;
  bx = memoryAGet16(ds, bx);
  si = memoryAGet16(ds, bx);
  bx += 0x0002;
loc_1572e:
  memoryASet16(ds, di + 8, bx);
  cx = memoryAGet16(ds, di + 2);
  dx = memoryAGet16(ds, di + 4);
  push(es);
  ax = 0x449b;
  es = ax;
  cx += memoryAGet16(es, si);
  dx += memoryAGet16(es, si + 2);
  ax = memoryAGet16(es, si + 4);
  ax >>= 1;
  ax -= 0x0010;
  cx -= ax;
  ax = memoryAGet16(es, si + 6);
  ax++;
  ax >>= 1;
  ax -= 0x000e;
  dx -= ax;
  es = pop();
  push(di);
  sub_10875();
  di = pop();
loc_15761:
  di += 0x000c;
  cx = pop();
  if (--cx)
    goto loc_15769;
  return;
loc_15769:
  goto loc_156be;
}
void sub_1576d()
{
  stackguard sg(sp);

  sub_10c71();
  memoryASet16(ds, 0x8f46, 0x0037);
  memoryASet16(ds, 0x8f48, 0x0076);
}
void sub_1577d()
{
  stackguard sg(sp);

  goto loc_1577d;
loc_10b1d:
  bp = memoryAGet16(ds, 0x3044);
  bp <<= 1;
  bp <<= 1;
  callIndirect(memoryAGet(cs, bp + 2859));
  return;
  //   gap of 19538 bytes
loc_1577d:
  ax = memoryAGet16(ds, 0x915a);
  dx = memoryAGet16(ds, 0x915c);
  goto loc_10b1d;
}
void sub_15787()
{
  stackguard sg(sp);

loc_15787:
  memoryASet(ds, 0x8f40, 0xff);
  push(si);
  sub_15691();
  sub_156b8();
  sub_10c93();
  sub_10a51();
  si = pop();
loc_1579a:
  sub_14191();
  ax &= 0x0003;
  if (ax == 0)
    goto loc_1579a;
  ax--;
  ax |= 0x0080;
  ax = 0;
  di = si;
loc_157aa:
  if (memoryAGet(ds, di) == 0x00)
    goto loc_157bd;
  if (memoryAGet(ds, di) == 0x20)
    goto loc_157bd;
  if (memoryAGet(ds, di) == 0x0d)
    goto loc_157bd;
  ax++;
  di++;
  goto loc_157aa;
loc_157bd:
  ax += memoryAGet16(ds, 0x8f46);
  if ((short)ax <= (short)0x004b)
    goto loc_157c9;
  sub_15829();
loc_157c9:
  ax = 0;
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    goto loc_157f4;
  if (al == 0x20)
    goto loc_157e4;
  if (al != 0x0d)
    goto loc_157dd;
  sub_15829();
  goto loc_15787;
loc_157dd:
  push(si);
  sub_10cf9();
  si = pop();
  goto loc_157c9;
loc_157e4:
  memoryASet16(ds, 0x8f46, memoryAGet16(ds, 0x8f46) + 1);
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    goto loc_157f4;
  if (al == 0x20)
    goto loc_157e4;
  si--;
  goto loc_15787;
loc_157f4:
  memoryASet(ds, 0x8f40, 0x00);
}
void sub_157fa()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f40, 0xff);
  push(ax);
  sub_10a51();
  sub_15691();
  sub_156b8();
  sub_10c93();
  ax = pop();
  if ((short)ax < (short)0x000a)
    goto loc_1581d;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  bx = 0x000a;
  div(bx);
  push(dx);
  sub_1580d();
  ax = pop();
loc_1581d:
  ax += 0x0030;
  sub_10cf9();
  memoryASet(ds, 0x8f40, 0x00);
}
void sub_1580d()
{
  stackguard sg(sp);

  if ((short)ax < (short)0x000a)
    goto loc_1581d;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  bx = 0x000a;
  div(bx);
  push(dx);
  sub_1580d();
  ax = pop();
loc_1581d:
  ax += 0x0030;
  sub_10cf9();
  memoryASet(ds, 0x8f40, 0x00);
}
void sub_15829()
{
  stackguard sg(sp);

  ax = 0x0037;
  memoryASet16(ds, 0x8f46, ax);
  memoryASet16(ds, 0x8f48, memoryAGet16(ds, 0x8f48) + 0x0007);
}
void sub_15835()
{
  stackguard sg(sp);

  si = 0x3de4;
  cx = 0x0007;
loc_1583b:
  push(cx);
  lodsw<MemAuto, DirAuto>();
  cx = ax;
  lodsw<MemAuto, DirAuto>();
  dx = ax;
  lodsw<MemAuto, DirAuto>();
  di = ax;
  ax = memoryAGet16(ds, di);
  di += 0x0002;
  if (ax & ax)
    goto loc_15855;
  di = memoryAGet16(ds, di);
  ax = memoryAGet16(ds, di);
  di += 0x0002;
loc_15855:
  memoryASet16(ds, si + 65534, di);
  push(si);
  si = ax;
  sub_10875();
  si = pop();
  cx = pop();
  if (--cx)
    goto loc_1583b;
}
void sub_15863()
{
  stackguard sg(sp);

  ax = 0;
  ah = 0x02;
  al = 0x00;
  interrupt(0x80);
  memoryASet16(ds, 0x3754, 0x3625);
  memoryASet16(ds, 0x3752, 0x0078);
  memoryASet16(ds, 0x3750, 0x0000);
  di = 0x9a40;
  cx = 0x0030;
loc_15883:
  sub_14191();
  stosw<MemAuto, DirAuto>();
  sub_14191();
  stosw<MemAuto, DirAuto>();
  sub_14191();
  ax &= 0x1fff;
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_15883;
  sub_10de7();
  sub_10d81();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15916;
loc_158a1:
  sub_10a0d();
  sub_10d1b();
  if ((short)memoryAGet16(ds, 0x3750) < (short)0x0012)
    goto loc_158d9;
  memoryASet16(ds, 0x3752, 0x0078);
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  if ((short)memoryAGet16(ds, 0x3750) < (short)0x0024)
    goto loc_158d9;
  if ((short)memoryAGet16(ds, 0x3750) >= (short)0x0036)
    goto loc_158d9;
  memoryASet16(ds, 0x3752, 0x0096);
  si = memoryAGet16(ds, 0x3754);
  si += 0x0014;
  sub_10afb();
loc_158d9:
  sub_10831();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15916;
  sub_10a51();
  memoryASet16(ds, 0x3750, memoryAGet16(ds, 0x3750) + 1);
  if (memoryAGet16(ds, 0x3750) != 0x0048)
    goto loc_158a1;
  memoryASet16(ds, 0x3750, 0x0000);
  memoryASet16(ds, 0x3754, memoryAGet16(ds, 0x3754) + 0x0028);
  if (memoryAGet16(ds, 0x3754) != 0x3715)
    goto loc_158a1;
  sub_159aa();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15916;
  memoryASet16(ds, 0x3754, 0x3625);
  goto loc_158a1;
loc_15916:
  memoryASet(ds, 0x8f5b, 0x00);
  ah = 0x01;
  interrupt(0x80);
  sub_10de7();
  sub_10d81();
}
void sub_15926()
{
  stackguard sg(sp);

  push(si);
  push(cx);
  sub_15935();
  cx = pop();
  si = pop();
  ax = 0x0064;
  sub_1595d();
  goto loc_15950;
  //   gap of 27 bytes
loc_15950:
  sub_10e2b();
  sub_10d81();
  sub_10be9();
  sub_1426a();
}
void sub_15935()
{
  stackguard sg(sp);

  sub_10bc7();
  cx = 0x0030;
  di = 0x9a40;
loc_1593e:
  sub_14191();
  stosw<MemAuto, DirAuto>();
  sub_14191();
  stosw<MemAuto, DirAuto>();
  sub_14191();
  ax &= 0x1fff;
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_1593e;
}
void sub_15950()
{
  stackguard sg(sp);

  sub_10e2b();
  sub_10d81();
  sub_10be9();
  sub_1426a();
}
void sub_1595d()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x3752, ax);
  memoryASet16(ds, 0x3754, si);
  if (memoryAGet(ds, 0x374e) == 0x00)
    goto loc_1598f;
  sub_10de7();
loc_1596e:
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10d81();
  if (memoryAGet(ds, 0x8f5b) == 0x00)
    goto loc_1596e;
  memoryASet(ds, 0x8f5b, 0x00);
  return;
loc_1598f:
  push(cx);
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10de7();
  sub_10d81();
  cx = pop();
  if (--cx)
    goto loc_1598f;
}
void sub_159aa()
{
  stackguard sg(sp);

  ax = 0x000c;
  si = 0x352b;
  cx = 0x0001;
  sub_1595d();
  cx = 0x0055;
loc_159b9:
  push(cx);
  sub_10b3f();
  cx = pop();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    return;
  if (--cx)
    goto loc_159b9;
}
void sub_159c8()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9152);
  dx = memoryAGet16(ds, 0x9154);
  if ((short)dx >= (short)memoryAGet16(ds, 0x358d))
    goto loc_159d8;
  return;
loc_159d8:
  if (dx != memoryAGet16(ds, 0x358d))
    goto loc_159e3;
  if ((short)ax > (short)memoryAGet16(ds, 0x358b))
    goto loc_159e3;
  return;
loc_159e3:
  sub_15b0b();
  si = 0x358b;
  di = 0x3616;
loc_159ec:
  ax = memoryAGet16(ds, 0x9152);
  dx = memoryAGet16(ds, 0x9154);
  if ((short)dx < (short)memoryAGet16(ds, si + 65534))
    goto loc_15a21;
  if (dx != memoryAGet16(ds, si + 65534))
    goto loc_159ff;
  if (ax <= memoryAGet16(ds, si + 65532))
    goto loc_15a21;
loc_159ff:
  si -= 0x0004;
  ax = memoryAGet16(ds, si);
  memoryASet16(ds, si + 4, ax);
  ax = memoryAGet16(ds, si + 2);
  memoryASet16(ds, si + 6, ax);
  cx = 0x000b;
loc_15a10:
  di--;
  al = memoryAGet(ds, di);
  memoryASet(ds, di + 15, al);
  if (--cx)
    goto loc_15a10;
  di -= 0x0004;
  if ((short)si > (short)0x3567)
    goto loc_159ec;
loc_15a21:
  ax = memoryAGet16(ds, 0x9152);
  memoryASet16(ds, si, ax);
  ax = memoryAGet16(ds, 0x9154);
  memoryASet16(ds, si + 2, ax);
  memoryASet(ds, di + 12, 0x3a);
  memoryASet(ds, di + 13, 0x3a);
  memoryASet(ds, di + 14, 0x3a);
  bp = di + 0x4;
  bx = 0x3756;
  ax = memoryAGet16(ds, 0x9152);
  memoryASet16(ds, 0xfce2, ax);
  ax = memoryAGet16(ds, 0x9154);
  memoryASet16(ds, 0xfce4, ax);
loc_15a4a:
  if (memoryAGet16(ds, bx) == 0x0000)
    goto loc_15a7c;
  memoryASet(ds, bp, 0x30);
loc_15a54:
  ax = memoryAGet16(ds, bx);
  flags.carry = memoryAGet16(ds, 0xfce2) < ax;
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) - ax);
  ax = memoryAGet16(ds, bx + 2);
  memoryASet16(ds, 0xfce4, memoryAGet16(ds, 0xfce4) - (ax + flags.carry));
  if (stop(/*70*/))
    goto loc_15a69;
  memoryASet(ds, bp, memoryAGet(ds, bp) + 1);
  goto loc_15a54;
loc_15a69:
  ax = memoryAGet16(ds, bx);
  flags.carry = (memoryAGet16(ds, 0xfce2) + ax) >= 0x10000;
  memoryASet16(ds, 0xfce2, memoryAGet16(ds, 0xfce2) + ax);
  ax = memoryAGet16(ds, bx + 2);
  memoryASet16(ds, 0xfce4, memoryAGet16(ds, 0xfce4) + (ax + flags.carry));
  bx += 0x0004;
  bp++;
  goto loc_15a4a;
loc_15a7c:
  memoryASet(ds, 0x8f5b, 0x00);
  bp = di + 0xc;
  bx = 0x33ca;
  di = 0;
loc_15a89:
  al = memoryAGet(ds, bx + di);
  memoryASet(ds, bp, al);
loc_15a8f:
  push(bp);
  push(bx);
  push(di);
  sub_10b3f();
  di = pop();
  bx = pop();
  bp = pop();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15af0;
  ah = memoryAGet(ds, 0x8f59);
  ah &= 0x0c;
  dx = 0xffff;
  if (ah & 0x04)
    goto loc_15ab6;
  dx = 0x0001;
  if (!(ah & 0x08))
    goto loc_15a8f;
loc_15ab6:
  cx = 0x0004;
  di += dx;
  if ((short)di >= 0)
    goto loc_15ac0;
  di = 0x0027;
loc_15ac0:
  if ((short)di < (short)0x0028)
    goto loc_15ac7;
  di = 0;
loc_15ac7:
  al = memoryAGet(ds, bx + di);
  memoryASet(ds, bp, al);
  push(bx);
  push(bp);
  push(di);
  push(dx);
  push(cx);
  push(ax);
  sub_10b3f();
  ax = pop();
  cx = pop();
  dx = pop();
  di = pop();
  bp = pop();
  bx = pop();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15af0;
  al = memoryAGet(ds, 0x8f59);
  al &= 0x0c;
  if (al != ah)
    goto loc_15a8f;
  if (--cx)
    goto loc_15ac7;
  goto loc_15ab6;
loc_15af0:
  memoryASet(ds, 0x8f5b, 0x00);
  bp++;
  if (memoryAGet(ds, bp) == 0x3a)
    goto loc_15a89;
  cx = 0x0012;
loc_15b00:
  push(cx);
  sub_10b3f();
  cx = pop();
  if (--cx)
    goto loc_15b00;
  sub_15950();
}
void sub_15b0b()
{
  stackguard sg(sp);

  goto loc_15b0b;
loc_1595d:
  memoryASet16(ds, 0x3752, ax);
  memoryASet16(ds, 0x3754, si);
  if (memoryAGet(ds, 0x374e) == 0x00)
    goto loc_1598f;
  sub_10de7();
loc_1596e:
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10d81();
  if (memoryAGet(ds, 0x8f5b) == 0x00)
    goto loc_1596e;
  memoryASet(ds, 0x8f5b, 0x00);
  goto loc_159a9;
loc_1598f:
  push(cx);
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10de7();
  sub_10d81();
  cx = pop();
  if (--cx)
    goto loc_1598f;
loc_159a9:
  return;
  //   gap of 353 bytes
loc_15b0b:
  si = 0x352b;
  goto loc_15b13;
  //   gap of 3 bytes
loc_15b13:
  push(si);
  sub_15935();
  ax = 0x000c;
  si = pop();
  cx = 0x0001;
  goto loc_1595d;
}
void sub_15b10()
{
  stackguard sg(sp);

  goto loc_15b10;
loc_1595d:
  memoryASet16(ds, 0x3752, ax);
  memoryASet16(ds, 0x3754, si);
  if (memoryAGet(ds, 0x374e) == 0x00)
    goto loc_1598f;
  sub_10de7();
loc_1596e:
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10d81();
  if (memoryAGet(ds, 0x8f5b) == 0x00)
    goto loc_1596e;
  memoryASet(ds, 0x8f5b, 0x00);
  goto loc_159a9;
loc_1598f:
  push(cx);
  sub_10a0d();
  si = memoryAGet16(ds, 0x3754);
  sub_10afb();
  sub_10831();
  sub_10a51();
  sub_10de7();
  sub_10d81();
  cx = pop();
  if (--cx)
    goto loc_1598f;
loc_159a9:
  return;
  //   gap of 358 bytes
loc_15b10:
  si = 0x353f;
  push(si);
  sub_15935();
  ax = 0x000c;
  si = pop();
  cx = 0x0001;
  goto loc_1595d;
}
void sub_15b21()
{
  stackguard sg(sp);

  goto loc_15b21;
loc_15950:
  sub_10e2b();
  sub_10d81();
  sub_10be9();
  sub_1426a();
  return;
  //   gap of 452 bytes
loc_15b21:
  memoryASet16(ds, 0x91b0, 0x0003);
  sub_15935();
  ax = 0x000c;
  si = 0x3477;
  cx = 0x0001;
  sub_1595d();
  memoryASet(ds, 0x8f5b, 0x00);
  ax = 0;
  push(ax);
loc_15b3e:
  sub_109eb();
  memoryASet16(ds, 0x3752, 0x000c);
  si = 0x3477;
  sub_10afb();
  memoryASet16(ds, 0x3752, 0x003c);
  si = 0x348b;
  ax = pop();
  push(ax);
  if (ax & ax)
    goto loc_15b5f;
  si = 0x349f;
loc_15b5f:
  sub_10afb();
  memoryASet16(ds, 0x3752, 0x0054);
  si = 0x34b3;
  ax = pop();
  push(ax);
  if (ax != 0x0001)
    goto loc_15b75;
  si = 0x34c7;
loc_15b75:
  sub_10afb();
  memoryASet16(ds, 0x3752, 0x006c);
  si = 0x34db;
  if (memoryAGet(ds, 0x8f54) != 0x00)
    goto loc_15b8b;
  si = 0x3503;
loc_15b8b:
  ax = pop();
  push(ax);
  if (ax != 0x0002)
    goto loc_15b95;
  si += 0x0014;
loc_15b95:
  sub_10afb();
  sub_15c7c();
  sub_10831();
  sub_10a51();
  if (!(memoryAGet(ds, 0x8f59) & 0x01))
    goto loc_15bc0;
  memoryASet(ds, 0x8f59, 0x00);
  memoryASet16(ds, 0x8e88, 0x0008);
  ax = pop();
  ax--;
  push(ax);
  if ((short)ax >= 0)
    goto loc_15b3e;
  ax = pop();
  ax = 0x0002;
  push(ax);
  goto loc_15b3e;
loc_15bc0:
  if (!(memoryAGet(ds, 0x8f59) & 0x02))
    goto loc_15be4;
  memoryASet(ds, 0x8f59, 0x00);
  memoryASet16(ds, 0x8e88, 0x0008);
  ax = pop();
  ax++;
  push(ax);
  if ((short)ax >= (short)0x0003)
    goto loc_15bdd;
  goto loc_15b3e;
loc_15bdd:
  ax = pop();
  ax = 0;
  push(ax);
  goto loc_15b3e;
loc_15be4:
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15bee;
  goto loc_15b3e;
loc_15bee:
  memoryASet(ds, 0x8f5b, 0x00);
  memoryASet16(ds, 0x8e88, 0x0009);
  ax = pop();
  push(ax);
  if (ax != 0x0002)
    goto loc_15c07;
  memoryASet(ds, 0x8f54, ~memoryAGet(ds, 0x8f54));
  goto loc_15b3e;
loc_15c07:
  ax = pop();
  ax++;
  memoryASet16(ds, 0x8e70, ax);
  goto loc_15950;
}
// INJECT: Error: cannot inject zero flag in sub_15c0f()!
// INJECT: Error: cannot inject zero flag in sub_15c0f()!
void sub_15c0f()
{
  stackguard sg(sp);

  sub_15935();
  ax = 0x0050;
  si = 0x344f;
  cx = 0x0001;
  sub_1595d();
  memoryASet(ds, 0x8f5b, 0x00);
  ax = 0x004f;
  push(ax);
loc_15c27:
  sub_109eb();
  memoryASet16(ds, 0x3752, 0x0050);
  si = 0x344f;
  sub_10afb();
  ax = pop();
  push(ax);
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  al += 0x30;
  memoryASet(ds, 0x346c, al);
  memoryASet16(ds, 0x3752, 0x0078);
  si = 0x3463;
  sub_10afb();
  sub_15c7c();
  sub_10831();
  sub_10a51();
  if (memoryAGet(ds, 0x8f5b) != 0x00)
    goto loc_15c6d;
  ax = pop();
  ax--;
  push(ax);
  if (ax != 0)
    goto loc_15c27;
  sp += 0x0002;
  sub_15950();
  ax = 0;
  stop(/*inject ret*/);
  return;
loc_15c6d:
  sp += 0x0002;
  sub_15950();
  memoryASet(ds, 0x8f5b, 0x00);
  ax = 0;
  ax--;
  stop(/*inject ret*/);
}
void sub_15c7c()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x91b0);
  al += 0x30;
  memoryASet(ds, 0x33fb, al);
  si = 0x33f3;
  sub_10b83();
}
void sub_15c8b()
{
  stackguard sg(sp);

  dx = 0x41c8;
  ax = 0x449b;
  es = ax;
  di = 0;
  sub_1011c();
  dx = 0x41d2;
  ax = 0x449b;
  es = ax;
  di = 0x6be6;
  sub_1011c();
  dx = 0x41de;
  ax = 0x449b;
  es = ax;
  di = 0xabbc;
  sub_1011c();
  dx = 0x41e7;
  ax = 0x3824;
  es = ax;
  di = 0;
  sub_1011c();
  sub_10da3();
}
void sub_15cc5()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x991c);
  if (ax != memoryAGet16(ds, 0x8e6c))
    goto loc_15cd1;
  return;
loc_15cd1:
  memoryASet16(ds, 0x8e6c, ax);
  sub_15b10();
  ax = memoryAGet16(ds, 0x991c);
  al += 0x30;
  memoryASet(ds, 0x41ef, al);
  memoryASet(ds, 0x41fa, al);
  memoryASet(ds, 0x4206, al);
  memoryASet(ds, 0x4215, al);
  memoryASet(ds, 0x4222, al);
  memoryASet(ds, 0x4231, al);
  dx = 0x41ee;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0x2ee0;
  dx = 0xdf16;
  sub_15e52();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  di = 0;
  si = 0xdf16;
  ch = 0;
loc_15d10:
  lodsb<MemAuto, DirAuto>();
  cl = al;
  rep_movsw<MemAuto, MemAuto, DirAuto>();
  lodsb<MemAuto, DirAuto>();
  cl = al;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  if ((short)di >= (short)0x2ee0)
    goto loc_15d28;
  if ((short)di < (short)0x2ee0)
    goto loc_15d10;
loc_15d28:
  dx = 0x4214;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0x082a;
  dx = 0xd274;
  sub_15e52();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  dx = 0x4221;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0x0392;
  dx = 0xda9e;
  sub_15e52();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  dx = 0x4230;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0x1e96;
  dx = 0xde30;
  sub_15e52();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  si = 0xde30;
  cx = 0x0073;
  ax = 0xdf16;
loc_15d82:
  memoryASet16(ds, si, memoryAGet16(ds, si) + ax);
  si += 0x0002;
  if (--cx)
    goto loc_15d82;
  dx = 0x41f9;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0xe480;
  dx = 0;
  ax = 0x63d0;
  push(ds);
  ds = ax;
  sub_15e52();
  ds = pop();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  push(es);
  ax = 0x5489;
  es = ax;
  ax = 0;
  di = 0;
  cx = 0x7a34;
  rep_stosw<MemAuto, DirAuto>();
  es = pop();
  dx = 0x4205;
  sub_15e24();
  memoryASet16(ds, 0x8e60, ax);
  bx = ax;
  cx = 0xf468;
  dx = 0x0000;
  ax = 0x5489;
  push(ds);
  ds = ax;
  sub_15e52();
  ds = pop();
  bx = memoryAGet16(ds, 0x8e60);
  sub_15e59();
  push(ds);
  ax = 0x63d0;
  ds = ax;
  si = 0;
  di = 0x5538;
  cx = 0x1c90;
loc_15dea:
  lodsw<MemAuto, DirAuto>();
  dx = ax;
  lodsw<MemAuto, DirAuto>();
  dx |= ax;
  lodsw<MemAuto, DirAuto>();
  dx |= ax;
  lodsw<MemAuto, DirAuto>();
  ax |= dx;
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_15dea;
  ds = pop();
  sub_10dc5();
  sub_15950();
  sub_10d5f();
}
void sub_15e24()
{
  stackguard sg(sp);

loc_15e24:
  push(dx);
  ax = 0x3d00;
  interrupt(0x21);
  dx = pop();
  if (!flags.carry)
    return;
  push(dx);
  sub_15e35();
  dx = pop();
  goto loc_15e24;
}
void sub_15e35()
{
  stackguard sg(sp);

  sub_15950();
  sub_10d5f();
  si = 0x343b;
  memoryASet(ds, 0x374e, 0xff);
  sub_15926();
  memoryASet(ds, 0x374e, 0x00);
  sub_10d5f();
  sub_15b10();
}
void sub_15e52()
{
  stackguard sg(sp);

  goto loc_15e52;
loc_1054f:
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_10585;
  dx = 0x03b8;
  al = 0x00;
  out(dx, al);
  dx = 0x03b4;
  si = 0x2ee0;
  cx = 0x0009;
loc_10565:
  lodsw<MemAuto, DirAuto>();
  out(dx, ax);
  if (--cx)
    goto loc_10565;
  push(es);
  ax = 0xb000;
  es = ax;
  di = 0;
  cx = 0x4000;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  es = pop();
  dx = 0x03b8;
  al = 0x08;
  out(dx, al);
  dx = 0x03bf;
  al = 0x00;
  out(dx, al);
loc_10585:
  ah = 0x01;
  interrupt(0x80);
  sub_15ec3();
  sub_15e7a();
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_1059c;
  ax = 0x0007;
loc_1059c:
  interrupt(0x10);
  ax = 0x4c00;
  interrupt(0x21);
  memoryASet(ds, 0x8f57, 0x00);
  sub_10000();
  ax = ds;
  es = ax;
  ax = 0x0004;
  if (memoryAGet(ds, 0x8e59) != 0x00)
    goto loc_105da;
  ax = 0x0003;
  if (memoryAGet(ds, 0x8e5a) != 0x00)
    goto loc_105da;
  ax = 0x0002;
  if (memoryAGet(ds, 0x8e58) != 0x00)
    goto loc_105da;
  ax = 0x0000;
  if (memoryAGet(ds, 0x8e5d) != 0x00)
    goto loc_105da;
  ax = 0x0001;
loc_105da:
  memoryASet16(ds, 0x3044, ax);
  ah = 0x0f;
  interrupt(0x10);
  memoryASet(ds, 0x2ef3, bh);
  memoryASet(ds, 0x2ef4, al);
  memoryASet(ds, 0x2ef5, ah);
  ah = 0x01;
  ch = 0x20;
  cl = 0x20;
  interrupt(0x10);
loc_105f4:
  ax = 0x0600;
  bh = 0;
  cx = 0;
  dl = memoryAGet(ds, 0x2ef5);
  dl--;
  dh = 0x18;
  interrupt(0x10);
loc_10605:
  sub_106fe();
loc_10608:
  ah = 0;
  interrupt(0x16);
  if (ah == 0x1c)
    goto loc_10657;
  if (ah == 0x41)
    goto loc_10652;
  if (ah == 0x39)
    goto loc_10631;
  if (ah == 0x50)
    goto loc_10631;
  if (ah == 0x4d)
    goto loc_10631;
  if (ah == 0x48)
    goto loc_10644;
  if (ah == 0x4b)
    goto loc_10644;
  goto loc_10608;
loc_10631:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) + 1);
  if ((short)memoryAGet16(ds, 0x3044) < (short)0x0006)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0000);
  goto loc_10605;
loc_10644:
  memoryASet16(ds, 0x3044, memoryAGet16(ds, 0x3044) - 1);
  if ((short)memoryAGet16(ds, 0x3044) >= 0)
    goto loc_10605;
  memoryASet16(ds, 0x3044, 0x0005);
  goto loc_10605;
loc_10652:
  memoryASet(ds, 0x8f57, 0xff);
loc_10657:
  if (memoryAGet16(ds, 0x3044) != 0x0005)
    goto loc_10663;
  sub_1066e();
  goto loc_105f4;
loc_10663:
  ax = memoryAGet16(ds, 0x3044);
  bx = 0x2ef8;
  al = memory(ds, bx+al);
  memoryASet16(ds, 0x3044, ax);
  return;
  //   gap of 22422 bytes
loc_15e04:
  ax = 0x2853;
  ds = ax;
  es = ax;
  ax = 0x0003;
  if (memoryAGet16(ds, 0x3044) != 0x0004)
    goto loc_15e18;
  ax = 0x0007;
loc_15e18:
  interrupt(0x10);
  dx = 0x300f;
  ah = 0x09;
  interrupt(0x21);
  goto loc_1054f;
  //   gap of 46 bytes
loc_15e52:
  ah = 0x3f;
  interrupt(0x21);
  if (flags.carry)
    goto loc_15e04;
}
void sub_15e59()
{
  stackguard sg(sp);

  ah = 0x3e;
  interrupt(0x21);
}
void sub_15e5e()
{
  stackguard sg(sp);

  ax = 0x3509;
  interrupt(0x21);
  memoryASet16(ds, 0x8e66, bx);
  memoryASet16(ds, 0x8e68, es);
  ax = 0x2509;
  push(ds);
  dx = cs;
  ds = dx;
  dx = 0x5eeb;
  interrupt(0x21);
  ds = pop();
}
void sub_15e7a()
{
  stackguard sg(sp);

  ax = 0x2509;
  push(ds);
  dx = memoryAGet16(ds, 0x8e66);
  ds = memoryAGet16(ds, 0x8e68);
  interrupt(0x21);
  ds = pop();
}
void sub_15e8a()
{
  stackguard sg(sp);

  memoryASet16(cs, 0x6009, 0x0003);
  ax = 0x3508;
  interrupt(0x21);
  memoryASet16(ds, 0x8e62, bx);
  memoryASet16(ds, 0x8e64, es);
  ax = 0x2508;
  push(ds);
  dx = 0x600b;
  cx = cs;
  ds = cx;
  interrupt(0x21);
  ds = pop();
  flags.interrupts = false;
  al = 0x36;
  out(0x0043, al);
  dx = 0x5555;
  al = dl;
  out(0x0040, al);
  al = dh;
  out(0x0040, al);
  in(al, 0x61);
  memoryASet(ds, 0x3042, al);
  flags.interrupts = true;
}
void sub_15ec3()
{
  stackguard sg(sp);

  flags.interrupts = false;
  al = memoryAGet(ds, 0x3042);
  out(0x0061, al);
  al = 0x36;
  out(0x0043, al);
  dx = 0xffff;
  al = dl;
  out(0x0040, al);
  al = dh;
  out(0x0040, al);
  in(al, 0x61);
  flags.interrupts = true;
  ax = 0x2508;
  push(ds);
  dx = memoryAGet16(ds, 0x8e62);
  ds = memoryAGet16(ds, 0x8e64);
  interrupt(0x21);
  ds = pop();
}
void sub_16058()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f53, 0x00);
  memoryASet16(ds, 0x8f50, 0x0200);
loc_16063:
  memoryASet16(ds, 0x8f50, memoryAGet16(ds, 0x8f50) >> 1);
  sub_160ef();
  if (!(bx & bx))
    return;
  if (memoryAGet16(ds, 0x8f50) == 0x0000)
    goto loc_1607f;
  if (bl < 0x20)
    goto loc_16063;
  if (bh < 0x20)
    goto loc_16063;
loc_1607f:
  bh >>= 1;
  bl >>= 1;
  memoryASet16(ds, 0x8f4e, bx);
  al = bh;
  bh <<= 1;
  bh += al;
  al = bl;
  bl <<= 1;
  bl += al;
  memoryASet16(ds, 0x8f4c, bx);
  ax = memoryAGet16(ds, 0x8f4d);
  tl = al;
  al = ah;
  ah = tl;
  memoryASet16(ds, 0x8f4d, ax);
  memoryASet(ds, 0x8f53, 0xff);
}
void sub_160a5()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x8f53) == 0x00)
    return;
  sub_160ef();
  dl = 0;
  al &= 0x30;
  if (al == 0x30)
    goto loc_160b9;
  dl = 0x08;
loc_160b9:
  ax = memoryAGet16(ds, 0x8f4c);
  stop(/*74*/);
  dl = rcl(dl, 0x01);
  stop(/*74*/);
  dl = rcl(dl, 0x01);
  ax = memoryAGet16(ds, 0x8f4e);
  stop(/*74*/);
  dl = rcl(dl, 0x01);
  stop(/*74*/);
  dl = rcl(dl, 0x01);
  if (dl == memoryAGet(ds, 0x8f5a))
    return;
  if (!(dl & 0x80))
    goto loc_160e6;
  if (memoryAGet(ds, 0x8f5a) & 0x80)
    goto loc_160e6;
  memoryASet(ds, 0x8f5b, 0xff);
loc_160e6:
  memoryASet(ds, 0x8f5a, dl);
  memoryASet(ds, 0x8f59, dl);
}
void sub_160ef()
{
  stackguard sg(sp);

  flags.interrupts = false;
  dx = 0x0201;
  bp = 0x0100;
  out(dx, al);
  bx = 0;
loc_160f9:
  in(al, dx);
  if (!(al & 0x01))
    goto loc_16100;
  bh++;
loc_16100:
  if (!(al & 0x02))
    goto loc_16106;
  bl++;
loc_16106:
  if (!(al & 0x03))
    goto loc_16114;
  ax = memoryAGet16(ds, 0x8f50);
loc_1610d:
  ax--;
  if ((short)ax >= 0)
    goto loc_1610d;
  bp--;
  if (bp != 0)
    goto loc_160f9;
  in(al, dx);
loc_16114:
  flags.interrupts = true;
}
void sub_16284()
{
  stackguard sg(sp);

}
void sub_1655b()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x922c) != 0x00)
    goto loc_16590;
  ax = memoryAGet16(ds, 0x9190);
  ax += memoryAGet16(ds, 0x9f16);
  if ((short)ax >= (short)0x0a80)
    goto loc_16590;
  memoryASet(ds, 0x8fb0, 0xff);
  memoryASet(ds, 0x922c, 0xff);
  memoryASet16(ds, 0x9190, 0x09c0);
  memoryASet16(ds, 0x91aa, 0x09c0);
  memoryASet16(ds, 0x918e, 0x1860);
  memoryASet16(ds, 0x9196, 0x0000);
loc_16590:
  if ((short)memoryAGet16(ds, 0x9190) < (short)0x0a40)
    goto loc_165dc;
  if ((short)memoryAGet16(ds, 0x9190) > (short)0x0d10)
    goto loc_165dc;
  if ((short)memoryAGet16(ds, 0x91aa) >= (short)0x0d10)
    goto loc_165ae;
  memoryASet16(ds, 0x91aa, 0x0d10);
loc_165ae:
  sub_16807();
  di = 0x91d4;
  si = 0x65f6;
  cx = 0x0010;
loc_165ba:
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_165d4;
  bx = 0x0000;
  bx += memoryAGet16(cs, si);
  memoryASet16(ds, di, memoryAGet16(ds, di) - 1);
  bp = memoryAGet16(ds, di);
  bp &= 0x0003;
  bp <<= 1;
  ax = memoryAGet16(cs, bp + si + 2);
  memoryASet16(ds, bx, ax);
loc_165d4:
  di += 0x0002;
  si += 0x000a;
  if (--cx)
    goto loc_165ba;
loc_165dc:
  memoryASet(ds, 0x9226, 0x00);
  memoryASet(ds, 0x9227, 0x00);
  memoryASet(ds, 0x9228, 0x00);
  memoryASet(ds, 0x9229, 0x00);
  memoryASet(ds, 0x922a, 0x00);
}
void sub_16696()
{
  stackguard sg(sp);

  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_166a1;
  return;
loc_166a1:
  bp = 0x650d;
  goto loc_166b6;
  //   gap of 16 bytes
loc_166b6:
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  memoryASet16(ds, si + 2, 0x69d0);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  sub_14191();
  memoryASet(ds, si + 28, al);
  memoryASet(ds, si + 29, 0x00);
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_166a6()
{
  stackguard sg(sp);

  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_166b1;
  return;
loc_166b1:
  bp = 0x6523;
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  memoryASet16(ds, si + 2, 0x69d0);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  sub_14191();
  memoryASet(ds, si + 28, al);
  memoryASet(ds, si + 29, 0x00);
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_16807()
{
  stackguard sg(sp);

  si = 0x9226;
  cx = 0;
loc_1680c:
  if (memoryAGet(ds, si) != 0x00)
    goto loc_1681b;
  memoryASet(ds, si, 0xff);
  push(si);
  push(cx);
  sub_16823();
  cx = pop();
  si = pop();
loc_1681b:
  si++;
  cx++;
  if ((short)cx < (short)0x0005)
    goto loc_1680c;
}
void sub_16823()
{
  stackguard sg(sp);

  bx = cx;
  memoryASet16(ds, 0xfcfa, cx);
  bx <<= 1;
  ax = memoryAGet16(ds, bx + 37364);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  memoryASet16(ds, bx + 37364, ax);
  ax &= 0x000f;
  bx = ax;
  ax <<= 1;
  ax <<= 1;
  ax += bx;
  ax <<= 1;
  di = 0x6767;
  di += ax;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, 0xfce2, ax);
  bx = memoryAGet16(cs, di + 2);
  bx -= memoryAGet16(ds, 0x919a);
  bx -= memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfce6, bx);
  bp = memoryAGet16(cs, di + 4);
  bp <<= 1;
  if (memoryAGet16(ds, bp + 37332) != 0x0000)
    goto loc_16876;
  memoryASet16(ds, bp + 37332, 0x0014);
loc_16876:
  dx = memoryAGet16(cs, di + 6);
  memoryASet16(ds, 0xfcee, dx);
  memoryASet16(ds, 0xfcea, 0x0000);
  di = memoryAGet16(cs, di + 8);
  di <<= 1;
  di = memoryAGet16(ds, di + 57054);
  bx = 0x670d;
  cx = memoryAGet16(cs, bx);
  bx += 0x0002;
  sub_11022();
  push(di);
  di = 0x904a;
  sub_1077c();
  di = pop();
  push(si);
  sub_11022();
  push(di);
  di = 0x904a;
  sub_1077c();
  di = pop();
  memoryASet16(ds, si, 0x010c);
  memoryASet16(ds, si + 2, 0x6aad);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x69c8);
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, si + 32, ax);
  memoryASet16(ds, si + 72, 0x0000);
  memoryASet16(ds, si + 56, di);
  memoryASet16(ds, si + 58, di);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(ds, 0xfcea);
  memoryASet16(ds, si + 26, ax);
  ax = memoryAGet16(cs, 0x6282);
  memoryASet16(ds, si + 66, ax);
  ax = memoryAGet16(ds, 0xfcfa);
  memoryASet16(ds, si + 34, ax);
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
  memoryASet16(ds, si + 52, 0x0000);
loc_16900:
  sub_11022();
  push(di);
  di = 0x904a;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si, ax);
  memoryASet16(ds, si + 2, 0x6a0a);
  memoryASet16(ds, si + 4, 0x0761);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 6, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(ds, si + 52, ax);
  bx += 0x0008;
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, si + 32, ax);
  memoryASet16(ds, si + 36, 0x0001);
  memoryASet(ds, si + 39, 0x00);
  memoryASet16(ds, si + 72, 0x0000);
  memoryASet16(ds, si + 14, 0x0000);
  memoryASet16(ds, si + 56, di);
  memoryASet16(ds, si + 58, di);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 54, 0x0000);
  ax = memoryAGet16(ds, 0xfcea);
  memoryASet16(ds, si + 26, ax);
  memoryASet16(ds, si + 66, 0x0004);
  ax = memoryAGet16(ds, 0xfcfa);
  memoryASet16(ds, si + 34, ax);
  memoryASet16(ds, 0xfcea, memoryAGet16(ds, 0xfcea) - 0x0007);
  sub_13589();
  if (--cx)
    goto loc_16900;
  sub_11022();
  di = 0x904a;
  sub_1077c();
  di = pop();
  memoryASet16(ds, si, 0x00b8);
  memoryASet16(ds, si + 2, 0x0761);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x0761);
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
  memoryASet16(ds, si + 70, di);
  memoryASet16(ds, di, 0x00bc);
  memoryASet16(ds, di + 2, 0x25a8);
  memoryASet16(ds, di + 4, 0x0761);
  memoryASet16(ds, di + 6, 0x0761);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  memoryASet16(ds, di + 68, si);
}
void sub_169c8()
{
  stackguard sg(sp);

  push(si);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_169d0()
{
  stackguard sg(sp);

  sub_141b1();
  bx = memoryAGet16(ds, si + 28);
  al = memoryAGet(cs, bx + 24854);
  cbw();
  ax = sar(ax, 1);
  ax = sar(ax, 1);
  ax += memoryAGet16(ds, si + 22);
  if (ax >= 0x00c0)
    goto loc_16a06;
  memoryASet16(ds, si + 22, ax);
  al = memoryAGet(cs, bx + 24918);
  cbw();
  ax = sar(ax, 1);
  ax = sar(ax, 1);
  ax += memoryAGet16(ds, si + 18);
  if (ax >= 0x0140)
    goto loc_16a06;
  memoryASet16(ds, si + 18, ax);
  memoryASet16(ds, si + 4, 0x0853);
  return;
loc_16a06:
  sub_107c0();
}
void sub_16a0a()
{
  stackguard sg(sp);

  goto loc_16a0a;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 13372 bytes
loc_16a0a:
  bx = memoryAGet16(ds, si + 34);
  memoryASet(ds, bx + 37414, 0xff);
  di = memoryAGet16(ds, si + 10);
  if (memoryAGet16(ds, di) != 0x00bc)
    goto loc_16a33;
  bx = memoryAGet16(ds, si + 32);
  bx <<= 1;
  if (memoryAGet16(ds, bx + 37332) != 0x0000)
    goto loc_16a2d;
  memoryASet16(ds, bx + 37332, 0x0014);
loc_16a2d:
  sub_107c0();
  stop(/*2*/); // (jmp word ptr [si + 2]) jump Indirect memoryAGet16(ds, si + 2)
loc_16a33:
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  ax += memoryAGet16(ds, 0x9198);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(ds, di + 28);
  memoryASet16(ds, si + 28, ax);
  ax = memoryAGet16(ds, di + 30);
  memoryASet16(ds, si + 30, ax);
  ax = memoryAGet16(ds, di + 26);
  memoryASet16(ds, si + 26, ax);
  if (memoryAGet16(ds, si + 4) != 0x0761)
    goto loc_16a67;
  if (stop(/*72*/))
    goto loc_16a67;
  memoryASet16(ds, si + 4, 0x0853);
loc_16a67:
  bx = memoryAGet16(ds, si + 28);
  bx += 0x0010;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx &= 0x000e;
  di = 0x6a8d;
  if (memoryAGet16(ds, si) != 0x0110)
    goto loc_16a84;
  di = 0x6a9d;
loc_16a84:
  ax = memoryAGet16(cs, bx + di);
  memoryASet16(ds, si + 12, ax);
  goto loc_13589;
}
void sub_16aad()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9198);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  bx = memoryAGet16(ds, si + 34);
  memoryASet(ds, bx + 37414, 0xff);
  sub_14871();
  if (memoryAGet16(ds, si) != 0x0004)
    return;
  stop(/*2*/); // (jmp word ptr [si + 2]) jump Indirect memoryAGet16(ds, si + 2)
}
void sub_16ac7()
{
  stackguard sg(sp);

  goto loc_16ac7;
loc_11ed3:
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x0014);
  memoryASet16(ds, di + 2, 0x1f4d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 12, bp);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 18, ax);
  memoryASet16(ds, di + 22, bx);
  memoryASet16(ds, di + 28, cx);
  memoryASet16(ds, di + 66, dx);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  return;
  //   gap of 19386 bytes
loc_16ac7:
  ax = memoryAGet16(ds, 0x91aa);
  ax += 0x00d0;
  if ((short)ax >= (short)memoryAGet16(ds, si + 22))
    goto loc_16ad5;
  goto loc_16b76;
loc_16ad5:
  ax = memoryAGet16(ds, si + 18);
  ax += 0x0004;
  memoryASet16(ds, si + 40, ax);
  ax += 0x0018;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0004;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0018;
  memoryASet16(ds, si + 46, ax);
  bx = memoryAGet16(ds, si + 26);
  bx <<= 1;
  bx <<= 1;
  bx <<= 1;
  di = 0x6b7a;
  if (memoryAGet16(ds, si) == 0x00e0)
    goto loc_16b0c;
  di = 0x6b9a;
loc_16b0c:
  bx += di;
  di = memoryAGet16(ds, si + 56);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 2, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(ds, di + 40, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(ds, di + 42, ax);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) & 0x0003);
  al = memoryAGet(cs, 0x6262);
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    return;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
  ax = memoryAGet16(ds, si + 18);
  ax += 0x0010;
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bx += 0x000e;
  cx = 0x0002;
  bp = memoryAGet16(cs, 0x6264);
  bp <<= 1;
  bp = memoryAGet16(cs, bp + 30294);
  if (memoryAGet16(ds, si) == 0x00e4)
    goto loc_16b6e;
  cx = 0x0006;
  ax -= 0x0010;
loc_16b6e:
  dx = memoryAGet16(cs, 0x6266);
  goto loc_11ed3;
loc_16b76:
  sub_107c0();
}
void sub_16bca()
{
  stackguard sg(sp);

  goto loc_16bca;
loc_11ed3:
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x0014);
  memoryASet16(ds, di + 2, 0x1f4d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 12, bp);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 18, ax);
  memoryASet16(ds, di + 22, bx);
  memoryASet16(ds, di + 28, cx);
  memoryASet16(ds, di + 66, dx);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  return;
  //   gap of 19645 bytes
loc_16bca:
  ax = memoryAGet16(ds, 0x91aa);
  ax += 0x00d0;
  if ((short)ax >= (short)memoryAGet16(ds, si + 22))
    goto loc_16bd8;
  goto loc_16c7e;
loc_16bd8:
  ax = memoryAGet16(ds, si + 18);
  ax += 0x0008;
  memoryASet16(ds, si + 40, ax);
  ax += 0x0010;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0008;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0010;
  memoryASet16(ds, si + 46, ax);
  bx = memoryAGet16(ds, si + 26);
  bx &= 0xfffe;
  bx <<= 1;
  di = 0x6cd2;
  if (memoryAGet16(ds, si) == 0x00d8)
    goto loc_16c0e;
  di = 0x6c82;
loc_16c0e:
  bx += di;
  di = memoryAGet16(ds, si + 56);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 2, ax);
  if (memoryAGet16(ds, si + 26) != 0x0000)
    goto loc_16c36;
  al = memoryAGet(cs, 0x6268);
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    return;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
loc_16c36:
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  if (memoryAGet16(ds, si + 26) != 0x0028)
    goto loc_16c45;
  memoryASet16(ds, si + 26, 0x0000);
  return;
loc_16c45:
  if (memoryAGet16(ds, si + 26) != 0x0018)
    return;
  ax = memoryAGet16(ds, si + 18);
  ax += 0x001a;
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bx += 0x0002;
  bp = memoryAGet16(cs, 0x626a);
  bp <<= 1;
  bp = memoryAGet16(cs, bp + 30294);
  cx = 0x0002;
  if (memoryAGet16(ds, si) == 0x00dc)
    goto loc_16c76;
  cx = 0x0006;
  ax -= 0x001a;
loc_16c76:
  dx = memoryAGet16(cs, 0x626c);
  goto loc_11ed3;
loc_16c7e:
  sub_107c0();
}
void sub_16d22()
{
  stackguard sg(sp);

  goto loc_16d22;
loc_11ed3:
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x0014);
  memoryASet16(ds, di + 2, 0x1f4d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 12, bp);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 18, ax);
  memoryASet16(ds, di + 22, bx);
  memoryASet16(ds, di + 28, cx);
  memoryASet16(ds, di + 66, dx);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  return;
  //   gap of 19989 bytes
loc_16d22:
  ax = memoryAGet16(ds, 0x91aa);
  ax += 0x00d0;
  if ((short)ax >= (short)memoryAGet16(ds, si + 22))
    goto loc_16d30;
  goto loc_16dd0;
loc_16d30:
  ax = memoryAGet16(ds, si + 18);
  ax += 0x000a;
  memoryASet16(ds, si + 40, ax);
  ax += 0x0012;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0004;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0018;
  memoryASet16(ds, si + 46, ax);
  bx = memoryAGet16(ds, si + 26);
  bx &= 0xfffc;
  bx <<= 1;
  di = 0x6dfc;
  if (memoryAGet16(ds, si) == 0x00e8)
    goto loc_16d66;
  di = 0x6ddc;
loc_16d66:
  bx += di;
  di = memoryAGet16(ds, si + 56);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 2, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(ds, di + 40, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(ds, di + 42, ax);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) & 0x000f);
  al = memoryAGet(cs, 0x626e);
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    return;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
  ax = memoryAGet16(ds, si + 18);
  ax += 0x0020;
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bx += 0x000e;
  bp = memoryAGet16(cs, 0x6270);
  bp <<= 1;
  bp = memoryAGet16(cs, bp + 30294);
  cx = 0x0002;
  if (memoryAGet16(ds, si) == 0x00ec)
    goto loc_16dc8;
  cx = 0x0006;
  ax -= 0x0020;
loc_16dc8:
  dx = memoryAGet16(cs, 0x6272);
  goto loc_11ed3;
loc_16dd0:
  sub_107c0();
}
void sub_16e2c()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x91aa);
  ax += 0x00d0;
  ax -= memoryAGet16(ds, 0x9190);
  if ((short)ax >= (short)memoryAGet16(ds, si + 22))
    goto loc_16e3e;
  goto loc_16eeb;
loc_16e3e:
  sub_141b1();
  ax = memoryAGet16(ds, 0x9198);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  if (memoryAGet16(ds, si + 26) != 0x0000)
    goto loc_16e50;
  goto loc_16ed0;
loc_16e50:
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9f16);
  if ((short)ax > (short)0x000a)
    goto loc_16ed1;
  if ((short)ax < (short)0xffe2)
    goto loc_16ed1;
  sub_14191();
  if (al >= 0x32)
    goto loc_16ed1;
  memoryASet16(ds, si + 26, 0x0000);
  sub_107dc();
  di = 0x9096;
  sub_1077c();
  di = 0x64fd;
  if (memoryAGet16(ds, si) == 0x00d4)
    goto loc_16e82;
  di = 0x64d7;
loc_16e82:
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 12, ax);
  di += 0x0002;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, si + 14, ax);
  di += 0x0002;
  memoryASet16(ds, si + 16, di);
  memoryASet16(ds, 0xfcfe, 0x0002);
loc_16e9d:
  bp = memoryAGet16(cs, 0x6274);
  bp <<= 1;
  bp = memoryAGet16(cs, bp + 30294);
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  bx += 0x0007;
  cx = 0x0005;
  if (memoryAGet16(ds, si) == 0x00d4)
    goto loc_16ebe;
  cx = 0x0001;
loc_16ebe:
  cx += memoryAGet16(ds, 0xfcfe);
  dx = memoryAGet16(cs, 0x6276);
  sub_11ed3();
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) - 1);
  if ((short)memoryAGet16(ds, 0xfcfe) >= 0)
    goto loc_16e9d;
loc_16ed0:
  return;
loc_16ed1:
  ax = memoryAGet16(ds, si + 26);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  memoryASet16(ds, si + 34, memoryAGet16(ds, si + 34) + ax);
  if (memoryAGet16(ds, si + 34) == 0)
    goto loc_16ee4;
  ax = memoryAGet16(ds, si + 34);
  if (ax != memoryAGet16(ds, si + 28))
    goto loc_16ee7;
loc_16ee4:
  memoryASet16(ds, si + 26, -memoryAGet16(ds, si + 26));
loc_16ee7:
  sub_13589();
  return;
loc_16eeb:
  sub_107c0();
}
void sub_16eef()
{
  stackguard sg(sp);

  bx <<= 1;
  stop(/*2*/); // (jmp word ptr cs:[bx + 0x6ef6]) jump Indirect memoryAGet16(cs, bx + 28406)
}
void sub_170f1()
{
  stackguard sg(sp);

  bx <<= 1;
  stop(/*2*/); // (jmp word ptr cs:[bx + 0x70f8]) jump Indirect memoryAGet16(cs, bx + 28920)
}
void sub_1714a()
{
  stackguard sg(sp);

  ax = 0;
    flags.zero = true;
}
void sub_1714d()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x922b) == 0x00)
    goto loc_171a8;
  push(ax);
  ax = memoryAGet16(ds, 0x8eb4);
  memoryASet16(ds, 0xfce2, ax);
  ax = memoryAGet16(ds, 0x8eb6);
  memoryASet16(ds, 0xfce6, ax);
  ax = memoryAGet16(ds, 0x8eb8);
  memoryASet16(ds, 0xfcea, ax);
  ax = memoryAGet16(ds, 0x8eba);
  memoryASet16(ds, 0xfcee, ax);
  memoryASet16(ds, 0xfcf2, 0x0098);
  memoryASet16(ds, 0xfcfa, 0x00a7);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, 0xfcf6, ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcf6, memoryAGet16(ds, 0xfcf6) - ax);
  memoryASet16(ds, 0xfcf6, memoryAGet16(ds, 0xfcf6) + 0x0044);
  ax = memoryAGet16(ds, 0xfcf6);
  memoryASet16(ds, 0xfcfe, ax);
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) + 0x000e);
  sub_10f2f();
  if (flags.zero)
    goto loc_171a7;
  ax = pop();
  memoryASet16(ds, di + 4, 0x7569);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_171a9;
  return;
loc_171a7:
  ax = pop();
loc_171a8:
  return;
loc_171a9:
  memoryASet(ds, 0x922b, 0x00);
  push(si);
  si = di;
  sub_107c0();
  cx = 0x0008;
  sub_115e4();
  cx = 0x0013;
  ax = 0x0000;
  bx = 0x0000;
  dx = 0x0140;
  di = 0x00c0;
  bp = 0x124c;
  sub_11588();
  si = memoryAGet16(ds, 0x9054);
  sub_13760();
  si = pop();
  memoryASet(ds, 0x8f61, 0xff);
}
void sub_171dd()
{
  stackguard sg(sp);

  goto loc_171dd;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 15375 bytes
loc_171dd:
  if (memoryAGet(ds, 0x922b) != 0x00)
    goto loc_171e7;
  goto loc_172c0;
loc_171e7:
  di = memoryAGet16(ds, si + 16);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 20);
  memoryASet16(ds, si + 20, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(ds, di + 24);
  memoryASet16(ds, si + 24, ax);
  ax = memoryAGet16(ds, di + 28);
  memoryASet16(ds, si + 28, ax);
  ax = memoryAGet16(ds, di + 30);
  memoryASet16(ds, si + 30, ax);
  ax = memoryAGet16(ds, di + 60);
  memoryASet16(ds, si + 60, ax);
  ax = memoryAGet16(ds, di + 62);
  memoryASet16(ds, si + 62, ax);
  ax = memoryAGet16(ds, di + 64);
  memoryASet16(ds, si + 64, ax);
  ax = memoryAGet16(ds, di + 66);
  memoryASet16(ds, si + 66, ax);
  if (memoryAGet16(ds, di) != 0x0050)
    goto loc_17244;
  memoryASet16(ds, si + 18, 0x00a0);
  memoryASet16(ds, si + 20, 0x0000);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + 0x0060);
  memoryASet16(ds, si + 24, 0x0000);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) - ax);
loc_17244:
  memoryASet16(ds, si + 26, 0x0064);
  sub_1480e();
  if (memoryAGet16(ds, si + 66) == 0x0000)
    goto loc_172b5;
  if (memoryAGet16(ds, si) != 0x0100)
    goto loc_172b2;
  ax = memoryAGet16(ds, 0x9f12);
  ax -= memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, 0x9f16);
  bx -= memoryAGet16(ds, si + 22);
  sub_11b90();
  memoryASet16(ds, si + 28, ax);
  bx = ax;
  bx <<= 1;
  ax = memoryAGet16(cs, bx + 30444);
  memoryASet16(ds, si + 12, ax);
  if ((short)memoryAGet16(ds, si + 66) < (short)0x000b)
    goto loc_172b2;
  flags.carry = (memoryAGet(ds, si + 72) + 0x0f) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + 0x0f);
  if (!flags.carry)
    goto loc_172b2;
  sub_14191();
  ax &= 0x003f;
  memoryASet(ds, si + 72, al);
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  cx = memoryAGet16(ds, si + 28);
  dx = 0x0004;
  sub_11ed3();
  bp = 0x6549;
  ax = memoryAGet16(cs, bp);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bp + 2);
  memoryASet16(ds, di + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, di + 16, bp);
loc_172b2:
  goto loc_13589;
loc_172b5:
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
  return;
loc_172c0:
  sub_107c0();
}
void sub_172c4()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x9190) <= (short)0x01c0)
    goto loc_172cf;
  goto loc_17515;
loc_172cf:
  if (memoryAGet(ds, 0x922b) == 0x00)
    goto loc_172d9;
  goto loc_1736a;
loc_172d9:
  memoryASet(ds, 0x922b, 0xff);
  cx = 0x0007;
  bp = si;
loc_172e3:
  push(si);
  sub_11022();
  di = si;
  si = pop();
  if (cx != 0x0007)
    goto loc_172fd;
  push(si);
  si = di;
  di = 0x904a;
  sub_1077c();
  di = si;
  si = pop();
  goto loc_17308;
loc_172fd:
  push(si);
  si = di;
  di = bp;
  sub_1077c();
  di = si;
  si = pop();
loc_17308:
  memoryASet16(ds, di, 0x00fc);
  if (cx & cx)
    goto loc_17314;
  memoryASet16(ds, di, 0x0100);
loc_17314:
  memoryASet16(ds, di + 2, 0x71dd);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x3a99);
  memoryASet16(ds, di + 12, 0x2e0f);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 72, 0x0000);
  memoryASet16(ds, di + 16, bp);
  bp = di;
  memoryASet(ds, di + 39, 0x00);
  memoryASet(ds, di + 74, 0xff);
  memoryASet16(ds, di + 22, 0xff9c);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  cx--;
  if ((short)cx >= 0)
    goto loc_172e3;
  memoryASet16(ds, si + 28, 0x0000);
  memoryASet16(ds, si + 30, 0x0000);
  memoryASet16(ds, si + 60, 0x0000);
  memoryASet16(ds, si + 62, 0x0000);
  memoryASet16(ds, si + 64, 0x0000);
loc_1736a:
  if ((short)memoryAGet16(ds, 0x91aa) > (short)0x01c0)
    goto loc_17378;
  memoryASet16(ds, 0x91aa, 0x01c0);
loc_17378:
  memoryASet16(ds, si + 40, 0x0080);
  memoryASet16(ds, si + 44, 0x00c8);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0004;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0050;
  memoryASet16(ds, si + 46, ax);
  if (memoryAGet16(ds, si + 26) != 0x0000)
    goto loc_173b6;
  ax = 0x0030;
  if ((short)memoryAGet16(ds, 0x9190) <= (short)ax)
    goto loc_173a7;
  goto loc_174b3;
loc_173a7:
  memoryASet16(ds, si + 26, 0x0001);
  memoryASet16(ds, si + 32, 0x0000);
  memoryASet16(ds, si + 34, 0x00aa);
loc_173b6:
  if (stop(/*72*/))
    goto loc_173d3;
  if ((short)memoryAGet16(ds, si + 66) >= (short)0x000b)
    goto loc_173dc;
  if (memoryAGet16(ds, si + 66) != 0x0000)
    goto loc_173ce;
  memoryASet16(ds, 0x8e8a, 0x0001);
loc_173ce:
  memoryASet16(ds, si + 66, memoryAGet16(ds, si + 66) + 1);
  goto loc_173dc;
loc_173d3:
  if (memoryAGet16(ds, si + 66) == 0x0000)
    goto loc_173dc;
  memoryASet16(ds, si + 66, memoryAGet16(ds, si + 66) - 1);
loc_173dc:
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  if (memoryAGet16(ds, si + 26) == 0)
    goto loc_173dc;
  if ((short)memoryAGet16(ds, si + 26) < (short)0x0064)
    goto loc_173ec;
  memoryASet16(ds, si + 26, 0xffd8);
loc_173ec:
  ax = memoryAGet16(ds, 0x919c);
  ax &= 0x007f;
  if (!(ax & 0x0040))
    goto loc_173fc;
  ax -= 0x007f;
  ax = -ax;
loc_173fc:
  cbw();
  ax += 0x0020;
  memoryASet16(ds, si + 28, ax);
  ax = memoryAGet16(ds, 0x919c);
  ax += 0x0050;
  ax &= 0x00ff;
  if (!(ax & 0x0080))
    goto loc_17413;
  al = ~al;
loc_17413:
  ax -= 0x0040;
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  dh = dl;
  dl = ah;
  ah = al;
  al = 0;
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ah & 0x80);
  ah <<= 1;
  dx = rcl(dx, 0x0001);
  memoryASet16(ds, si + 60, ax);
  memoryASet16(ds, si + 62, dx);
  ax = memoryAGet16(ds, 0x919c);
  ax += 0x00a0;
  ax &= 0x01ff;
  if (!(ax & 0x0100))
    goto loc_1743e;
  ax ^= 0x01ff;
loc_1743e:
  ax -= 0x0080;
  cl = 0x05;
  ax <<= cl;
  memoryASet16(ds, si + 64, ax);
  ax = memoryAGet16(ds, si + 32);
  ax += memoryAGet16(ds, si + 22);
  if ((short)ax >= (short)0x0010)
    goto loc_1745b;
  ax = 0x0010;
  memoryASet16(ds, si + 34, 0x0000);
loc_1745b:
  if ((short)ax <= (short)0x01e0)
    goto loc_17468;
  ax = 0x01e0;
  memoryASet16(ds, si + 34, 0x0000);
loc_17468:
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 34, memoryAGet16(ds, si + 34) - 1);
  if ((short)memoryAGet16(ds, si + 34) >= 0)
    goto loc_174a9;
  if (memoryAGet16(ds, si + 32) != 0xffff)
    goto loc_17482;
  memoryASet16(ds, si + 32, 0x0000);
  memoryASet16(ds, si + 34, 0x00aa);
  goto loc_174a9;
loc_17482:
  if (memoryAGet16(ds, si + 32) != 0x0001)
    goto loc_17494;
  memoryASet16(ds, si + 32, 0x0000);
  memoryASet16(ds, si + 34, 0x003c);
  goto loc_174a9;
loc_17494:
  memoryASet16(ds, si + 34, 0x0032);
  memoryASet16(ds, si + 32, 0x0001);
  if (memoryAGet16(ds, si + 22) == 0x0010)
    goto loc_174a9;
  memoryASet16(ds, si + 32, 0xffff);
loc_174a9:
  ax = 0x001e;
  ax -= memoryAGet16(ds, si + 36);
  memoryASet(ds, 0x91fe, memoryAGet(ds, 0x91fe) + al);
loc_174b3:
  bx = memoryAGet16(ds, 0x919c);
  bx &= 0x000c;
  bx >>= 1;
  bx = memoryAGet16(cs, bx + 30436);
  di = 0x769e;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  di += 0x0004;
  bx += 0x0004;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  bx += 0x0004;
  di += 0x0008;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  di += 0x0004;
  bx += 0x0004;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  if (memoryAGet16(ds, si + 26) == 0x0000)
    goto loc_17515;
  return;
loc_17515:
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
}
void sub_17520()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x9190) >= (short)0x0280)
    return;
  ax = 0x0006;
  bx = 0x0007;
  dx = memoryAGet16(ds, si + 22);
  dx -= memoryAGet16(ds, 0x9190);
  cx = 0x0038;
  push(si);
  si = 0x7660;
  sub_10941();
  si = pop();
  bx = memoryAGet16(ds, 0x91fe);
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx &= 0x0006;
  cx = 0x0098;
  dx = memoryAGet16(ds, si + 22);
  dx -= memoryAGet16(ds, 0x9190);
  dx += 0x0042;
  push(si);
  si = memoryAGet16(cs, bx + 30460);
  sub_10875();
  si = pop();
}
void sub_17569()
{
  stackguard sg(sp);

  memoryASet16(ds, si + 4, 0x7520);
  if ((short)memoryAGet16(ds, 0x9190) >= (short)0x0280)
    return;
  ax = 0x0006;
  bx = 0x0007;
  dx = memoryAGet16(ds, si + 22);
  dx -= memoryAGet16(ds, 0x9190);
  cx = 0x0038;
  push(si);
  si = 0x7660;
  sub_10963();
  si = pop();
}
void sub_1758f()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x8eac, 0x0bb8);
  memoryASet16(ds, 0x8eae, 0x0258);
  memoryASet16(ds, 0x91a8, 0x0000);
  memoryASet16(ds, 0x91aa, 0x11ff);
  memoryASet(ds, 0x922c, 0x00);
  memoryASet16(ds, 0x91fe, 0x0000);
  sub_11022();
  di = 0x904a;
  sub_1077c();
  memoryASet16(ds, si, 0x0050);
  memoryASet16(ds, si + 2, 0x72c4);
  memoryASet16(ds, si + 4, 0x7520);
  memoryASet16(ds, si + 6, 0x714d);
  memoryASet16(ds, si + 72, 0x0000);
  memoryASet(ds, si + 74, 0xff);
  memoryASet(ds, si + 75, 0xff);
  memoryASet16(ds, si + 22, 0x0010);
  ax = memoryAGet16(cs, 0x6278);
  memoryASet16(ds, si + 36, ax);
  memoryASet16(ds, si + 26, 0x0000);
  memoryASet16(ds, si + 66, 0x0000);
  memoryASet(ds, 0x922b, 0x00);
  memoryASet(ds, 0x9226, 0x00);
  memoryASet(ds, 0x9227, 0x00);
  memoryASet(ds, 0x9228, 0x00);
  memoryASet(ds, 0x9229, 0x00);
  memoryASet(ds, 0x922a, 0x00);
  di = 0x91d4;
  cx = 0x0010;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  memoryASet16(ds, 0x91f4, 0xd272);
  memoryASet16(ds, 0x91f6, 0x6a4a);
  memoryASet16(ds, 0x91f8, 0xba5d);
  memoryASet16(ds, 0x91fa, 0x2512);
  memoryASet16(ds, 0x91fc, 0xe51a);
  ax = 0x0001;
  dx = 0;
  mul(memoryAGet16(ds, 0x991a));
  memoryASet16(ds, 0x8e76, ax);
  ax = 0x0002;
  dx = 0;
  mul(memoryAGet16(ds, 0x991a));
  memoryASet16(ds, 0x8e78, ax);
  memoryASet16(ds, 0x8e72, 0x3463);
}
void sub_17dde()
{
  stackguard sg(sp);

  goto loc_17dde;
loc_11ed3:
  push(si);
  sub_11022();
  di = 0x9096;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x0014);
  memoryASet16(ds, di + 2, 0x1f4d);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 12, bp);
  memoryASet16(ds, di + 14, 0x0000);
  memoryASet16(ds, di + 18, ax);
  memoryASet16(ds, di + 22, bx);
  memoryASet16(ds, di + 28, cx);
  memoryASet16(ds, di + 66, dx);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  return;
  //   gap of 24273 bytes
loc_17dde:
  ax = memoryAGet16(ds, 0x91aa);
  ax += 0x00d0;
  if ((short)ax >= (short)memoryAGet16(ds, si + 22))
    goto loc_17dec;
  goto loc_17e83;
loc_17dec:
  ax = memoryAGet16(ds, si + 18);
  ax -= 0x0008;
  memoryASet16(ds, si + 40, ax);
  ax += 0x0014;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0004;
  memoryASet16(ds, si + 42, ax);
  ax += 0x0008;
  memoryASet16(ds, si + 46, ax);
  ax = memoryAGet16(ds, si + 26);
  if (ax & ax)
    goto loc_17e25;
  sub_14191();
  if (al >= memoryAGet(cs, 0x7714))
    goto loc_17e24;
  memoryASet16(ds, si + 26, 0x0001);
loc_17e24:
  return;
loc_17e25:
  bx = ax;
  bx <<= 1;
  bx += 0x90c1;
  if (memoryAGet16(ds, si) == 0x00e8)
    goto loc_17e36;
  bx += 0x001e;
loc_17e36:
  di = memoryAGet16(ds, si + 56);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di, ax);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  if (memoryAGet16(ds, si + 26) == 0x0007)
    goto loc_17e53;
  if (memoryAGet16(ds, si + 26) != 0x000f)
    goto loc_17e52;
  memoryASet16(ds, si + 26, 0x0000);
loc_17e52:
  return;
loc_17e53:
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  ax += 0x0008;
  bx += 0x0008;
  di = memoryAGet16(cs, 0x7716);
  di <<= 1;
  bp = memoryAGet16(cs, di + 37545);
  cx = 0x0002;
  if (memoryAGet16(ds, si) == 0x00ec)
    goto loc_17e7b;
  cx = 0x0006;
loc_17e7b:
  dx = memoryAGet16(cs, 0x7718);
  goto loc_11ed3;
loc_17e83:
  sub_107c0();
}
void sub_17f32()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x9230) != 0x00)
    goto loc_17f4e;
  if ((short)memoryAGet16(ds, 0x9190) < (short)0x09d0)
    goto loc_17f6e;
  if ((short)memoryAGet16(ds, 0x9190) > (short)0x0b50)
    goto loc_17f6e;
  sub_1818c();
  goto loc_17f6e;
loc_17f4e:
  if ((short)memoryAGet16(ds, 0x9190) <= (short)0x09f0)
    goto loc_17f6e;
  memoryASet16(ds, 0x9190, 0x09f0);
  memoryASet16(ds, 0x91aa, 0x09f0);
  memoryASet16(ds, 0x918e, 0x18d8);
  memoryASet16(ds, 0x9196, 0x0000);
loc_17f6e:
  memoryASet(ds, 0x922d, 0x00);
  memoryASet(ds, 0x922e, 0x00);
}
void sub_17f79()
{
  stackguard sg(sp);

  di = si;
  bx <<= 1;
  stop(/*2*/); // (jmp word ptr cs:[bx - 0x6f03]) jump Indirect memoryAGet16(cs, bx + 37117)
}
void sub_180ca()
{
  stackguard sg(sp);

  bx <<= 1;
  stop(/*2*/); // (jmp word ptr cs:[bx - 0x6ef7]) jump Indirect memoryAGet16(cs, bx + 37129)
}
void sub_180f5()
{
  stackguard sg(sp);

  goto loc_180f5;
loc_13aa7:
  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_13ab2;
  return;
loc_13ab2:
  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13ac5;
  bp = 0x124c;
loc_13ac5:
  dx = 0x0853;
  sub_13326();
  ax = memoryAGet16(ds, di + 54);
  if (!(ax & ax))
    goto loc_13b41;
  bx = 0x8e8c;
  cx = 0x0008;
loc_13ad8:
  if (ax == memoryAGet16(ds, bx))
    goto loc_13ae3;
  bx += 0x0004;
  if (--cx)
    goto loc_13ad8;
  goto loc_13b41;
loc_13ae3:
  memoryASet16(ds, bx + 2, memoryAGet16(ds, bx + 2) - 1);
  if (memoryAGet16(ds, bx + 2) != 0)
    goto loc_13b41;
  memoryASet16(ds, bx, 0x0000);
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  bx = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13b0c;
  bx = 0x11b4;
  memoryASet16(ds, si, 0x0018);
loc_13b0c:
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  sub_14191();
  memoryASet16(ds, si + 28, ax);
  si = pop();
loc_13b41:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  push(si);
  si = di;
  sub_107c0();
  si = pop();
  return;
  //   gap of 17824 bytes
loc_180f5:
  memoryASet16(ds, di + 4, 0x08b9);
  if ((short)ax >= (short)memoryAGet16(ds, di + 36))
    goto loc_18102;
  goto loc_13aa7;
loc_18102:
  cx = memoryAGet16(ds, di + 34);
  al = 0x01;
  al <<= cl;
  al = ~al;
  memoryASet(ds, 0x9202, memoryAGet(ds, 0x9202) & al);
  bx = 0x786c;
  goto loc_18136;
  //   gap of 34 bytes
loc_18136:
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  ax = memoryAGet16(ds, di + 2);
  memoryASet16(ds, si + 2, ax);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  memoryASet16(ds, si + 26, 0x8000);
  sub_14191();
  memoryASet16(ds, si + 28, 0x0000);
  memoryASet16(ds, si + 30, 0x0000);
  memoryASet(ds, si + 28, al);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_18114()
{
  stackguard sg(sp);

  goto loc_18114;
loc_13aa7:
  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_13ab2;
  return;
loc_13ab2:
  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13ac5;
  bp = 0x124c;
loc_13ac5:
  dx = 0x0853;
  sub_13326();
  ax = memoryAGet16(ds, di + 54);
  if (!(ax & ax))
    goto loc_13b41;
  bx = 0x8e8c;
  cx = 0x0008;
loc_13ad8:
  if (ax == memoryAGet16(ds, bx))
    goto loc_13ae3;
  bx += 0x0004;
  if (--cx)
    goto loc_13ad8;
  goto loc_13b41;
loc_13ae3:
  memoryASet16(ds, bx + 2, memoryAGet16(ds, bx + 2) - 1);
  if (memoryAGet16(ds, bx + 2) != 0)
    goto loc_13b41;
  memoryASet16(ds, bx, 0x0000);
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  bx = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13b0c;
  bx = 0x11b4;
  memoryASet16(ds, si, 0x0018);
loc_13b0c:
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  sub_14191();
  memoryASet16(ds, si + 28, ax);
  si = pop();
loc_13b41:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  push(si);
  si = di;
  sub_107c0();
  si = pop();
  return;
  //   gap of 17855 bytes
loc_18114:
  memoryASet16(ds, di + 4, 0x08b9);
  if ((short)ax >= (short)memoryAGet16(ds, di + 36))
    goto loc_18121;
  goto loc_13aa7;
loc_18121:
  bx = 0x7892;
  goto loc_18136;
  //   gap of 16 bytes
loc_18136:
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  ax = memoryAGet16(ds, di + 2);
  memoryASet16(ds, si + 2, ax);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  memoryASet16(ds, si + 26, 0x8000);
  sub_14191();
  memoryASet16(ds, si + 28, 0x0000);
  memoryASet16(ds, si + 30, 0x0000);
  memoryASet(ds, si + 28, al);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_18126()
{
  stackguard sg(sp);

  goto loc_18126;
loc_13aa7:
  memoryASet16(ds, di + 4, 0x08b9);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_13ab2;
  return;
loc_13ab2:
  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13ac5;
  bp = 0x124c;
loc_13ac5:
  dx = 0x0853;
  sub_13326();
  ax = memoryAGet16(ds, di + 54);
  if (!(ax & ax))
    goto loc_13b41;
  bx = 0x8e8c;
  cx = 0x0008;
loc_13ad8:
  if (ax == memoryAGet16(ds, bx))
    goto loc_13ae3;
  bx += 0x0004;
  if (--cx)
    goto loc_13ad8;
  goto loc_13b41;
loc_13ae3:
  memoryASet16(ds, bx + 2, memoryAGet16(ds, bx + 2) - 1);
  if (memoryAGet16(ds, bx + 2) != 0)
    goto loc_13b41;
  memoryASet16(ds, bx, 0x0000);
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  bx = 0x11f2;
  memoryASet16(ds, si, 0x0060);
  if (memoryAGet(ds, di + 39) == 0x00)
    goto loc_13b0c;
  bx = 0x11b4;
  memoryASet16(ds, si, 0x0018);
loc_13b0c:
  memoryASet16(ds, si + 26, 0x0007);
  memoryASet16(ds, si + 2, 0x28df);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  sub_14191();
  memoryASet16(ds, si + 28, ax);
  si = pop();
loc_13b41:
  ax = memoryAGet16(ds, di + 52);
  flags.carry = (memoryAGet16(ds, 0x9152) + ax) >= 0x10000;
  memoryASet16(ds, 0x9152, memoryAGet16(ds, 0x9152) + ax);
  memoryASet16(ds, 0x9154, memoryAGet16(ds, 0x9154) + flags.carry);
  push(si);
  si = di;
  sub_107c0();
  si = pop();
  return;
  //   gap of 17873 bytes
loc_18126:
  memoryASet16(ds, di + 4, 0x08b9);
  if ((short)ax >= (short)memoryAGet16(ds, di + 36))
    goto loc_18133;
  goto loc_13aa7;
loc_18133:
  bx = 0x78b8;
  push(si);
  sub_11022();
  push(di);
  di = 0x9096;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(ds, di);
  memoryASet16(ds, si, ax);
  ax = memoryAGet16(ds, di + 2);
  memoryASet16(ds, si + 2, ax);
  memoryASet16(ds, si + 4, 0x0853);
  ax = memoryAGet16(ds, di + 18);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, di + 22);
  memoryASet16(ds, si + 22, ax);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, si + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, si + 16, bx);
  memoryASet16(ds, si + 26, 0x8000);
  sub_14191();
  memoryASet16(ds, si + 28, 0x0000);
  memoryASet16(ds, si + 30, 0x0000);
  memoryASet(ds, si + 28, al);
  si = di;
  sub_107c0();
  si = pop();
}
void sub_1818c()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x9230) != 0x00)
    return;
  if (memoryAGet(ds, 0x922d) != 0x00)
    goto loc_181a8;
  memoryASet16(ds, 0xfcfa, 0x0000);
  sub_181e7();
  memoryASet(ds, 0x922d, 0xff);
loc_181a8:
  if (memoryAGet(ds, 0x922e) != 0x00)
    return;
  memoryASet16(ds, 0xfcfa, 0x0001);
  sub_181e7();
  memoryASet(ds, 0x922e, 0xff);
}
void sub_181be()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0xfcfa) != 0x0000)
    goto loc_181d6;
  ax = memoryAGet16(ds, 0x91f4);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  memoryASet16(ds, 0x91f4, ax);
  return;
loc_181d6:
  ax = memoryAGet16(ds, 0x91f6);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  ax = ror(ax, 0x0001);
  memoryASet16(ds, 0x91f6, ax);
}
void sub_181e7()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9200) == 0x0001)
    goto loc_181f9;
  if (memoryAGet(ds, 0x922f) == 0x00)
    goto loc_18201;
  memoryASet(ds, 0x922f, memoryAGet(ds, 0x922f) - 1);
loc_181f9:
  sub_181be();
  ax &= 0x0006;
  goto loc_1820a;
loc_18201:
  sub_181be();
  ax &= 0x0006;
  ax += 0x0008;
loc_1820a:
  ax += memoryAGet16(ds, 0xfcfa);
  dx = 0x000a;
  mul(dx);
  di = 0x9179;
  di += ax;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, 0xfce2, ax);
  di += 0x0002;
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, 0xfce6, ax);
  di += 0x0002;
  ax = memoryAGet16(ds, 0x919a);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) - ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) - ax);
  bx = memoryAGet16(cs, di);
  di += 0x0002;
  bx <<= 1;
  if (memoryAGet16(ds, bx + 37330) != 0x0000)
    goto loc_1824d;
  memoryASet16(ds, bx + 37330, 0x0018);
loc_1824d:
  ax = memoryAGet16(cs, di);
  memoryASet16(ds, 0xfcee, ax);
  di += 0x0002;
  memoryASet16(ds, 0xfcea, 0x0000);
  di = memoryAGet16(cs, di);
  di <<= 1;
  di = memoryAGet16(ds, di + 57012);
  bx = 0x9117;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, 0xfcfe, ax);
  bx += 0x0002;
loc_18271:
  sub_11022();
  push(di);
  di = 0x904a;
  sub_1077c();
  di = pop();
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si, ax);
  bx += 0x0002;
  memoryASet16(ds, si + 2, 0x866d);
  memoryASet16(ds, si + 4, 0x0761);
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 6, ax);
  bx += 0x0002;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 12, ax);
  bx += 0x0002;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, si + 52, ax);
  bx += 0x0002;
  ax = memoryAGet16(ds, 0xfcee);
  memoryASet16(ds, si + 32, ax);
  ax = memoryAGet16(cs, 0x7720);
  memoryASet16(ds, si + 36, ax);
  memoryASet16(ds, si + 72, 0x0000);
  memoryASet(ds, si + 39, 0x00);
  memoryASet16(ds, si + 14, 0x0000);
  memoryASet16(ds, si + 56, di);
  memoryASet16(ds, si + 58, di);
  ax = memoryAGet16(ds, 0xfce2);
  memoryASet16(ds, si + 18, ax);
  ax = memoryAGet16(ds, 0xfce6);
  memoryASet16(ds, si + 22, ax);
  memoryASet16(ds, si + 54, 0x0000);
  ax = memoryAGet16(ds, 0xfcea);
  memoryASet16(ds, si + 26, ax);
  ax = memoryAGet16(cs, 0x7722);
  memoryASet16(ds, si + 66, ax);
  ax = memoryAGet16(ds, 0xfcfa);
  memoryASet16(ds, si + 34, ax);
  memoryASet16(ds, 0xfcea, memoryAGet16(ds, 0xfcea) - 0x000a);
  sub_13589();
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) - 1);
  if ((short)memoryAGet16(ds, 0xfcfe) < 0)
    goto loc_182ff;
  goto loc_18271;
loc_182ff:
  al = 0x01;
  cx = memoryAGet16(ds, 0xfcfa);
  al <<= cl;
  memoryASet(ds, 0x9202, memoryAGet(ds, 0x9202) | al);
}
void sub_1866d()
{
  stackguard sg(sp);

  goto loc_1866d;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 20639 bytes
loc_1866d:
  if (memoryAGet16(ds, si + 26) != 0x8000)
    goto loc_186ae;
  sub_141b1();
  bx = memoryAGet16(ds, si + 28);
  al = memoryAGet(cs, bx + 24854);
  cbw();
  ax = sar(ax, 1);
  ax = sar(ax, 1);
  ax += memoryAGet16(ds, si + 22);
  if (ax >= 0x00c0)
    goto loc_186aa;
  memoryASet16(ds, si + 22, ax);
  al = memoryAGet(cs, bx + 24918);
  cbw();
  ax = sar(ax, 1);
  ax = sar(ax, 1);
  ax += memoryAGet16(ds, si + 18);
  if (ax >= 0x0140)
    goto loc_186aa;
  memoryASet16(ds, si + 18, ax);
  memoryASet16(ds, si + 4, 0x0853);
  return;
loc_186aa:
  sub_107c0();
  return;
loc_186ae:
  ax = memoryAGet16(ds, 0x9198);
  memoryASet16(ds, si + 22, memoryAGet16(ds, si + 22) + ax);
  bx = memoryAGet16(ds, si + 34);
  memoryASet(ds, bx + 37421, 0xff);
  sub_1480e();
  if (memoryAGet16(ds, si) != 0x0004)
    goto loc_186d7;
  bx = memoryAGet16(ds, si + 32);
  bx <<= 1;
  if (memoryAGet16(ds, bx + 37330) != 0x0000)
    goto loc_186d6;
  memoryASet16(ds, bx + 37330, 0x0018);
loc_186d6:
  return;
loc_186d7:
  if (memoryAGet16(ds, si + 4) == 0x0761)
    goto loc_1870b;
  if (memoryAGet16(ds, si + 4) == 0x0897)
    goto loc_186f4;
  di = memoryAGet16(ds, si + 58);
  if (memoryAGet16(ds, di) != 0x0000)
    goto loc_18716;
  memoryASet16(ds, si + 4, 0x0897);
  goto loc_18716;
loc_186f4:
  di = memoryAGet16(ds, si + 58);
  if (memoryAGet16(ds, di) == 0x0000)
    goto loc_18716;
  di -= 0x000a;
  if (di == memoryAGet16(ds, si + 56))
    goto loc_18716;
  memoryASet16(ds, si + 4, 0x0853);
  goto loc_18716;
loc_1870b:
  if (stop(/*72*/))
    goto loc_18716;
  memoryASet16(ds, si + 4, 0x0897);
loc_18716:
  bx = memoryAGet16(ds, si + 28);
  bx += 0x0010;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx &= 0x000e;
  di = 0x952b;
  if (memoryAGet16(ds, si) != 0x0118)
    goto loc_18733;
  di = 0x953b;
loc_18733:
  if (memoryAGet16(ds, si) != 0x011c)
    goto loc_1873c;
  di = 0x954b;
loc_1873c:
  ax = memoryAGet16(cs, bx + di);
  memoryASet16(ds, si + 12, ax);
  goto loc_13589;
}
void sub_18783()
{
  stackguard sg(sp);

  push(si);
  memoryASet16(ds, si + 4, 0x0761);
  di = 0x92bf;
  ax = 0x0003;
  bx = 0x0002;
  cx = memoryAGet16(ds, si + 18);
  cx <<= 1;
  cx <<= 1;
  cx <<= 1;
  cx -= 0x0010;
  dx = memoryAGet16(ds, si + 22);
  dx <<= 1;
  dx <<= 1;
  dx <<= 1;
  dx <<= 1;
  dx -= memoryAGet16(ds, 0x9190);
  dx -= 0x0010;
  if (memoryAGet16(ds, si + 34) == 0x0000)
    goto loc_187ce;
  cx += 0x0010;
  di = 0x92b3;
  if (memoryAGet16(ds, si + 34) == 0x0001)
    goto loc_187ce;
  di = 0x92cb;
  bx = 0x0003;
  dx -= 0x0010;
  cx -= 0x0008;
loc_187ce:
  si = di;
  sub_10963();
  si = pop();
}
void sub_187d5()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x9202) != 0x0003)
    goto loc_187df;
  return;
loc_187df:
  memoryASet16(ds, di + 4, 0x8783);
  memoryASet16(ds, di + 36, memoryAGet16(ds, di + 36) - ax);
  if (stop(/*71*/))
    goto loc_187ec;
  return;
loc_187ec:
  memoryASet16(ds, 0x9202, 0x0003);
  bx = memoryAGet16(ds, di + 12);
  memoryASet16(ds, bx, 0x62c1);
  dx = 0x0853;
  ax = memoryAGet16(ds, di + 40);
  ax += 0x0008;
  bx = memoryAGet16(ds, di + 42);
  bx += 0x0008;
  bp = 0x1230;
  sub_13326();
  push(si);
  si = di;
  sub_107c0();
  si = pop();
  memoryASet16(ds, 0x9200, memoryAGet16(ds, 0x9200) - 1);
  if (memoryAGet16(ds, 0x9200) != 0x0001)
    goto loc_18832;
  memoryASet16(ds, 0x918c, 0xffff);
  memoryASet16(ds, 0x91f4, 0xd251);
  memoryASet16(ds, 0x91f6, 0x894d);
loc_18832:
  if (memoryAGet16(ds, 0x9200) != 0x0000)
    return;
  memoryASet16(ds, 0x918c, 0x0001);
  push(di);
  di = 0x0000;
  di += 0x1950;
  cx = 0x01cc;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  push(si);
  si = memoryAGet16(ds, 0x9054);
loc_18853:
  ax = memoryAGet16(ds, si);
  if (!(ax & ax))
    goto loc_1886c;
  push(ax);
  sub_11689();
  ax = pop();
  push(di);
  if (ax == 0x0050)
    goto loc_18869;
  di = si;
  sub_13a33();
loc_18869:
  si = pop();
  goto loc_18853;
loc_1886c:
  memoryASet(ds, 0x922d, 0x00);
  memoryASet(ds, 0x922e, 0x00);
  di = 0x8e8c;
  cx = 0x0010;
  ax = 0;
  rep_stosw<MemAuto, DirAuto>();
  cx = 0x0027;
  ax = 0x0000;
  bx = 0x0000;
  dx = 0x0140;
  di = 0x00c0;
  bp = 0x124c;
  sub_11588();
  cx = 0x0004;
  sub_115e4();
  si = pop();
  di = pop();
  memoryASet16(ds, 0x91a8, 0x0000);
  memoryASet(ds, 0x9230, 0xff);
}
void sub_188a9()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x918c) >= 0)
    goto loc_188be;
  if ((short)memoryAGet16(ds, 0x91aa) > (short)0x0b40)
    goto loc_188be;
  memoryASet16(ds, 0x91aa, 0x0b40);
loc_188be:
  if (memoryAGet16(ds, si + 34) != 0x0002)
    goto loc_188cd;
  if (memoryAGet16(ds, 0x9200) != 0x0001)
    goto loc_188ec;
  goto loc_188f8;
loc_188cd:
  if (memoryAGet16(ds, si + 34) != 0x0001)
    goto loc_188dd;
  if ((short)memoryAGet16(ds, 0x9f12) >= (short)0x00a0)
    goto loc_188ec;
  goto loc_188e5;
loc_188dd:
  if ((short)memoryAGet16(ds, 0x9f12) < (short)0x00a0)
    goto loc_188ec;
loc_188e5:
  if (memoryAGet16(ds, 0x9202) != 0x0003)
    goto loc_188f8;
loc_188ec:
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
  goto loc_18931;
loc_188f8:
  ax = memoryAGet16(ds, si + 18);
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  memoryASet16(ds, si + 40, ax);
  ax += 0x000f;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax -= memoryAGet16(ds, 0x9190);
  memoryASet16(ds, si + 42, ax);
  ax += 0x000f;
  memoryASet16(ds, si + 46, ax);
  if (memoryAGet16(ds, si + 26) != 0x0004)
    goto loc_18931;
  if (memoryAGet16(ds, 0x9202) != 0x0003)
    goto loc_18940;
loc_18931:
  if (memoryAGet16(ds, 0x919c) & 0x0001)
    goto loc_18940;
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) + 1);
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) & 0x0007);
loc_18940:
  bx = memoryAGet16(ds, si + 26);
  if ((short)bx <= (short)0x0004)
    goto loc_1894d;
  bx -= 0x0008;
  bx = -bx;
loc_1894d:
  bx <<= 1;
  di = memoryAGet16(ds, si + 12);
  ax = memoryAGet16(cs, bx + 37597);
  memoryASet16(ds, di, ax);
  if (memoryAGet16(ds, si + 34) != 0x0002)
    return;
  bp = 0x91d4;
  di = 0x9219;
  cx = 0x0008;
loc_18968:
  if (memoryAGet16(ds, bp) == 0x0000)
    goto loc_189a5;
  bx = 0x0000;
  bx += memoryAGet16(cs, di);
  memoryASet16(ds, bp, memoryAGet16(ds, bp) - 1);
  push(si);
  if (memoryAGet16(ds, bp) & 0x0002)
    goto loc_18987;
  si = di + 0x2;
  goto loc_1898a;
loc_18987:
  si = di + 0xa;
loc_1898a:
  ax = memoryAGet16(cs, si);
  memoryASet16(ds, bx, ax);
  ax = memoryAGet16(cs, si + 2);
  memoryASet16(ds, bx + 2, ax);
  ax = memoryAGet16(cs, si + 4);
  memoryASet16(ds, bx + 40, ax);
  ax = memoryAGet16(cs, si + 6);
  memoryASet16(ds, bx + 42, ax);
  si = pop();
loc_189a5:
  bp += 0x0002;
  di += 0x0012;
  if (--cx)
    goto loc_18968;
}
void sub_189ae()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x91aa) > (short)0x0120)
    goto loc_189bc;
  memoryASet16(ds, 0x91aa, 0x0120);
loc_189bc:
  if (memoryAGet16(ds, si + 32) != 0x0000)
    goto loc_18a0f;
  if ((short)memoryAGet16(ds, si + 26) >= 0)
    goto loc_189fb;
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
  ax = memoryAGet16(ds, 0x9f16);
  ax += memoryAGet16(ds, 0x9190);
  if ((short)ax > (short)0x00b0)
    goto loc_189fa;
  ax = memoryAGet16(ds, 0x9f12);
  if ((short)ax < (short)0x0000)
    goto loc_189fa;
  if ((short)ax > (short)0x013f)
    goto loc_189fa;
  memoryASet16(ds, si + 32, 0x03e8);
  memoryASet16(ds, si + 28, 0x0003);
  memoryASet16(ds, si + 26, 0x0154);
loc_189fa:
  return;
loc_189fb:
  memoryASet16(ds, si + 26, memoryAGet16(ds, si + 26) - 1);
  if ((short)memoryAGet16(ds, si + 26) >= 0)
    goto loc_18a0f;
  memoryASet16(ds, si + 48, 0x0000);
  memoryASet16(ds, si + 32, 0x03e8);
  memoryASet16(ds, si + 28, 0xfffd);
loc_18a0f:
  al = memoryAGet(cs, 0x7732);
  flags.carry = (memoryAGet(ds, si + 72) + al) >= 0x100;
  memoryASet(ds, si + 72, memoryAGet(ds, si + 72) + al);
  if (!flags.carry)
    goto loc_18a8b;
  sub_14191();
  al &= 0x3f;
  memoryASet(ds, si + 72, al);
  sub_14191();
  ax &= 0x0003;
  if (ax == 0)
    goto loc_18a58;
  ax = 0x00a0;
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bx += 0x0070;
  cx = 0x0004;
  dx = memoryAGet16(cs, 0x7734);
  sub_11ed3();
  bx = 0x7a80;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, di + 16, bx);
  goto loc_18a8b;
loc_18a58:
  cx = 0x0010;
loc_18a5b:
  push(cx);
  ax = 0x00a0;
  bx = memoryAGet16(ds, si + 22);
  bx -= memoryAGet16(ds, 0x9190);
  bx += 0x0070;
  cx--;
  dx = memoryAGet16(cs, 0x7734);
  sub_11ed3();
  bx = 0x7a92;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, di + 16, bx);
  cx = pop();
  if (--cx)
    goto loc_18a5b;
loc_18a8b:
  memoryASet16(ds, 0xfcf2, 0x0098);
  memoryASet16(ds, 0xfcfa, 0x00a7);
  ax = memoryAGet16(ds, si + 22);
  memoryASet16(ds, 0xfcf6, ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcf6, memoryAGet16(ds, 0xfcf6) - ax);
  memoryASet16(ds, 0xfcf6, memoryAGet16(ds, 0xfcf6) + 0x0070);
  ax = memoryAGet16(ds, 0xfcf6);
  memoryASet16(ds, 0xfcfe, ax);
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) + 0x000a);
  ax = memoryAGet16(ds, 0xfcf2);
  memoryASet16(ds, si + 40, ax);
  ax = memoryAGet16(ds, 0xfcf6);
  memoryASet16(ds, si + 42, ax);
  ax = memoryAGet16(ds, 0xfcfa);
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, 0xfcfe);
  memoryASet16(ds, si + 46, ax);
  if ((short)memoryAGet16(ds, 0x9190) < (short)0x0160)
    goto loc_18ad7;
  return;
loc_18ad7:
  if (memoryAGet16(ds, si + 48) != 0x0000)
    goto loc_18ae0;
  goto loc_18b78;
loc_18ae0:
  bx = memoryAGet16(ds, si + 34);
  bx += 0x0002;
  bx &= 0x0006;
  memoryASet16(ds, si + 34, bx);
  bx = memoryAGet16(cs, bx + 38131);
  di = 0x9333;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(cs, di + 12, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(cs, di + 14, ax);
  memoryASet16(ds, si + 48, memoryAGet16(ds, si + 48) - 1);
  if (memoryAGet16(ds, si + 48) != 0)
    goto loc_18b77;
  push(si);
  sub_11022();
  di = 0x904a;
  sub_1077c();
  di = si;
  si = pop();
  memoryASet16(ds, di, 0x010c);
  memoryASet16(ds, di + 2, 0x83bd);
  memoryASet16(ds, di + 4, 0x0853);
  memoryASet16(ds, di + 6, 0x0761);
  memoryASet16(ds, di + 40, 0x03e8);
  memoryASet16(ds, di + 44, 0x03e8);
  memoryASet16(ds, di + 18, 0x00a0);
  ax = memoryAGet16(ds, si + 22);
  ax -= memoryAGet16(ds, 0x9190);
  ax += 0x0080;
  memoryASet16(ds, di + 22, ax);
  bx = 0x78de;
  ax = memoryAGet16(cs, bx);
  memoryASet16(ds, di + 12, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(ds, di + 14, ax);
  bx += 0x0004;
  memoryASet16(ds, di + 16, bx);
  memoryASet16(ds, di + 26, 0x0000);
  sub_14191();
  ax &= 0x0007;
  memoryASet16(ds, di + 28, ax);
loc_18b77:
  return;
loc_18b78:
  if (memoryAGet16(ds, si + 32) != 0x0000)
    goto loc_18b81;
  goto loc_18c0d;
loc_18b81:
  ah = 0x11;
  interrupt(0x80);
  if (al & al)
    goto loc_18b8f;
  memoryASet16(ds, 0x8e88, 0x0011);
loc_18b8f:
  memoryASet16(ds, si + 32, memoryAGet16(ds, si + 32) - 1);
  ax = memoryAGet16(ds, si + 28);
  ax += memoryAGet16(ds, si + 22);
  if ((short)ax >= (short)0x0060)
    goto loc_18ba5;
  ax = 0x0060;
  memoryASet16(ds, si + 32, 0x0000);
loc_18ba5:
  if ((short)ax <= (short)0x00c0)
    goto loc_18bb2;
  ax = 0x00c0;
  memoryASet16(ds, si + 32, 0x0000);
loc_18bb2:
  memoryASet16(ds, si + 22, ax);
  bx = memoryAGet16(ds, 0x919c);
  bx &= 0x0001;
  bx <<= 1;
  push(bx);
  bx = memoryAGet16(cs, bx + 38139);
  di = 0x933b;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(cs, di + 12, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(cs, di + 14, ax);
  bx = pop();
  bx = memoryAGet16(cs, bx + 38143);
  di = 0x9343;
  ax = memoryAGet16(cs, bx);
  memoryASet16(cs, di, ax);
  ax = memoryAGet16(cs, bx + 2);
  memoryASet16(cs, di + 2, ax);
  ax = memoryAGet16(cs, bx + 4);
  memoryASet16(cs, di + 12, ax);
  ax = memoryAGet16(cs, bx + 6);
  memoryASet16(cs, di + 14, ax);
  return;
loc_18c0d:
  if ((short)memoryAGet16(ds, 0x8f32) >= (short)0x0010)
    goto loc_18c26;
  sub_14191();
  if (ax & 0x2000)
    goto loc_18c26;
  ax &= 0x0007;
  ax += 0x0002;
  memoryASet16(ds, si + 48, ax);
  return;
loc_18c26:
  dx = 0xfffd;
  if (ax & 0x4000)
    goto loc_18c31;
  dx = 0x0003;
loc_18c31:
  ax &= 0x0007;
  ax += 0x0008;
  memoryASet16(ds, si + 32, ax);
  memoryASet16(ds, si + 28, dx);
}
void sub_18c3e()
{
  stackguard sg(sp);

  if ((short)memoryAGet16(ds, 0x9190) >= (short)0x0160)
    return;
  push(si);
  ax = 0x0006;
  bx = 0x0009;
  dx = memoryAGet16(ds, si + 22);
  dx -= memoryAGet16(ds, 0x9190);
  cx = 0x0038;
  si = 0x92e7;
  sub_10941();
  si = pop();
}
void sub_18c85()
{
  stackguard sg(sp);

  bx = 0;
  if ((short)memoryAGet16(ds, 0xfce6) > (short)0x0080)
    goto loc_18c92;
  bx |= 0x0002;
loc_18c92:
  if ((short)memoryAGet16(ds, 0xfce2) > (short)0x0080)
    goto loc_18c9d;
  bx |= 0x0004;
loc_18c9d:
  di = memoryAGet16(cs, bx + 38147);
  di += 0x938b;
}
void sub_18ca7()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfce6, memoryAGet16(ds, 0xfce6) + ax);
  ax = memoryAGet16(ds, 0x9190);
  memoryASet16(ds, 0xfcee, memoryAGet16(ds, 0xfcee) + ax);
  if ((short)memoryAGet16(ds, 0xfce6) >= (short)0x01b0)
    goto loc_18d08;
  sub_18c85();
  cx = memoryAGet16(cs, di);
  di += 0x0002;
loc_18cc6:
  push(cx);
  if (memoryAGet16(cs, di) == 0x0000)
    goto loc_18cff;
  ax = memoryAGet16(cs, di + 2);
  memoryASet16(ds, 0xfcf2, ax);
  ax = memoryAGet16(ds, 0xfcea);
  if ((short)memoryAGet16(ds, 0xfcf2) > (short)ax)
    goto loc_18d07;
  ax = memoryAGet16(cs, di + 4);
  memoryASet16(ds, 0xfcf6, ax);
  ax = memoryAGet16(ds, 0xfcf2);
  memoryASet16(ds, 0xfcfa, ax);
  memoryASet16(ds, 0xfcfa, memoryAGet16(ds, 0xfcfa) + 0x000f);
  ax = memoryAGet16(ds, 0xfcf6);
  memoryASet16(ds, 0xfcfe, ax);
  memoryASet16(ds, 0xfcfe, memoryAGet16(ds, 0xfcfe) + 0x000f);
  sub_10f2f();
  if (!flags.zero)
    goto loc_18d0b;
loc_18cff:
  di += 0x0008;
  cx = pop();
  if (--cx)
    goto loc_18cc6;
  goto loc_18d08;
loc_18d07:
  cx = pop();
loc_18d08:
  ax = 0;
  return;
loc_18d0b:
  bx = 0x98ce;
  memoryASet16(ds, bx + 12, di);
  di = bx;
  cx = pop();
  ax = 0;
  ax--;
}
void sub_18df0()
{
  stackguard sg(sp);

  cx = memoryAGet16(cs, si);
  si += 0x0002;
loc_18df6:
  memoryASet16(cs, si, 0x0001);
  si += 0x0008;
  if (--cx)
    goto loc_18df6;
}
void sub_18e01()
{
  stackguard sg(sp);

  memoryASet16(ds, 0x91a8, 0x09e0);
  memoryASet16(ds, 0x91aa, 0x11ff);
  memoryASet16(ds, 0x8eac, 0x0fa0);
  memoryASet16(ds, 0x8eae, 0x04b0);
  memoryASet(ds, 0x9230, 0x00);
  sub_11022();
  di = 0x904a;
  sub_1077c();
  memoryASet16(ds, si, 0x0050);
  memoryASet16(ds, si + 2, 0x89ae);
  memoryASet16(ds, si + 4, 0x8c3e);
  memoryASet16(ds, si + 6, 0x8745);
  memoryASet16(ds, si + 72, 0x0000);
  memoryASet(ds, si + 74, 0xff);
  memoryASet(ds, si + 75, 0xff);
  memoryASet16(ds, si + 22, 0x0060);
  ax = memoryAGet16(cs, 0x772c);
  memoryASet16(ds, si + 36, ax);
  memoryASet16(ds, si + 26, 0xffff);
  memoryASet16(ds, si + 32, 0x0000);
  memoryASet16(ds, si + 48, 0x0000);
  memoryASet16(ds, si + 34, 0x0000);
  memoryASet16(ds, si + 54, 0x0000);
  cx = 0x0003;
  di = 0x33b0;
loc_18e72:
  sub_11022();
  push(di);
  di = 0x904a;
  sub_1077c();
  di = pop();
  memoryASet16(ds, si, 0x0054);
  memoryASet16(ds, si + 2, 0x88a9);
  memoryASet16(ds, si + 4, 0x0761);
  memoryASet16(ds, si + 6, 0x87d5);
  ax = memoryAGet16(cs, 0x772e);
  memoryASet16(ds, si + 36, ax);
  memoryASet(ds, si + 74, 0xff);
  memoryASet(ds, si + 75, 0xff);
  memoryASet16(ds, si + 72, 0x0000);
  bx = memoryAGet16(ds, di);
  di += 0x0002;
  memoryASet16(ds, si + 18, bx);
  ax = memoryAGet16(ds, di);
  di += 0x0002;
  memoryASet16(ds, si + 22, ax);
  dx = 0x0014;
  mul(dx);
  ax += bx;
  ax <<= 1;
  ax += 0x0000;
  memoryASet16(ds, si + 12, ax);
  memoryASet16(ds, si + 26, 0x0000);
  cx--;
  memoryASet16(ds, si + 34, cx);
  cx++;
  if (--cx)
    goto loc_18e72;
  memoryASet16(ds, 0x9200, 0x0003);
  memoryASet16(ds, 0x9202, 0x0000);
  memoryASet(ds, 0x922d, 0x00);
  memoryASet(ds, 0x922e, 0x00);
  memoryASet(ds, 0x922f, 0x02);
  memoryASet16(ds, 0x91d4, 0x0000);
  memoryASet16(ds, 0x91d6, 0x0000);
  memoryASet16(ds, 0x91d8, 0x0000);
  memoryASet16(ds, 0x91da, 0x0000);
  memoryASet16(ds, 0x91dc, 0x0000);
  memoryASet16(ds, 0x91de, 0x0000);
  memoryASet16(ds, 0x91e0, 0x0000);
  memoryASet16(ds, 0x91e2, 0x0000);
  si = 0x938b;
  si += 0x0000;
  sub_18df0();
  si = 0x938b;
  si += 0x0062;
  sub_18df0();
  si = 0x938b;
  si += 0x00c4;
  sub_18df0();
  si = 0x938b;
  si += 0x0116;
  sub_18df0();
  bx = 0x98ce;
  memoryASet16(ds, bx, 0x0000);
  memoryASet16(ds, bx + 10, bx);
  memoryASet16(ds, bx + 8, bx);
  memoryASet16(ds, bx + 2, 0x0761);
  memoryASet16(ds, bx + 4, 0x0761);
  memoryASet16(ds, bx + 6, 0x8d18);
  memoryASet16(ds, 0x91f4, 0x45d2);
  memoryASet16(ds, 0x91f6, 0xaa6a);
  ax = memoryAGet16(ds, 0x991a);
  memoryASet16(ds, 0x8e76, ax);
  ax = memoryAGet16(ds, 0x991a);
  ax <<= 1;
  memoryASet16(ds, 0x8e78, ax);
  si = 0x938b;
  di = 0xd10c;
  cx = 0x00b4;
loc_18f7f:
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  stosw<MemAuto, DirAuto>();
  if (--cx)
    goto loc_18f7f;
  memoryASet16(ds, 0x8e72, 0x1b55);
}
void sub_19f02()
{
  stackguard sg(sp);

  ax = memoryAGet16(ss, bp + 2- 2);
  memoryASet16(ds, si + 14, ax);
  bp += 0x0004;
  memoryASet16(ds, si + 16, bp);
  memoryASet16(ds, si + 40, 0x03e8);
  memoryASet16(ds, si + 44, 0x03e8);
}
void sub_19f4e()
{
  stackguard sg(sp);

  push(si);
  si = di;
  sub_10ef5();
  si = pop();
  bp = 0x1230;
  dx = 0x0853;
  sub_13326();
  memoryASet16(ds, 0x920e, memoryAGet16(ds, 0x920e) - 1);
  if (memoryAGet16(ds, 0x920e) == 0)
    goto loc_19f65;
  return;
loc_19f65:
  bx = memoryAGet16(ds, di + 68);
  memoryASet16(ds, bx + 36, 0x0000);
  ax = 0x0001;
  sub_13a39();
  cx = 0x0004;
  sub_115e4();
  memoryASet(ds, 0x9225, 0x00);
}
void sub_19f9a()
{
  stackguard sg(sp);

  goto loc_19f9a;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 27084 bytes
loc_19f9a:
  memoryASet(ds, bx + di, memoryAGet(ds, bx + di) ^ al);
  bh += al;
  sp++;
  memoryASet(ds, bx + di, memoryAGet(ds, bx + di) & al);
  memoryASet(ss, bp + di + 2684- 2, memoryAGet(ss, bp + di + 2684- 2) + cl);
  ax = memoryAGet16(ds, 0x9f12);
  ax -= memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, 0x9f16);
  bx -= memoryAGet16(ds, si + 22);
  sub_11b90();
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  al -= 0x60;
  memoryASet16(ds, di + 30, 0x0000);
  memoryASet16(ds, di + 28, ax);
  sub_14191();
  ax &= 0x001f;
  ax += 0x0020;
  ah = al;
  al = 0;
  ah <<= 1;
  ah <<= 1;
  memoryASet16(ds, di + 62, 0x0000);
  memoryASet16(ds, di + 60, ax);
  memoryASet16(ds, di + 64, 0x0000);
  memoryASet16(ds, di + 66, 0x0001);
  if (memoryAGet16(ds, si + 34) != 0x003c)
    goto loc_19ff9;
  memoryASet(ds, di + 28, memoryAGet(ds, di + 28) + 0x40);
  memoryASet16(ds, di + 60, -memoryAGet16(ds, di + 60));
loc_19ff9:
  goto loc_13589;
}
void sub_19fe6()
{
  stackguard sg(sp);

  goto loc_19fe6;
loc_13589:
  push(es);
  push(di);
  di = memoryAGet16(ds, si + 12);
  di -= 0x0008;
  ax = 0x449b;
  if (!(di & 0x0001))
    goto loc_1359e;
  di--;
  ax = 0x5489;
loc_1359e:
  es = ax;
  ax = memoryAGet16(ds, si + 18);
  ax += memoryAGet16(es, di);
  ax -= memoryAGet16(es, di + 8);
  memoryASet16(ds, si + 40, ax);
  ax += memoryAGet16(es, di + 4);
  ax--;
  memoryASet16(ds, si + 44, ax);
  ax = memoryAGet16(ds, si + 22);
  ax += memoryAGet16(es, di + 2);
  ax -= memoryAGet16(es, di + 10);
  memoryASet16(ds, si + 42, ax);
  ax += memoryAGet16(es, di + 6);
  ax--;
  memoryASet16(ds, si + 46, ax);
  di = pop();
  es = pop();
  return;
  //   gap of 27160 bytes
loc_19fe6:
  bh += al;
  bp++;
  dx++;
  memoryASet16(ds, bx + si, memoryAGet16(ds, bx + si) + ax);
  if (memoryAGet16(ds, si + 34) != 0x003c)
    goto loc_19ff9;
  memoryASet(ds, di + 28, memoryAGet(ds, di + 28) + 0x40);
  memoryASet16(ds, di + 60, -memoryAGet16(ds, di + 60));
loc_19ff9:
  goto loc_13589;
}
void sub_1ebd0()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f52, 0x00);
  goto loc_1ebdc;
  //   gap of 5 bytes
loc_1ebdc:
  bp = 0xa000;
  es = bp;
loc_1ebe1:
  if ((short)dx > (short)0xfff0)
    goto loc_1ebf2;
  si += ax;
  si += ax;
  dx += 0x0010;
  bx--;
  if (bx != 0)
    goto loc_1ebe1;
  goto loc_1ec6a;
loc_1ebf2:
  di = memoryAGet16(ds, 0x425b);
  bp = di;
  bp += 0x1ba8;
  cx >>= 1;
  cx >>= 1;
  di += cx;
  cx = ax;
  if (stop(/*82*/))
    goto loc_1ec21;
  push(di);
  push(cx);
loc_1ec0a:
  push(cx);
  cx = 0x0010;
  cx += dx;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec0a;
  cx = pop();
  di = pop();
  dx += 0x0010;
  bx--;
  if (bx == 0)
    goto loc_1ec6a;
loc_1ec21:
  ax = 0x0028;
  mul(dx);
  di += ax;
loc_1ec28:
  if ((short)di >= (short)bp)
    goto loc_1ec48;
  push(di);
  push(cx);
loc_1ec2e:
  push(cx);
  cx = 0x0010;
  dx = 0;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec2e;
  cx = pop();
  di = pop();
  di += 0x0280;
  bx--;
  if (bx != 0)
    goto loc_1ec28;
  goto loc_1ec6a;
loc_1ec48:
  push(di);
  di -= bp;
  ax = di;
  di = pop();
  dx = 0;
  bp = 0x0028;
  div(bp);
  ax -= 0x000f;
  ax = -ax;
  if (stop(/*1*/))
    goto loc_1ec6a;
loc_1ec5c:
  push(cx);
  cx = ax;
  dx = 0;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec5c;
loc_1ec6a:
  ax = ds;
  es = ax;
}
void sub_1ebd7()
{
  stackguard sg(sp);

  memoryASet(ds, 0x8f52, 0xff);
  bp = 0xa000;
  es = bp;
loc_1ebe1:
  if ((short)dx > (short)0xfff0)
    goto loc_1ebf2;
  si += ax;
  si += ax;
  dx += 0x0010;
  bx--;
  if (bx != 0)
    goto loc_1ebe1;
  goto loc_1ec6a;
loc_1ebf2:
  di = memoryAGet16(ds, 0x425b);
  bp = di;
  bp += 0x1ba8;
  cx >>= 1;
  cx >>= 1;
  di += cx;
  cx = ax;
  if (stop(/*82*/))
    goto loc_1ec21;
  push(di);
  push(cx);
loc_1ec0a:
  push(cx);
  cx = 0x0010;
  cx += dx;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec0a;
  cx = pop();
  di = pop();
  dx += 0x0010;
  bx--;
  if (bx == 0)
    goto loc_1ec6a;
loc_1ec21:
  ax = 0x0028;
  mul(dx);
  di += ax;
loc_1ec28:
  if ((short)di >= (short)bp)
    goto loc_1ec48;
  push(di);
  push(cx);
loc_1ec2e:
  push(cx);
  cx = 0x0010;
  dx = 0;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec2e;
  cx = pop();
  di = pop();
  di += 0x0280;
  bx--;
  if (bx != 0)
    goto loc_1ec28;
  goto loc_1ec6a;
loc_1ec48:
  push(di);
  di -= bp;
  ax = di;
  di = pop();
  dx = 0;
  bp = 0x0028;
  div(bp);
  ax -= 0x000f;
  ax = -ax;
  if (stop(/*1*/))
    goto loc_1ec6a;
loc_1ec5c:
  push(cx);
  cx = ax;
  dx = 0;
  sub_1ec6f();
  di += 0x0002;
  cx = pop();
  if (--cx)
    goto loc_1ec5c;
loc_1ec6a:
  ax = ds;
  es = ax;
}
void sub_1ec6f()
{
  stackguard sg(sp);

  push(ax);
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  flags.carry = ax & 1;
  ax >>= 1;
  if (ax != 0)
    goto loc_1ec7d;
  goto loc_1edcf;
loc_1ec7d:
  if (flags.carry)
    goto loc_1ecd8;
  if (memoryAGet(ds, 0x8f52) == 0x00)
    goto loc_1ecae;
  push(dx);
  dx = 0x03ce;
  ax = 0x0700;
  out(dx, ax);
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  push(cx);
loc_1ec94:
  memoryASet(es, di, al);
  memoryASet(es, di + 1, al);
  di += 0x0028;
  if (--cx)
    goto loc_1ec94;
  cx = pop();
  di = pop();
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  dx = pop();
  goto loc_1edcf;
loc_1ecae:
  push(si);
  push(di);
  push(cx);
  push(dx);
  push(ds);
  si = ax;
  si -= dx;
  si -= dx;
  ax = 0xa400;
  ds = ax;
  dx = 0x03ce;
  ax = 0x0105;
  out(dx, ax);
loc_1ecc5:
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += 0x0026;
  if (--cx)
    goto loc_1ecc5;
  ax = 0x0005;
  out(dx, ax);
  ds = pop();
  dx = pop();
  cx = pop();
  di = pop();
  si = pop();
  goto loc_1edcf;
loc_1ecd8:
  if (memoryAGet(ds, 0x8f52) == 0x00)
    goto loc_1ed27;
  push(dx);
  push(si);
  si = ax;
  si -= dx;
  si -= dx;
  si += 0x5538;
  dx = 0x03ce;
  ax = 0x0700;
  out(dx, ax);
  ax = 0x0f01;
  out(dx, ax);
  al = 0x08;
  out(dx, al);
  dx++;
  push(di);
  push(cx);
loc_1ecfc:
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  ah = memoryAGet(es, di + 1);
  memoryASet(es, di + 1, al);
  di += 0x0028;
  if (--cx)
    goto loc_1ecfc;
  cx = pop();
  di = pop();
  dx--;
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  si = pop();
  dx = pop();
  goto loc_1edcf;
loc_1ed27:
  push(cx);
  push(dx);
  push(si);
  push(di);
  si = ax;
  si -= dx;
  si -= dx;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  al = 0x08;
  out(dx, al);
  dx++;
  push(si);
  push(di);
  push(cx);
  si += 0x5538;
loc_1ed43:
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & al);
  di += 0x0028;
  if (--cx)
    goto loc_1ed43;
  dx--;
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = 0x1003;
  out(dx, ax);
  cx = pop();
  di = pop();
  si = pop();
  push(ds);
  ax = 0xa400;
  ds = ax;
  memoryASet(ss, 0x0000, 0x00);
  memoryASet(ss, 0x0001, 0x01);
loc_1ed75:
  dx = 0x03c4;
  ah = memoryAGet(ss, 0x0001);
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  ah = memoryAGet(ss, 0x0000);
  al = 0x04;
  out(dx, ax);
  push(si);
  push(di);
  push(cx);
loc_1ed8e:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di + 1);
  memoryASet(es, di + 1, al);
  di += 0x0028;
  if (--cx)
    goto loc_1ed8e;
  cx = pop();
  di = pop();
  si = pop();
  memoryASet(ss, 0x0000, memoryAGet(ss, 0x0000) + 1);
  memoryASet(ss, 0x0001, memoryAGet(ss, 0x0001) << 1);
  if ((char)memoryAGet(ss, 0x0000) < (char)0x04)
    goto loc_1ed75;
  dx = 0x03c4;
  ax = 0x0f02;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0x0003;
  out(dx, ax);
  ax = 0x0004;
  out(dx, ax);
  ds = pop();
  di = pop();
  si = pop();
  dx = pop();
  cx = pop();
loc_1edcf:
  ax = pop();
}
void sub_1f2ba()
{
  stackguard sg(sp);

  sub_1f2d5();
  ax = 0x000d;
  interrupt(0x10);
  ax = 0x0040;
  es = ax;
  dx = memoryAGet16(es, 0x0063);
  memoryASet16(ds, 0x4257, dx);
  ax = ds;
  es = ax;
}
void sub_1f2d5()
{
  stackguard sg(sp);

  di = 0x973e;
  ax = 0;
  cx = 0x00c8;
loc_1f2dd:
  stosw<MemAuto, DirAuto>();
  ax += 0x0028;
  if (--cx)
    goto loc_1f2dd;
}
void sub_1f324()
{
  stackguard sg(sp);

}
void sub_1f325()
{
  stackguard sg(sp);

  push(ds);
  ax = 0x63d0;
  ds = ax;
  ax = 0xa000;
  es = ax;
  di = 0x4000;
  dx = 0x03c4;
  ax = 0x0102;
  si = 0;
  sub_1f363();
  ah = 0x02;
  si = 0x0002;
  sub_1f363();
  ah = 0x04;
  si = 0x0004;
  sub_1f363();
  ah = 0x08;
  si = 0x0006;
  sub_1f363();
  dx = 0x03c4;
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_1f363()
{
  stackguard sg(sp);

  out(dx, ax);
  push(di);
  cx = 0x1c90;
loc_1f368:
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  si += 0x0006;
  if (--cx)
    goto loc_1f368;
  di = pop();
}
void sub_1f38c()
{
  stackguard sg(sp);

  push(dx);
  ax = 0x1012;
  bx = 0;
  cx = 0x0010;
  interrupt(0x10);
  dx = pop();
  ax = 0x1012;
  dx += 0x0018;
  bx = 0x0010;
  cx = 0x0008;
  interrupt(0x10);
}
void sub_1f3a7()
{
  stackguard sg(sp);

  dx = 0x427d;
  sub_1f38c();
}
void sub_1f3ae()
{
  stackguard sg(sp);

  dx = 0x427d;
  sub_1f38c();
}
void sub_1f3b5()
{
  stackguard sg(sp);

  ax = 0x0030;
  mul(memoryAGet16(ds, 0x991c));
  dx = ax;
  dx += 0x427d;
  sub_1f38c();
}
void sub_1f3c7()
{
  stackguard sg(sp);

  ax = 0x1000;
  bl = 0x12;
  bh = 0x00;
  interrupt(0x10);
  memoryASet(cs, 0x0136, 0x01);
}
void sub_1f3d7()
{
  stackguard sg(sp);

  if (memoryAGet(cs, 0x0136) == 0x00)
    return;
  memoryASet(cs, 0x0136, 0x00);
  ax = 0x1000;
  bl = 0x12;
  bh = 0x0f;
  interrupt(0x10);
}
void sub_1f3ef()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9198);
  sub_10ed5();
  push(es);
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x1003;
  out(dx, ax);
  ax = 0x0805;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  si = 0x9a40;
  cx = 0x0010;
  ax = 0x0400;
  out(dx, ax);
  ax = 0x0808;
  out(dx, ax);
  bl = al;
  bp = memoryAGet16(ds, 0x425b);
loc_1f420:
  di = memoryAGet16(ds, si);
  di <<= 1;
  di = memoryAGet16(ds, di + 38718);
  di += memoryAGet16(ds, si + 2);
  di += bp;
  if (!(memoryAGet(es, di) & bl))
    goto loc_1f435;
  memoryASet(es, di, al);
loc_1f435:
  si += 0x0006;
  if (--cx)
    goto loc_1f420;
  cx = 0x0010;
  ax = 0x0500;
  out(dx, ax);
loc_1f441:
  di = memoryAGet16(ds, si);
  di <<= 1;
  di = memoryAGet16(ds, di + 38718);
  di += memoryAGet16(ds, si + 2);
  di += bp;
  if (!(memoryAGet(es, di) & bl))
    goto loc_1f456;
  memoryASet(es, di, al);
loc_1f456:
  si += 0x0006;
  if (--cx)
    goto loc_1f441;
  cx = 0x0010;
  ax = 0x0700;
  out(dx, ax);
loc_1f462:
  di = memoryAGet16(ds, si);
  di <<= 1;
  di = memoryAGet16(ds, di + 38718);
  di += memoryAGet16(ds, si + 2);
  di += bp;
  if (!(memoryAGet(es, di) & bl))
    goto loc_1f477;
  memoryASet(es, di, al);
loc_1f477:
  si += 0x0006;
  if (--cx)
    goto loc_1f462;
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0x0003;
  out(dx, ax);
  ax = 0x0005;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  es = pop();
}
void sub_1f492()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x0805;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  si = 0x9a40;
  cx = 0x0030;
loc_1f4a8:
  ax = memoryAGet16(ds, si + 4);
  ax &= 0x7fff;
  ax -= 0x0200;
  if ((short)ax > (short)0x0200)
    goto loc_1f4d2;
loc_1f4b6:
  sub_10ed9();
  memoryASet16(ds, si, ax);
  sub_10ed9();
  memoryASet16(ds, si + 2, ax);
  sub_10ed9();
  ax &= 0x1fff;
  if ((short)ax <= (short)0x0200)
    goto loc_1f4b6;
loc_1f4d2:
  memoryASet16(ds, si + 4, ax);
  ax = memoryAGet16(ds, si);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  idiv(memoryAGet16(ds, si + 4));
  ax += 0x00a0;
  if (ax >= 0x0140)
    goto loc_1f4b6;
  bx = ax;
  ax = memoryAGet16(ds, si + 2);
  dx = ax & 0x8000 ? 0xffff : 0x0000;
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  flags.carry = !!(ax & 0x8000);
  ax <<= 1;
  dx = rcl(dx, 0x0001);
  idiv(memoryAGet16(ds, si + 4));
  ax += 0x0064;
  if (ax >= 0x00c8)
    goto loc_1f4b6;
  di = 0x0028;
  mul(di);
  di = ax;
  di += memoryAGet16(ds, 0x425b);
  push(cx);
  cx = bx;
  cx &= 0x0007;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  di += bx;
  ah = 0x80;
  ah >>= cl;
  cx = pop();
  if (!(memoryAGet(es, di) & ah))
    goto loc_1f555;
  al = 0x08;
  dx = 0x03ce;
  out(dx, ax);
  bx = memoryAGet16(ds, si + 4);
  tl = bl;
  bl = bh;
  bh = tl;
  bx >>= 1;
  bx >>= 1;
  bx &= 0x0007;
  ah = memoryAGet(ds, bx + 14141);
  al = 0;
  out(dx, ax);
  memoryASet(es, di, al);
  goto loc_1f55a;
loc_1f555:
  memoryASet16(ds, si + 4, memoryAGet16(ds, si + 4) | 0x8000);
loc_1f55a:
  si += 0x0006;
  if (--cx)
    goto loc_1f561;
  goto loc_1f564;
loc_1f561:
  goto loc_1f4a8;
loc_1f564:
  dx = 0x03ce;
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0x0005;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_1f57c()
{
  stackguard sg(sp);

  cx = memoryAGet16(ds, si + 18);
  dx = memoryAGet16(ds, si + 22);
  si = memoryAGet16(ds, si + 12);
  ax = 0x449b;
  if (!(si & 0x0001))
    goto loc_1f592;
  si--;
  ax = 0x5489;
loc_1f592:
  di = memoryAGet16(ds, 0x425b);
  push(ds);
  ds = ax;
  lodsw<MemAuto, DirAuto>();
  cx -= ax;
  lodsw<MemAuto, DirAuto>();
  dx -= ax;
  lodsw<MemAuto, DirAuto>();
  bp = ax;
  lodsw<MemAuto, DirAuto>();
  bx = ax;
  if ((short)cx < (short)0x0140)
    goto loc_1f5ae;
  goto loc_1fe9b;
loc_1f5ae:
  if ((short)dx < (short)memoryAGet16(ss, 0x0010))
    goto loc_1f5b8;
  goto loc_1fe9b;
loc_1f5b8:
  ax = cx;
  ax += bp;
  if ((short)ax > 0)
    goto loc_1f5c1;
  goto loc_1fe9b;
loc_1f5c1:
  ax = dx;
  ax += bx;
  if ((short)ax >= 0)
    goto loc_1f5ca;
  goto loc_1fe9b;
loc_1f5ca:
  memoryASet16(ds, 0x0000, 0x0000);
  memoryASet16(ds, 0x0002, 0x0000);
  if ((short)ax <= (short)memoryAGet16(ss, 0x0010))
    goto loc_1f5e7;
  ax -= memoryAGet16(ss, 0x0010);
  bx -= ax;
  memoryASet16(ds, 0x0002, ax);
loc_1f5e7:
  if ((short)dx >= 0)
    goto loc_1f5f9;
  bx += dx;
  dx = -dx;
  memoryASet16(ds, 0x0000, dx);
  memoryASet16(ds, 0x0002, dx);
  dx = 0;
loc_1f5f9:
  if ((short)bp <= (short)0x0008)
    goto loc_1f63f;
  ax = memoryAGet16(ds, 0x0000);
  ax |= memoryAGet16(ds, 0x0002);
  if (!ax)
    goto loc_1f63f;
  if ((short)bp > (short)0x0010)
    goto loc_1f616;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  goto loc_1f63f;
loc_1f616:
  if ((short)bp > (short)0x0018)
    goto loc_1f62f;
  ax = memoryAGet16(ds, 0x0000);
  ax <<= 1;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) + ax);
  ax = memoryAGet16(ds, 0x0002);
  ax <<= 1;
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) + ax);
  goto loc_1f63f;
loc_1f62f:
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
loc_1f63f:
  ax = 0x0028;
  mul(dx);
  di += ax;
  if ((short)bp <= (short)0x0008)
    goto loc_1f64d;
  goto loc_1fa46;
loc_1f64d:
  ax = cx;
  ax += bp;
  if ((short)ax <= (short)0x0140)
    goto loc_1f659;
  goto loc_1fc5c;
loc_1f659:
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  al = 0x08;
  out(dx, al);
  dx++;
  ch = 0;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1f687;
  goto loc_1f997;
loc_1f687:
  if ((short)bp > (short)0x0010)
    goto loc_1f68f;
  goto loc_1f8c1;
loc_1f68f:
  if ((short)bp > (short)0x0018)
    goto loc_1f697;
  goto loc_1f7c0;
loc_1f697:
  bp += cx;
  if ((short)bp > (short)0x0020)
    goto loc_1f6a1;
  goto loc_1f73c;
loc_1f6a1:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 4, memoryAGet(es, di + 4) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f6a1;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f6f8();
  ah = 0x02;
  sub_1f6f8();
  ah = 0x04;
  sub_1f6f8();
  ah = 0x08;
  sub_1f6f8();
  goto loc_1fe85;
  //   gap of 68 bytes
loc_1f73c:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f73c;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f787();
  ah = 0x02;
  sub_1f787();
  ah = 0x04;
  sub_1f787();
  ah = 0x08;
  sub_1f787();
  goto loc_1fe85;
  //   gap of 57 bytes
loc_1f7c0:
  bp += cx;
  if ((short)bp > (short)0x0018)
    goto loc_1f7ca;
  goto loc_1f851;
loc_1f7ca:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f7ca;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f816();
  ah = 0x02;
  sub_1f816();
  ah = 0x04;
  sub_1f816();
  ah = 0x08;
  sub_1f816();
  goto loc_1fe85;
  //   gap of 59 bytes
loc_1f851:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f851;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f891();
  ah = 0x02;
  sub_1f891();
  ah = 0x04;
  sub_1f891();
  ah = 0x08;
  sub_1f891();
  goto loc_1fe85;
  //   gap of 48 bytes
loc_1f8c1:
  bp += cx;
  if ((short)bp <= (short)0x0010)
    goto loc_1f93b;
loc_1f8c8:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f8c8;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f909();
  ah = 0x02;
  sub_1f909();
  ah = 0x04;
  sub_1f909();
  ah = 0x08;
  sub_1f909();
  goto loc_1fe85;
  //   gap of 50 bytes
loc_1f93b:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f93b;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f970();
  ah = 0x02;
  sub_1f970();
  ah = 0x04;
  sub_1f970();
  ah = 0x08;
  sub_1f970();
  goto loc_1fe85;
  //   gap of 39 bytes
loc_1f997:
  bp += cx;
  if ((short)bp <= (short)0x0008)
    goto loc_1f9fd;
loc_1f99e:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f99e;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f9d4();
  ah = 0x02;
  sub_1f9d4();
  ah = 0x04;
  sub_1f9d4();
  ah = 0x08;
  sub_1f9d4();
  goto loc_1fe85;
  //   gap of 41 bytes
loc_1f9fd:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f9fd;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1fa27();
  ah = 0x02;
  sub_1fa27();
  ah = 0x04;
  sub_1fa27();
  ah = 0x08;
  sub_1fa27();
  goto loc_1fe85;
  //   gap of 31 bytes
loc_1fa46:
  dx = cx;
  dx = -dx;
  dx--;
  dx &= 0xfff8;
  bp -= dx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1fa7a;
  goto loc_1fc06;
loc_1fa7a:
  if ((short)bp > (short)0x0010)
    goto loc_1fa82;
  goto loc_1fb9b;
loc_1fa82:
  if ((short)bp > (short)0x0018)
    goto loc_1fa8a;
  goto loc_1fb1b;
loc_1fa8a:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fa8a;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fadb();
  ah = 0x02;
  sub_1fadb();
  ah = 0x04;
  sub_1fadb();
  ah = 0x08;
  sub_1fadb();
  goto loc_1fe85;
  //   gap of 64 bytes
loc_1fb1b:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fb1b;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fb64();
  ah = 0x02;
  sub_1fb64();
  ah = 0x04;
  sub_1fb64();
  ah = 0x08;
  sub_1fb64();
  goto loc_1fe85;
  //   gap of 55 bytes
loc_1fb9b:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fb9b;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fbd8();
  ah = 0x02;
  sub_1fbd8();
  ah = 0x04;
  sub_1fbd8();
  ah = 0x08;
  sub_1fbd8();
  goto loc_1fe85;
  //   gap of 46 bytes
loc_1fc06:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fc06;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fc37();
  ah = 0x02;
  sub_1fc37();
  ah = 0x04;
  sub_1fc37();
  ah = 0x08;
  sub_1fc37();
  goto loc_1fe85;
  //   gap of 37 bytes
loc_1fc5c:
  dx = bp;
  bp = 0x0140;
  bp -= cx;
  ax = bp;
  ax += 0x0007;
  dx += 0x0007;
  dx &= 0xfff8;
  ax &= 0xfff8;
  dx -= ax;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1fca7;
  goto loc_1fe1d;
loc_1fca7:
  if ((short)bp > (short)0x0010)
    goto loc_1fcaf;
  goto loc_1fdb8;
loc_1fcaf:
  if ((short)bp > (short)0x0018)
    goto loc_1fcb7;
  goto loc_1fd3e;
loc_1fcb7:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fcb7;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fd05();
  ah = 0x02;
  sub_1fd05();
  ah = 0x04;
  sub_1fd05();
  ah = 0x08;
  sub_1fd05();
  goto loc_1fe85;
  //   gap of 57 bytes
loc_1fd3e:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fd3e;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fd84();
  ah = 0x02;
  sub_1fd84();
  ah = 0x04;
  sub_1fd84();
  ah = 0x08;
  sub_1fd84();
  goto loc_1fe85;
  //   gap of 52 bytes
loc_1fdb8:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fdb8;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fdf2();
  ah = 0x02;
  sub_1fdf2();
  ah = 0x04;
  sub_1fdf2();
  ah = 0x08;
  sub_1fdf2();
  goto loc_1fe85;
  //   gap of 43 bytes
loc_1fe1d:
  lodsb<MemAuto, DirAuto>();
  ah = al;
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fe1d;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fe4d();
  ah = 0x02;
  sub_1fe4d();
  ah = 0x04;
  sub_1fe4d();
  ah = 0x08;
  sub_1fe4d();
  goto loc_1fe85;
  //   gap of 56 bytes
loc_1fe85:
  dx = 0x03ce;
  ax = 0x0003;
  out(dx, ax);
  ax = 0x0005;
  out(dx, ax);
  ax = 0x0f07;
  out(dx, ax);
  dx = 0x03c4;
  ax = 0x0f02;
  out(dx, ax);
loc_1fe9b:
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_1f585()
{
  stackguard sg(sp);

  ax = 0x449b;
  if (!(si & 0x0001))
    goto loc_1f592;
  si--;
  ax = 0x5489;
loc_1f592:
  di = memoryAGet16(ds, 0x425b);
  push(ds);
  ds = ax;
  lodsw<MemAuto, DirAuto>();
  cx -= ax;
  lodsw<MemAuto, DirAuto>();
  dx -= ax;
  lodsw<MemAuto, DirAuto>();
  bp = ax;
  lodsw<MemAuto, DirAuto>();
  bx = ax;
  if ((short)cx < (short)0x0140)
    goto loc_1f5ae;
  goto loc_1fe9b;
loc_1f5ae:
  if ((short)dx < (short)memoryAGet16(ss, 0x0010))
    goto loc_1f5b8;
  goto loc_1fe9b;
loc_1f5b8:
  ax = cx;
  ax += bp;
  if ((short)ax > 0)
    goto loc_1f5c1;
  goto loc_1fe9b;
loc_1f5c1:
  ax = dx;
  ax += bx;
  if ((short)ax >= 0)
    goto loc_1f5ca;
  goto loc_1fe9b;
loc_1f5ca:
  memoryASet16(ds, 0x0000, 0x0000);
  memoryASet16(ds, 0x0002, 0x0000);
  if ((short)ax <= (short)memoryAGet16(ss, 0x0010))
    goto loc_1f5e7;
  ax -= memoryAGet16(ss, 0x0010);
  bx -= ax;
  memoryASet16(ds, 0x0002, ax);
loc_1f5e7:
  if (stop(/*82*/))
    goto loc_1f5f9;
  bx += dx;
  dx = -dx;
  memoryASet16(ds, 0x0000, dx);
  memoryASet16(ds, 0x0002, dx);
  dx = 0;
loc_1f5f9:
  if ((short)bp <= (short)0x0008)
    goto loc_1f63f;
  ax = memoryAGet16(ds, 0x0000);
  ax |= memoryAGet16(ds, 0x0002);
  if (!ax)
    goto loc_1f63f;
  if ((short)bp > (short)0x0010)
    goto loc_1f616;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  goto loc_1f63f;
loc_1f616:
  if ((short)bp > (short)0x0018)
    goto loc_1f62f;
  ax = memoryAGet16(ds, 0x0000);
  ax <<= 1;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) + ax);
  ax = memoryAGet16(ds, 0x0002);
  ax <<= 1;
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) + ax);
  goto loc_1f63f;
loc_1f62f:
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
loc_1f63f:
  ax = 0x0028;
  mul(dx);
  di += ax;
  if (stop(/*82*/))
    goto loc_1f64d;
  goto loc_1fa46;
loc_1f64d:
  ax = cx;
  ax += bp;
  if ((short)ax <= (short)0x0140)
    goto loc_1f659;
  goto loc_1fc5c;
loc_1f659:
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  al = 0x08;
  out(dx, al);
  dx++;
  ch = 0;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1f687;
  goto loc_1f997;
loc_1f687:
  if ((short)bp > (short)0x0010)
    goto loc_1f68f;
  goto loc_1f8c1;
loc_1f68f:
  if ((short)bp > (short)0x0018)
    goto loc_1f697;
  goto loc_1f7c0;
loc_1f697:
  bp += cx;
  if ((short)bp > (short)0x0020)
    goto loc_1f6a1;
  goto loc_1f73c;
loc_1f6a1:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 4, memoryAGet(es, di + 4) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f6a1;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f6f8();
  ah = 0x02;
  sub_1f6f8();
  ah = 0x04;
  sub_1f6f8();
  ah = 0x08;
  sub_1f6f8();
  goto loc_1fe85;
  //   gap of 68 bytes
loc_1f73c:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f73c;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f787();
  ah = 0x02;
  sub_1f787();
  ah = 0x04;
  sub_1f787();
  ah = 0x08;
  sub_1f787();
  goto loc_1fe85;
  //   gap of 57 bytes
loc_1f7c0:
  bp += cx;
  if ((short)bp > (short)0x0018)
    goto loc_1f7ca;
  goto loc_1f851;
loc_1f7ca:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f7ca;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f816();
  ah = 0x02;
  sub_1f816();
  ah = 0x04;
  sub_1f816();
  ah = 0x08;
  sub_1f816();
  goto loc_1fe85;
  //   gap of 59 bytes
loc_1f851:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f851;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f891();
  ah = 0x02;
  sub_1f891();
  ah = 0x04;
  sub_1f891();
  ah = 0x08;
  sub_1f891();
  goto loc_1fe85;
  //   gap of 48 bytes
loc_1f8c1:
  bp += cx;
  if ((short)bp <= (short)0x0010)
    goto loc_1f93b;
loc_1f8c8:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f8c8;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f909();
  ah = 0x02;
  sub_1f909();
  ah = 0x04;
  sub_1f909();
  ah = 0x08;
  sub_1f909();
  goto loc_1fe85;
  //   gap of 50 bytes
loc_1f93b:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  lodsb<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f93b;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f970();
  ah = 0x02;
  sub_1f970();
  ah = 0x04;
  sub_1f970();
  ah = 0x08;
  sub_1f970();
  goto loc_1fe85;
  //   gap of 39 bytes
loc_1f997:
  bp += cx;
  if ((short)bp <= (short)0x0008)
    goto loc_1f9fd;
loc_1f99e:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  ah = memoryAGet(ds, si + 65535);
  al = 0;
  ax = ror(ax, cl);
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f99e;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1f9d4();
  ah = 0x02;
  sub_1f9d4();
  ah = 0x04;
  sub_1f9d4();
  ah = 0x08;
  sub_1f9d4();
  goto loc_1fe85;
  //   gap of 41 bytes
loc_1f9fd:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f9fd;
  di = pop();
  dx--;
  sub_1fe70();
  ah = 0x01;
  sub_1fa27();
  ah = 0x02;
  sub_1fa27();
  ah = 0x04;
  sub_1fa27();
  ah = 0x08;
  sub_1fa27();
  goto loc_1fe85;
  //   gap of 31 bytes
loc_1fa46:
  dx = cx;
  dx = -dx;
  dx--;
  dx &= 0xfff8;
  bp -= dx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1fa7a;
  goto loc_1fc06;
loc_1fa7a:
  if ((short)bp > (short)0x0010)
    goto loc_1fa82;
  goto loc_1fb9b;
loc_1fa82:
  if ((short)bp > (short)0x0018)
    goto loc_1fa8a;
  goto loc_1fb1b;
loc_1fa8a:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fa8a;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fadb();
  ah = 0x02;
  sub_1fadb();
  ah = 0x04;
  sub_1fadb();
  ah = 0x08;
  sub_1fadb();
  goto loc_1fe85;
  //   gap of 64 bytes
loc_1fb1b:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fb1b;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fb64();
  ah = 0x02;
  sub_1fb64();
  ah = 0x04;
  sub_1fb64();
  ah = 0x08;
  sub_1fb64();
  goto loc_1fe85;
  //   gap of 55 bytes
loc_1fb9b:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fb9b;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fbd8();
  ah = 0x02;
  sub_1fbd8();
  ah = 0x04;
  sub_1fbd8();
  ah = 0x08;
  sub_1fbd8();
  goto loc_1fe85;
  //   gap of 46 bytes
loc_1fc06:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fc06;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fc37();
  ah = 0x02;
  sub_1fc37();
  ah = 0x04;
  sub_1fc37();
  ah = 0x08;
  sub_1fc37();
  goto loc_1fe85;
  //   gap of 37 bytes
loc_1fc5c:
  dx = bp;
  bp = 0x0140;
  bp -= cx;
  ax = bp;
  ax += 0x0007;
  dx += 0x0007;
  dx &= 0xfff8;
  ax &= 0xfff8;
  dx -= ax;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_1fca7;
  goto loc_1fe1d;
loc_1fca7:
  if ((short)bp > (short)0x0010)
    goto loc_1fcaf;
  goto loc_1fdb8;
loc_1fcaf:
  if ((short)bp > (short)0x0018)
    goto loc_1fcb7;
  goto loc_1fd3e;
loc_1fcb7:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fcb7;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fd05();
  ah = 0x02;
  sub_1fd05();
  ah = 0x04;
  sub_1fd05();
  ah = 0x08;
  sub_1fd05();
  goto loc_1fe85;
  //   gap of 57 bytes
loc_1fd3e:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fd3e;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fd84();
  ah = 0x02;
  sub_1fd84();
  ah = 0x04;
  sub_1fd84();
  ah = 0x08;
  sub_1fd84();
  goto loc_1fe85;
  //   gap of 52 bytes
loc_1fdb8:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fdb8;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fdf2();
  ah = 0x02;
  sub_1fdf2();
  ah = 0x04;
  sub_1fdf2();
  ah = 0x08;
  sub_1fdf2();
  goto loc_1fe85;
  //   gap of 43 bytes
loc_1fe1d:
  lodsb<MemAuto, DirAuto>();
  ah = al;
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fe1d;
  di = pop();
  sub_1fe70();
  ah = 0x01;
  sub_1fe4d();
  ah = 0x02;
  sub_1fe4d();
  ah = 0x04;
  sub_1fe4d();
  ah = 0x08;
  sub_1fe4d();
  goto loc_1fe85;
  //   gap of 56 bytes
loc_1fe85:
  dx = 0x03ce;
  ax = 0x0003;
  out(dx, ax);
  ax = 0x0005;
  out(dx, ax);
  ax = 0x0f07;
  out(dx, ax);
  dx = 0x03c4;
  ax = 0x0f02;
  out(dx, ax);
loc_1fe9b:
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_1f6f8()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1f708:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 4, memoryAGet(es, di + 4) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f708;
  di = pop();
}
void sub_1f787()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1f797:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f797;
  di = pop();
}
void sub_1f816()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1f826:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f826;
  di = pop();
}
void sub_1f891()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1f8a1:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f8a1;
  di = pop();
}
void sub_1f909()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1f919:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f919;
  di = pop();
}
void sub_1f970()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1f980:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f980;
  di = pop();
}
void sub_1f9d4()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1f9e4:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1f9e4;
  di = pop();
}
void sub_1fa27()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1fa37:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fa37;
  di = pop();
}
void sub_1fadb()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1faeb:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di, memoryAGet(es, di) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1faeb;
  di = pop();
}
void sub_1fb64()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fb74:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di, memoryAGet(es, di) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fb74;
  di = pop();
}
void sub_1fbd8()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fbe8:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di, memoryAGet(es, di) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fbe8;
  di = pop();
}
void sub_1fc37()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fc47:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  memoryASet(es, di, memoryAGet(es, di) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fc47;
  di = pop();
}
void sub_1fd05()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  bl = bh;
  si += memoryAGet16(ds, 0x0002);
loc_1fd15:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) & ah);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fd15;
  di = pop();
}
void sub_1fd84()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fd94:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) & ah);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fd94;
  di = pop();
}
void sub_1fdf2()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fe02:
  al = memoryAGet(ds, si);
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) & ah);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fe02;
  di = pop();
}
void sub_1fe4d()
{
  stackguard sg(sp);

  dx = 0x03c4;
  al = 0x02;
  out(dx, ax);
  dx = 0x03ce;
  push(di);
  si += memoryAGet16(ds, 0x0002);
  bl = bh;
loc_1fe5d:
  lodsb<MemAuto, DirAuto>();
  al >>= cl;
  memoryASet(es, di, memoryAGet(es, di) & al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_1fe5d;
  di = pop();
}
void sub_1fe70()
{
  stackguard sg(sp);

  ax = 0x0001;
  out(dx, ax);
  ax = 0x1003;
  out(dx, ax);
  ax = 0x0805;
  out(dx, ax);
  ax = 0x0007;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
}
void sub_1fea1()
{
  stackguard sg(sp);

  push(si);
  sub_1f57c();
  si = pop();
  ax = memoryAGet16(ds, si + 18);
  bx = memoryAGet16(ds, si + 22);
  di = memoryAGet16(ds, si + 12);
  cx = 0x449b;
  if (!(di & 0x0001))
    goto loc_1febd;
  di--;
  cx = 0x5489;
loc_1febd:
  push(es);
  es = cx;
  ax -= memoryAGet16(es, di);
  bx -= memoryAGet16(es, di + 2);
  es = pop();
  sub_1fede();
  ax += 0x0010;
  sub_1fede();
  bx += 0x0010;
  sub_1fede();
  ax -= 0x0010;
  sub_1fede();
}
void sub_1fede()
{
  stackguard sg(sp);

  push(si);
  push(ax);
  push(bx);
  si = 0x0000;
  si += memoryAGet16(ds, 0x918e);
  cx = ax;
  cx &= 0xfff0;
  cx >>= 1;
  if (cx >= 0x00a0)
    goto loc_1ff3d;
  dx = bx;
  dx += memoryAGet16(ds, 0x9196);
  dx &= 0xfff0;
  dx -= memoryAGet16(ds, 0x9196);
  bx += memoryAGet16(ds, 0x9196);
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  ax &= 0x00fe;
  si += ax;
  ax = 0x0028;
  push(dx);
  mul(bx);
  dx = pop();
  si += ax;
  push(es);
  ax = 0x1000;
  es = ax;
  ax = memoryAGet16(ds, si);
  memoryASet16(es, 0xedd1, ax);
  es = pop();
  ax = 0x0001;
  bx = 0x0001;
  si = 0xedd1;
  sub_1ebd0();
loc_1ff3d:
  bx = pop();
  ax = pop();
  si = pop();
}
void sub_1ff41()
{
  stackguard sg(sp);

  memoryASet16(ds, si + 4, 0x0853);
  cx = memoryAGet16(ds, si + 18);
  dx = memoryAGet16(ds, si + 22);
  si = memoryAGet16(ds, si + 12);
  ax = 0x449b;
  if (!(si & 0x0001))
    goto loc_1ff5c;
  si--;
  ax = 0x5489;
loc_1ff5c:
  di = memoryAGet16(ds, 0x425b);
  push(ds);
  ds = ax;
  lodsw<MemAuto, DirAuto>();
  cx -= ax;
  lodsw<MemAuto, DirAuto>();
  dx -= ax;
  lodsw<MemAuto, DirAuto>();
  bp = ax;
  lodsw<MemAuto, DirAuto>();
  bx = ax;
  if ((short)cx < (short)0x0140)
    goto loc_1ff78;
  goto loc_203d4;
loc_1ff78:
  if ((short)dx < (short)memoryAGet16(ss, 0x0010))
    goto loc_1ff82;
  goto loc_203d4;
loc_1ff82:
  ax = cx;
  ax += bp;
  if ((short)ax > 0)
    goto loc_1ff8b;
  goto loc_203d4;
loc_1ff8b:
  ax = dx;
  ax += bx;
  if ((short)ax >= 0)
    goto loc_1ff94;
  goto loc_203d4;
loc_1ff94:
  memoryASet16(ds, 0x0000, 0x0000);
  memoryASet16(ds, 0x0002, 0x0000);
  if ((short)ax <= (short)memoryAGet16(ss, 0x0010))
    goto loc_1ffb1;
  ax -= memoryAGet16(ss, 0x0010);
  bx -= ax;
  memoryASet16(ds, 0x0002, ax);
loc_1ffb1:
  if (stop(/*82*/))
    goto loc_1ffc3;
  bx += dx;
  dx = -dx;
  memoryASet16(ds, 0x0000, dx);
  memoryASet16(ds, 0x0002, dx);
  dx = 0;
loc_1ffc3:
  if ((short)bp <= (short)0x0008)
    goto loc_20009;
  ax = memoryAGet16(ds, 0x0000);
  ax |= memoryAGet16(ds, 0x0002);
  if (!ax)
    goto loc_20009;
  if ((short)bp > (short)0x0010)
    goto loc_1ffe0;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  goto loc_20009;
loc_1ffe0:
  if ((short)bp > (short)0x0018)
    goto loc_1fff9;
  ax = memoryAGet16(ds, 0x0000);
  ax <<= 1;
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) + ax);
  ax = memoryAGet16(ds, 0x0002);
  ax <<= 1;
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) + ax);
  goto loc_20009;
loc_1fff9:
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0000, memoryAGet16(ds, 0x0000) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
  memoryASet16(ds, 0x0002, memoryAGet16(ds, 0x0002) << 1);
loc_20009:
  ax = 0x0028;
  mul(dx);
  di += ax;
  if (stop(/*82*/))
    goto loc_20017;
  goto loc_201e0;
loc_20017:
  ax = cx;
  ax += bp;
  if ((short)ax <= (short)0x0140)
    goto loc_20023;
  goto loc_202ce;
loc_20023:
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x0700;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_20051;
  goto loc_201a2;
loc_20051:
  if ((short)bp > (short)0x0010)
    goto loc_20059;
  goto loc_2014f;
loc_20059:
  if ((short)bp > (short)0x0018)
    goto loc_20061;
  goto loc_200e4;
loc_20061:
  bp += cx;
  if ((short)bp <= (short)0x0020)
    goto loc_200ad;
loc_20068:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 4, memoryAGet(es, di + 4) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20068;
  di = pop();
  goto loc_203c6;
loc_200ad:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_200ad;
  di = pop();
  goto loc_203c6;
loc_200e4:
  bp += cx;
  if ((short)bp <= (short)0x0018)
    goto loc_20124;
loc_200eb:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_200eb;
  di = pop();
  goto loc_203c6;
loc_20124:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20124;
  di = pop();
  goto loc_203c6;
loc_2014f:
  bp += cx;
  if ((short)bp <= (short)0x0010)
    goto loc_20183;
loc_20156:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20156;
  di = pop();
  goto loc_203c6;
loc_20183:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20183;
  di = pop();
  goto loc_203c6;
loc_201a2:
  bp += cx;
  if ((short)bp <= (short)0x0008)
    goto loc_201ca;
loc_201a9:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_201a9;
  di = pop();
  goto loc_203c6;
loc_201ca:
  lodsb<MemAuto, DirAuto>();
  ah = al;
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_201ca;
  di = pop();
  goto loc_203c6;
loc_201e0:
  dx = cx;
  dx = -dx;
  dx--;
  dx &= 0xfff8;
  bp -= dx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x0700;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_20218;
  goto loc_202b4;
loc_20218:
  if ((short)bp <= (short)0x0010)
    goto loc_2028e;
  if ((short)bp <= (short)0x0018)
    goto loc_2025c;
loc_20222:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20222;
  di = pop();
  goto loc_203c6;
loc_2025c:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_2025c;
  di = pop();
  goto loc_203c6;
loc_2028e:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_2028e;
  di = pop();
  goto loc_203c6;
loc_202b4:
  si += memoryAGet16(ds, 0x0004);
  lodsb<MemAuto, DirAuto>();
  ah = 0;
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_202b4;
  di = pop();
  goto loc_203c6;
loc_202ce:
  dx = bp;
  bp = 0x0140;
  bp -= cx;
  ax = bp;
  ax += 0x0007;
  dx += 0x0007;
  dx &= 0xfff8;
  ax &= 0xfff8;
  dx -= ax;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  memoryASet16(ds, 0x0004, dx);
  dx = cx;
  dx >>= 1;
  dx >>= 1;
  dx >>= 1;
  di += dx;
  cx &= 0x0007;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x0700;
  out(dx, ax);
  push(di);
  bh = bl;
  ch = 0x08;
  si += memoryAGet16(ds, 0x0000);
  if ((short)bp > (short)0x0008)
    goto loc_2031d;
  goto loc_203ad;
loc_2031d:
  if ((short)bp <= (short)0x0010)
    goto loc_2038b;
  if ((short)bp <= (short)0x0018)
    goto loc_2035d;
loc_20327:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 3, memoryAGet(es, di + 3) | al);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_20327;
  di = pop();
  goto loc_203c6;
loc_2035d:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(ds, si);
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 2, memoryAGet(es, di + 2) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_2035d;
  di = pop();
  goto loc_203c6;
loc_2038b:
  ah = memoryAGet(ds, si);
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsw<MemAuto, DirAuto>();
  ax = ror(ax, cl);
  al = ch;
  out(dx, ax);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_2038b;
  di = pop();
  goto loc_203c6;
loc_203ad:
  lodsb<MemAuto, DirAuto>();
  ah = al;
  ah >>= cl;
  al = ch;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) | al);
  si += memoryAGet16(ds, 0x0004);
  di += 0x0028;
  bl--;
  if ((char)bl >= 0)
    goto loc_203ad;
  di = pop();
loc_203c6:
  dx = 0x03ce;
  ax = 0x0001;
  out(dx, ax);
  al--;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
loc_203d4:
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_203da()
{
  stackguard sg(sp);

  bx = memoryAGet16(ds, si + 18);
  dx = memoryAGet16(ds, si + 22);
  si = memoryAGet16(ds, si + 12);
  bx -= memoryAGet16(ds, si);
  if (bx < 0x0140)
    goto loc_203ee;
  return;
loc_203ee:
  dx -= memoryAGet16(ds, si + 2);
  if ((short)dx < (short)0x00c0)
    goto loc_203fa;
  return;
loc_203fa:
  cx = memoryAGet16(ds, si + 4);
  ax = bx;
  bx &= 0x0007;
  ax ^= bx;
  bx <<= 1;
  si = memoryAGet16(ds, bx + si + 6);
  if (stop(/*82*/))
    goto loc_20417;
  si -= dx;
  si -= dx;
  cx += dx;
  if (stop(/*71*/))
    return;
  dx = 0;
loc_20417:
  bx = dx;
  bx += cx;
  bx -= 0x00c0;
  if (stop(/*71*/))
    goto loc_20425;
  cx -= bx;
  if (stop(/*71*/))
    return;
loc_20425:
  bx = ax;
  ax = 0x0028;
  mul(dx);
  di = memoryAGet16(ds, 0x425b);
  di += ax;
  bx >>= 1;
  bx >>= 1;
  bx >>= 1;
  di += bx;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0x0700;
  out(dx, ax);
  al = 0x08;
  out(dx, al);
  dx++;
  if ((short)bx >= (short)0x0138)
    goto loc_20466;
loc_20454:
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  memoryASet(es, di + 1, memoryAGet(es, di + 1) | al);
  di += 0x0028;
  if (--cx)
    goto loc_20454;
  goto loc_20471;
loc_20466:
  lodsb<MemAuto, DirAuto>();
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) | al);
  si++;
  di += 0x0028;
  if (--cx)
    goto loc_20466;
loc_20471:
  dx--;
  ax = 0x0001;
  out(dx, ax);
  al--;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_20482()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0105;
  out(dx, ax);
  di = memoryAGet16(ds, 0x425b);
  si = 0x0000;
  si += memoryAGet16(ds, 0x918e);
  dx = memoryAGet16(ds, 0x9196);
  ax = 0xa000;
  es = ax;
  cx = 0x0010;
  cx -= dx;
  bl = 0x14;
loc_204a4:
  lodsw<MemAuto, DirAuto>();
  push(si);
  ax >>= 1;
  si = ax;
  si += dx;
  si += dx;
  push(ds);
  ax = 0xa400;
  ds = ax;
  push(di);
  push(cx);
loc_204b6:
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += 0x0026;
  if (--cx)
    goto loc_204b6;
  bp = di;
  cx = pop();
  di = pop();
  di += 0x0002;
  ds = pop();
  si = pop();
  bl--;
  if (bl != 0)
    goto loc_204a4;
  di = bp;
  di -= 0x0026;
  bx = 0x0b14;
  bp = 0x0026;
loc_204d5:
  lodsw<MemAuto, DirAuto>();
  push(si);
  ax >>= 1;
  si = ax;
  cx = ds;
  ax = 0xa400;
  ds = ax;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  di -= 0x027e;
  ds = cx;
  si = pop();
  bl--;
  if (bl != 0)
    goto loc_204d5;
  bl = 0x14;
  di += 0x0258;
  bh--;
  if (bh != 0)
    goto loc_204d5;
  if (!(dx & dx))
    goto loc_2055c;
  bl = 0x14;
loc_2053d:
  lodsw<MemAuto, DirAuto>();
  push(si);
  ax >>= 1;
  si = ax;
  push(ds);
  ax = 0xa400;
  ds = ax;
  push(di);
  cx = dx;
loc_2054c:
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  di += bp;
  if (--cx)
    goto loc_2054c;
  di = pop();
  di += 0x0002;
  ds = pop();
  si = pop();
  bl--;
  if (bl != 0)
    goto loc_2053d;
loc_2055c:
  dx = 0x03ce;
  ax = 0x0005;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_20568()
{
  stackguard sg(sp);

  sub_2058d();
  ax = memoryAGet16(ds, 0x425b);
  bx = memoryAGet16(ds, 0x4259);
  memoryASet16(ds, 0x425b, bx);
  memoryASet16(ds, 0x4259, ax);
  sub_2058d();
  ax = memoryAGet16(ds, 0x425b);
  bx = memoryAGet16(ds, 0x4259);
  memoryASet16(ds, 0x425b, bx);
  memoryASet16(ds, 0x4259, ax);
}
void sub_2058d()
{
  stackguard sg(sp);

  push(es);
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  di = memoryAGet16(ds, 0x425b);
  cx = 0x1f40;
  rep_stosb<MemAuto, DirAuto>();
  ax = 0x0001;
  out(dx, ax);
  es = pop();
}
void sub_205a9()
{
  stackguard sg(sp);

  sub_2058d();
}
void sub_205ae()
{
  stackguard sg(sp);

  sub_10ef1();
//    sync();
loc_205b3:
//  if (memoryAGet16(ds, 0x3046) == 0x0000)
//    goto loc_205b3;
  memoryASet16(ds, 0x3046, 0x0000);
  bx = memoryAGet16(ds, 0x425b);
  ax = memoryAGet16(ds, 0x4259);
  memoryASet16(ds, 0x425b, ax);
  memoryASet16(ds, 0x4259, bx);
  dx = memoryAGet16(ds, 0x4257);
  dl += 0x06;
loc_205d5:
  in(al, dx);
  if (al & 0x08)
    goto loc_205d5;
  dl -= 0x06;
  flags.interrupts = false;
  ah = bh;
  al = 0x0c;
  out(dx, ax);
  flags.interrupts = true;
  dl += 0x06;
loc_205e7:
  in(al, dx);
  if (!(al & 0x08))
    goto loc_205e7;
}
void sub_205ed()
{
  stackguard sg(sp);

  push(ds);
  ax = 0xa000;
  es = ax;
  si = 0x0000;
  di = memoryAGet16(ds, 0x4259);
  di += 0x1e00;
  ax = 0x3824;
  ds = ax;
  cx = 0x0140;
  sub_20627();
  ds = pop();
  push(ds);
  si = 0x0000;
  di = memoryAGet16(ds, 0x425b);
  di += 0x1e00;
  ax = 0x3824;
  ds = ax;
  cx = 0x0140;
  sub_20627();
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_20627()
{
  stackguard sg(sp);

  dx = 0x03c4;
  push(cx);
  push(di);
  ax = 0x0102;
  out(dx, ax);
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  di = pop();
  cx = pop();
  push(cx);
  push(di);
  ax = 0x0202;
  out(dx, ax);
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  di = pop();
  cx = pop();
  push(cx);
  push(di);
  ax = 0x0402;
  out(dx, ax);
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  di = pop();
  cx = pop();
  ax = 0x0802;
  out(dx, ax);
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  ax = 0x0f02;
  out(dx, ax);
}
void sub_20653()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0700;
  out(dx, ax);
  ax = 0x0f01;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  al = 0x08;
  out(dx, al);
  si = 0x9c80;
  cx = 0x0050;
loc_2066c:
  lodsw<MemAuto, DirAuto>();
    if ((short)ax < 0)                         //js short loc_206EA
    goto loc_206ea;
  bx = ax;
  lodsw<MemAuto, DirAuto>();
  dx = ax;
  lodsw<MemAuto, DirAuto>();
  bx += ax;
  lodsw<MemAuto, DirAuto>();
  dx += ax;
  if (bx >= 0x013c)
    goto loc_206e3;
  if (dx >= 0x00bc)
    goto loc_206e3;
  memoryASet16(ds, si + 65528, bx);
  memoryASet16(ds, si + 65530, dx);
  push(bx);
  push(dx);
  push(cx);
  ax = bx;
  bx = dx;
  sub_10edd();
  if (stop(/*1*/))
    goto loc_206b3;
  push(es);
  ax = ds;
  es = ax;
  ax = memoryAGet16(es, 0x3da8);
  push(si);
  sub_10ee1();
  si = pop();
  es = pop();
  cx = pop();
  sp += 0x0004;
  goto loc_206e3;
loc_206b3:
  cx = pop();
  dx = pop();
  di = memoryAGet16(ds, 0x425b);
  ax = 0x0028;
  mul(dx);
  di += ax;
  ax = pop();
  push(cx);
  cx = ax;
  cx &= 0x0007;
  ax ^= cx;
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  di += ax;
  al = 0xc0;
  al >>= cl;
  cx = pop();
  dx = 0x03cf;
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) & al);
  memoryASet(es, di + 40, memoryAGet(es, di + 40) & al);
  goto loc_206ed;
loc_206e3:
  memoryASet16(ds, si + 65528, 0xffff);
  goto loc_206ed;
loc_206ea:
  si += 0x0006;
loc_206ed:
  if (--cx)
    goto loc_206f1;
  goto loc_206f4;
loc_206f1:
  goto loc_2066c;
loc_206f4:
  ax = ds;
  es = ax;
  dx = 0x03ce;
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
}
void sub_20854()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x9152);
  dx = memoryAGet16(ds, 0x9154);
  flags.carry = ax < memoryAGet16(ds, 0x9156);
  ax -= memoryAGet16(ds, 0x9156);
  dx -= memoryAGet16(ds, 0x9158) + flags.carry;
    if ((short)ax < 0)                         //js short loc_208CF
    goto loc_208cf;
    if (ax != 0)                               //jnz short loc_2086B
    goto loc_2086b;
  if (!(ax & ax))
    goto loc_208ce;
loc_2086b:
  if (dx & dx)
    goto loc_20879;
  if ((short)ax < (short)0x00c8)
    goto loc_20894;
  if ((short)ax < (short)0x07d0)
    goto loc_20887;
loc_20879:
  bx = 0x921f;
  di = 0x1e06;
  memoryASet16(ds, 0x9156, memoryAGet16(ds, 0x9156) + 0x03e8);
  goto loc_2089f;
loc_20887:
  bx = 0x9220;
  di = 0x1e07;
  memoryASet16(ds, 0x9156, memoryAGet16(ds, 0x9156) + 0x0064);
  goto loc_2089f;
loc_20894:
  bx = 0x9221;
  di = 0x1e08;
  memoryASet16(ds, 0x9156, memoryAGet16(ds, 0x9156) + 0x000a);
loc_2089f:
  stop(/*8*/); // inject carry failed
  memoryASet16(ds, 0x9158, memoryAGet16(ds, 0x9158) + flags.carry);
  if (memoryAGet16(ds, 0x8e7a) == 0x0000)
    goto loc_208ae;
  di += 0x001b;
loc_208ae:
  si = 0x0500;
loc_208b1:
  memoryASet(ds, bx, memoryAGet(ds, bx) + 1);
  if ((char)memoryAGet(ds, bx) < (char)0x0a)
    goto loc_208bb;
  memoryASet(ds, bx, 0x00);
loc_208bb:
  al = memoryAGet(ds, bx);
  sub_20919();
  if (memoryAGet(ds, bx) != 0x00)
    goto loc_208ce;
  di--;
  bx--;
  if ((short)bx >= (short)0x921c)
    goto loc_208b1;
loc_208ce:
  return;
loc_208cf:
  ax = memoryAGet16(ds, 0x9156);
  memoryASet16(ds, 0x9152, ax);
  ax = memoryAGet16(ds, 0x9158);
  memoryASet16(ds, 0x9154, ax);
}
void sub_208dc()
{
  stackguard sg(sp);

  di = 0x1e03;
  if (memoryAGet16(ds, 0x8e7a) == 0x0000)
    goto loc_208e9;
  di = 0x1e1e;
loc_208e9:
  si = 0x0500;
  cx = 0x0007;
loc_208ef:
  al = 0;
  sub_20919();
  di++;
  if (--cx)
    goto loc_208ef;
}
void sub_208f9()
{
  stackguard sg(sp);

  ax = memoryAGet16(ds, 0x918a);
  if ((short)ax <= (short)0x0009)
    goto loc_20904;
  ax = 0x0009;
loc_20904:
  si = 0x0640;
  di = 0x1e39;
  if (memoryAGet16(ds, 0x8e7a) == 0x0000)
    goto loc_20914;
  di = 0x1e3e;
loc_20914:
  sub_20919();
}
void sub_20919()
{
  stackguard sg(sp);

  push(si);
  push(cx);
  ah = 0;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  si += ax;
  push(ds);
  ax = 0x3824;
  ds = ax;
  ax = 0xa000;
  es = ax;
  dx = 0x03c4;
  ax = 0x0102;
  out(dx, ax);
  sub_2095f();
  ax = 0x0202;
  out(dx, ax);
  sub_2095f();
  ax = 0x0402;
  out(dx, ax);
  sub_2095f();
  ax = 0x0802;
  out(dx, ax);
  sub_2095f();
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
  cx = pop();
  si = pop();
}
void sub_2095f()
{
  stackguard sg(sp);

  push(di);
  cx = 0x0008;
loc_20963:
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  memoryASet(es, di + 8192, al);
  di += 0x0028;
  if (--cx)
    goto loc_20963;
  di = pop();
}
void sub_20973()
{
  stackguard sg(sp);

  push(si);
  push(ax);
  sub_2098c();
  ax = pop();
  si = pop();
  memoryASet16(ds, 0x425b, memoryAGet16(ds, 0x425b) ^ 0x2000);
  sub_2098c();
  memoryASet16(ds, 0x425b, memoryAGet16(ds, 0x425b) ^ 0x2000);
}
void sub_2098c()
{
  stackguard sg(sp);

  ax = 0x0028;
  mul(memoryAGet16(ds, 0x3752));
  di = ax;
  push(memoryAGet16(ds, si + 20));
  push(si);
  memoryASet(ds, si + 20, 0x00);
  sub_20a2e();
  si = pop();
  memoryASet16(ds, si + 20, pop());
}
void sub_209e9()
{
  stackguard sg(sp);

  goto loc_209e9;
loc_205ae:
  sub_10ef1();
loc_205b3:
//  if (memoryAGet16(ds, 0x3046) == 0x0000)
//    goto loc_205b3;
  memoryASet16(ds, 0x3046, 0x0000);
  bx = memoryAGet16(ds, 0x425b);
  ax = memoryAGet16(ds, 0x4259);
  memoryASet16(ds, 0x425b, ax);
  memoryASet16(ds, 0x4259, bx);
  dx = memoryAGet16(ds, 0x4257);
  dl += 0x06;
loc_205d5:
  in(al, dx);
  if (al & 0x08)
    goto loc_205d5;
  dl -= 0x06;
  flags.interrupts = false;
  ah = bh;
  al = 0x0c;
  out(dx, ax);
  flags.interrupts = true;
  dl += 0x06;
loc_205e7:
  in(al, dx);
  if (!(al & 0x08))
    goto loc_205e7;
  return;
  //   gap of 1020 bytes
loc_209e9:
  sub_2058d();
  memoryASet16(ds, 0x3752, 0x000c);
  si = 0x352b;
  sub_20973();
  si = 0x358f;
  di = 0x05f4;
  cx = 0x000a;
loc_20a03:
  push(si);
  push(di);
  push(cx);
  sub_20a1d();
  cx = pop();
  di = pop();
  si = pop();
  si += 0x000f;
  di += 0x0280;
  if (--cx)
    goto loc_20a03;
  sub_1f492();
  goto loc_205ae;
}
void sub_20a1d()
{
  stackguard sg(sp);

  push(memoryAGet16(ds, si + 15));
  push(si);
  memoryASet(ds, si + 15, 0x00);
  sub_20a3c();
  si = pop();
  memoryASet16(ds, si + 15, pop());
}
void sub_20a2e()
{
  stackguard sg(sp);

  bp = 0x0780;
  cx = 0x0016;
  sub_20a47();
}
void sub_20a39()
{
  stackguard sg(sp);

  di = 0x1cd6;
  bp = 0x2300;
  cx = 0x000e;
  sub_20a47();
}
void sub_20a3c()
{
  stackguard sg(sp);

  bp = 0x2300;
  cx = 0x000e;
  sub_20a47();
}
void sub_20a47()
{
  stackguard sg(sp);

loc_20a47:
  lodsb<MemAuto, DirAuto>();
  if (!(al & al))
    return;
  tx = bp;
  bp = si;
  si = tx;
  push(si);
  sub_20a5c();
  si = pop();
  tx = bp;
  bp = si;
  si = tx;
  di += 0x0002;
  goto loc_20a47;
}
void sub_20a5c()
{
  stackguard sg(sp);

  push(di);
  push(cx);
  push(di);
  memoryASet(ds, 0x33f2, al);
  di = 0x33ca;
  cx = 0x33f2;
  cx -= 0x33ca;
  cx++;
  repne_scasb<MemAuto, DirAuto>(al);
  ax = di;
  ax -= 0x33cb;
  di = pop();
  if (ax == 0x0028)
    goto loc_20abd;
  di += memoryAGet16(ds, 0x425b);
  cx = pop();
  mul(cx);
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  si += ax;
  push(cx);
  push(ds);
  ax = 0x3824;
  ds = ax;
  ax = 0xa000;
  es = ax;
  dx = 0x03c4;
  ax = 0x0102;
  out(dx, ax);
  sub_20ac0();
  ax = 0x0202;
  out(dx, ax);
  sub_20ac0();
  ax = 0x0402;
  out(dx, ax);
  sub_20ac0();
  ax = 0x0802;
  out(dx, ax);
  sub_20ac0();
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
loc_20abd:
  cx = pop();
  di = pop();
}
void sub_20ac0()
{
  stackguard sg(sp);

  push(di);
  push(cx);
loc_20ac2:
  lodsb<MemAuto, DirAuto>();
  stosb<MemAuto, DirAuto>();
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  di += 0x0027;
  if (--cx)
    goto loc_20ac2;
  cx = pop();
  di = pop();
}
void sub_20ad0()
{
  stackguard sg(sp);

  if (memoryAGet(ds, 0x8faf) != 0x00)
    goto loc_20ada;
  return;
loc_20ada:
  memoryASet(ds, 0x8faf, 0x00);
  dx = 0x03ce;
  ax = 0x0e00;
  out(dx, ax);
  ax = 0x0f01;
  out(dx, ax);
  al = 0x08;
  out(dx, al);
  dx++;
  ax = 0xa000;
  es = ax;
  bx = memoryAGet16(ds, 0x9186);
  if ((short)bx <= (short)0x0027)
    goto loc_20aff;
  bx = 0x0027;
loc_20aff:
  bx -= 0x0027;
  bx = -bx;
  di = 0x1e83;
  al = 0x10;
  if (memoryAGet16(ds, 0x8e7a) == 0x0000)
    goto loc_20b15;
  di = 0x1e8f;
  al = 0x02;
loc_20b15:
  cx = 0x0027;
loc_20b18:
  if (cx != bx)
    goto loc_20b27;
  push(ax);
  dx--;
  ax = 0x0000;
  out(dx, ax);
  al = 0x08;
  out(dx, al);
  dx++;
  ax = pop();
loc_20b27:
  out(dx, al);
  memoryASet(es, di, memoryAGet(es, di) & al);
  memoryASet(es, di + 40, memoryAGet(es, di + 40) & al);
  memoryASet(es, di + 80, memoryAGet(es, di + 80) & al);
  memoryASet(es, di + 8192, memoryAGet(es, di + 8192) & al);
  memoryASet(es, di + 8232, memoryAGet(es, di + 8232) & al);
  memoryASet(es, di + 8272, memoryAGet(es, di + 8272) & al);
    flags.carry = al & 1;
  al = ror(al, 0x01);
    if (!flags.carry)
    goto loc_20b47;
  di++;
loc_20b47:
  if (--cx)
    goto loc_20b18;
  dx--;
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_20b5b()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x33bc) != 0x0000)
    goto loc_20b85;
  push(ds);
  ax = 0xa000;
  ds = ax;
  es = ax;
  dx = 0x03ce;
  ax = 0x0105;
  out(dx, ax);
  si = 0x1e00;
  di = 0xfec0;
  cx = 0x0140;
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  ax = 0x0005;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
loc_20b85:
  memoryASet(ds, 0x33bc, memoryAGet(ds, 0x33bc) + 1);
}
void sub_20b8a()
{
  stackguard sg(sp);

  memoryASet(ds, 0x33bc, memoryAGet(ds, 0x33bc) - 1);
  if (memoryAGet(ds, 0x33bc) != 0)
    return;
  push(ds);
  ax = 0xa000;
  ds = ax;
  es = ax;
  dx = 0x03ce;
  ax = 0x0105;
  out(dx, ax);
  di = 0x1e00;
  si = 0xfec0;
  cx = 0x0140;
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  di = 0x3e00;
  si = 0xfec0;
  cx = 0x0140;
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  ax = 0x0005;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_20bbf()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0105;
  out(dx, ax);
  si = memoryAGet16(ds, 0x425b);
  di = memoryAGet16(ds, 0x4259);
  push(ds);
  ax = 0xa000;
  ds = ax;
  es = ax;
  cx = 0x1f40;
  rep_movsb<MemAuto, MemAuto, DirAuto>();
  ax = pop();
  ds = ax;
  es = ax;
  ax = 0x0005;
  out(dx, ax);
}
void sub_20be5()
{
  stackguard sg(sp);

  sub_2058d();
  si = 0x1f4c;
loc_20bec:
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  if (!(ax & ax))
    goto loc_20c19;
  bp = ax;
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  di = ax;
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  dx = ax;
  ax = memoryAGet16(cs, si);
  si += 0x0002;
  cx = ax;
  push(si);
  si = bp;
  sub_20cbb();
  si = pop();
  goto loc_20bec;
loc_20c19:
  dx = 0;
loc_20c1b:
  cx = 0;
loc_20c1d:
  push(cx);
  push(dx);
  si = 0xec90;
  sub_1f585();
  dx = pop();
  cx = pop();
  push(cx);
  push(dx);
  si = 0xefc0;
  sub_1f585();
  dx = pop();
  cx = pop();
  cx += 0x0029;
  if ((short)cx < (short)0x00cd)
    goto loc_20c1d;
  dx += 0x0029;
  if ((short)dx < (short)0x00a4)
    goto loc_20c1b;
  if (memoryAGet16(ds, 0x8e7a) == 0x0000)
    goto loc_20c59;
  si = 0xfc20;
  cx = 0x00c1;
  dx = 0x00bc;
  sub_1f585();
loc_20c59:
  sub_20bbf();
}
void sub_20c5e()
{
  stackguard sg(sp);

  push(cx);
  push(dx);
  push(si);
  sub_1f585();
  si = pop();
  dx = pop();
  cx = pop();
  push(memoryAGet16(ds, 0x425b));
  ax = memoryAGet16(ds, 0x4259);
  memoryASet16(ds, 0x425b, ax);
  sub_1f585();
  memoryASet16(ds, 0x425b, pop());
}
void sub_20c7b()
{
  stackguard sg(sp);

  sub_2058d();
  dx = 0x03ce;
  ax = 0x0700;
  out(dx, ax);
  ax = 0x0f01;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  di = memoryAGet16(ds, 0x425b);
  di += 0x0fb4;
  ax = 0x0608;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) & al);
  memoryASet(es, di + 80, memoryAGet(es, di + 80) & al);
  ax = 0x0f08;
  out(dx, ax);
  memoryASet(es, di + 40, memoryAGet(es, di + 40) & al);
  ax = 0x0000;
  out(dx, ax);
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_20cbb()
{
  stackguard sg(sp);

  di += memoryAGet16(ds, 0x425b);
  push(ds);
  ax = 0x3824;
  ds = ax;
  ax = 0xa000;
  es = ax;
  bp = dx;
  dx = 0x03c4;
  ax = 0x0102;
  out(dx, ax);
  sub_20cfe();
  si += 0x0002;
  ax = 0x0202;
  out(dx, ax);
  sub_20cfe();
  si += 0x0002;
  ax = 0x0402;
  out(dx, ax);
  sub_20cfe();
  si += 0x0002;
  ax = 0x0802;
  out(dx, ax);
  sub_20cfe();
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_20cfe()
{
  stackguard sg(sp);

  push(si);
  push(di);
  push(cx);
  push(bp);
loc_20d02:
  push(di);
  push(bp);
loc_20d04:
  movsb<MemAuto, MemAuto, DirAuto>();
  movsb<MemAuto, MemAuto, DirAuto>();
  si += 0x0006;
  bp--;
  if (bp != 0)
    goto loc_20d04;
  bp = pop();
  di = pop();
  di += 0x0028;
  if (--cx)
    goto loc_20d02;
  bp = pop();
  cx = pop();
  di = pop();
  si = pop();
}
void sub_20d18()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  di = 0x11ea;
  cx = 0x0045;
  sub_20d87();
  di = 0x31ea;
  cx = 0x0045;
  sub_20d87();
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_20d87()
{
  stackguard sg(sp);

  goto loc_20d87;
loc_20d45:
  ax = 0x0108;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  ax = 0xff08;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  memoryASet(es, di, memoryAGet(es, di) & al);
  di++;
  ax = 0xfe08;
  out(dx, ax);
  memoryASet(es, di, memoryAGet(es, di) & al);
  di += 0x001c;
loc_20d87:
  if (--cx)
    goto loc_20d45;
}
void sub_20d8a()
{
  stackguard sg(sp);

  si = 0x8430;
  di = memoryAGet16(ds, 0x425b);
  di += 0x0182;
  cx = 0x0034;
  sub_20f91();
  si = 0x8f90;
  di = memoryAGet16(ds, 0x425b);
  di += 0x0ef2;
  cx = 0x000a;
  sub_20f91();
  si = 0x91c0;
  if (memoryAGet(ds, 0x8f40) == 0x00)
    goto loc_20dca;
  sub_10ed9();
  cx = 0x0004;
  goto loc_20dc4;
loc_20dc0:
  si += 0x0770;
loc_20dc4:
  flags.carry = ax & 1;
  ax >>= 1;
  if (flags.carry)
    goto loc_20dca;
  if (--cx)
    goto loc_20dc0;
loc_20dca:
  di = memoryAGet16(ds, 0x425b);
  di += 0x09a2;
  cx = 0x0022;
  sub_20f91();
  sub_10ee5();
  sub_10ee9();
  if (memoryAGet16(ds, 0x8f3c) != 0x0000)
    goto loc_20dec;
  return;
loc_20dec:
  if ((short)memoryAGet16(ds, 0x8f3c) <= (short)0x0008)
    goto loc_20e34;
  di = memoryAGet16(ds, 0x425b);
  di += 0x0182;
  si = 0x5c18;
  ax = 0x0030;
  ax -= memoryAGet16(ds, 0x8f3c);
  dx = 0x0038;
  mul(dx);
  si += ax;
  cx = memoryAGet16(ds, 0x8f3c);
  cx -= 0x0008;
  sub_20f91();
  di = memoryAGet16(ds, 0x425b);
  di += 0x11c2;
  ax = 0x0028;
  mul(memoryAGet16(ds, 0x8f3c));
  di -= ax;
  si = 0x64d8;
  cx = memoryAGet16(ds, 0x8f3c);
  cx -= 0x0008;
  sub_20f91();
loc_20e34:
  cx = 0x00d7;
  dx = memoryAGet16(ds, 0x8f3c);
  dx++;
  push(dx);
  si = 0xabe4;
  sub_1f585();
  cx = 0x00f7;
  dx = pop();
  push(dx);
  si = 0xace4;
  sub_1f585();
  cx = 0x0117;
  dx = pop();
  si = 0xad94;
  sub_1f585();
  cx = 0x00d7;
  dx = 0x0070;
  dx -= memoryAGet16(ds, 0x8f3c);
  push(dx);
  si = 0xae94;
  sub_1f585();
  cx = 0x00f7;
  dx = pop();
  push(dx);
  si = 0xaf94;
  sub_1f585();
  cx = 0x0117;
  dx = pop();
  si = 0xb044;
  sub_1f585();
  if ((short)memoryAGet16(ds, 0x8f3c) < (short)0x0008)
    goto loc_20e8e;
  return;
loc_20e8e:
  ax = 0xa000;
  es = ax;
  dx = 0x03c4;
  di = memoryAGet16(ds, 0x425b);
  di += 0x001a;
  push(ds);
  ax = 0x3824;
  ds = ax;
  si = 0x4750;
  cx = 0x0009;
loc_20ea9:
  push(cx);
  cx = 0x0007;
loc_20ead:
  ax = 0x0102;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0202;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0402;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0802;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  di += 0x0002;
  if (--cx)
    goto loc_20ead;
  cx = pop();
  di += 0x001a;
  si += 0x0008;
  if (--cx)
    goto loc_20ea9;
  ds = pop();
  di = memoryAGet16(ds, 0x425b);
  di += 0x1082;
  push(ds);
  ax = 0x3824;
  ds = ax;
  si = 0x4990;
  cx = 0x0009;
loc_20f04:
  push(cx);
  cx = 0x0007;
loc_20f08:
  ax = 0x0102;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0202;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0402;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0802;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  di += 0x0002;
  if (--cx)
    goto loc_20f08;
  cx = pop();
  di += 0x001a;
  si += 0x0008;
  if (--cx)
    goto loc_20f04;
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_20f54()
{
  stackguard sg(sp);

  if (memoryAGet16(ds, 0x8f3e) == 0x0000)
    return;
  di = memoryAGet16(ds, 0x425b);
  di += 0x11ea;
  cx = 0x0045;
  cx -= memoryAGet16(ds, 0x8f3e);
  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  sub_20d87();
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
  si = 0x6d98;
  cx = memoryAGet16(ds, 0x8f3e);
  sub_20f91();
}
void sub_20f91()
{
  stackguard sg(sp);

  push(ds);
  ax = 0xa000;
  es = ax;
  ax = 0x3824;
  ds = ax;
  dx = 0x03c4;
loc_20f9f:
  ax = 0x0102;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0x0108;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  ax = 0xff08;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  dx = 0x03c4;
  ax = 0x0202;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0x0108;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  ax = 0xff08;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  dx = 0x03c4;
  ax = 0x0402;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0x0108;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  ax = 0xff08;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  dx = 0x03c4;
  ax = 0x0802;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0x0108;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  ax = 0xff08;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  dx = 0x03c4;
  di += 0x0002;
  push(cx);
  cx = 0x0005;
loc_2101e:
  ax = 0x0102;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0202;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0402;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  ax = 0x0802;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di + 1, al);
  di += 0x0002;
  if (--cx)
    goto loc_2101e;
  cx = pop();
  ax = 0x0102;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  ax = 0x0202;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  ax = 0x0402;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  ax = 0x0802;
  out(dx, ax);
  lodsb<MemAuto, DirAuto>();
  memoryASet(es, di, al);
  lodsb<MemAuto, DirAuto>();
  di += 0x001c;
  if (--cx)
    goto loc_21083;
  goto loc_21086;
loc_21083:
  goto loc_20f9f;
loc_21086:
  ax = 0x0f02;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
}
void sub_21090()
{
  stackguard sg(sp);

  dx = 0x03ce;
  ax = 0x0f01;
  out(dx, ax);
  ax = 0xa000;
  es = ax;
  si = memoryAGet16(ds, 0x425b);
  ax = 0x0028;
  mul(memoryAGet16(ds, di + 4));
  si += ax;
  ax = memoryAGet16(ds, di + 2);
  cx = ax;
  cx &= 0x0007;
  ax >>= 1;
  ax >>= 1;
  ax >>= 1;
  si += ax;
  bl = 0x1c;
  dx = 0x03ce;
loc_210bd:
  sub_10ed9();
  bh = ah;
  ax = 0x0700;
  out(dx, ax);
  al = 0x08;
  ah = bh;
  ah >>= cl;
  out(dx, ax);
  memoryASet(es, si, memoryAGet(es, si) & al);
  ah = bh;
  ah = ror(ah, cl);
  out(dx, ax);
  memoryASet(es, si + 1, memoryAGet(es, si + 1) & al);
  memoryASet(es, si + 2, memoryAGet(es, si + 2) & al);
  memoryASet(es, si + 3, memoryAGet(es, si + 3) & al);
  al = bh;
  ah = 0;
  ax = ror(ax, cl);
  al = 0x08;
  out(dx, ax);
  memoryASet(es, si + 4, memoryAGet(es, si + 4) & al);
  ax = 0x0000;
  out(dx, ax);
  bh = ~bh;
  al = 0x08;
  ah = bh;
  ah >>= cl;
  out(dx, ax);
  memoryASet(es, si, memoryAGet(es, si) & al);
  ah = bh;
  ah = ror(ah, cl);
  out(dx, ax);
  memoryASet(es, si + 1, memoryAGet(es, si + 1) & al);
  memoryASet(es, si + 2, memoryAGet(es, si + 2) & al);
  memoryASet(es, si + 3, memoryAGet(es, si + 3) & al);
  al = bh;
  ah = 0;
  ax = ror(ax, cl);
  al = 0x08;
  out(dx, ax);
  memoryASet(es, si + 4, memoryAGet(es, si + 4) & al);
  si += 0x0028;
  bl--;
  if (bl != 0)
    goto loc_210bd;
  ax = 0x0001;
  out(dx, ax);
  ax = 0xff08;
  out(dx, ax);
  ax = ds;
  es = ax;
}
void sub_21132()
{
  stackguard sg(sp);

  if (al != 0x0d)
    goto loc_2113b;
  stop(); // ljmp 0x1000:0xeed
loc_2113b:
  push(ax);
  ax = 0x0028;
  mul(memoryAGet16(ds, 0x8f48));
  di = ax;
  ax = memoryAGet16(ds, 0x8f46);
  ax >>= 1;
  di += ax;
  ax = pop();
  al -= 0x20;
  ah = 0;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  ax <<= 1;
  si = 0x7cb0;
  si += ax;
  ax = 0xa000;
  es = ax;
  dx = 0x03ce;
  ax = 0xf008;
  if (!(memoryAGet16(ds, 0x8f46) & 0x0001))
    goto loc_21175;
  ah = 0x0f;
loc_21175:
  out(dx, ax);
  push(ds);
  ax = 0x3824;
  ds = ax;
  dx = 0x03c4;
  ax = 0x0102;
  out(dx, ax);
  sub_211b0();
  ax = 0x0202;
  out(dx, ax);
  sub_211b0();
  ax = 0x0402;
  out(dx, ax);
  sub_211b0();
  ax = 0x0802;
  out(dx, ax);
  sub_211b0();
  ax = 0x0f02;
  out(dx, ax);
  dx = 0x03ce;
  ax = 0xff08;
  out(dx, ax);
  ax = pop();
  ds = ax;
  es = ax;
  memoryASet16(ds, 0x8f46, memoryAGet16(ds, 0x8f46) + 1);
}
void sub_211b0()
{
  stackguard sg(sp);

  push(di);
  cx = 0x0008;
loc_211b4:
  lodsb<MemAuto, DirAuto>();
  ah = memoryAGet(es, di);
  memoryASet(es, di, al);
  ah = memoryAGet(es, di + 8192);
  memoryASet(es, di + 8192, al);
  di += 0x0028;
  if (--cx)
    goto loc_211b4;
  di = pop();
}
void sub_211cc()
{
  si = 0xaf80;
  di = 0x0786;
  dx = 0x000d;
  cx = 0x0036;
  sub_20cbb();
}
