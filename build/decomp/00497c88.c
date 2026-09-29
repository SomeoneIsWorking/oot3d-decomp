// OoT3D decomp @ 00497c88  name=FUN_00497c88  size=288

void FUN_00497c88(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;

  piVar6 = (int *)(param_1 + 0x80);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x84)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_00497cd8;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_00497cd8:
    coproc_moveto_Data_Synchronization(0);
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
    else {
      FUN_0030e288(piVar6);
    }
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    *(undefined1 *)(iVar2 + 0x11) = 3;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar2 = *(int *)(param_1 + 0x88) + -1;
  *(int *)(param_1 + 0x88) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      iVar4 = *piVar6;
      iVar2 = -iVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
    }
  }
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 0x8000;
  return;
}
