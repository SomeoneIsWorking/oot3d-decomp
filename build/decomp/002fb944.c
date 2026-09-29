// OoT3D decomp @ 002fb944  name=FUN_002fb944  size=128

void FUN_002fb944(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x40) == 2) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x10) + 0xc))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
    return;
  }
  if (*(int *)(param_1 + 0x40) == 3) {
                    /* WARNING: Could not recover jumptable at 0x002fb998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    return;
  }
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x10) + 0xc))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
