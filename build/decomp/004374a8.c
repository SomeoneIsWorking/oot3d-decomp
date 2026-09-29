// OoT3D decomp @ 004374a8  name=FUN_004374a8  size=428

int FUN_004374a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int *local_18;

  piVar2 = DAT_00437654;
  local_18 = DAT_00437654;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != DAT_00437654[1]) {
    bVar6 = true;
    do {
      if (*DAT_00437654 < 1) {
        ClearExclusiveLocal();
        bVar6 = false;
        goto LAB_004374fc;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00437654);
    } while (!bVar1);
    *DAT_00437654 = -*DAT_00437654;
LAB_004374fc:
    if (bVar6) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar3;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  piVar2[2] = piVar2[2] + 1;
  piVar2 = DAT_0043765c;
  iVar5 = DAT_00437658;
  iVar3 = *param_1;
  bVar6 = iVar3 == 0;
  if (bVar6) {
    iVar3 = param_1[1];
  }
  if (bVar6 && iVar3 == 0) {
    piVar4 = *(int **)(DAT_00437658 + 4);
    if (piVar4 == (int *)0x0) {
      *(int **)(DAT_00437658 + 4) = param_1;
      *(int **)(iVar5 + 8) = param_1;
      *param_1 = 0;
      iVar3 = FUN_0030aedc(&local_18);
      return iVar3;
    }
    while (piVar4 != param_1) {
      if (param_1[4] < piVar4[4]) {
        iVar3 = *piVar4;
        param_1[1] = (int)piVar4;
        *param_1 = iVar3;
        if (*piVar4 == 0) {
          *(int **)(iVar5 + 4) = param_1;
        }
        else {
          *(int **)(*piVar4 + 4) = param_1;
        }
        *piVar4 = (int)param_1;
        iVar3 = local_18[2] + -1;
        local_18[2] = iVar3;
        if (iVar3 != 0) {
          return iVar3;
        }
        local_18[1] = 0;
        do {
          iVar5 = *local_18;
          iVar3 = -iVar5;
          bVar6 = (bool)hasExclusiveAccess(local_18);
        } while (!bVar6);
        *local_18 = iVar3;
        if (iVar5 == -1 || iVar3 < 1) {
          return iVar3;
        }
        goto LAB_00437618;
      }
      piVar4 = (int *)piVar4[1];
      if (piVar4 == (int *)0x0) {
        iVar3 = *(int *)(DAT_00437658 + 8);
        *(int **)(iVar3 + 4) = param_1;
        *param_1 = iVar3;
        param_1[1] = 0;
        *(int **)(iVar5 + 8) = param_1;
        iVar3 = FUN_0030aedc(&local_18);
        return iVar3;
      }
    }
    iVar3 = local_18[2] + -1;
    local_18[2] = iVar3;
    if (iVar3 == 0) {
      local_18[1] = 0;
      do {
        iVar5 = *local_18;
        iVar3 = -iVar5;
        bVar6 = (bool)hasExclusiveAccess(local_18);
      } while (!bVar6);
      *local_18 = iVar3;
      if (iVar5 != -1 && 0 < iVar3) {
LAB_00437618:
        software_interrupt(0x22);
        return *piVar2;
      }
    }
  }
  else {
    iVar3 = FUN_0030aedc(&local_18);
  }
  return iVar3;
}
