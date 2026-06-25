// OoT3D decomp @ 002c454c  name=FUN_002c454c  size=56

undefined4 FUN_002c454c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    param_3 = *(int *)(param_1 + 100);
  }
  if ((iVar1 != 0 && param_3 != 0) &&
     (*(char *)(*(int *)(iVar1 + *(int *)(param_1 + 0x78) * 4) + 0x390) != '\0')) {
    return 1;
  }
  return 0;
}

