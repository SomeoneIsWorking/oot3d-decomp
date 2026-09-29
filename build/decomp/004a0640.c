// OoT3D decomp @ 004a0640  name=FUN_004a0640  size=316

int FUN_004a0640(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;

  iVar4 = *(int *)(param_1 + 0x68);
  bVar3 = false;
  piVar7 = (int *)(iVar4 + 0x80);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar5 != *(int *)(iVar4 + 0x84)) {
    do {
      if (*piVar7 < 1) {
        ClearExclusiveLocal();
        goto LAB_004a069c;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = -*piVar7;
    bVar3 = true;
LAB_004a069c:
    coproc_moveto_Data_Synchronization(0);
    if (bVar3) {
      uVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + 0x84) = uVar6;
    }
    else {
      FUN_0030e288(piVar7);
    }
  }
  *(int *)(iVar4 + 0x88) = *(int *)(iVar4 + 0x88) + 1;
  iVar5 = *(int *)(iVar4 + 0x2c);
  if (iVar5 == 0) {
    *(int *)(iVar4 + 0x2c) = param_2;
  }
  else {
    for (iVar2 = *(int *)(iVar5 + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      iVar5 = iVar2;
    }
    *(int *)(iVar5 + 0x14) = param_2;
  }
  if (*(short *)(iVar4 + 6) == 0) {
    *(undefined2 *)(iVar4 + 6) = 1;
  }
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(iVar4 + 6);
  *(short *)(iVar4 + 6) = *(short *)(iVar4 + 6) + 1;
  iVar5 = *(int *)(iVar4 + 0x88) + -1;
  *(int *)(iVar4 + 0x88) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar4 + 0x84) = 0;
    do {
      iVar4 = *piVar7;
      iVar5 = -iVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar5;
    coproc_moveto_Data_Synchronization(0);
    if (iVar4 != -1 && 0 < iVar5) {
      software_interrupt(0x22);
      return *DAT_004a077c;
    }
  }
  return iVar5;
}
