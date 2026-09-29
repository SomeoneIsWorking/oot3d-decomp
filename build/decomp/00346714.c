// OoT3D decomp @ 00346714  name=FUN_00346714  size=100

void FUN_00346714(int param_1,undefined4 param_2)

{
  int iVar1;

  if (*(short *)(param_1 + 0x25e) != 0) {
    *(short *)(param_1 + 0x25e) = *(short *)(param_1 + 0x25e) + -1;
  }
  iVar1 = FUN_00371e40(param_1,param_2);
  if ((iVar1 == 0) && (*(short *)(param_1 + 0x25e) != 0)) {
    FUN_003724dc(DAT_00346788,DAT_00346784,param_1,param_2,7);
    return;
  }
  FUN_00374428(param_1);
  return;
}
