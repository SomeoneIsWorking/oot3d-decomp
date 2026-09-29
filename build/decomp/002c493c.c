// OoT3D decomp @ 002c493c  name=FUN_002c493c  size=256

int FUN_002c493c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;

  piVar6 = (int *)(param_1 + 0x40);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x44)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_002c4990;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_002c4990:
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x44) = uVar3;
    }
    else {
      FUN_003351e8(piVar6);
    }
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  iVar2 = param_1 + param_2 * 8;
  if (*(int *)(iVar2 + 0x30) != 0) {
    FUN_0049375c();
  }
  if (*(int *)(iVar2 + 0x34) != 0) {
    FUN_004938e0();
  }
  *(undefined4 *)(iVar2 + 0x30) = 0;
  uVar3 = DAT_002c4a3c;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  FUN_002c3580(uVar3,param_2,0);
  iVar2 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    do {
      iVar4 = *piVar6;
      iVar2 = -iVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar2;
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return *DAT_002c4a40;
    }
  }
  return iVar2;
}
