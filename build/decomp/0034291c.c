// OoT3D decomp @ 0034291c  name=FUN_0034291c  size=76

void FUN_0034291c(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_0035021c();
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0035021c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
