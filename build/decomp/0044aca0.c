// OoT3D decomp @ 0044aca0  name=FUN_0044aca0  size=416

void FUN_0044aca0(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_28;
  char local_24 [4];
  undefined2 local_20 [2];

  bVar2 = true;
  if (param_2 == 0) {
    local_20[0] = 1;
  }
  else {
    local_20[0] = 3;
  }
  FUN_002e1d14(2,local_20,4);
  uVar3 = DAT_0044ae40;
  while( true ) {
    local_28 = 0;
    FUN_004537e4(0,local_24);
    if (local_24[0] != '\0') {
      FUN_00453884(0,&local_28);
    }
    if ((short)local_28 == 1) break;
    FUN_0030e604((int)((ulonglong)uVar3 * 1000),(int)((ulonglong)uVar3 * 1000 >> 0x20));
  }
  if (param_2 != 0) {
    FUN_0034338c(param_1 + 6,param_1[0x42a],0x1080);
  }
  piVar6 = param_1 + 2;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar4 != param_1[3]) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar2 = false;
        goto LAB_0044ad80;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_0044ad80:
    coproc_moveto_Data_Synchronization(0);
    if (bVar2) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[3] = iVar4;
    }
    else {
      FUN_0030e288(piVar6);
    }
  }
  param_1[4] = param_1[4] + 1;
  *(undefined1 *)(param_1 + 0x4c6) = 0;
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  FUN_002e1d58(*param_1,2);
  software_interrupt(0x23);
  param_1[1] = 0;
  iVar4 = param_1[4];
  piVar6 = param_1 + 2;
  param_1[4] = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    param_1[3] = 0;
    do {
      iVar5 = *piVar6;
      iVar4 = -iVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4;
    coproc_moveto_Data_Synchronization(0);
    if (iVar5 != -1 && 0 < iVar4) {
      software_interrupt(0x22);
    }
  }
  param_1[4] = -1;
  return;
}
