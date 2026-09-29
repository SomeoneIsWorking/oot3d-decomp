// OoT3D decomp @ 00403040  name=FUN_00403040  size=56

void FUN_00403040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3,param_4);
  }
  return;
}
