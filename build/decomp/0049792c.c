// OoT3D decomp @ 0049792c  name=FUN_0049792c  size=64

void FUN_0049792c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  FUN_0034338c(*param_1 + param_1[3] * 4,param_2,param_3 << 2);
  iVar1 = param_1[3];
  param_1[3] = iVar1 + param_3;
  if (param_1[1] <= iVar1 + param_3) {
    param_1[3] = 0;
  }
  return;
}
