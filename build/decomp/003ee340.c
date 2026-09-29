// OoT3D decomp @ 003ee340  name=FUN_003ee340  size=72

void FUN_003ee340(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = DAT_003ee388;
    return;
  }
  FUN_003724dc(DAT_003ee390,DAT_003ee38c,param_1,param_2,0x50);
  return;
}
