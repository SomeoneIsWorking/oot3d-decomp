// OoT3D decomp @ 001d9d10  name=FUN_001d9d10  size=64

void FUN_001d9d10(int param_1,int param_2)

{
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1b0));
  if (*(int **)(param_1 + 0x1a4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1a4) + 4))();
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}
