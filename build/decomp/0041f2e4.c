// OoT3D decomp @ 0041f2e4  name=FUN_0041f2e4  size=92

void FUN_0041f2e4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = DAT_0041f340;
  if (*(int *)(DAT_0041f340 + 0x10) != 0) {
    (**(code **)(**(int **)(DAT_0041f340 + 8) + 0xc))();
    iVar2 = DAT_0041f344;
    iVar3 = 0;
    do {
      if (*(int *)(iVar2 + iVar3 * 4) != 0) {
        FUN_002fb944();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1b);
    if (*(int *)(iVar1 + 0x34) != 0) {
      FUN_002fb934();
      return;
    }
  }
  return;
}
