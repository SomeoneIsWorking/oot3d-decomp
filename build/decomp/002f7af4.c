// OoT3D decomp @ 002f7af4  name=FUN_002f7af4  size=80

void FUN_002f7af4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = 0;
  local_14 = param_1;
  local_10 = param_2;
  if (0 < *(int *)(param_3 + 0xc)) {
    do {
      FUN_002f9430(*(undefined4 *)(param_3 + 8),&local_14,1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_3 + 0xc));
  }
  return;
}

