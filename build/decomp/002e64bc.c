// OoT3D decomp @ 002e64bc  name=FUN_002e64bc  size=64

void FUN_002e64bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;

  iVar1 = 0;
  local_14 = param_1;
  local_10 = param_2;
  do {
    FUN_002f9430(*(undefined4 *)(param_3 + 8),&local_14,1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}
