// OoT3D decomp @ 001b8738  name=FUN_001b8738  size=84

void FUN_001b8738(int param_1)

{
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c4) + 8))();
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_00350f34(param_1,param_1 + 0x1a4,0);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_0034fc6c();
    return;
  }
  return;
}
