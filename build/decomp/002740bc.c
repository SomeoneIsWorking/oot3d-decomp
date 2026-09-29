// OoT3D decomp @ 002740bc  name=FUN_002740bc  size=48

void FUN_002740bc(int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1b0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}
