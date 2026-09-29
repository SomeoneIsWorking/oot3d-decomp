// OoT3D decomp @ 0010db7c  name=FUN_0010db7c  size=72

void FUN_0010db7c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x98c) = DAT_0010dbc4;
    return;
  }
  FUN_003724dc(DAT_0010dbcc,DAT_0010dbc8,param_1,param_2,0x3a);
  return;
}
