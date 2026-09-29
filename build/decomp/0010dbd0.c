// OoT3D decomp @ 0010dbd0  name=FUN_0010dbd0  size=72

void FUN_0010dbd0(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xa4c) = DAT_0010dc18;
    return;
  }
  FUN_003724dc(DAT_0010dc20,DAT_0010dc1c,param_1,param_2,0x3a);
  return;
}
