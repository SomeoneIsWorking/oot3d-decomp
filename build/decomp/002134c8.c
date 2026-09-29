// OoT3D decomp @ 002134c8  name=FUN_002134c8  size=328

undefined4 FUN_002134c8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;

  iVar6 = *(int *)(param_1 + 0x1c);
  bVar8 = *(uint *)(param_1 + 0x18) < param_3;
  if ((int)(iVar6 - (param_4 + (uint)bVar8)) < 0 !=
      (SBORROW4(iVar6,param_4) != SBORROW4(iVar6 - param_4,(uint)bVar8))) {
    return 0;
  }
  piVar7 = (int *)(param_1 + 0x48);
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar8 = true;
  if (iVar6 != *(int *)(param_1 + 0x4c)) {
    do {
      if (*piVar7 < 1) {
        ClearExclusiveLocal();
        bVar8 = false;
        goto LAB_00213534;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = -*piVar7;
LAB_00213534:
    if (bVar8) {
      uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
    }
    else {
      FUN_003351e8(piVar7);
    }
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x24) = param_4;
  *(uint *)(param_1 + 0x20) = param_3;
  *(uint *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_4;
  pcVar4 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
  (*pcVar4)(*(int **)(param_1 + 0x40),pcVar4,param_3,param_4,0);
  piVar7 = (int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    do {
      iVar3 = *piVar7;
      iVar6 = -iVar3;
      bVar8 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar8);
    *piVar7 = iVar6;
    if (iVar3 != -1 && 0 < iVar6) {
      software_interrupt(0x22);
    }
  }
  software_interrupt(0x18);
  uVar5 = *(uint *)(param_1 + 0x54) >> 0x1b;
  if ((*(uint *)(param_1 + 0x54) & 0x80000000) != 0) {
    uVar5 = uVar5 - 0x20;
  }
  if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
    FUN_003351b4();
  }
  return 1;
}
