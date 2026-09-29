// OoT3D decomp @ 0044b030  name=FUN_0044b030  size=116

void FUN_0044b030(void)

{
  int iVar1;
  uint uVar2;

  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = FUN_00453f78(*(undefined4 *)(DAT_0044b0a4 + 0x9c));
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_0044b0a8,0,&DAT_0044b0a8);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_0044b0ac >> 0x1b;
  if ((*DAT_0044b0ac & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}
