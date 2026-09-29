// OoT3D decomp @ 002f1d78  name=FUN_002f1d78  size=1368

void FUN_002f1d78(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  short *psVar19;
  short sVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  short *local_150;
  int local_14c;
  short *local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  int local_38;

  FUN_002fc748();
  fVar5 = DAT_002f2160;
  fVar4 = DAT_002f215c;
  iVar11 = DAT_002f2158;
  *(int *)(DAT_002f2158 + 0x34) = param_1;
  iVar9 = FUN_00313ce0(0x38);
  uVar10 = 0;
  if (iVar9 != 0) {
    uVar10 = FUN_002f2448(iVar9,3,*(int *)(DAT_002f2164 + param_1 * 4) + 10);
  }
  *(undefined4 *)(iVar11 + 0x24) = uVar10;
  iVar11 = FUN_00313ce0(0x38);
  uVar10 = 0;
  if (iVar11 != 0) {
    uVar10 = FUN_002f2448(iVar11,5,1);
  }
  uVar6 = DAT_002f2168;
  iVar11 = 0;
  *(undefined4 *)(DAT_002f2158 + 0x2c) = uVar10;
  local_38 = DAT_002f216c;
  do {
    uVar22 = *(uint *)(*(int *)(DAT_002f2170 + param_1 * 4) + iVar11 * 4);
    if (0 < (int)uVar22) {
      iVar9 = FUN_00313ce0(0x20);
      uVar10 = 0;
      if (iVar9 != 0) {
        uVar10 = FUN_002fc694(*(undefined4 *)(*(int *)(DAT_002f2178 + param_1 * 4) + iVar11 * 4),
                              *(undefined4 *)(*(int *)(DAT_002f2174 + param_1 * 4) + iVar11 * 4),
                              iVar9,uVar22);
      }
      iVar9 = uVar22 << 3;
      *(undefined4 *)(DAT_002f217c + iVar11 * 4) = uVar10;
      iVar12 = FUN_0033de14(iVar9);
      iVar13 = FUN_0033de14(iVar9);
      iVar14 = FUN_0033de14(iVar9);
      iVar9 = DAT_002f2180;
      iVar15 = 0;
      iVar25 = DAT_002f2180 + 0xa0;
      iVar24 = DAT_002f2180 + 0x28;
      iVar21 = DAT_002f2180 + 200;
      iVar23 = DAT_002f2180 + 0x50;
      do {
        pfVar17 = (float *)(iVar12 + iVar15 * 8);
        *pfVar17 = *(float *)(*(int *)(*(int *)(iVar9 + param_1 * 4) + iVar11 * 4) + iVar15 * 4) +
                   fVar4;
        pfVar17[1] = *(float *)(*(int *)(*(int *)(iVar24 + param_1 * 4) + iVar11 * 4) + iVar15 * 4)
                     + fVar5;
        puVar18 = (undefined4 *)(iVar13 + iVar15 * 8);
        *puVar18 = *(undefined4 *)
                    (*(int *)(*(int *)(iVar25 + param_1 * 4) + iVar11 * 4) + iVar15 * 4);
        iVar7 = DAT_002f2184;
        puVar18[1] = *(undefined4 *)
                      (*(int *)(*(int *)(iVar21 + param_1 * 4) + iVar11 * 4) + iVar15 * 4);
        puVar18 = (undefined4 *)(iVar14 + iVar15 * 8);
        *puVar18 = *(undefined4 *)
                    (*(int *)(*(int *)(iVar23 + param_1 * 4) + iVar11 * 4) + iVar15 * 4);
        iVar1 = iVar15 * 4;
        iVar15 = iVar15 + 1;
        puVar18[1] = *(undefined4 *)(*(int *)(*(int *)(iVar7 + param_1 * 4) + iVar11 * 4) + iVar1);
        iVar1 = DAT_002f217c;
      } while (iVar15 < (int)uVar22);
      FUN_002fc534(*(undefined4 *)(DAT_002f217c + iVar11 * 4),iVar12,iVar14,uVar22,0);
      FUN_002fc40c(*(undefined4 *)(iVar1 + iVar11 * 4),iVar13,iVar14,uVar22,0);
      local_3c = uVar22 << 2;
      local_44 = (undefined4 *)FUN_0033de14();
      if (0 < (int)uVar22) {
        puVar18 = local_44 + -1;
        if ((uVar22 & 1) != 0) {
          *local_44 = uVar6;
          puVar18 = local_44;
        }
        for (iVar9 = (int)uVar22 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar18[1] = uVar6;
          puVar18 = puVar18 + 2;
          *puVar18 = uVar6;
        }
      }
      FUN_002fcdec(*(undefined4 *)(DAT_002f217c + iVar11 * 4),local_44,uVar22,0);
      local_40 = uVar22 * 6;
      local_48 = (short *)FUN_0033de14(uVar22 * 0xc);
      if (0 < (int)uVar22) {
        sVar20 = 0;
        psVar19 = local_48;
        do {
          *psVar19 = sVar20 << 2;
          sVar2 = sVar20 * 4 + 2;
          sVar3 = sVar20 * 4 + 1;
          psVar19[1] = sVar2;
          psVar19[2] = sVar3;
          psVar19[3] = sVar3;
          psVar19[4] = sVar2;
          psVar19[5] = sVar20 * 4 + 3;
          uVar22 = uVar22 - 1;
          psVar19 = psVar19 + 6;
          sVar20 = sVar20 + 1;
        } while (uVar22 != 0);
      }
      FUN_00371738(&local_160,DAT_002f2188,0x118);
      iVar9 = DAT_002f217c;
      local_160 = FUN_002fc3fc(*(undefined4 *)(DAT_002f217c + iVar11 * 4),0);
      local_15c = FUN_002fc3f0(*(undefined4 *)(iVar9 + iVar11 * 4),0);
      local_158 = FUN_002fc3e4(*(undefined4 *)(iVar9 + iVar11 * 4),0);
      local_154 = local_3c;
      local_150 = local_48;
      local_14c = local_40;
      iVar9 = (**(code **)(*(int *)*DAT_002f218c + 8))((int *)*DAT_002f218c,0x1b8);
      uVar10 = 0;
      if (iVar9 != 0) {
        uVar10 = FUN_00348f34(iVar9,&local_160);
      }
      iVar9 = DAT_002f2190;
      *(undefined4 *)(DAT_002f2190 + iVar11 * 4) = uVar10;
      uVar16 = FUN_00301300(*(undefined4 *)(*(int *)(DAT_002f2194 + param_1 * 4) + iVar11 * 4),0,0);
      FUN_0031b9c0(uVar16,1);
      iVar15 = (**(code **)(*(int *)*DAT_002f2198 + 8))((int *)*DAT_002f2198,0x54);
      uVar10 = 0;
      if (iVar15 != 0) {
        uVar10 = FUN_00303ea8(uVar16);
        uVar10 = FUN_003012b4(iVar15,uVar10,0);
      }
      iVar15 = DAT_002f219c;
      *(undefined4 *)(DAT_002f219c + iVar11 * 4) = uVar10;
      FUN_00303ea8(uVar16);
      FUN_0034fc6c();
      FUN_0031b99c(uVar16);
      FUN_00348a64(*(undefined4 *)(iVar9 + iVar11 * 4),0,*(undefined4 *)(iVar15 + iVar11 * 4),
                   DAT_002f21a4,DAT_002f21a4,DAT_002f21a0,DAT_002f21a0);
      if (((*DAT_002f2320 & 1) == 0) && (iVar15 = FUN_003679b4(DAT_002f2320), iVar15 != 0)) {
        FUN_0036788c(DAT_002f2324);
      }
      iVar9 = BoardModelFactory_0034897c
                        (*(undefined4 *)(local_38 + 0x47c),*(undefined4 *)(iVar9 + iVar11 * 4),0);
      *(int *)(DAT_002f2330 + iVar11 * 4) = iVar9;
      *(uint *)(iVar9 + 0x178) = *(uint *)(iVar9 + 0x178) | 2;
      FUN_0033ddd4(local_48);
      FUN_0033ddd4(local_44);
      FUN_0033ddd4(iVar14);
      FUN_0033ddd4(iVar13);
      FUN_0033ddd4(iVar12);
    }
    fVar8 = DAT_002f2338;
    iVar12 = DAT_002f217c;
    iVar9 = DAT_002f2158;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  if (*(char *)(DAT_002f2334 + 0xe) == '\x01') {
    iVar11 = 0;
    iVar13 = DAT_002f2158 + 0x220;
    do {
      iVar14 = *(int *)(*(int *)(iVar13 + *(int *)(iVar9 + 0x34) * 4) + iVar11 * 4);
      if ((iVar14 != 0) &&
         (pfVar17 = (float *)FUN_002fc3fc(*(undefined4 *)(iVar12 + iVar11 * 4),0), 0 < iVar14)) {
        do {
          iVar14 = iVar14 + -1;
          *pfVar17 = fVar8 - *pfVar17;
          pfVar17[3] = fVar8 - pfVar17[3];
          pfVar17[6] = fVar8 - pfVar17[6];
          pfVar17[9] = fVar8 - pfVar17[9];
          pfVar17 = pfVar17 + 0xc;
        } while (iVar14 != 0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 8);
  }
  return;
}
