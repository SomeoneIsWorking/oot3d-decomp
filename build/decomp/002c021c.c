// OoT3D decomp @ 002c021c  name=FUN_002c021c  size=332

int FUN_002c021c(int param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;

  if ((char)param_2[1] != '\x01') {
    FUN_002c016c(param_2,1);
  }
  piVar8 = (int *)(param_1 + 0x274);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar2 = false;
  if (iVar3 != *(int *)(param_1 + 0x278)) {
    do {
      if (*piVar8 < 1) {
        ClearExclusiveLocal();
        goto LAB_002c027c;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = -*piVar8;
    bVar2 = true;
LAB_002c027c:
    coproc_moveto_Data_Synchronization(0);
    if (bVar2) {
      uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x278) = uVar4;
    }
    else {
      FUN_0030e288(piVar8);
    }
  }
  *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
  uVar5 = param_2[9];
  uVar7 = param_2[10];
  if (uVar5 == 0 && uVar7 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if ((uVar7 != 0) && (*(uint *)(uVar7 + 0x24) = uVar5, uVar5 == 0)) {
      *(uint *)(param_1 + 8) = uVar7;
    }
    if ((uVar5 != 0) && (uVar7 = param_2[10], *(uint *)(uVar5 + 0x28) = uVar7, uVar7 == 0)) {
      *(uint *)(param_1 + 0xc) = uVar5;
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~(1 << (*param_2 & 0xff));
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + -1;
  iVar3 = *(int *)(param_1 + 0x27c) + -1;
  *(int *)(param_1 + 0x27c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x278) = 0;
    do {
      iVar6 = *piVar8;
      iVar3 = -iVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3;
    coproc_moveto_Data_Synchronization(0);
    if (iVar6 != -1 && 0 < iVar3) {
      software_interrupt(0x22);
      return *DAT_002c0368;
    }
  }
  return iVar3;
}
