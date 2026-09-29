// OoT3D decomp @ 00494004  name=FUN_00494004  size=76

void FUN_00494004(int *param_1,int param_2)

{
  int iVar1;

  iVar1 = param_1[10];
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  param_1[9] = iVar1;
  while (param_1[9] < *param_1) {
    (**(code **)(*(int *)(param_1[4] + -0xe4) + 0x10))();
  }
  return;
}
