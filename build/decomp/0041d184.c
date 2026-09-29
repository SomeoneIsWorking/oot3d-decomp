// OoT3D decomp @ 0041d184  name=FUN_0041d184  size=512

void FUN_0041d184(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_9c [64];
  undefined4 local_5c;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  uVar1 = DAT_0041d38c;
  uVar4 = DAT_0041d388;
  if (*(char *)(param_1 + 9) != '\0') {
    if (((*DAT_0041d384 & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_0041d384), puVar2 = DAT_0041d390, iVar3 != 0)) {
      *DAT_0041d390 = uVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar4;
      puVar2[3] = uVar4;
      puVar2[4] = uVar4;
      puVar2[5] = uVar1;
      puVar2[6] = uVar4;
      puVar2[7] = uVar4;
      puVar2[8] = uVar4;
      puVar2[9] = uVar4;
      puVar2[10] = uVar1;
      puVar2[0xb] = uVar4;
      puVar2[0xc] = uVar4;
      puVar2[0xd] = uVar4;
      puVar2[0xe] = uVar4;
      puVar2[0xf] = uVar1;
    }
    FUN_00324744(auStack_9c,DAT_0041d390);
    local_54 = uVar4;
    local_3c = uVar4;
    local_38 = uVar4;
    local_2c = uVar4;
    local_28 = uVar4;
    local_24 = uVar4;
    local_20 = uVar1;
    local_40 = uVar1;
    local_34 = DAT_0041d398;
    local_30 = DAT_0041d3a4;
    local_5c = uVar4;
    local_58 = DAT_0041d3a0;
    local_50 = uVar1;
    local_4c = DAT_0041d3a8;
    local_48 = DAT_0041d3ac;
    local_44 = DAT_0041d3ac;
    uVar4 = extraout_r1;
    if (((*DAT_0041d3b0 & 1) == 0) &&
       (uVar5 = FUN_003679b4(DAT_0041d3b0), uVar4 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0
       )) {
      FUN_0036788c(DAT_0041d3b4);
      uVar4 = DAT_0041d3bc;
    }
    uVar1 = DAT_0041d3c0;
    FUN_0032471c(DAT_0041d3c0,uVar4);
    FUN_003246ec(uVar1,&local_5c,auStack_9c);
    FUN_003246bc(uVar1,auStack_9c);
    FUN_002f9c74(uVar1);
    if (*(char *)(param_1 + 10) != '\0') {
      FUN_002fde64(param_1 + 0x918);
    }
  }
  return;
}
