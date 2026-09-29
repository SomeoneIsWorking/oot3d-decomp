// OoT3D decomp @ 0040f35c  name=FUN_0040f35c  size=60

int FUN_0040f35c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;

  local_10 = param_4;
  iVar1 = FUN_003043c0(param_1 + 4,&local_10,9);
  if (iVar1 == 0) {
    return DAT_0040f398;
  }
  return local_10 + param_1 + *(int *)(local_10 + param_1 + 4);
}
