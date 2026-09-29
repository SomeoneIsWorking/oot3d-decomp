// OoT3D decomp @ 00213d50  name=FUN_00213d50  size=48

void FUN_00213d50(int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1a8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}
