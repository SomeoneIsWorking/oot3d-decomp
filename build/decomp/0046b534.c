// OoT3D decomp @ 0046b534  name=FUN_0046b534  size=1020

void FUN_0046b534(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  short sVar9;
  int iVar10;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  ushort *local_37c;
  ushort local_274 [222];
  undefined4 local_b8;
  undefined4 local_b4 [36];
  
  iVar5 = FUN_00313ce0(0x20);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_002fc694(DAT_0046b904,DAT_0046b904,iVar5,0x25);
  }
  iVar5 = DAT_0046b908;
  iVar10 = DAT_0046b908 + 0x1e8;
  *(undefined4 *)(DAT_0046b908 + 0x24) = uVar6;
  FUN_002fc534(uVar6,iVar5 + 0xc0,iVar10,0x25,0);
  FUN_002fc40c(*(undefined4 *)(iVar5 + 0x24),iVar5 + 0x438,iVar5 + 0x310,0x25,0);
  puVar7 = &local_b8;
  local_b8 = DAT_0046b90c;
  iVar10 = 0x12;
  do {
    puVar7[1] = DAT_0046b90c;
    puVar7 = puVar7 + 2;
    iVar10 = iVar10 + -1;
    *puVar7 = DAT_0046b90c;
  } while (iVar10 != 0);
  FUN_002fcdec(*(undefined4 *)(iVar5 + 0x24),&local_b8,0x25,0);
  puVar8 = local_274;
  sVar9 = 0;
  iVar10 = 0x25;
  do {
    *puVar8 = (ushort)DAT_0046b910 & sVar9 << 2;
    uVar1 = sVar9 * 4 + 2;
    uVar2 = sVar9 * 4 + 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar2;
    puVar8[4] = uVar1;
    puVar8[5] = sVar9 * 4 + 3;
    iVar10 = iVar10 + -1;
    puVar8 = puVar8 + 6;
    sVar9 = sVar9 + 1;
  } while (iVar10 != 0);
  FUN_00371738(&local_38c,DAT_0046b914,0x118);
  local_38c = FUN_002fc3fc(*(undefined4 *)(iVar5 + 0x24),0);
  local_388 = FUN_002fc3f0(*(undefined4 *)(iVar5 + 0x24),0);
  local_384 = FUN_002fc3e4(*(undefined4 *)(iVar5 + 0x24),0);
  local_37c = local_274;
  iVar10 = (**(code **)(*(int *)*DAT_0046b918 + 8))((int *)*DAT_0046b918,0x1b8);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_00348f34(iVar10,&local_38c);
  }
  *(undefined4 *)(iVar5 + 0x1c) = uVar6;
  uVar6 = FUN_002e11d0(3);
  FUN_00348a64(*(undefined4 *)(iVar5 + 0x1c),0,uVar6,DAT_0046b920,DAT_0046b920,DAT_0046b91c,
               DAT_0046b91c);
  if (((*DAT_0046b924 & 1) == 0) && (iVar10 = FUN_003679b4(DAT_0046b924), iVar10 != 0)) {
    FUN_0036788c(DAT_0046b928);
  }
  iVar10 = FUN_0034897c(*(undefined4 *)(DAT_0046b934 + 0x47c),*(undefined4 *)(iVar5 + 0x1c),0);
  *(int *)(iVar5 + 0x20) = iVar10;
  uVar3 = DAT_0046b938;
  *(uint *)(iVar10 + 0x178) = *(uint *)(iVar10 + 0x178) | 2;
  iVar10 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f8ee4(iVar10,0x18,0);
  }
  *(undefined4 *)(iVar5 + 0x3c) = uVar6;
  iVar10 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f8ee4(iVar10,4,0);
  }
  *(undefined4 *)(iVar5 + 0x40) = uVar6;
  iVar10 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f8ee4(iVar10,1,0);
  }
  *(undefined4 *)(iVar5 + 0x44) = uVar6;
  iVar10 = FUN_00313ce0(uVar3);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f8ee4(iVar10,1,0);
  }
  uVar3 = DAT_0046b93c;
  *(undefined4 *)(iVar5 + 0x48) = uVar6;
  FUN_002f8ce0(uVar3,*(undefined4 *)(iVar5 + 0x44),0);
  FUN_002f8ce0(uVar3,*(undefined4 *)(iVar5 + 0x48),0);
  iVar10 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f2448(iVar10,0,1);
  }
  puVar7 = DAT_0046b940;
  *DAT_0046b940 = uVar6;
  iVar10 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f2448(iVar10,1);
  }
  uVar4 = DAT_0046b944;
  iVar10 = 0;
  puVar7[1] = uVar6;
  do {
    FUN_002f79b4(uVar4,uVar4,puVar7[iVar10]);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  iVar10 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f2448(iVar10,0,1);
  }
  *(undefined4 *)(iVar5 + 0x28) = uVar6;
  FUN_002f79b4(uVar4,uVar4);
  iVar10 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f2448(iVar10,6,1);
  }
  *(undefined4 *)(iVar5 + 0x2c) = uVar6;
  iVar10 = FUN_00313ce0(0xc);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_0048044c();
  }
  *(undefined4 *)(iVar5 + 0x4c) = uVar6;
  iVar10 = FUN_00313ce0(0x38);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = FUN_002f2448(iVar10,8,4);
  }
  *(undefined4 *)(iVar5 + 0x30) = uVar6;
  FUN_002f7af4(uVar3,uVar3);
  FUN_002eb05c();
  FUN_002eb628();
  return;
}

