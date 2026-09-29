// OoT3D decomp @ 00400f1c  name=FUN_00400f1c  size=416

int FUN_00400f1c(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;

  piVar2 = DAT_004010bc;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar7 = true;
  if (iVar4 != DAT_004010bc[1]) {
    do {
      if (*DAT_004010bc < 1) {
        ClearExclusiveLocal();
        bVar7 = false;
        goto LAB_00400f68;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_004010bc);
    } while (!bVar1);
    *DAT_004010bc = -*DAT_004010bc;
LAB_00400f68:
    if (bVar7) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar4;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  piVar3 = DAT_004010c0;
  piVar2[2] = piVar2[2] + 1;
  iVar4 = DAT_004010c8;
  if (*piVar3 == 0) {
    iVar5 = piVar2[2];
    piVar2[2] = iVar5 + -1;
    if (iVar5 + -1 != 0) {
      return iVar4;
    }
    piVar2[1] = 0;
    do {
      iVar6 = *piVar2;
      iVar5 = -iVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5;
    if (iVar6 == -1 || iVar5 < 1) {
      return iVar4;
    }
LAB_00400fdc:
    software_interrupt(0x22);
    return iVar4;
  }
  if (*piVar3 == 1) {
    iVar4 = *DAT_004010cc;
    software_interrupt(0x23);
    if (iVar4 < 0) {
      iVar5 = piVar2[2];
      piVar2[2] = iVar5 + -1;
      if (iVar5 + -1 != 0) {
        return iVar4;
      }
      piVar2[1] = 0;
      do {
        iVar6 = *piVar2;
        iVar5 = -iVar6;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar5;
      if (iVar6 == -1 || iVar5 < 1) {
        return iVar4;
      }
      goto LAB_00400fdc;
    }
    *DAT_004010cc = 0;
  }
  *piVar3 = *piVar3 + -1;
  iVar4 = piVar2[2];
  piVar2[2] = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    piVar2[1] = 0;
    do {
      iVar5 = *piVar2;
      iVar4 = -iVar5;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4;
    if (iVar5 != -1 && 0 < iVar4) {
      software_interrupt(0x22);
    }
  }
  return 0;
}
