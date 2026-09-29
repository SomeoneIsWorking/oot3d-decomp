// OoT3D decomp @ 0042a254  name=FUN_0042a254  size=36

void FUN_0042a254(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;

  bVar3 = *(char *)(param_1 + 9) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 10);
  }
  if (!bVar3 || cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x91c) != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4 + 0xd30) != 0) {
        FUN_002f1280();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
  }
  return;
}
