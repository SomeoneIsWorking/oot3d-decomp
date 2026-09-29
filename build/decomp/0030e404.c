// OoT3D decomp @ 0030e404  name=FUN_0030e404  size=272

int FUN_0030e404(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;

  piVar6 = (int *)(param_1 + 0xc);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x10)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_0030e458;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_0030e458:
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    else {
      FUN_003351e8(piVar6);
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if ((int *)*param_2 == param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if (*(int **)(param_1 + 8) == param_2) {
      *(int *)(param_1 + 8) = (*(int **)(param_1 + 8))[1];
    }
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
  }
  param_2[1] = 0;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    do {
      iVar4 = *piVar6;
      iVar2 = -iVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar2;
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return *DAT_0030e514;
    }
  }
  return iVar2;
}
