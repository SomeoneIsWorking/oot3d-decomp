// OoT3D decomp @ 001c4df4  name=FUN_001c4df4  size=88

void FUN_001c4df4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xbbc) = DAT_001c4e4c;
    return;
  }
  FUN_003724dc(*(float *)(param_1 + 0x98) + DAT_001c4e50,
               ABS(*(float *)(param_1 + 0x9c)) + DAT_001c4e50,param_1,param_2,
               *(undefined4 *)(param_1 + 0xef8));
  return;
}
