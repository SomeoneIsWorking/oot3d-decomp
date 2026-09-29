// OoT3D decomp @ 0022dfb4  name=FUN_0022dfb4  size=56

undefined8 FUN_0022dfb4(int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x204);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return CONCAT44(param_1 + 0x1ac,1);
}
