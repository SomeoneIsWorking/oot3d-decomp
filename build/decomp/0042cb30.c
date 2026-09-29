// OoT3D decomp @ 0042cb30  name=FUN_0042cb30  size=40

void FUN_0042cb30(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  iVar2 = FUN_00306994(param_1 + 8);
  if (*(char *)(iVar2 + 9) != '\0') {
    FUN_00306a34(iVar2 + 0x16c);
    cVar1 = *(char *)(iVar2 + 8);
    FUN_003069cc(iVar2 + 0x16c);
    if (cVar1 != '\v') {
      FUN_00306a34(iVar2 + 0x16c);
      cVar1 = *(char *)(iVar2 + 8);
      FUN_003069cc(iVar2 + 0x16c);
      if (cVar1 != '\f') {
        return;
      }
    }
    iVar4 = 0;
    do {
      piVar3 = *(int **)(iVar2 + iVar4 * 4 + 0x6fc);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  return;
}
