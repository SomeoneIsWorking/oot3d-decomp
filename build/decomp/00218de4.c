// OoT3D decomp @ 00218de4  name=FUN_00218de4  size=96

void FUN_00218de4(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if (iVar1 == 0) {
    if (*(short *)(param_2 + 0x2238) == 0) {
      FUN_00360a1c(param_2,DAT_00218e4c);
      return;
    }
  }
  else {
    FUN_003404a8(DAT_00218e44,param_2 + 0x254,param_1,DAT_00218e48);
    *(undefined2 *)(param_2 + 0x2238) = 1;
  }
  return;
}
