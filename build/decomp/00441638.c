// OoT3D decomp @ 00441638  name=FUN_00441638  size=32

void FUN_00441638(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;

  bVar3 = *(char *)(param_1 + 0xc) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xd);
  }
  if (!bVar3 || cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x604) != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4 + 0xa18) != 0) {
        FUN_002f1280();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
  }
  return;
}
