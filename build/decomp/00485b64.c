// OoT3D decomp @ 00485b64  name=FUN_00485b64  size=116

void FUN_00485b64(void)

{
  int iVar1;
  uint uVar2;

  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = FUN_0048a348(*(undefined4 *)(DAT_00485bd8 + 0x9c));
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_00485bdc,0,&DAT_00485bdc);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_00485be0 >> 0x1b;
  if ((*DAT_00485be0 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}
