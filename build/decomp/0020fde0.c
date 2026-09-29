// OoT3D decomp @ 0020fde0  name=FUN_0020fde0  size=48

void FUN_0020fde0(int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1bc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}
