// OoT3D decomp @ 0044c6d4  name=FUN_0044c6d4  size=120

void FUN_0044c6d4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;

  if (*(char *)(param_1 + 9) != '\0') {
    FUN_00306a34(param_1 + 0x16c);
    cVar1 = *(char *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    if (cVar1 != '\v') {
      FUN_00306a34(param_1 + 0x16c);
      cVar1 = *(char *)(param_1 + 8);
      FUN_003069cc(param_1 + 0x16c);
      if (cVar1 != '\f') {
        return;
      }
    }
    iVar3 = 0;
    do {
      piVar2 = *(int **)(param_1 + iVar3 * 4 + 0x6fc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return;
}
