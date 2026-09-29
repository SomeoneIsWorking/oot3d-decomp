// OoT3D decomp @ 002c2d78  name=FUN_002c2d78  size=16

undefined4 FUN_002c2d78(void)

{
  int iVar1;

  iVar1 = FUN_00313b60();
  if ((*(int **)(iVar1 + 0x430) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(iVar1 + 0x430) + 0x14))(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
