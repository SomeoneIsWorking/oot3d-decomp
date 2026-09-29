// OoT3D decomp @ 00308e34  name=FUN_00308e34  size=456

int FUN_00308e34(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;

  iVar4 = DAT_00308e78;
  if (DAT_00308e74 < param_2) {
    param_2 = DAT_00308e74;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 != DAT_00308e74) {
    param_4 = *(int *)(param_1 + 0x20);
  }
  if (param_2 == DAT_00308e74 || param_4 == DAT_00308e74) {
    return param_1;
  }
  *(int *)(param_1 + 0x20) = param_2;
  piVar7 = (int *)(iVar4 + 0x274);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(iVar4 + 0x278)) {
    do {
      if (*piVar7 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_00401128;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = -*piVar7;
LAB_00401128:
    coproc_moveto_Data_Synchronization(0);
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + 0x278) = uVar3;
    }
    else {
      FUN_0030e288(piVar7);
    }
  }
  *(int *)(iVar4 + 0x27c) = *(int *)(iVar4 + 0x27c) + 1;
  iVar2 = *(int *)(param_1 + 0x24);
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0 && iVar6 == 0) {
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  else {
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) = iVar2, iVar2 == 0)) {
      *(int *)(iVar4 + 8) = iVar6;
    }
    if ((iVar2 != 0) &&
       (iVar6 = *(int *)(param_1 + 0x28), *(int *)(iVar2 + 0x28) = iVar6, iVar6 == 0)) {
      *(int *)(iVar4 + 0xc) = iVar2;
    }
  }
  iVar2 = *(int *)(iVar4 + 8);
  if (*(int *)(iVar4 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(iVar4 + 8) = param_1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(iVar4 + 0xc) = param_1;
  }
  else {
    do {
      iVar6 = iVar2;
      if (*(int *)(iVar6 + 0x20) <= param_2) {
        iVar2 = *(int *)(iVar6 + 0x24);
        *(int *)(param_1 + 0x24) = iVar2;
        *(int *)(param_1 + 0x28) = iVar6;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          *(int *)(iVar4 + 8) = param_1;
        }
        else {
          *(int *)(iVar2 + 0x28) = param_1;
        }
        *(int *)(iVar6 + 0x24) = param_1;
        goto LAB_00401200;
      }
      iVar2 = *(int *)(iVar6 + 0x28);
    } while (*(int *)(iVar6 + 0x28) != 0);
    *(int *)(iVar6 + 0x28) = param_1;
    *(int *)(param_1 + 0x24) = iVar6;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(iVar4 + 0xc) = param_1;
  }
LAB_00401200:
  iVar2 = *(int *)(iVar4 + 0x27c) + -1;
  *(int *)(iVar4 + 0x27c) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar4 + 0x278) = 0;
    do {
      iVar4 = *piVar7;
      iVar2 = -iVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar5);
    *piVar7 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return *DAT_00401258;
    }
  }
  return iVar2;
}
