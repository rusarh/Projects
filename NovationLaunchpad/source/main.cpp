#include <stdint.h>
#include "utils.h"
#include "app.h"
#include "imports.h"
#include "marquee.h"
CAppMarquee appMarquee;
#include "transition.h"
CAppTransition appTransition;
#include "lightpen.h"
#include "snake.h"
#include "paint.h"
#include "drops.h"
#include "tictactoe.h"
#include "flappybird.h"
#include "adventure.h"
#include "colortest.h"
#include "water.h"
CAppLightpen appLightpen;
CAppSnake appSnake;
CAppPaint appPaint;
CAppDrops appDrops;
CAppTictactoe appTictactoe;
CAppFlappybird appFlappybird;
CAppAdventure appAdventure;
CAppColortest appColortest;
CAppWater appWater;
#include "menu.h"
CAppMenu appMenu;
CApp* appCurrent = &appMenu;
CApp* appLast = nullptr;

#include "text.h"

const int32_t& CApp::ticks()
{
  return TICKSMS;
}

uint32_t& CApp::pixel(int x, int y)
{
  uint8_t f = y*10 + x + 1;
  return LED_BUFFER[f];
}

const uint8_t& CApp::mode()
{
  return MODE;
}

void CApp::enter()
{
}

void CApp::leave()
{
}

void CApp::loop() 
{
}

void CApp::onPress(int x, int y, int v) 
{ 
}

void CApp::onRelease(int x, int y) 
{ 
}

void CApp::go(CApp& app)
{
  appCurrent->leave();
  appCurrent = &app;
  appCurrent->enter();
  appLast = appCurrent;
}

void new_loop()
{
  old_loop();
  if (MODE == 5)
  {
    if (appLast != appCurrent)
    {
      if (appLast)
        appLast->leave();
      if (appCurrent)
        appCurrent->enter();
    }
    if (appCurrent)
      appCurrent->loop();
    appLast = appCurrent;
  }
}

void new_onPress(int a, int b)
{
  if (MODE == 5)
  {
    if (a == 5 || a == 6 || a == 7 || a == 8)
    {
      appCurrent->leave();
      appCurrent = &appMenu;
    }
    else
      appCurrent->onPress(a%10-1, a/10, b);
  }
  old_onPress(a, b);
}

void new_onRelease(int a)
{
  old_onRelease(a);
  if (MODE == 5)
    appCurrent->onRelease(a%10-1, a/10);
}

int new_usbStatus()
{
  // always connected
  return 1; 
}

void new_updateScreen()
{
  if (MODE != 5)
    old_updateScreen();
}

void new_introGradient(int i, uint32_t c)
{
  uint8_t mask[9] = {
   0,
   0b00000000,
   0b00111100,
   0b01000000,
   0b01000000,
   0b01000110,
   0b01000010,
   0b00111100,
   0b00000000};

  // logo
  int y = i/10, x=i%10;
  int p = y<sizeof(mask) ? (mask[y] & (256>>x)) : 0;
  if (p)             	
  {
    int r = c>>16;
    int g = (c>>8)&255;
    int b = (c>>0)&255;

    bool diag_blue = x-y < INTROPHASE/100-10;
    if (diag_blue)
      b = 255;

    bool diag_red = x-y < INTROPHASE/100-10+2;
    if (diag_red)
      r = max(r, 128);

    c = (r << 16) | (g << 8) | b;
  }

  // fade to keys
  if (INTROPHASE > 2200-400 && y > 0)
  {
    static const uint32_t colors[] = {0x000000, 0x40b0f0, 0xf020f0};
    static const uint8_t delay[] = {24, 16, 8, 0};
    static const uint8_t pat[] = {
      0,  0, 1, 1, 0, 1, 1, 1, 0,   0, 
      0,  2, 1, 1, 1, 1, 1, 1, 2,   0};
    int tint = (INTROPHASE-(2200-400))*(256+24*16)/400;
    int segment = (y-1)/2;
    tint = max(0, min(tint-delay[segment]*16, 256));
    uint32_t c2 = colors[pat[(i+10)%20]];
    int r1 = c>>16;
    int g1 = (c>>8)&255;
    int b1 = (c>>0)&255;
    int r2 = c2>>16;
    int g2 = (c2>>8)&255;
    int b2 = (c2>>0)&255;
    int r = r1+(r2-r1)*tint/256;
    int g = g1+(g2-g1)*tint/256;
    int b = b1+(b2-b1)*tint/256;
    c = (r << 16) | (g << 8) | b;
  }
  old_introGradient(i, c);
}                        

void new_startup()
{
  uint32_t *src, *dst;
  src = &_sidata;
  dst = &_sdata;
  if (src != dst)
  	while(dst < &_edata)
  		*(dst++) = *(src++);
  dst = &_sbss;
  while(dst < &_ebss)
  	*(dst++) = 0;

  src = &_sinit;
  while (src < &_einit)
  {
    uintptr_t ifunc = *src;
    ((void(*)())ifunc)();
    src++;
  }
  old_startup();
}

#ifdef __EMSCRIPTEN__
extern "C" {
  uint32_t LED_BUFFER[10*10];
  uint8_t MODE;
  int32_t TICKSMS;

  uint32_t _sidata;
  uint32_t _sdata;
  uint32_t _edata;
  uint32_t _sbss;
  uint32_t _ebss;
  uint32_t _sinit;
  uint32_t _einit;

  void old_loop() {}
  void old_onPress(int, int) {}
  void old_onRelease(int) {}
  void old_updateScreen() {}
  int old_usbStatus() { return 1; }
  void old_startup() {}

  uint8_t fontData[425] = { 
    0x00, 0x00, 0x00, 0x00, 0xfb, 0xe0, 0x00, 0xe0, 0x28, 0xfe, 0x28, 0xfe, 0x28, 0x24, 0x54, 0xfe, 
    0x54, 0x48, 0xc4, 0xc8, 0x10, 0x26, 0x46, 0x6c, 0x92, 0x92, 0x6c, 0x0a, 0x20, 0xc0, 0x7c, 0x82, 
    0x82, 0x7c, 0x28, 0x38, 0x7c, 0x38, 0x28, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x05, 0x06, 0x00, 0x00, 
    0x10, 0x10, 0x10, 0x10, 0x06, 0x06, 0x00, 0x00, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7c, 0x82, 0x82, 
    0x7c, 0x00, 0x42, 0xfe, 0x02, 0x4e, 0x92, 0x92, 0x62, 0x00, 0x44, 0x82, 0x92, 0x6c, 0x00, 0x18, 
    0x28, 0x48, 0xfe, 0x08, 0xe4, 0xa2, 0xa2, 0x9c, 0x00, 0x7c, 0x92, 0x92, 0x4c, 0x00, 0x86, 0x98, 
    0xa0, 0xc0, 0x00, 0x6c, 0x92, 0x92, 0x6c, 0x00, 0x64, 0x92, 0x92, 0x7c, 0x00, 0x36, 0x36, 0x00, 
    0x00, 0x35, 0x36, 0x00, 0x00, 0x10, 0x28, 0x44, 0x82, 0x28, 0x28, 0x28, 0x28, 0x82, 0x44, 0x28, 
    0x10, 0x40, 0x80, 0x8a, 0x90, 0x60, 0x7c, 0x82, 0x92, 0xaa, 0x78, 0x06, 0x38, 0xc8, 0x38, 0x06, 
    0xfe, 0x92, 0x92, 0x92, 0x6c, 0x7c, 0x82, 0x82, 0x82, 0x44, 0xfe, 0x82, 0x82, 0x44, 0x38, 0xfe, 
    0x92, 0x92, 0x92, 0x82, 0xfe, 0x90, 0x90, 0x90, 0x80, 0x7c, 0x82, 0x82, 0x92, 0x9e, 0xfe, 0x10, 
    0x10, 0x10, 0xfe, 0x82, 0xfe, 0x82, 0x04, 0x02, 0x82, 0xfc, 0xfe, 0x10, 0x28, 0x44, 0x82, 0xfe, 
    0x02, 0x02, 0x02, 0x00, 0xfe, 0x40, 0x30, 0x40, 0xfe, 0xfe, 0x60, 0x10, 0x0c, 0xfe, 0x7c, 0x82, 
    0x82, 0x82, 0x7c, 0xfe, 0x90, 0x90, 0x90, 0x60, 0x7c, 0x82, 0x8a, 0x84, 0x7a, 0xfe, 0x90, 0x98, 
    0x94, 0x62, 0x64, 0xb2, 0x92, 0x92, 0x4c, 0x80, 0x80, 0xfe, 0x80, 0x80, 0xfc, 0x02, 0x02, 0x02, 
    0xfc, 0xe0, 0x18, 0x06, 0x18, 0xe0, 0xf0, 0x0e, 0x30, 0x0e, 0xf0, 0xc6, 0x28, 0x10, 0x28, 0xc6, 
    0xc0, 0x20, 0x1e, 0x20, 0xc0, 0x86, 0x8a, 0x92, 0xa2, 0xc2, 0xfe, 0x82, 0x82, 0x40, 0x20, 0x10, 
    0x08, 0x04, 0x82, 0x82, 0xfe, 0x20, 0x40, 0x80, 0x40, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0xc0, 
    0x20, 0x04, 0x2a, 0x2a, 0x1e, 0x00, 0xfe, 0x22, 0x22, 0x1c, 0x00, 0x1c, 0x22, 0x22, 0x22, 0x00, 
    0x1c, 0x22, 0x22, 0xfe, 0x00, 0x1c, 0x2a, 0x2a, 0x1a, 0x00, 0x10, 0x7e, 0x90, 0x00, 0x18, 0x25, 
    0x25, 0x3e, 0x00, 0xfe, 0x20, 0x20, 0x1e, 0x00, 0xbc, 0x02, 0x02, 0x01, 0xbe, 0xfe, 0x08, 0x14, 
    0x22, 0xfc, 0x02, 0x3e, 0x20, 0x1e, 0x20, 0x1e, 0x3e, 0x20, 0x20, 0x1e, 0x00, 0x1c, 0x22, 0x22, 
    0x1c, 0x00, 0x3f, 0x24, 0x24, 0x18, 0x00, 0x1c, 0x22, 0x24, 0x3f, 0x00, 0x3e, 0x10, 0x20, 0x00, 
    0x12, 0x2a, 0x2a, 0x24, 0x00, 0x20, 0x7c, 0x22, 0x3c, 0x02, 0x04, 0x3e, 0x00, 0x30, 0x0c, 0x02, 
    0x0c, 0x30, 0x38, 0x06, 0x38, 0x06, 0x38, 0x22, 0x14, 0x08, 0x14, 0x22, 0x38, 0x05, 0x05, 0x3e, 
    0x00, 0x22, 0x26, 0x2a, 0x32, 0x22, 0x10, 0x6c, 0x82, 0xff, 0x82, 0x6c, 0x10, 0x40, 0x80, 0x40, 
    0x80, 0x38, 0x28, 0x6c, 0x28, 0x10, 0x00, 0x00, 0x00 };

  uint16_t fontOffsets[97] = { 
    0x0000, 0x0004, 0x0005, 0x0008, 0x000d, 0x0012, 0x0017, 0x001c, 
    0x001e, 0x0020, 0x0022, 0x0027, 0x002c, 0x0030, 0x0034, 0x0038, 
    0x003d, 0x0042, 0x0045, 0x004a, 0x004f, 0x0054, 0x0059, 0x005e, 
    0x0063, 0x0068, 0x006d, 0x0071, 0x0075, 0x0079, 0x007d, 0x0081, 
    0x0086, 0x008b, 0x0090, 0x0095, 0x009a, 0x009f, 0x00a4, 0x00a9, 
    0x00ae, 0x00b3, 0x00b6, 0x00ba, 0x00bf, 0x00c4, 0x00c9, 0x00ce, 
    0x00d3, 0x00d8, 0x00dd, 0x00e2, 0x00e7, 0x00ec, 0x00f1, 0x00f6, 
    0x00fb, 0x0100, 0x0105, 0x010a, 0x010d, 0x0112, 0x0115, 0x011a, 
    0x011f, 0x0121, 0x0126, 0x012b, 0x0130, 0x0135, 0x013a, 0x013e, 
    0x0143, 0x0148, 0x014a, 0x014d, 0x0151, 0x0153, 0x0158, 0x015d, 
    0x0162, 0x0167, 0x016c, 0x0170, 0x0175, 0x0178, 0x017d, 0x0182, 
    0x0187, 0x018c, 0x0191, 0x0196, 0x0199, 0x019a, 0x019d, 0x01a1, 0x1a9};
}
#endif
