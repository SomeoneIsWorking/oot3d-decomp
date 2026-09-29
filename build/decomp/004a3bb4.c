// OoT3D decomp @ 004a3bb4  name=FUN_004a3bb4  size=452

int FUN_004a3bb4(int param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;

  piVar7 = (int *)(param_1 + 0x80);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar6 = true;
  if (iVar3 != *(int *)(param_1 + 0x84)) {
    do {
      if (*piVar7 < 1) {
        ClearExclusiveLocal();
        bVar6 = false;
        goto LAB_004a3c08;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = -*piVar7;
LAB_004a3c08:
    coproc_moveto_Data_Synchronization(0);
    if (bVar6) {
      uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x84) = uVar4;
    }
    else {
      FUN_0030e288(piVar7);
    }
  }
  piVar2 = DAT_004a3d78;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x88) + -1;
    *(int *)(param_1 + 0x88) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      do {
        iVar5 = *piVar7;
        iVar3 = -iVar5;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar5 != -1 && 0 < iVar3) {
LAB_0030e280:
        software_interrupt(0x22);
        return *piVar2;
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x40);
    while (iVar5 != 0) {
      if (*(ushort *)(iVar3 + 0x12) == param_2) {
        *(undefined1 *)(iVar3 + 0x11) = 2;
        break;
      }
      iVar5 = *(int *)(param_1 + 0x40) + -1;
      *(int *)(param_1 + 0x40) = iVar5;
      iVar3 = *(int *)(iVar3 + 0x14);
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    while (iVar3 != iVar5) {
      if (*(int *)(param_1 + 0x30) == iVar5) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else if (*(int *)(param_1 + 0x34) == iVar5) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else if (*(int *)(param_1 + 0x38) == iVar5) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else if (*(int *)(param_1 + 0x3c) == iVar5) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      coproc_moveto_Data_Memory_Barrier(0);
      *(undefined1 *)(iVar5 + 0x11) = 3;
      iVar5 = *(int *)(iVar5 + 0x14);
    }
    *(int *)(param_1 + 0x2c) = iVar3;
    iVar3 = *(int *)(param_1 + 0x88) + -1;
    *(int *)(param_1 + 0x88) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      do {
        iVar5 = *piVar7;
        iVar3 = -iVar5;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar5 != -1 && 0 < iVar3) goto LAB_0030e280;
    }
  }
  return iVar3;
}
