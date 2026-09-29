// OoT3D decomp @ 00428924  name=FUN_00428924  size=136

void FUN_00428924(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  puVar1 = DAT_004289ac;
  if (DAT_004289ac[1] != 0) {
    iVar4 = 0;
    do {
      (**(code **)(*(int *)puVar1[iVar4 + 0x19] + 0xc))();
      iVar2 = DAT_004289b0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar4 = 0;
    do {
      if (*(int *)(iVar2 + iVar4 * 4) != 0) {
        FUN_002fb944();
      }
      iVar3 = DAT_004289b4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    iVar4 = 0;
    do {
      if (*(int *)(iVar3 + iVar4 * 4) != 0) {
        FUN_002fb944();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    FUN_002fb934(*puVar1);
    return;
  }
  return;
}
