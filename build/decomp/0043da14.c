// OoT3D decomp @ 0043da14  name=FUN_0043da14  size=828

void FUN_0043da14(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  short *local_13c;
  int local_138;
  int local_34;
  int local_30;

  puVar5 = DAT_0043dd58;
  uVar4 = DAT_0043dd54;
  uVar3 = DAT_0043dd50;
  iVar16 = 0;
  local_30 = DAT_0043dd5c;
  do {
    if (iVar16 == 0) {
      uVar17 = 1;
    }
    else {
      uVar17 = 0x3e;
    }
    iVar7 = FUN_00313ce0(0x20);
    uVar8 = 0;
    if (iVar7 != 0) {
      uVar8 = FUN_002fc694(uVar3,uVar3,iVar7,uVar17);
    }
    puVar5[iVar16] = uVar8;
    if (iVar16 == 0) {
      local_154 = DAT_0043dd60[1];
      local_150 = DAT_0043dd60[2];
      local_15c = DAT_0043dd60[3];
      local_158 = DAT_0043dd60[4];
      local_164 = DAT_0043dd60[5];
      local_160 = DAT_0043dd60[6];
      local_16c = 0;
      uStack_168 = 0;
      local_170 = *DAT_0043dd60;
      FUN_002fc534(*puVar5,&local_154,&local_15c,uVar17,0);
      FUN_002fc40c(*puVar5,&local_16c,&local_164,uVar17,0);
      FUN_002fcdec(*puVar5,&local_170,uVar17,0);
    }
    else {
      FUN_002fc534(uVar8,DAT_0043dd64 + -0x1f0,DAT_0043dd64,uVar17,0);
      FUN_002fc40c(puVar5[iVar16],DAT_0043dd68 + 0x1f0,DAT_0043dd68,uVar17,0);
      puVar9 = (undefined4 *)FUN_0033de14(uVar17 << 2);
      if (uVar17 != 0) {
        puVar10 = puVar9 + -1;
        if ((uVar17 & 1) != 0) {
          *puVar9 = uVar4;
          puVar10 = puVar9;
        }
        for (iVar7 = (int)uVar17 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar10[1] = uVar4;
          puVar10 = puVar10 + 2;
          *puVar10 = uVar4;
        }
      }
      FUN_002fcdec(puVar5[iVar16],puVar9,uVar17,0);
      FUN_0033ddd4(puVar9);
    }
    local_34 = uVar17 * 6;
    psVar11 = (short *)FUN_0033de14(uVar17 * 0xc);
    if (uVar17 != 0) {
      sVar14 = 0;
      psVar12 = psVar11;
      uVar15 = uVar17;
      do {
        *psVar12 = sVar14 << 2;
        sVar1 = sVar14 * 4 + 2;
        sVar2 = sVar14 * 4 + 1;
        psVar12[1] = sVar1;
        psVar12[2] = sVar2;
        psVar12[3] = sVar2;
        psVar12[4] = sVar1;
        psVar12[5] = sVar14 * 4 + 3;
        uVar15 = uVar15 - 1;
        psVar12 = psVar12 + 6;
        sVar14 = sVar14 + 1;
      } while (uVar15 != 0);
    }
    FUN_00371738(&local_14c,DAT_0043dd6c,0x118);
    local_14c = FUN_002fc3fc(puVar5[iVar16],0);
    local_148 = FUN_002fc3f0(puVar5[iVar16],0);
    local_144 = FUN_002fc3e4(puVar5[iVar16],0);
    local_140 = uVar17 << 2;
    local_138 = local_34;
    local_13c = psVar11;
    iVar7 = (**(code **)(*(int *)*DAT_0043dd70 + 8))((int *)*DAT_0043dd70,0x1b8);
    uVar8 = 0;
    if (iVar7 != 0) {
      uVar8 = FUN_00348f34(iVar7,&local_14c);
    }
    uVar6 = DAT_0043dd7c;
    local_170 = DAT_0043dd78;
    iVar7 = DAT_0043dd74;
    *(undefined4 *)(DAT_0043dd74 + iVar16 * 4) = uVar8;
    FUN_00348a64(uVar8,0,*(undefined4 *)(iVar7 + -8 + iVar16 * 4),uVar6,uVar6,local_170);
    if (((*DAT_0043dd80 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_0043dd80), iVar13 != 0)) {
      FUN_0036788c(DAT_0043dd84);
    }
    iVar7 = BoardModelFactory_0034897c
                      (*(undefined4 *)(local_30 + 0x47c),*(undefined4 *)(iVar7 + iVar16 * 4),0);
    *(int *)(DAT_0043dd90 + iVar16 * 4) = iVar7;
    *(uint *)(iVar7 + 0x178) = *(uint *)(iVar7 + 0x178) | 2;
    FUN_0033ddd4(psVar11);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 2);
  return;
}
