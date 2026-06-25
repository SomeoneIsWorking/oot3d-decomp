// OoT3D decomp @ 00489c9c  name=FUN_00489c9c  size=312

int FUN_00489c9c(void)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *extraout_r1;
  
  piVar2 = DAT_00489ca8;
  piVar4 = (int *)coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar7 = (int *)DAT_00489ca8[1];
  bVar3 = false;
  if (piVar4 != piVar7) {
    do {
      if (*DAT_00489ca8 < 1) {
        ClearExclusiveLocal();
        goto LAB_00493c50;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00489ca8);
    } while (!bVar1);
    *DAT_00489ca8 = -*DAT_00489ca8;
    bVar3 = true;
LAB_00493c50:
    if (bVar3) {
      iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar5;
    }
    else {
      FUN_003351e8(piVar2);
      piVar7 = extraout_r1;
    }
  }
  piVar4 = DAT_00493d3c;
  piVar2[2] = piVar2[2] + 1;
  if (*(char *)((int)piVar2 + 0x76) != '\x02') {
    *(undefined *)((int)piVar2 + 0x76) = 1;
    iVar5 = piVar2[2];
    piVar2[2] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      piVar2[1] = 0;
      do {
        iVar5 = *piVar2;
        bVar3 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar3);
      *piVar2 = -iVar5;
      if (iVar5 < -1) {
        piVar4 = (int *)0x0;
        software_interrupt(0x22);
        piVar7 = piVar2;
      }
    }
    iVar5 = FUN_0030b304(piVar2 + 0x1a,piVar7,piVar4);
    return iVar5;
  }
  *(undefined *)((int)piVar2 + 0x76) = 0;
  iVar5 = piVar2[2] + -1;
  piVar2[2] = iVar5;
  if (iVar5 == 0) {
    piVar2[1] = 0;
    do {
      iVar6 = *piVar2;
      iVar5 = -iVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar5;
    if (iVar6 < -1) {
      software_interrupt(0x22);
      return *piVar4;
    }
  }
  return iVar5;
}

