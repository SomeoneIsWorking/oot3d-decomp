// OoT3D decomp @ 00401950  name=FUN_00401950  size=664

int FUN_00401950(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;

  bVar2 = false;
  local_1c = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != 0) {
    do {
      if (*param_1 < 1) {
        ClearExclusiveLocal();
        goto LAB_004019ac;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -*param_1;
    bVar2 = true;
LAB_004019ac:
    if (bVar2) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[1] = iVar3;
    }
    else {
      FUN_003351e8(param_1);
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_24 = (int *)0x0;
  uVar4 = FUN_0030dd64(&local_24,0);
  if (-1 < (int)uVar4) {
    param_1[0xb] = (int)local_24;
    uVar4 = 0;
  }
  uVar7 = uVar4 >> 0x1b;
  if ((uVar4 & 0x80000000) != 0) {
    uVar7 = uVar7 - 0x20;
  }
  if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
    FUN_003351b4();
  }
  *(undefined1 *)((int)param_1 + 0x77) = 0;
  piVar5 = param_1 + 0x1a;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = -1;
  uVar6 = FUN_0030dd98(piVar5,iVar3);
  iVar3 = FUN_0030dd88();
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  iVar3 = FUN_00402144();
  if (iVar3 != 0) {
    uVar4 = uVar4 | 4;
  }
  iVar3 = FUN_004020f0(uVar6,param_1[0xb],uVar4,&local_1c,&local_20);
  *(char *)(param_1 + 0x1d) = (char)local_20;
  FUN_0030dce0(param_1 + 0xe,local_1c,0x1000,0);
  param_1[0xc] = param_1[0xb];
  param_1[0xd] = param_1[0x10] + local_20 * 0x40;
  FUN_00401804(param_1 + 0x16,param_1[0x10] + local_20 * 0x200 + 0x800);
  iVar8 = param_1[0x10] + local_20 * 0x80 + 0x200;
  param_1[0x17] = iVar8;
  param_1[0x18] = iVar8 + 0x40;
  if (iVar3 == 0x2a07) {
    *(undefined1 *)((int)param_1 + 0x75) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x75) = 0;
  }
  local_34 = 4;
  local_30 = DAT_00401bec;
  local_2c = DAT_00401bf0;
  local_28 = DAT_00401bf4;
  local_24 = param_1;
  uVar7 = FUN_0030dbf8(param_1 + 0x1b,&local_34,DAT_00401be8,&local_24,param_1 + 0x41e,DAT_00401bf8,
                       0xfffffffe,0);
  uVar4 = uVar7 >> 0x1b;
  if ((uVar7 & 0x80000000) != 0) {
    uVar4 = uVar4 - 0x20;
  }
  if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
    FUN_003351b4();
  }
  iVar3 = param_1[2] + -1;
  param_1[2] = iVar3;
  if (iVar3 == 0) {
    param_1[1] = 0;
    do {
      iVar8 = *param_1;
      iVar3 = -iVar8;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar3;
    if (iVar8 != -1 && 0 < iVar3) {
      iVar3 = *DAT_00401bfc;
      software_interrupt(0x22);
    }
  }
  return iVar3;
}
