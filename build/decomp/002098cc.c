// OoT3D decomp @ 002098cc  name=FUN_002098cc  size=52

void FUN_002098cc(int param_1,undefined4 param_2)

{
  FUN_0034708c(param_2);
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c4) + 4))();
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  return;
}
