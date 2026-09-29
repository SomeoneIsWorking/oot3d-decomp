// OoT3D decomp @ 002f1280  name=FUN_002f1280  size=168

void FUN_002f1280(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;

  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  if (iVar2 != 0 && param_2 != 0) {
    bVar3 = *(char *)(*(int *)(iVar2 + *(int *)(param_1 + 0x78) * 4) + 0x390) != '\0';
    cVar1 = '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x6d);
    }
    if ((bVar3 && cVar1 != '\0') && (2 < *(int *)(param_1 + 0xb0))) {
      if ((*(char *)(param_1 + 0x6f) == '\0') && (*(char *)(param_1 + 0x6e) != '\0')) {
        (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
      }
      (**(code **)(**(int **)(param_1 + 100) + 0xc))();
      bVar3 = *(char *)(param_1 + 0x6f) != '\0';
      cVar1 = '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x6e);
      }
      if (bVar3 && cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x002f1320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
        return;
      }
    }
  }
  return;
}
