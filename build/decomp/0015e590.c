// OoT3D decomp @ 0015e590  name=FUN_0015e590  size=104

void FUN_0015e590(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_003705a0(DAT_0015e5fc,DAT_0015e5f8,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  FUN_00376864(param_1);
  FUN_00376340(DAT_0015e608,DAT_0015e604,DAT_0015e600,param_2,param_1,0x1d);
  if (iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
