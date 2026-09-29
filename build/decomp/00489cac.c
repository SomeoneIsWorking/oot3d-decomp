// OoT3D decomp @ 00489cac  name=FUN_00489cac  size=428

int FUN_00489cac(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_1c;
  undefined1 auStack_18 [4];

  bVar2 = true;
  *(undefined1 *)((int)param_1 + 0x77) = 1;
  software_interrupt(0x18);
  uVar6 = (uint)param_1[0xb] >> 0x1b;
  if ((param_1[0xb] & 0x80000000U) != 0) {
    uVar6 = uVar6 - 0x20;
  }
  if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
    FUN_003351b4();
  }
  local_1c = param_1[0x1b];
  uVar3 = FUN_0030dbd4(auStack_18,&local_1c,1,0,0xffffffff,0xffffffff);
  uVar6 = uVar3 >> 0x1b;
  if ((uVar3 & 0x80000000) != 0) {
    uVar6 = uVar6 - 0x20;
  }
  if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
    FUN_003351b4();
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (param_1[0x1b] != 0) {
    software_interrupt(0x23);
    param_1[0x1b] = 0;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar4 != param_1[1]) {
    do {
      if (*param_1 < 1) {
        ClearExclusiveLocal();
        bVar2 = false;
        goto LAB_00489d7c;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -*param_1;
LAB_00489d7c:
    if (bVar2) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[1] = iVar4;
    }
    else {
      FUN_003351e8(param_1);
    }
  }
  param_1[2] = param_1[2] + 1;
  FUN_0030dd98();
  FUN_00493e58();
  FUN_004939f8(param_1 + 0x16);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_0030e324(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    software_interrupt(0x23);
    param_1[0xb] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar4 = param_1[2] + -1;
  param_1[2] = iVar4;
  if (iVar4 == 0) {
    param_1[1] = 0;
    do {
      iVar5 = *param_1;
      iVar4 = -iVar5;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar4;
    if (iVar5 != -1 && 0 < iVar4) {
      iVar4 = *DAT_00489e58;
      software_interrupt(0x22);
    }
  }
  param_1[2] = -1;
  return iVar4;
}
