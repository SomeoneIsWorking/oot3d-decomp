// OoT3D decomp @ 004670e4  name=FUN_004670e4  size=664

void FUN_004670e4(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  short sVar8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  ushort *local_3b4;
  ushort local_2ac [246];
  undefined4 local_c0;
  undefined4 local_bc [40];
  
  iVar4 = FUN_00313ce0(0x20);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002fc694(DAT_00467380,DAT_0046737c,iVar4,0x29);
  }
  puVar3 = DAT_00467384;
  puVar6 = DAT_00467384 + 0x74;
  DAT_00467384[3] = uVar5;
  FUN_002fc534(uVar5,puVar3 + 0x1c,puVar6,0x29,0);
  FUN_002fc40c(puVar3[3],puVar3 + 0x124,puVar3 + 0xcc,0x29,0);
  puVar6 = &local_c0;
  local_c0 = DAT_00467388;
  iVar4 = 0x14;
  do {
    puVar6[1] = DAT_00467388;
    puVar6 = puVar6 + 2;
    iVar4 = iVar4 + -1;
    *puVar6 = DAT_00467388;
  } while (iVar4 != 0);
  FUN_002fcdec(puVar3[3],&local_c0,0x29,0);
  puVar7 = local_2ac;
  sVar8 = 0;
  iVar4 = 0x29;
  do {
    *puVar7 = (ushort)DAT_0046738c & sVar8 << 2;
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
  FUN_00371738(&local_3c4,DAT_00467390,0x118);
  local_3c4 = FUN_002fc3fc(puVar3[3],0);
  local_3c0 = FUN_002fc3f0(puVar3[3],0);
  local_3bc = FUN_002fc3e4(puVar3[3],0);
  local_3b4 = local_2ac;
  iVar4 = (**(code **)(*(int *)*DAT_00467394 + 8))((int *)*DAT_00467394,0x1b8);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_00348f34(iVar4,&local_3c4);
  }
  *puVar3 = uVar5;
  uVar5 = FUN_002e11d0(4);
  FUN_00348a64(*puVar3,0,uVar5,DAT_0046739c,DAT_0046739c,DAT_00467398,DAT_00467398);
  if (((*DAT_004673a0 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_004673a0), iVar4 != 0)) {
    FUN_0036788c(DAT_004673a4);
  }
  iVar4 = FUN_0034897c(*(undefined4 *)(DAT_004673b0 + 0x47c),*puVar3,0);
  puVar3[1] = iVar4;
  *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 2;
  iVar4 = FUN_00313ce0(DAT_004673b4);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002f8ee4(iVar4,0x1a,7,0);
  }
  puVar3[4] = uVar5;
  iVar4 = FUN_00313ce0(0x38);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002f2448(iVar4,0,1);
  }
  puVar3[5] = uVar5;
  iVar4 = FUN_00313ce0(0x14);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002db6a0(iVar4,4);
  }
  puVar3[2] = uVar5;
  FUN_002fcc88(DAT_004673bc,DAT_004673b8);
  puVar3[9] = 0xffffffff;
  puVar3[8] = 6;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  FUN_002f8af4();
  return;
}

