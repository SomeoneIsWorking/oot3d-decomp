// OoT3D decomp @ 004072ec  name=FUN_004072ec  size=288

longlong FUN_004072ec(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (*(char *)(param_1 + 0x80) == '\0') {
    return (ulonglong)param_2 << 0x20;
  }
  uVar4 = FUN_0030c8bc();
  FUN_004049e4(uVar4,param_1);
  FUN_0030b304(param_1 + 0xe0);
  iVar6 = *(int *)(param_1 + 0x100);
  if (iVar6 != param_1 + 0x100) {
    FUN_0030b304(iVar6 + -0x54);
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(param_1 + 0xfc,iVar6);
  }
  iVar6 = *(int *)(param_1 + 0xe18);
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      iVar6 = param_1 + iVar5 * 0x220;
      if (*(int *)(iVar6 + 0xe1c) != 0) {
        FUN_00309208(*(undefined4 *)(param_1 + 0xe0c));
        *(undefined4 *)(iVar6 + 0xe1c) = 0;
      }
      iVar6 = *(int *)(param_1 + 0xe18);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      iVar6 = param_1 + iVar5 * 0x220;
      if (*(int *)(iVar6 + 0xe4c) != 0) {
        FUN_0030a40c();
        *(undefined4 *)(iVar6 + 0xe4c) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xe18));
  }
  if (*(int **)(param_1 + 0xe10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe10) + 0x38))();
    *(undefined4 *)(param_1 + 0xe10) = 0;
  }
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar2 = DAT_003101d8;
  piVar3 = (int *)(param_1 + 4);
  if (*piVar3 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    uVar4 = *puVar2;
  }
  else {
    if (*piVar3 != -2) {
      return CONCAT44(DAT_003101d8,piVar3);
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    uVar4 = *puVar2;
  }
  software_interrupt(0x22);
  return CONCAT44(piVar3,uVar4);
}
