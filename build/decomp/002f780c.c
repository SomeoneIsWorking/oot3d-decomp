// OoT3D decomp @ 002f780c  name=FUN_002f780c  size=148

void FUN_002f780c(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  if (*(int *)(param_1 + 0x428) == 7) {
    FUN_002e6ed0(param_1);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  iVar1 = *(int *)(param_1 + 0x428);
  if (iVar1 < 2) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x224)) {
      do {
        bVar3 = *(char *)(param_1 + iVar1 + 0x434) != '\0';
        iVar2 = 0;
        if (bVar3) {
          iVar2 = *(int *)(param_1 + iVar1 * 4 + 0xc);
        }
        if (bVar3 && iVar2 != 0) {
          FUN_002f78a0();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x224));
    }
  }
  else if (((iVar1 == 2 || iVar1 == 3) || iVar1 == 6) || iVar1 == 5) {
    iVar1 = *(int *)(param_1 + 0xc);
    FUN_002fc950();
                    /* WARNING: Could not recover jumptable at 0x002f78bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))();
    return;
  }
  return;
}
