// OoT3D decomp @ 00299258  name=FUN_00299258  size=64

void FUN_00299258(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 == 0) {
    FUN_003724dc(DAT_002992a0,DAT_0029929c,param_1,param_2,*(undefined4 *)(param_1 + 0x1b8));
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00299298;
  return;
}
