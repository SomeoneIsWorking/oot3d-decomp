// OoT3D decomp @ 00253a1c  name=FUN_00253a1c  size=48

void FUN_00253a1c(int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1ac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  return;
}
