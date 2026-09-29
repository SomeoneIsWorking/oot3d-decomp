// OoT3D decomp @ 004858f8  name=FUN_004858f8  size=40

void FUN_004858f8(int param_1)

{
  int iVar1;

  iVar1 = DAT_00485904 + param_1 * 4;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_002e2010(DAT_004897b4,param_1,0,0);
  return;
}
