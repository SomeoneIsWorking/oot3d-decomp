// OoT3D decomp @ 00454068  name=FUN_00454068  size=296

void FUN_00454068(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;

  piVar1 = DAT_00454190;
  if (*(char *)(param_1 + 0x14) == '\0') {
    do {
      FUN_0030c8bc();
      FUN_00466864();
      if (*(char *)(param_1 + 0x14) != '\0') {
        return;
      }
      piVar6 = (int *)(param_1 + 8);
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (iVar3 != *(int *)(param_1 + 0xc)) {
        do {
          if (*piVar6 < 1) {
            ClearExclusiveLocal();
            bVar2 = false;
            goto LAB_004540e0;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = -*piVar6;
        bVar2 = true;
LAB_004540e0:
        if (bVar2) {
          uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          FUN_003351e8(piVar6);
        }
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_0030c8bc();
      FUN_00466798();
      iVar3 = *(int *)(param_1 + 0x10) + -1;
      *(int *)(param_1 + 0x10) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        do {
          iVar5 = *piVar6;
          iVar3 = -iVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3;
        if (iVar5 != -1 && 0 < iVar3) {
          iVar3 = *piVar1;
          software_interrupt(0x22);
        }
      }
      FUN_0030c4f4(iVar3);
      FUN_002dbde0();
    } while (*(char *)(param_1 + 0x14) == '\0');
  }
  return;
}
