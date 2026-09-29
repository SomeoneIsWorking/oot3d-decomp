// OoT3D decomp @ 00377d38  name=FUN_00377d38  size=60

int FUN_00377d38(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;

  if (param_4 != 0) {
    iVar1 = param_3 * param_4 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      (*param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}
