// OoT3D decomp @ 0030e6a8  name=FUN_0030e6a8  size=268

undefined4 * FUN_0030e6a8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;

  piVar6 = (int *)(param_1 + 0x30);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (iVar2 != *(int *)(param_1 + 0x34)) {
    do {
      if (*piVar6 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_0030e6fc;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = -*piVar6;
LAB_0030e6fc:
    if (bVar5) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x34) = uVar3;
    }
    else {
      FUN_003351e8(piVar6);
    }
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar7 = *(undefined4 **)(param_1 + 0x24);
  if (puVar7 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = *puVar7;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      FUN_00436314(puVar7,(int)puVar7 + *(int *)(param_1 + 0x18),0);
    }
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
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
    }
  }
  return puVar7;
}
