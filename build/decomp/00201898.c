// OoT3D decomp @ 00201898  name=FUN_00201898  size=828

undefined4 FUN_00201898(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_88;
  undefined4 *puStack_84;
  undefined1 auStack_74 [20];
  undefined1 *local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;

  puVar6 = param_1 + 0x20;
  local_28 = param_1 + 0x51;
  iVar2 = FUN_0036c5bc(param_1[0x35],0);
  iVar3 = DAT_00201be4;
  local_60 = (undefined1 *)(iVar2 + 0xdc);
  puVar5 = param_1 + 4;
  if (*(int *)(DAT_00201be4 + 0x10) != 0) {
    return 0;
  }
  sVar1 = **(short **)
            (*(int *)(DAT_00201be8 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  *(short *)(param_1 + 3) = sVar1;
  *(int *)(iVar3 + 0x14) = (int)sVar1;
  switch(*(undefined2 *)((int)param_1 + 0x1a6)) {
  case 0:
    break;
  case 1:
    goto switchD_0020192c_caseD_1;
  case 2:
    sVar1 = *(short *)((int)param_1 + 0x1a) + -1;
    *(short *)((int)param_1 + 0x1a) = sVar1;
    if (-1 < sVar1) {
      return 1;
    }
    *(undefined2 *)((int)param_1 + 0x1a6) = 3;
    return 1;
  case 3:
    goto switchD_0020192c_caseD_3;
  default:
    goto switchD_0020192c_default;
  }
  *puVar5 = DAT_00201bec;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a6) = 1;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  if (((int)(short)*(ushort *)(param_1 + 2) & 0xf000U) != 0) {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 2) & 0xf000;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfff;
  }
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
switchD_0020192c_caseD_1:
  if (*(short *)((int)param_1 + 0x1a) < 1) {
switchD_0020192c_caseD_3:
    *(undefined2 *)(param_1 + 0x6a) = 0;
    if (*(short *)(param_1 + 6) == 0x1000) {
      FUN_00338680(iVar2,param_1);
      return 1;
    }
    if (*(short *)(param_1 + 6) != 0x2000) {
      return 1;
    }
    if (*(short *)((int)param_1 + 10) < 0x32) {
      sVar1 = 5;
    }
    else {
      sVar1 = (short)((uint)(*(short *)((int)param_1 + 10) * DAT_00201bfc) >> 0x10);
      sVar1 = (sVar1 >> 1) - (sVar1 >> 0xf);
    }
    local_88 = (undefined4 *)(int)*(short *)((int)param_1 + 0x1aa);
    FUN_00371808(param_1[0x35],0x3fc,(int)sVar1,0);
    return 1;
  }
  local_88 = param_1 + 5;
  puStack_84 = puVar5;
  iVar3 = FUN_00342ed8(&local_34,&local_5c,local_28,param_1[1]);
  if (iVar3 == 0) {
    local_88 = param_1 + 5;
    puStack_84 = puVar5;
    iVar3 = FUN_00342ed8(&local_40,&local_5c,local_28,*param_1);
    if (iVar3 != 0) goto LAB_002019e4;
  }
  else {
LAB_002019e4:
    *(undefined2 *)((int)param_1 + 0x1a6) = 2;
  }
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 == 1) {
    FUN_00338a2c(local_60,&local_34,&local_4c);
    puVar4 = local_60;
LAB_00201a78:
    FUN_00338a2c(puVar4,&local_40,&local_58);
  }
  else {
    if (sVar1 == 4) {
      iVar3 = param_1[0x36];
LAB_00201a44:
      FUN_00342ec0(&local_88,iVar3);
      FUN_00371738(auStack_74,&local_88,0x12);
      FUN_00338a2c(auStack_74,&local_34,&local_4c);
      puVar4 = auStack_74;
      goto LAB_00201a78;
    }
    if (sVar1 == 8) {
      iVar3 = param_1[0x3c];
      iVar2 = 8;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x13c);
      }
      if (iVar3 != 0 && iVar2 != 0) goto LAB_00201a44;
      param_1[0x3c] = 0;
      local_4c = param_1[0x23];
      local_48 = param_1[0x24];
      local_44 = param_1[0x25];
      local_58 = *puVar6;
      local_54 = param_1[0x21];
      local_50 = param_1[0x22];
    }
    else {
      local_4c = local_34;
      local_48 = local_30;
      local_44 = local_2c;
      local_58 = local_40;
      local_54 = local_3c;
      local_50 = local_38;
    }
  }
  param_1[0x29] = local_4c;
  param_1[0x2a] = local_48;
  param_1[0x2b] = local_44;
  param_1[0x23] = param_1[0x29];
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  if (*(short *)((int)param_1 + 0x16) == 0) {
    *puVar6 = local_58;
    param_1[0x21] = local_54;
    param_1[0x22] = local_50;
    *(undefined2 *)((int)param_1 + 0x16) = 1;
  }
  else {
    FUN_00367df4(DAT_00201bf4,DAT_00201bf4,DAT_00201bf0,&local_58,puVar6);
  }
  *(short *)((int)param_1 + 0x1a2) = (short)(int)(local_5c * DAT_00201bf8);
  *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + -1;
switchD_0020192c_default:
  return 1;
}
