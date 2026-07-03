// OoT3D decomp @ 00467ce0  name=FUN_00467ce0  size=644

void FUN_00467ce0(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  ushort *local_7e8;
  ushort local_6e0 [646];
  undefined4 uStack_1d4;
  undefined4 local_1d0 [108];
  
  iVar4 = FUN_00313ce0(0x20);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002fc694(DAT_00467f68,DAT_00467f64,iVar4,0x6c);
  }
  puVar2 = DAT_00467f6c;
  puVar6 = DAT_00467f6c + 0xf2;
  DAT_00467f6c[2] = uVar5;
  FUN_002fc534(uVar5,puVar2 + 0x1a,puVar6,0x6c,0);
  FUN_002fc40c(puVar2[2],DAT_00467f70 + 0x360,DAT_00467f70,0x6c,0);
  puVar6 = &uStack_1d4;
  iVar4 = 0x36;
  do {
    puVar6[1] = DAT_00467f74;
    puVar6 = puVar6 + 2;
    iVar4 = iVar4 + -1;
    *puVar6 = DAT_00467f74;
  } while (iVar4 != 0);
  FUN_002fcdec(puVar2[2],local_1d0,0x6c,0);
  sVar3 = 0;
  iVar4 = 0x6c;
  puVar8 = local_6e0;
  do {
    *puVar8 = (ushort)DAT_00467f78 & sVar3 << 2;
    uVar1 = sVar3 * 4 + 2;
    uVar7 = sVar3 * 4 + 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar7;
    puVar8[3] = uVar7;
    puVar8[4] = uVar1;
    puVar8[5] = sVar3 * 4 + 3;
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + 6;
    sVar3 = sVar3 + 1;
  } while (iVar4 != 0);
  FUN_00371738(&local_7f8,DAT_00467f7c,0x118);
  local_7f8 = FUN_002fc3fc(puVar2[2],0);
  local_7f4 = FUN_002fc3f0(puVar2[2],0);
  local_7f0 = FUN_002fc3e4(puVar2[2],0);
  local_7e8 = local_6e0;
  iVar4 = (**(code **)(*(int *)*DAT_00467f80 + 8))((int *)*DAT_00467f80,0x1b8);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_00348f34(iVar4,&local_7f8);
  }
  *puVar2 = uVar5;
  uVar5 = FUN_002e11d0(5);
  FUN_00348a64(*puVar2,0,uVar5,DAT_00467f88,DAT_00467f88,DAT_00467f84,DAT_00467f84);
  if (((*DAT_00467f8c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00467f8c), iVar4 != 0)) {
    FUN_0036788c(DAT_00467f90);
  }
  iVar4 = FUN_0034897c(*(undefined4 *)(DAT_00467f9c + 0x47c),*puVar2,0);
  puVar2[1] = iVar4;
  *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 2;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[4] = 0;
  puVar2[0xf] = 1;
  puVar2[0x10] = 1;
  puVar2[0x11] = 1;
  iVar4 = FUN_00313ce0(0x38);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002f2448(iVar4,0,1);
  }
  puVar2[3] = uVar5;
  if (puVar2[4] != 0) {
    FUN_002f6944();
    FUN_003525d4();
    puVar2[4] = 0;
  }
  FUN_002f7af4(DAT_00467fa4,DAT_00467fa0,puVar2[3]);
  puVar2[5] = 0;
  return;
}

