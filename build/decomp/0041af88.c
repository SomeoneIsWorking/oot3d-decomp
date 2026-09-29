// OoT3D decomp @ 0041af88  name=FUN_0041af88  size=492

void FUN_0041af88(undefined4 param_1)

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

  uVar1 = DAT_0041b17c;
  uVar4 = DAT_0041b178;
  if (((*DAT_0041b174 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_0041b174), puVar2 = DAT_0041b180, iVar3 != 0)) {
    *DAT_0041b180 = uVar1;
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
  FUN_00324744(auStack_9c,DAT_0041b180);
  local_54 = uVar4;
  local_3c = uVar4;
  local_38 = uVar4;
  local_2c = uVar4;
  local_28 = uVar4;
  local_24 = uVar4;
  local_20 = uVar1;
  local_40 = uVar1;
  local_34 = DAT_0041b188;
  local_30 = DAT_0041b194;
  local_5c = uVar4;
  local_58 = DAT_0041b190;
  local_50 = uVar1;
  local_4c = DAT_0041b198;
  local_48 = DAT_0041b19c;
  local_44 = DAT_0041b19c;
  uVar4 = extraout_r1;
  if (((*DAT_0041b1a0 & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_0041b1a0), uVar4 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0))
  {
    FUN_0036788c(DAT_0041b1a4);
    uVar4 = DAT_0041b1ac;
  }
  uVar1 = DAT_0041b1b0;
  FUN_0032471c(DAT_0041b1b0,uVar4);
  FUN_003246ec(uVar1,&local_5c,auStack_9c);
  FUN_003246bc(uVar1,auStack_9c);
  FUN_002f9c74(uVar1);
  FUN_002fea30(param_1,6);
  return;
}
