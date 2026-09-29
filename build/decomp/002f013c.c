// OoT3D decomp @ 002f013c  name=FUN_002f013c  size=136

void FUN_002f013c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  iVar1 = DAT_002f01c4;
  if (((*(int *)(DAT_002f01c4 + 0x50) == 0) && (iVar2 = FUN_002fcdd4(), iVar2 == 0)) &&
     (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 0xc))();
  }
  if (*(int *)(iVar1 + 0x50) == 1) {
    piVar3 = *(int **)(DAT_002f01c8 + *(int *)(iVar1 + 0x38) * 4);
    if (piVar3 != (int *)0x0 && *(int *)(iVar1 + 0x38) != -1) {
      (**(code **)(*piVar3 + 0xc))();
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      FUN_002fb934();
    }
    if (*(int *)(iVar1 + 0x2c) != 0) {
      FUN_002fb934();
      return;
    }
  }
  return;
}
