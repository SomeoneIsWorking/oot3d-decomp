// OoT3D decomp @ 002e2010  name=FUN_002e2010  size=284

int FUN_002e2010(int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;

  piVar6 = (int *)(param_1 + 0x30);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x34)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_002e206c;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_002e206c:
    coproc_moveto_Data_Synchronization(0);
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x34) = uVar3;
    }
    else {
      FUN_0030e288(piVar6);
    }
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  iVar2 = param_1 + param_2 * 4;
  *(int *)(iVar2 + 0x10) = param_3;
  *(undefined4 *)(iVar2 + 0x18) = param_4;
  if (param_3 == 0) {
    FUN_002e1e3c(DAT_002e212c,param_2,(int)*(char *)(param_1 + param_2 + 0x2c));
  }
  else {
    FUN_002e1e3c(DAT_002e212c,param_2,1);
  }
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    do {
      iVar4 = *piVar6;
      iVar2 = -iVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return *DAT_002e2130;
    }
  }
  return iVar2;
}
