// OoT3D decomp @ 00480bb8  name=FUN_00480bb8  size=668

void FUN_00480bb8(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  short sVar8;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  ushort *local_304;
  ushort local_1fc [178];
  undefined4 uStack_98;
  undefined4 local_94 [30];

  iVar4 = FUN_00313ce0(0x20);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002fc694(DAT_00480e58,DAT_00480e54,iVar4,0x1e);
  }
  puVar3 = DAT_00480e5c;
  puVar6 = DAT_00480e5c + 0x1f8;
  DAT_00480e5c[4] = uVar5;
  FUN_002fc534(uVar5,puVar3 + 0x1bc,puVar6,0x1e,0);
  FUN_002fc40c(puVar3[4],puVar3 + 0x270,puVar3 + 0x234,0x1e,0);
  puVar6 = &uStack_98;
  iVar4 = 0xf;
  do {
    puVar6[1] = DAT_00480e60;
    puVar6 = puVar6 + 2;
    iVar4 = iVar4 + -1;
    *puVar6 = DAT_00480e60;
  } while (iVar4 != 0);
  FUN_002fcdec(puVar3[4],local_94,0x1e,0);
  puVar7 = local_1fc;
  sVar8 = 0;
  iVar4 = 0x1e;
  do {
    *puVar7 = (ushort)DAT_00480e64 & sVar8 << 2;
    uVar1 = sVar8 * 4 + 2;
    uVar2 = sVar8 * 4 + 1;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar2;
    puVar7[4] = uVar1;
    puVar7[5] = sVar8 * 4 + 3;
    iVar4 = iVar4 + -1;
    puVar7 = puVar7 + 6;
    sVar8 = sVar8 + 1;
  } while (iVar4 != 0);
  FUN_00371738(&local_314,DAT_00480e68,0x118);
  local_314 = FUN_002fc3fc(puVar3[4],0);
  local_310 = FUN_002fc3f0(puVar3[4],0);
  local_30c = FUN_002fc3e4(puVar3[4],0);
  local_304 = local_1fc;
  iVar4 = (**(code **)(*(int *)*DAT_00480e6c + 8))((int *)*DAT_00480e6c,0x1b8);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_00348f34(iVar4,&local_314);
  }
  *puVar3 = uVar5;
  uVar5 = FUN_002e11d0(7);
  FUN_00348a64(*puVar3,0,uVar5,DAT_00480e74,DAT_00480e74,DAT_00480e70,DAT_00480e70);
  if (((*DAT_00480e78 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00480e78), iVar4 != 0)) {
    FUN_0036788c(DAT_00480e7c);
  }
  iVar4 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_00480e88 + 0x47c),*puVar3,0);
  puVar3[1] = iVar4;
  *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 2;
  iVar4 = FUN_00313ce0(0x10);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002d2190(iVar4,0);
  }
  puVar3[10] = uVar5;
  iVar4 = FUN_00313ce0(0x50);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002d1e30(iVar4,0);
  }
  puVar3[0xb] = uVar5;
  iVar4 = FUN_00313ce0(0x38);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002f2448(iVar4,0,1);
  }
  puVar3[0x13] = uVar5;
  FUN_002f7af4(DAT_00480e90,DAT_00480e8c);
  FUN_002f79b4(DAT_00480e94,DAT_00480e94,puVar3[0x13]);
  puVar3[0x12] = 10;
  FUN_002f06b8();
  iVar4 = FUN_00313ce0(0x10);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002d1af8(iVar4,0);
  }
  puVar3[0x14] = uVar5;
  return;
}
