// OoT3D decomp @ 0031bb84  name=FUN_0031bb84  size=416

void FUN_0031bb84(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  iVar5 = FUN_0046650c();
  if (iVar5 == 1) {
    piVar8 = (int *)(param_1 + 0x90);
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    bVar3 = true;
    bVar2 = false;
    if (iVar5 != *(int *)(param_1 + 0x94)) {
      do {
        if (*piVar8 < 1) {
          ClearExclusiveLocal();
          goto LAB_0031bbd8;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = -*piVar8;
      bVar2 = true;
LAB_0031bbd8:
      if (!bVar2) {
        return;
      }
      uVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x94) = uVar6;
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    FUN_004663f4(1);
    iVar5 = DAT_0031bd28;
    puVar4 = DAT_0031bd24;
    piVar8 = (int *)(DAT_0031bd28 + 8);
    *DAT_0031bd24 = 1;
    iVar7 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (iVar7 != *(int *)(iVar5 + 0xc)) {
      do {
        if (*piVar8 < 1) {
          ClearExclusiveLocal();
          bVar3 = false;
          goto LAB_0031bc54;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = -*piVar8;
LAB_0031bc54:
      if (bVar3) {
        uVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar5 + 0xc) = uVar6;
      }
      else {
        FUN_003351e8(piVar8);
      }
    }
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    FUN_0030b304(param_1 + 0x9c);
    piVar8 = (int *)(iVar5 + 8);
    iVar7 = *(int *)(iVar5 + 0x10) + -1;
    *(int *)(iVar5 + 0x10) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar5 + 0xc) = 0;
      do {
        iVar5 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = -iVar5;
      if (iVar5 < -1) {
        software_interrupt(0x22);
      }
    }
    *puVar4 = 0;
    piVar8 = (int *)(param_1 + 0x90);
    iVar5 = *(int *)(param_1 + 0x98) + -1;
    *(int *)(param_1 + 0x98) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      do {
        iVar5 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = -iVar5;
      if (iVar5 < -1) {
        software_interrupt(0x22);
      }
    }
    *(undefined *)(param_1 + 5) = 2;
  }
  return;
}

