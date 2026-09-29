// OoT3D decomp @ 002da940  name=FUN_002da940  size=92

int FUN_002da940(int param_1,undefined4 param_2)

{
  int iVar1;

  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
    if (iVar1 != 0) {
      FUN_0032b184(iVar1,param_2);
      return iVar1;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return 0;
}
