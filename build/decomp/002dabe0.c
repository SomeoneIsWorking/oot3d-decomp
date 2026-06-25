// OoT3D decomp @ 002dabe0  name=FUN_002dabe0  size=136

undefined4 FUN_002dabe0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0xf4);
  if (0x1ff < uVar1) {
    return 0;
  }
  if ((1 < uVar1) &&
     (iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xf0) + uVar1 * 8 + -8) + 0xc))(),
     iVar2 != 0)) {
    return 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) * 8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) * 8 + 4) = 0;
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  return 1;
}

