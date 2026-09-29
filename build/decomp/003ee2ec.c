// OoT3D decomp @ 003ee2ec  name=FUN_003ee2ec  size=72

void FUN_003ee2ec(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x70c) = DAT_003ee334;
    return;
  }
  FUN_003724dc(DAT_003ee33c,DAT_003ee338,param_1,param_2,3);
  return;
}
