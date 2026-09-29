// OoT3D decomp @ 00367c0c  name=FUN_00367c0c  size=60

void FUN_00367c0c(int param_1,undefined4 param_2)

{
  FUN_0034708c(param_2);
  if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1a8) + 4))();
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0x1b6) = 1;
  return;
}
