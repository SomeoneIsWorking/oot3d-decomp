// OoT3D decomp @ 00485a14  name=FUN_00485a14  size=288

undefined4 FUN_00485a14(char param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;

  iVar2 = DAT_00485a30;
  if (param_2 == 0) {
    return 0;
  }
  FUN_002c493c();
  piVar6 = (int *)(iVar2 + 0x40);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar3 != *(int *)(iVar2 + 0x44)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_00489824;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_00489824:
    if (bVar5) {
      uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + 0x44) = uVar4;
    }
    else {
      FUN_003351e8(piVar6);
    }
  }
  *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
  *(int *)(iVar2 + param_1 * 8 + 0x30) = param_2;
  FUN_004936a0(param_2);
  FUN_002c3580(DAT_004898bc,(int)param_1,1);
  iVar3 = *(int *)(iVar2 + 0x48) + -1;
  *(int *)(iVar2 + 0x48) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x44) = 0;
    do {
      iVar3 = *piVar6;
      iVar2 = -iVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar2;
    if (iVar3 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
    }
  }
  return 1;
}
