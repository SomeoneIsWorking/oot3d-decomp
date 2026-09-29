// OoT3D decomp @ 00319ae8  name=FUN_00319ae8  size=92

void FUN_00319ae8(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint extraout_r1;

  uVar1 = *DAT_00319b44 * DAT_00319b48 + (*DAT_00319b44 >> 1);
  *DAT_00319b44 = uVar1;
  FUN_00339384(uVar1,param_3);
  FUN_0037547c((extraout_r1 & 0xff) + param_2,param_1,4,DAT_00319b50,DAT_00319b50,DAT_00319b4c);
  return;
}
