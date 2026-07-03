// OoT3D decomp @ 0046ac98  name=FUN_0046ac98  size=1012

void FUN_0046ac98(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  ushort *local_6e8;
  ushort local_5e0 [550];
  undefined4 uStack_194;
  undefined4 local_190 [92];
  
  iVar5 = FUN_00313ce0(0x20);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_002fc694(DAT_0046b060,DAT_0046b05c,iVar5,0x5c);
  }
  iVar5 = DAT_0046b064;
  iVar8 = DAT_0046b064 + 0x364;
  *(undefined4 *)(DAT_0046b064 + 4) = uVar6;
  FUN_002fc534(uVar6,iVar5 + 0x84,iVar8,0x5c,0);
  FUN_002fc40c(*(undefined4 *)(iVar5 + 4),DAT_0046b068 + 0x2e0,DAT_0046b068,0x5c,0);
  puVar7 = &uStack_194;
  iVar8 = 0x2e;
  do {
    puVar7[1] = DAT_0046b06c;
    puVar7 = puVar7 + 2;
    iVar8 = iVar8 + -1;
    *puVar7 = DAT_0046b06c;
  } while (iVar8 != 0);
  FUN_002fcdec(*(undefined4 *)(iVar5 + 4),local_190,0x5c,0);
  sVar4 = 0;
  iVar8 = 0x5c;
  puVar9 = local_5e0;
  do {
    *puVar9 = (ushort)DAT_0046b070 & sVar4 << 2;
    uVar1 = sVar4 * 4 + 2;
    uVar2 = sVar4 * 4 + 1;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar2;
    puVar9[4] = uVar1;
    puVar9[5] = sVar4 * 4 + 3;
    iVar8 = iVar8 + -1;
    puVar9 = puVar9 + 6;
    sVar4 = sVar4 + 1;
  } while (iVar8 != 0);
  FUN_00371738(&local_6f8,DAT_0046b074,0x118);
  local_6f8 = FUN_002fc3fc(*(undefined4 *)(iVar5 + 4),0);
  local_6f4 = FUN_002fc3f0(*(undefined4 *)(iVar5 + 4),0);
  local_6f0 = FUN_002fc3e4(*(undefined4 *)(iVar5 + 4),0);
  local_6e8 = local_5e0;
  iVar8 = (**(code **)(*(int *)*DAT_0046b078 + 8))((int *)*DAT_0046b078,0x1b8);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_00348f34(iVar8,&local_6f8);
  }
  *(undefined4 *)(iVar5 + 8) = uVar6;
  uVar6 = FUN_002e11d0(2);
  FUN_00348a64(*(undefined4 *)(iVar5 + 8),0,uVar6,DAT_0046b080,DAT_0046b080,DAT_0046b07c,
               DAT_0046b07c);
  if (((*DAT_0046b084 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_0046b084), iVar8 != 0)) {
    FUN_0036788c(DAT_0046b088);
  }
  iVar8 = FUN_0034897c(*(undefined4 *)(DAT_0046b094 + 0x47c),*(undefined4 *)(iVar5 + 8),0);
  *(int *)(iVar5 + 0xc) = iVar8;
  uVar3 = DAT_0046b098;
  *(uint *)(iVar8 + 0x178) = *(uint *)(iVar8 + 0x178) | 2;
  iVar8 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002f8ee4(iVar8,5,0);
  }
  *(undefined4 *)(iVar5 + 0x14) = uVar6;
  iVar8 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002f2448(iVar8,7,4);
  }
  *(undefined4 *)(iVar5 + 0x30) = uVar6;
  FUN_002f7af4(DAT_0046b09c,DAT_0046b09c);
  *(undefined4 *)(iVar5 + 0x6c) = 0x51;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x60) = 0;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  *(undefined4 *)(iVar5 + 0x74) = 0;
  *(undefined4 *)(iVar5 + 0x78) = 1;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  iVar8 = FUN_00313ce0(0x14);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002db6a0(iVar8,4);
  }
  *(undefined4 *)(iVar5 + 0x1c) = uVar6;
  FUN_002fcc88(DAT_0046b0a4,DAT_0046b0a0);
  iVar8 = FUN_00313ce0(0x14);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002db6a0(iVar8,4);
  }
  *(undefined4 *)(iVar5 + 0x20) = uVar6;
  FUN_002fcc88(DAT_0046b0ac,DAT_0046b0a8);
  iVar8 = FUN_00313ce0(0x10);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002d2190(iVar8,1);
  }
  *(undefined4 *)(iVar5 + 0x24) = uVar6;
  iVar8 = FUN_00313ce0(0x50);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002d1e30(iVar8,1);
  }
  *(undefined4 *)(iVar5 + 0x28) = uVar6;
  iVar8 = FUN_00313ce0(0x10);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002d1af8(iVar8,1);
  }
  *(undefined4 *)(iVar5 + 0x2c) = uVar6;
  iVar8 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar8 != 0) {
    uVar6 = FUN_002f8ee4(iVar8,1,8,0);
  }
  *(undefined4 *)(iVar5 + 0x18) = uVar6;
  local_700 = *DAT_0046b0b0;
  uStack_6fc = DAT_0046b0b0[1];
  local_708 = 0;
  uStack_704 = 0;
  FUN_002fc534(*(undefined4 *)(iVar5 + 4),&local_700,&local_708,1,0x53);
  FUN_002fc534(*(undefined4 *)(iVar5 + 4),&local_700,&local_708,1,0x54);
  FUN_002fc534(*(undefined4 *)(iVar5 + 4),&local_700,&local_708,1,0x55);
  *(undefined4 *)(iVar5 + 0x34) = 0;
  return;
}

