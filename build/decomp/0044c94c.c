// OoT3D decomp @ 0044c94c  name=FUN_0044c94c  size=88

void FUN_0044c94c(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;

  local_14 = DAT_0044c9a4;
  iVar1 = 0;
  local_10 = DAT_0044c9a8;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_14,1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return;
}
