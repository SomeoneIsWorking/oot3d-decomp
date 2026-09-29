// OoT3D decomp @ 004976a4  name=FUN_004976a4  size=428

int FUN_004976a4(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;

  piVar6 = param_1 + 0x9d;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar3 != param_1[0x9e]) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_004976f8;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_004976f8:
    coproc_moveto_Data_Synchronization(0);
    if (bVar5) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[0x9e] = iVar3;
    }
    else {
      FUN_0030e288(piVar6);
    }
  }
  piVar2 = DAT_00497850;
  param_1[0x9f] = param_1[0x9f] + 1;
  iVar3 = DAT_00497854;
  iVar7 = param_1[2];
  if (iVar7 == 0) {
    iVar3 = param_1[0x9f] + -1;
    param_1[0x9f] = iVar3;
    if (iVar3 == 0) {
      param_1[0x9e] = 0;
      do {
        iVar7 = *piVar6;
        iVar3 = -iVar7;
        bVar5 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar5);
      *piVar6 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar7 != -1 && 0 < iVar3) {
LAB_0030e280:
        software_interrupt(0x22);
        return *piVar2;
      }
    }
  }
  else {
    do {
      iVar4 = *(int *)(iVar7 + 0x68);
      if ((*(char *)(iVar4 + 0xd) == '\0') && (*(int *)(iVar4 + 0x2c) != 0)) {
        iVar4 = param_2 + *(int *)(iVar4 + 0x28);
        if (*param_1 < iVar4) {
          if (*(int *)(iVar7 + 0x20) != iVar3) {
            FUN_002c021c(param_1,iVar7);
            if (*(code **)(iVar7 + 0x2c) != (code *)0x0) {
              (**(code **)(iVar7 + 0x2c))(iVar7,*(undefined4 *)(iVar7 + 0x30));
            }
          }
        }
        else {
          FUN_004a0554(*(undefined4 *)(iVar7 + 0x68));
          param_2 = iVar4;
          if (*(char *)(*(int *)(iVar7 + 0x68) + 0xc) == '\0') {
            FUN_004a0794();
          }
        }
      }
      iVar7 = *(int *)(iVar7 + 0x28);
    } while (iVar7 != 0);
    iVar3 = param_1[0x9f] + -1;
    param_1[0x9f] = iVar3;
    if (iVar3 == 0) {
      param_1[0x9e] = 0;
      do {
        iVar7 = *piVar6;
        iVar3 = -iVar7;
        bVar5 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar5);
      *piVar6 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar7 != -1 && 0 < iVar3) goto LAB_0030e280;
    }
  }
  return iVar3;
}
