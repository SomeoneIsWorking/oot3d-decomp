// OoT3D decomp @ 002c198c  name=FUN_002c198c  size=292

int FUN_002c198c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;

  piVar6 = (int *)(param_1 + 0x40);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x44)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_002c19e8;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_002c19e8:
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x44) = uVar3;
    }
    else {
      FUN_003351e8(piVar6);
    }
  }
  iVar4 = param_1 + param_2 * 8;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  local_28 = param_3 + 0x280;
  local_24 = param_3 + 0x500;
  local_20 = param_3 + 0x780;
  iVar2 = *(int *)(iVar4 + 0x30);
  local_2c = param_3;
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar4 + 0x34);
    if (iVar2 != 0) {
      FUN_004a0318(iVar2,&local_2c);
    }
  }
  else {
    FUN_004a020c(iVar2,&local_2c);
  }
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
      iVar2 = *DAT_002c1ab0;
      software_interrupt(0x22);
    }
  }
  return iVar2;
}
