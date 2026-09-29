// OoT3D decomp @ 002c2d88  name=FUN_002c2d88  size=52

undefined4 FUN_002c2d88(int param_1)

{
  int iVar1;

  if ((*(int **)(param_1 + 0x430) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x430) + 0x14))(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
