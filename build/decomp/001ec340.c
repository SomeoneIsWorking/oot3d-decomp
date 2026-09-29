// OoT3D decomp @ 001ec340  name=FUN_001ec340  size=52

void FUN_001ec340(int param_1,undefined4 param_2)

{
  FUN_0034708c(param_2);
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c4) + 4))();
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  return;
}
