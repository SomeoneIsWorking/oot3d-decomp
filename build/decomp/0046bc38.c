// OoT3D decomp @ 0046bc38  name=FUN_0046bc38  size=288

int FUN_0046bc38(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;

  iVar3 = FUN_0030c7cc();
  piVar8 = (int *)(iVar3 + 0x1b8);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar7 = true;
  if (iVar4 != *(int *)(iVar3 + 0x1bc)) {
    do {
      if (*piVar8 < 1) {
        ClearExclusiveLocal();
        bVar7 = false;
        goto LAB_0046bc8c;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = -*piVar8;
LAB_0046bc8c:
    coproc_moveto_Data_Synchronization(0);
    if (bVar7) {
      uVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar3 + 0x1bc) = uVar5;
    }
    else {
      FUN_0030e288(piVar8);
    }
  }
  *(int *)(iVar3 + 0x1c0) = *(int *)(iVar3 + 0x1c0) + 1;
  piVar8 = *(int **)(param_1 + 8);
  iVar3 = 0;
  if (piVar8 != (int *)(param_1 + 8)) {
    do {
      piVar1 = piVar8 + -0x14;
      piVar8 = (int *)*piVar8;
      iVar3 = iVar3 + *piVar1;
    } while (piVar8 != (int *)(param_1 + 8));
  }
  iVar4 = FUN_0030c7cc();
  piVar8 = (int *)(iVar4 + 0x1b8);
  iVar6 = *(int *)(iVar4 + 0x1c0) + -1;
  *(int *)(iVar4 + 0x1c0) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(iVar4 + 0x1bc) = 0;
    do {
      iVar6 = *piVar8;
      iVar4 = -iVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar7);
    *piVar8 = iVar4;
    coproc_moveto_Data_Synchronization(0);
    if (iVar6 != -1 && 0 < iVar4) {
      software_interrupt(0x22);
    }
  }
  return iVar3;
}
