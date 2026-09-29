// OoT3D decomp @ 00309ea4  name=FUN_00309ea4  size=64

void FUN_00309ea4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00497dac(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}
