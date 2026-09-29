// OoT3D decomp @ 0040d73c  name=FUN_0040d73c  size=56

int FUN_0040d73c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;

  local_10 = param_4;
  iVar1 = FUN_003043c0(param_1,&local_10,9);
  if (iVar1 == 0) {
    return DAT_0040d774;
  }
  return local_10 + param_1 + *(int *)(local_10 + param_1 + 4);
}
