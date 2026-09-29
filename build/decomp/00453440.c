// OoT3D decomp @ 00453440  name=FUN_00453440  size=72

void FUN_00453440(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  if (*param_1 == 0) {
    param_1[3] = param_4;
    param_1[1] = param_3;
    iVar1 = FUN_0035010c(param_4 << 2);
    param_1[2] = iVar1;
    FUN_00343280(iVar1,param_1[3] << 2);
    *param_1 = 1;
    param_1[4] = param_2;
  }
  return;
}
