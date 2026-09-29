// OoT3D decomp @ 0037b324  name=FUN_0037b324  size=128

void FUN_0037b324(int param_1,int param_2)

{
  int iVar1;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  if (-1 < *(short *)(param_1 + 0x1c)) {
    FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1c0));
  }
  if (*(int **)(param_1 + 0x1dc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1dc) + 4))();
  }
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  do {
    FUN_0035046c(param_1 + iVar1 * 0xc + 0x1e0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
