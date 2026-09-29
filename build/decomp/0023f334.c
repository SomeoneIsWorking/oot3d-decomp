// OoT3D decomp @ 0023f334  name=FUN_0023f334  size=196

undefined4 FUN_0023f334(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  iVar1 = FUN_0036b4ec();
  if (iVar1 != 0) {
    FUN_0035d27c(param_1,DAT_0023f3f8);
    FUN_0036b02c(param_2,param_1);
    if (*(int *)(param_1 + 0x225c) < 0x3f000000) {
      iVar2 = FUN_0035d260(param_1);
      iVar1 = DAT_0023f3fc;
    }
    else {
      iVar2 = FUN_0035d260(param_1);
      iVar1 = DAT_0023f400;
    }
    uVar4 = *(undefined4 *)(iVar1 + iVar2 * 4);
    uVar3 = FUN_003603c0(param_1 + 0x254,uVar4);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(DAT_0023f404,uVar3,uVar3,DAT_0023f408,param_1 + 0x1764,param_2,uVar4,2);
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x400000;
  FUN_0033f860(param_1);
  return 1;
}
