// OoT3D decomp @ 003d0e1c  name=FUN_003d0e1c  size=72

void FUN_003d0e1c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x444) = DAT_003d0e64;
    return;
  }
  FUN_003724dc(DAT_003d0e6c,DAT_003d0e68,param_1,param_2,0x12);
  return;
}
