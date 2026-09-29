// OoT3D decomp @ 002e7d80  name=FUN_002e7d80  size=64

void FUN_002e7d80(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_002e7dc0;
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}
