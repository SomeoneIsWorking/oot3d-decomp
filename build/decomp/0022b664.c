// OoT3D decomp @ 0022b664  name=FUN_0022b664  size=92

void FUN_0022b664(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1c) == -1 || *(short *)(param_1 + 0x1c) == 0) {
    FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x20c));
  }
  if (*(int **)(param_1 + 0x228) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x228) + 4))();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}
