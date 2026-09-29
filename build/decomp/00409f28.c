// OoT3D decomp @ 00409f28  name=FUN_00409f28  size=108

int FUN_00409f28(undefined4 *param_1)

{
  int iVar1;

  *param_1 = DAT_00409f94;
  FUN_003076f4(param_1);
  FUN_00377d38(param_1 + 0x448,DAT_00409f98,0x1c,4);
  iVar1 = FUN_003076a4(param_1 + 0xb8);
  FUN_00377d38(iVar1 + -0x268,DAT_00409f9c,0x54,7);
  FUN_00377d38(iVar1 + -0x2b8,DAT_00409fa0,0x10,5);
  return iVar1 + -0x2e0;
}
