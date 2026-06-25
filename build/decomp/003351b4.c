// OoT3D decomp @ 003351b4  name=FUN_003351b4  size=428

int FUN_003351b4(undefined4 param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 in_lr;
  int local_20;
  
  local_20 = DAT_003351e4;
  pcVar2 = DAT_003351e0;
  DAT_003351e0[1] = '\0';
  *(short *)(pcVar2 + 2) = (short)local_20;
  *pcVar2 = '\0';
  *(undefined4 *)(pcVar2 + 4) = param_1;
  *(undefined4 *)(pcVar2 + 8) = in_lr;
  piVar3 = DAT_00423000;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar8 = true;
  if (iVar6 != DAT_00423000[1]) {
    do {
      if (*DAT_00423000 < 1) {
        ClearExclusiveLocal();
        bVar8 = false;
        goto LAB_00422ed0;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00423000);
    } while (!bVar1);
    *DAT_00423000 = -*DAT_00423000;
LAB_00422ed0:
    if (bVar8) {
      iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar3[1] = iVar6;
    }
    else {
      FUN_003351e8(piVar3);
    }
  }
  piVar4 = DAT_00423004;
  piVar3[2] = piVar3[2] + 1;
  if ((*piVar4 != 0) || (iVar6 = FUN_002fa7b8(piVar4,piVar4[-1]), -1 < iVar6)) {
    iVar6 = 0;
  }
  puVar5 = DAT_00423008;
  if (-1 < iVar6) {
    FUN_0030794c(pcVar2 + 0xc,*DAT_00423008);
    local_20 = *piVar4;
    FUN_0043608c(&local_20,pcVar2);
    if (*piVar4 != 0) {
      software_interrupt(0x23);
      *piVar4 = puVar5[1];
    }
  }
  if (*pcVar2 != '\x02') {
    do {
      bVar8 = (bool)hasExclusiveAccess(&local_20);
    } while (!bVar8);
    local_20 = -2;
    FUN_0030b304(&local_20);
  }
  iVar6 = piVar3[2] + -1;
  piVar3[2] = iVar6;
  if (iVar6 == 0) {
    piVar3[1] = 0;
    do {
      iVar7 = *piVar3;
      iVar6 = -iVar7;
      bVar8 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar8);
    *piVar3 = iVar6;
    if (iVar7 < -1) {
      software_interrupt(0x22);
      return *DAT_0042300c;
    }
  }
  return iVar6;
}

