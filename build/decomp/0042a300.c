// OoT3D decomp @ 0042a300  name=FUN_0042a300  size=512

void FUN_0042a300(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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

  uVar2 = DAT_0042a508;
  uVar5 = DAT_0042a504;
  bVar6 = *(char *)(param_1 + 0xc) != '\0';
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0xd);
  }
  if (bVar6 && cVar1 != '\0') {
    if (((*DAT_0042a500 & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_0042a500), puVar3 = DAT_0042a50c, iVar4 != 0)) {
      *DAT_0042a50c = uVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar5;
      puVar3[3] = uVar5;
      puVar3[4] = uVar5;
      puVar3[5] = uVar2;
      puVar3[6] = uVar5;
      puVar3[7] = uVar5;
      puVar3[8] = uVar5;
      puVar3[9] = uVar5;
      puVar3[10] = uVar2;
      puVar3[0xb] = uVar5;
      puVar3[0xc] = uVar5;
      puVar3[0xd] = uVar5;
      puVar3[0xe] = uVar5;
      puVar3[0xf] = uVar2;
    }
    FUN_00324744(auStack_9c,DAT_0042a50c);
    local_54 = uVar5;
    local_3c = uVar5;
    local_38 = uVar5;
    local_2c = uVar5;
    local_28 = uVar5;
    local_24 = uVar5;
    local_20 = uVar2;
    local_40 = uVar2;
    local_34 = DAT_0042a514;
    local_30 = DAT_0042a520;
    local_5c = uVar5;
    local_58 = DAT_0042a51c;
    local_50 = uVar2;
    local_4c = DAT_0042a524;
    local_48 = DAT_0042a528;
    local_44 = DAT_0042a528;
    uVar5 = extraout_r1;
    if (((*DAT_0042a52c & 1) == 0) &&
       (uVar7 = FUN_003679b4(DAT_0042a52c), uVar5 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0
       )) {
      FUN_0036788c(DAT_0042a530);
      uVar5 = DAT_0042a538;
    }
    uVar2 = DAT_0042a53c;
    FUN_0032471c(DAT_0042a53c,uVar5);
    FUN_003246ec(uVar2,&local_5c,auStack_9c);
    FUN_003246bc(uVar2,auStack_9c);
    FUN_002f9c74(uVar2);
    FUN_002fde64(param_1 + 0x600);
  }
  return;
}
