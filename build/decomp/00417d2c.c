// OoT3D decomp @ 00417d2c  name=FUN_00417d2c  size=356

int FUN_00417d2c(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  piVar2 = DAT_00417e90;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar8 = true;
  if (iVar4 != DAT_00417e90[1]) {
    do {
      if (*DAT_00417e90 < 1) {
        ClearExclusiveLocal();
        bVar8 = false;
        goto LAB_00417d78;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00417e90);
    } while (!bVar1);
    *DAT_00417e90 = -*DAT_00417e90;
LAB_00417d78:
    if (bVar8) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar4;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  piVar3 = DAT_00417e94;
  piVar2[2] = piVar2[2] + 1;
  if (*piVar3 == 0) {
    FUN_0030de88();
    uVar5 = FUN_0030de24(DAT_00417e9c);
    iVar4 = FUN_0030dde8(DAT_00417ea0,DAT_00417e9c,uVar5,0);
    if (iVar4 < 0) {
      iVar6 = piVar2[2];
      piVar2[2] = iVar6 + -1;
      if (iVar6 + -1 == 0) {
        piVar2[1] = 0;
        do {
          iVar7 = *piVar2;
          iVar6 = -iVar7;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar6;
        if (iVar7 != -1 && 0 < iVar6) {
          software_interrupt(0x22);
        }
      }
      return iVar4;
    }
  }
  *piVar3 = *piVar3 + 1;
  iVar4 = piVar2[2];
  piVar2[2] = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    piVar2[1] = 0;
    do {
      iVar6 = *piVar2;
      iVar4 = -iVar6;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4;
    if (iVar6 != -1 && 0 < iVar4) {
      software_interrupt(0x22);
    }
  }
  return 0;
}
