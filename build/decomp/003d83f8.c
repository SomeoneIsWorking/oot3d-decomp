// OoT3D decomp @ 003d83f8  name=FUN_003d83f8  size=92

void FUN_003d83f8(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_003705a0(DAT_003d8458,DAT_003d8454,param_1 + 0x54);
  if (iVar1 != 0) {
    FUN_0037572c(DAT_003d845c,param_1);
    FUN_00374444(param_2,param_1,param_1 + 0x28,0xc0);
    FUN_00374428(param_1);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  return;
}
