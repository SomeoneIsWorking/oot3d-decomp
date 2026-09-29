// OoT3D decomp @ 002ffacc  name=FUN_002ffacc  size=68

void FUN_002ffacc(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_00301260();
      FUN_0031b99c(*(undefined4 *)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}
