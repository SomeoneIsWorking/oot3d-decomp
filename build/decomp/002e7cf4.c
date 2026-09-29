// OoT3D decomp @ 002e7cf4  name=FUN_002e7cf4  size=128

void FUN_002e7cf4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = DAT_002e7d78;
  iVar3 = DAT_002e7d74;
  iVar2 = *(int *)(DAT_002e7d74 + 0x24);
  if ((iVar2 == 7) && (*(undefined2 *)(DAT_002e7d78 + -6) = 0, *(int *)(iVar1 + 0x1c) != 0)) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    return;
  }
  *(undefined2 *)(DAT_002e7d7c + iVar2 * 2) = 0;
  *(int *)(iVar3 + 0x24) = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  if (*(int *)(iVar1 + iVar3 * 4) == 0) {
    return;
  }
  FUN_002f6944();
  FUN_003525d4();
  *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
  return;
}
