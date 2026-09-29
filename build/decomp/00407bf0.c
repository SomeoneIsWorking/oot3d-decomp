// OoT3D decomp @ 00407bf0  name=FUN_00407bf0  size=44

int FUN_00407bf0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      FUN_00308e24();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return param_1;
}
