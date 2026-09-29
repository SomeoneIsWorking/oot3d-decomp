// OoT3D decomp @ 003243a8  name=FUN_003243a8  size=716

void FUN_003243a8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d4 [64];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [48];

  uVar1 = DAT_0032467c;
  uVar5 = DAT_00324678;
  if (((*DAT_00324674 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00324674), puVar2 = DAT_00324680, iVar3 != 0)) {
    *DAT_00324680 = uVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
    puVar2[3] = uVar5;
    puVar2[4] = uVar5;
    puVar2[5] = uVar1;
    puVar2[6] = uVar5;
    puVar2[7] = uVar5;
    puVar2[8] = uVar5;
    puVar2[9] = uVar5;
    puVar2[10] = uVar1;
    puVar2[0xb] = uVar5;
  }
  FUN_00372224(auStack_48,DAT_00324680);
  iVar3 = 0;
  local_54 = uVar5;
  local_50 = uVar5;
  local_4c = uVar5;
  do {
    piVar4 = *(int **)(param_1 + iVar3 * 4 + 0x424);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,auStack_48,auStack_48,&local_54);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x3b);
  if (((*DAT_00324684 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00324684), puVar2 = DAT_00324688, iVar3 != 0)) {
    *DAT_00324688 = uVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
    puVar2[3] = uVar5;
    puVar2[4] = uVar5;
    puVar2[5] = uVar1;
    puVar2[6] = uVar5;
    puVar2[7] = uVar5;
    puVar2[8] = uVar5;
    puVar2[9] = uVar5;
    puVar2[10] = uVar1;
    puVar2[0xb] = uVar5;
    puVar2[0xc] = uVar5;
    puVar2[0xd] = uVar5;
    puVar2[0xe] = uVar5;
    puVar2[0xf] = uVar1;
  }
  FUN_00324744(auStack_d4,DAT_00324688);
  local_8c = uVar5;
  local_74 = uVar5;
  local_70 = uVar5;
  local_64 = uVar5;
  local_60 = uVar5;
  local_5c = uVar5;
  local_58 = uVar1;
  local_78 = uVar1;
  local_6c = DAT_00324690;
  local_68 = DAT_0032469c;
  local_94 = uVar5;
  local_90 = DAT_00324698;
  local_88 = uVar1;
  local_84 = DAT_003246a0;
  local_80 = DAT_003246a4;
  local_7c = DAT_003246a4;
  uVar5 = extraout_r1;
  if (((*DAT_003246a8 & 1) == 0) &&
     (uVar6 = FUN_003679b4(DAT_003246a8), uVar5 = (int)((ulonglong)uVar6 >> 0x20), (int)uVar6 != 0))
  {
    FUN_0036788c(DAT_003246ac);
    uVar5 = DAT_003246b4;
  }
  uVar1 = DAT_003246b8;
  FUN_0032471c(DAT_003246b8,uVar5);
  FUN_003246ec(uVar1,&local_94,auStack_d4);
  FUN_003246bc(uVar1,auStack_d4);
  FUN_002f9c74(uVar1);
  return;
}
