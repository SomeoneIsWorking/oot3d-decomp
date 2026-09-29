// OoT3D decomp @ 00359c08  name=FUN_00359c08  size=232

void FUN_00359c08(int param_1)

{
  char cVar1;

  cVar1 = *(char *)(param_1 + 0x289);
  if (cVar1 == '\x13') {
    *(undefined1 *)(param_1 + 0x27d) = 0xff;
    *(undefined1 *)(param_1 + 0x27e) = 0xff;
    *(undefined1 *)(param_1 + 0x27f) = 0xa0;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x281) = 0xff;
    *(undefined1 *)(param_1 + 0x282) = 0;
    *(undefined1 *)(param_1 + 0x283) = 0xff;
    *(undefined1 *)(param_1 + 0x284) = 0xff;
    *(undefined1 *)(param_1 + 0x285) = 0xaa;
    *(undefined1 *)(param_1 + 0x286) = 0x96;
    *(undefined1 *)(param_1 + 0x287) = 0x78;
    *(undefined1 *)(param_1 + 0x288) = 0;
    return;
  }
  if (cVar1 != '\x14') {
    if (cVar1 == '\x15') {
      *(undefined1 *)(param_1 + 0x27d) = 0x32;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 0x32;
      *(undefined1 *)(param_1 + 0x281) = 0;
      *(undefined1 *)(param_1 + 0x282) = 0x96;
      *(undefined1 *)(param_1 + 0x283) = 0xff;
      *(undefined1 *)(param_1 + 0x284) = 0xff;
      *(undefined1 *)(param_1 + 0x285) = 0xaa;
      *(undefined1 *)(param_1 + 0x286) = 0x96;
      *(undefined1 *)(param_1 + 0x287) = 0x78;
      *(undefined1 *)(param_1 + 0x288) = 0;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x27d) = 0xff;
  *(undefined1 *)(param_1 + 0x27e) = 0xaa;
  *(undefined1 *)(param_1 + 0x27f) = 0xff;
  *(undefined1 *)(param_1 + 0x280) = 0xff;
  *(undefined1 *)(param_1 + 0x281) = 0;
  *(undefined1 *)(param_1 + 0x282) = 100;
  *(undefined1 *)(param_1 + 0x283) = 0xff;
  *(undefined1 *)(param_1 + 0x284) = 0xff;
  *(undefined1 *)(param_1 + 0x285) = 0xaa;
  *(undefined1 *)(param_1 + 0x286) = 0x96;
  *(undefined1 *)(param_1 + 0x287) = 0x78;
  *(undefined1 *)(param_1 + 0x288) = 0;
  return;
}
