// OoT3D decomp @ 00447050  name=FUN_00447050  size=204

int FUN_00447050(void)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = DAT_0044711c;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar7 = true;
  if (iVar5 != DAT_0044711c[1]) {
    do {
      if (*DAT_0044711c < 1) {
        ClearExclusiveLocal();
        bVar7 = false;
        goto LAB_0044709c;
      }
      bVar2 = (bool)hasExclusiveAccess(DAT_0044711c);
    } while (!bVar2);
    *DAT_0044711c = -*DAT_0044711c;
LAB_0044709c:
    if (bVar7) {
      iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar3[1] = iVar5;
    }
    else {
      FUN_003351e8(piVar3);
    }
  }
  pcVar4 = DAT_00447120;
  piVar3[2] = piVar3[2] + 1;
  cVar1 = *pcVar4;
  iVar5 = piVar3[2];
  piVar3[2] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    piVar3[1] = 0;
    do {
      iVar6 = *piVar3;
      iVar5 = -iVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar5;
    if (iVar6 != -1 && 0 < iVar5) {
      software_interrupt(0x22);
    }
  }
  return (int)cVar1;
}

