// OoT3D decomp @ 002fde64  name=FUN_002fde64  size=56

void FUN_002fde64(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(param_1 + iVar1 * 4 + 0x818) != 0) {
        FUN_002f1280();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x100);
  }
  return;
}
