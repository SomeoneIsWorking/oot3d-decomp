// OoT3D decomp @ 001c51f8  name=FUN_001c51f8  size=72

void FUN_001c51f8(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x228) = DAT_001c5240;
    return;
  }
  FUN_003724dc(DAT_001c5248,DAT_001c5244,param_1,param_2,0x21);
  return;
}
