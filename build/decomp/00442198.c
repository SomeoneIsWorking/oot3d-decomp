// OoT3D decomp @ 00442198  name=FUN_00442198  size=80

void FUN_00442198(int param_1)

{
  int iVar1;

  if (*(char *)(param_1 + 4) != '\0') {
    iVar1 = 0;
    do {
      if (*(int *)(param_1 + iVar1 * 4 + 0x524) != 0) {
        FUN_002f1280();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x100);
    if (*(int *)(param_1 + 0x934) != -1) {
      FUN_002f780c(*(undefined4 *)(param_1 + 0x930));
      return;
    }
  }
  return;
}
