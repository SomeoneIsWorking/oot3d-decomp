// OoT3D decomp @ 00299188  name=FUN_00299188  size=64

void FUN_00299188(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 == 0) {
    FUN_003724dc(DAT_002991d0,DAT_002991cc,param_1,param_2,0x71);
    return;
  }
  *(undefined4 *)(param_1 + 0x5d0) = DAT_002991c8;
  return;
}
