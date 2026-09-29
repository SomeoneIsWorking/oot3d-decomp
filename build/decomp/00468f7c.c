// OoT3D decomp @ 00468f7c  name=FUN_00468f7c  size=64

bool FUN_00468f7c(int param_1)

{
  int iVar1;

  if ((*(int *)(param_1 + 1000) == 8) && (-1 < *(int *)(param_1 + 0x3ec))) {
    iVar1 = *(int *)(param_1 + 0x3ec) + 1;
    *(int *)(param_1 + 0x3ec) = iVar1;
    if (7 < iVar1) {
      *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
    }
    return 7 < iVar1;
  }
  return true;
}
