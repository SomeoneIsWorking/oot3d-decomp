// OoT3D decomp @ 002cdee4  name=FUN_002cdee4  size=184

void FUN_002cdee4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        FUN_0048acb4(param_1,iVar1,&local_40);
        FUN_00493920(iVar2,&local_40);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}
