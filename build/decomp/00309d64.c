// OoT3D decomp @ 00309d64  name=FUN_00309d64  size=44

void FUN_00309d64(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = DAT_00309d7c + param_1 * 4;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  FUN_002e2010(DAT_0047da74);
  return;
}
