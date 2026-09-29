// OoT3D decomp @ 0041ec2c  name=FUN_0041ec2c  size=668

int FUN_0041ec2c(void)

{
  int iVar1;
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

  uVar2 = DAT_0041eed4;
  uVar5 = DAT_0041eed0;
  iVar1 = DAT_0041eec8;
  bVar6 = *(int *)(DAT_0041eec8 + 0x24) != 0;
  iVar4 = 0;
  if (bVar6) {
    iVar4 = *(int *)(DAT_0041eec8 + 0x1c);
  }
  if (bVar6 && iVar4 != 0) {
    if (((*DAT_0041eecc & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_0041eecc), puVar3 = DAT_0041eed8, iVar4 != 0)) {
      *DAT_0041eed8 = uVar2;
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
    FUN_00324744(auStack_9c,DAT_0041eed8);
    local_54 = uVar5;
    local_3c = uVar5;
    local_38 = uVar5;
    local_2c = uVar5;
    local_28 = uVar5;
    local_24 = uVar5;
    local_20 = uVar2;
    local_40 = uVar2;
    local_34 = DAT_0041eee0;
    local_30 = DAT_0041eeec;
    local_5c = uVar5;
    local_58 = DAT_0041eee8;
    local_50 = uVar2;
    local_4c = DAT_0041eef0;
    local_48 = DAT_0041eef4;
    local_44 = DAT_0041eef4;
    uVar5 = extraout_r1;
    if ((*DAT_0041eef8 & 1) == 0) {
      uVar7 = FUN_003679b4(DAT_0041eef8);
      uVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) {
        FUN_0036788c(DAT_0041eefc);
        uVar5 = DAT_0041ef04;
      }
    }
    uVar2 = DAT_0041ef08;
    FUN_0032471c(DAT_0041ef08,uVar5);
    FUN_003246ec(uVar2,&local_5c,auStack_9c);
    FUN_003246bc(uVar2,auStack_9c);
    FUN_002f9c74(uVar2);
    if (*(int *)(iVar1 + 0x20) == 0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))();
    }
    iVar4 = FUN_0042a7a0();
    if (iVar4 == 0) {
      FUN_0042f584();
      FUN_00434c5c();
      FUN_00424bfc();
      FUN_0042d9f0();
      FUN_00426748();
      FUN_00425298();
      FUN_00428924();
      FUN_00428c8c();
      FUN_00427c80();
    }
    iVar4 = 0;
    if (*(int *)(iVar1 + 0x20) != 0) {
      iVar4 = *DAT_0041ef0c;
    }
  }
  return iVar4;
}
