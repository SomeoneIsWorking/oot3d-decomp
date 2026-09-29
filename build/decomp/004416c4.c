// OoT3D decomp @ 004416c4  name=FUN_004416c4  size=876

void FUN_004416c4(int param_1,undefined4 param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined2 *local_1b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined4 auStack_80 [24];

  puVar1 = DAT_00441a30;
  if (((*DAT_00441a30 & 1) == 0) &&
     (uVar9 = FUN_003679b4(DAT_00441a30), param_2 = (undefined4)((ulonglong)uVar9 >> 0x20),
     (int)uVar9 != 0)) {
    FUN_0036788c(DAT_00441a34);
    param_2 = DAT_00441a3c;
  }
  FUN_0031025c(DAT_00441a34,param_2);
  FUN_002f233c();
  FUN_00371738(auStack_80,DAT_00441a40,0x60);
  puVar7 = DAT_00441a48;
  local_94 = 0;
  uStack_90 = 0;
  local_9c = DAT_00441a44[5];
  local_98 = DAT_00441a44[6];
  local_a4 = 0;
  uStack_a0 = 0;
  local_a8 = *DAT_00441a44;
  DAT_00441a48[0xd] = param_1;
  iVar3 = FUN_00313ce0(0x20);
  fVar2 = DAT_00441a4c;
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_002fc694(DAT_00441a4c,DAT_00441a4c,iVar3,1);
  }
  puVar7[6] = uVar4;
  FUN_002fc534(uVar4,&local_94,&local_9c,1,0);
  FUN_002fc40c(puVar7[6],&local_a4,&local_9c,1,0);
  FUN_002fcdec(puVar7[6],&local_a8,1,0);
  local_8c = 0;
  local_8a = 2;
  local_88 = 1;
  local_86 = 1;
  local_84 = 2;
  local_82 = 3;
  FUN_00371738(&local_1c0,DAT_00441a50,0x118);
  local_1c0 = FUN_002fc3fc(puVar7[6],0);
  local_1bc = FUN_002fc3f0(puVar7[6],0);
  local_1b8 = FUN_002fc3e4(puVar7[6],0);
  local_1b0 = &local_8c;
  iVar3 = (**(code **)(*(int *)*DAT_00441a54 + 8))((int *)*DAT_00441a54,0x1b8);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_00348f34(iVar3,&local_1c0);
  }
  puVar7[1] = uVar4;
  uVar5 = FUN_00301300(auStack_80[param_1],0,0);
  FUN_0031b9c0(uVar5,1);
  iVar3 = (**(code **)(*(int *)*DAT_00441a58 + 8))((int *)*DAT_00441a58,0x54);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_00303ea8(uVar5);
    uVar4 = FUN_003012b4(iVar3,uVar4,0);
  }
  *puVar7 = uVar4;
  FUN_00303ea8(uVar5);
  FUN_0034fc6c();
  FUN_0031b99c(uVar5);
  FUN_00348a64(puVar7[1],0,*puVar7,DAT_00441a60,DAT_00441a60,DAT_00441a5c,DAT_00441a5c);
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00441a30), iVar3 != 0)) {
    FUN_0036788c(DAT_00441a34);
  }
  iVar3 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_00441a64 + 0x47c),puVar7[1],0);
  puVar7[2] = iVar3;
  *(uint *)(iVar3 + 0x178) = *(uint *)(iVar3 + 0x178) | 2;
  if ((*(char *)(DAT_00441a68 + 0xe) == '\x01') && (puVar7[6] != 0)) {
    pfVar6 = (float *)FUN_002fc3fc(puVar7[6],0);
    fVar8 = *(float *)(DAT_00441a6c + param_1 * 4) +
            (DAT_00441a78 - *(float *)(DAT_00441a70 + param_1 * 8) * DAT_00441a74) + DAT_00441a7c;
    pfVar6[6] = fVar8;
    *pfVar6 = fVar8;
    pfVar6[9] = fVar8 + fVar2;
    pfVar6[3] = fVar8 + fVar2;
    puVar7 = (undefined4 *)FUN_002fc3f0(puVar7[6],0);
    uVar5 = DAT_00441a84;
    uVar4 = DAT_00441a80;
    *puVar7 = DAT_00441a80;
    puVar7[2] = uVar5;
    puVar7[4] = uVar4;
    puVar7[6] = uVar5;
  }
  return;
}
