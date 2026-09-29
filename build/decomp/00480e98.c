// OoT3D decomp @ 00480e98  name=FUN_00480e98  size=696

void FUN_00480e98(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  ushort *local_448;
  ushort local_340 [298];
  undefined4 uStack_ec;
  undefined4 local_e8 [50];

  iVar3 = FUN_00313ce0(0x20);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_002fc694(DAT_00481154,DAT_00481150,iVar3,0x32);
  }
  iVar3 = DAT_00481158;
  iVar6 = DAT_00481158 + 0x240;
  *(undefined4 *)(DAT_00481158 + 0x14) = uVar4;
  FUN_002fc534(uVar4,iVar3 + 0xb0,iVar6,0x32,0);
  FUN_002fc40c(*(undefined4 *)(iVar3 + 0x14),iVar3 + 0x560,iVar3 + 0x3d0,0x32,0);
  puVar5 = &uStack_ec;
  iVar6 = 0x19;
  do {
    puVar5[1] = DAT_0048115c;
    puVar5 = puVar5 + 2;
    iVar6 = iVar6 + -1;
    *puVar5 = DAT_0048115c;
  } while (iVar6 != 0);
  FUN_002fcdec(*(undefined4 *)(iVar3 + 0x14),local_e8,0x32,0);
  sVar2 = 0;
  iVar6 = 0x32;
  puVar8 = local_340;
  do {
    *puVar8 = (ushort)DAT_00481160 & sVar2 << 2;
    uVar1 = sVar2 * 4 + 2;
    uVar7 = sVar2 * 4 + 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar7;
    puVar8[3] = uVar7;
    puVar8[4] = uVar1;
    puVar8[5] = sVar2 * 4 + 3;
    iVar6 = iVar6 + -1;
    puVar8 = puVar8 + 6;
    sVar2 = sVar2 + 1;
  } while (iVar6 != 0);
  FUN_00371738(&local_458,DAT_00481164,0x118);
  local_458 = FUN_002fc3fc(*(undefined4 *)(iVar3 + 0x14),0);
  local_454 = FUN_002fc3f0(*(undefined4 *)(iVar3 + 0x14),0);
  local_450 = FUN_002fc3e4(*(undefined4 *)(iVar3 + 0x14),0);
  local_448 = local_340;
  iVar6 = (**(code **)(*(int *)*DAT_00481168 + 8))((int *)*DAT_00481168,0x1b8);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_00348f34(iVar6,&local_458);
  }
  *(undefined4 *)(iVar3 + 8) = uVar4;
  uVar4 = FUN_002e11d0(6);
  FUN_00348a64(*(undefined4 *)(iVar3 + 8),0,uVar4,DAT_00481170,DAT_00481170,DAT_0048116c,
               DAT_0048116c);
  if (((*DAT_00481174 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00481174), iVar6 != 0)) {
    FUN_0036788c(DAT_00481178);
  }
  iVar6 = BoardModelFactory_0034897c
                    (*(undefined4 *)(DAT_00481184 + 0x47c),*(undefined4 *)(iVar3 + 8),0);
  *(int *)(iVar3 + 0xc) = iVar6;
  *(uint *)(iVar6 + 0x178) = *(uint *)(iVar6 + 0x178) | 2;
  iVar6 = FUN_00313ce0(DAT_00481188);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_002f8ee4(iVar6,4,7,0);
  }
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  FUN_002f8d74(uVar4,0,0x76);
  FUN_002f8d74(*(undefined4 *)(iVar3 + 0x20),1,0x75);
  FUN_002f8d74(*(undefined4 *)(iVar3 + 0x20),2,0x74);
  FUN_002f8d74(*(undefined4 *)(iVar3 + 0x20),3,0x71);
  iVar6 = FUN_00313ce0(0x38);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_002f2448(iVar6,0,1);
  }
  *(undefined4 *)(iVar3 + 0x1c) = uVar4;
  iVar6 = FUN_00313ce0(0x14);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_002db6a0(iVar6,4);
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  FUN_002fcc88(DAT_00481190,DAT_0048118c);
  return;
}
