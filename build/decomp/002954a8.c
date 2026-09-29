// OoT3D decomp @ 002954a8  name=FUN_002954a8  size=116

void FUN_002954a8(int param_1,undefined4 param_2)

{
  int iVar1;

  *(undefined2 *)(param_1 + 0x1c) = 1;
  iVar1 = FUN_00364670(param_1,param_1 + 0x1c74,param_2,1);
  if (iVar1 == 0) {
    return;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0xd0);
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) + -1;
  }
  FUN_00374428(param_1);
  return;
}
