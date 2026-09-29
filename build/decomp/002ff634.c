// OoT3D decomp @ 002ff634  name=FUN_002ff634  size=680

int FUN_002ff634(int *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;

  piVar10 = param_1 + 3;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar7 = true;
  if (iVar2 != param_1[4]) {
    do {
      if (*piVar10 < 1) {
        ClearExclusiveLocal();
        bVar7 = false;
        goto LAB_002ff690;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = -*piVar10;
LAB_002ff690:
    if (bVar7) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[4] = iVar2;
    }
    else {
      FUN_003351e8(piVar10);
    }
  }
  param_1[5] = param_1[5] + 1;
  piVar11 = (int *)param_1[2];
  puVar3 = (undefined4 *)0x0;
  if (piVar11 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar11;
  }
  if (puVar3 != (undefined4 *)0x0) {
    uVar9 = param_1[1];
    do {
      piVar4 = puVar3 + 2;
      if ((uint)(param_3 + param_4) <= uVar9 - (puVar3[3] + *piVar4)) goto LAB_002ff70c;
      if (puVar3 == (undefined4 *)param_1[2]) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)*puVar3;
      }
      uVar9 = *piVar4 - param_4;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002ff70c:
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = *param_1;
    if (piVar11 == (int *)0x0) {
      if ((uint)param_1[1] < (uint)(iVar2 + param_3)) {
        iVar2 = param_1[5];
        param_1[5] = iVar2 + -1;
        if (iVar2 + -1 != 0) {
          return 0;
        }
        param_1[4] = 0;
        do {
          iVar5 = *piVar10;
          iVar2 = -iVar5;
          bVar7 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar7);
        *piVar10 = iVar2;
        if (iVar5 == -1 || iVar2 < 1) {
          return 0;
        }
        goto LAB_002ff814;
      }
      goto LAB_002ff878;
    }
    if ((uint)piVar11[2] < (uint)(iVar2 + param_3 + param_4)) {
      iVar2 = param_1[5];
      param_1[5] = iVar2 + -1;
      if (iVar2 + -1 != 0) {
        return 0;
      }
      param_1[4] = 0;
      do {
        iVar5 = *piVar10;
        iVar2 = -iVar5;
        bVar7 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar7);
      *piVar10 = iVar2;
      if (iVar5 == -1 || iVar2 < 1) {
        return 0;
      }
LAB_002ff814:
      software_interrupt(0x22);
      return 0;
    }
LAB_002ff75c:
    param_2[1] = (int)piVar11;
    *(int **)(*piVar11 + 4) = param_2;
    *param_2 = *piVar11;
    *piVar11 = (int)param_2;
  }
  else {
    iVar2 = puVar3[2] + puVar3[3] + param_4;
    puVar8 = (undefined4 *)0x0;
    if (piVar11 != (int *)0x0) {
      puVar8 = (undefined4 *)*piVar11;
    }
    if (puVar8 == puVar3) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)puVar3[1];
    }
    if (piVar4 == (int *)0x0) {
      if (piVar11 != (int *)0x0) {
        param_2[1] = (int)piVar11;
        *(int **)(*piVar11 + 4) = param_2;
        *param_2 = *piVar11;
        *piVar11 = (int)param_2;
        goto LAB_002ff884;
      }
LAB_002ff878:
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
      param_1[2] = (int)param_2;
      goto LAB_002ff884;
    }
    if (piVar11 != piVar4) {
      param_2[1] = (int)piVar4;
      *(int **)(*piVar4 + 4) = param_2;
      *param_2 = *piVar4;
      *piVar4 = (int)param_2;
      goto LAB_002ff884;
    }
    if (piVar11 != (int *)0x0) goto LAB_002ff75c;
    param_2[1] = (int)param_2;
    *param_2 = (int)param_2;
  }
  param_1[2] = (int)param_2;
LAB_002ff884:
  param_2[2] = iVar2;
  param_2[3] = param_3;
  iVar5 = param_1[5];
  param_1[5] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    param_1[4] = 0;
    do {
      iVar6 = *piVar10;
      iVar5 = -iVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar7);
    *piVar10 = iVar5;
    if (iVar6 != -1 && 0 < iVar5) {
      software_interrupt(0x22);
    }
  }
  return iVar2;
}
