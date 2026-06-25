// OoT3D decomp @ 004c55c0  name=FUN_004c55c0  size=2664

void FUN_004c55c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar13;
  uint in_fpscr;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  int *local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 *puStack_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int *local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 *local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  
  fVar4 = DAT_004c597c;
  puVar3 = DAT_004c5978;
  iVar13 = DAT_004c5974;
  if (((*(uint *)(DAT_004c5974 + 0x18) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_004c5974 + 0x18), uVar30 = DAT_004c5984, iVar7 != 0)) {
    *puVar3 = DAT_004c5980;
    puVar3[1] = uVar30;
    puVar3[2] = fVar4;
  }
  puVar3[2] = fVar4;
  FUN_003735ac(&local_94,param_4,DAT_004c5978);
  puVar3[2] = param_1;
  FUN_003735ac(&local_a0,param_4,DAT_004c5978);
  fVar26 = DAT_004c5988;
  local_7c = param_2 + 0x2000;
  fVar25 = DAT_004c5988;
  if ((*(char *)(param_2 + 0x208f) != '\0') && (*(char *)(param_2 + 0x4c35) == '\0')) {
    fVar25 = DAT_004c598c;
  }
  iVar7 = FUN_003695f8();
  fVar5 = DAT_004c5990;
  iVar8 = *(int *)(*(int *)(param_3 + 0x290c) + 0xc);
  if (iVar7 == 0) {
    *(float *)(iVar8 + 0xc) = DAT_004c5990;
    *(float *)(*(int *)(*(int *)(param_3 + 0x2910) + 0xc) + 0xc) = fVar25 * fVar5;
    *(float *)(*(int *)(*(int *)(param_3 + 0x2914) + 0xc) + 0xc) = fVar25 * fVar5;
  }
  else {
    *(float *)(iVar8 + 0xc) = fVar4;
    *(float *)(*(int *)(*(int *)(param_3 + 0x2910) + 0xc) + 0xc) = fVar4;
    *(float *)(*(int *)(*(int *)(param_3 + 0x2914) + 0xc) + 0xc) = fVar4;
  }
  puStack_fc = &local_88;
  local_100 = 1.401298e-45;
  local_108 = 1.401298e-45;
  local_104 = 1.401298e-45;
  local_110 = &local_84;
  fStack_10c = 1.401298e-45;
  local_80 = param_2 + 0xa98;
  uVar9 = FUN_003393ec(local_80,&local_94,&local_a0,&local_ac);
  if (uVar9 != 0) {
    uVar9 = 1;
  }
  local_110 = &local_b0;
  fStack_10c = 1.401298e-45;
  if (uVar9 == 0) {
    pfVar10 = &local_a0;
  }
  else {
    pfVar10 = &local_ac;
  }
  local_b0 = param_3;
  uVar11 = FUN_003317ac(param_2,param_2 + 0x5c78,&local_94,pfVar10);
  fVar17 = DAT_004c5998;
  fVar16 = DAT_004c5994;
  if (uVar11 != 0) {
    uVar11 = 1;
  }
  if ((uVar9 & ~uVar11) == 0) {
    fVar17 = *(float *)(param_3 + 0x29c4) - DAT_004c5994;
    *(float *)(param_3 + 0x29c4) = fVar17;
    uVar15 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar4) << 0x1e |
             (uint)(fVar4 <= fVar17) << 0x1d;
    bVar1 = (byte)(uVar15 >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      *(float *)(param_3 + 0x29c4) = fVar4;
    }
    else {
      FUN_003695cc(fVar4,fVar4,fVar4,fVar17 * fVar25,*(undefined4 *)(param_3 + 0x290c),0,4,2);
      FUN_003695cc(fVar4,fVar4,fVar4,*(float *)(param_3 + 0x29c4) * fVar25,
                   *(undefined4 *)(param_3 + 0x290c),1,4,2);
      FUN_00372170(*(undefined4 *)(param_3 + 0x290c),0);
    }
  }
  else {
    iVar7 = FUN_00314aa0(local_80,local_84,local_88);
    fVar2 = fVar4;
    if (iVar7 != 0) {
      fVar17 = DAT_004c599c;
      fVar2 = fVar26;
    }
    FUN_004c7010(param_2,&local_ac,&fStack_bc,&local_c0);
    fVar18 = *(float *)(iVar13 + 0x1c);
    uVar15 = in_fpscr & 0xfffffff | (uint)(fVar18 <= local_c0) << 0x1d;
    fVar20 = DAT_004c59a0;
    if (SUB41(uVar15 >> 0x1d,0)) {
      fVar20 = (local_c0 / fVar18) * DAT_004c59a0;
    }
    fVar20 = fVar20 * fVar17;
    FUN_003713fc(local_ac,local_a8,local_a4,param_4,0);
    FUN_00371348(fVar20,fVar20,fVar20,param_4,1);
    if (((*DAT_004c59a4 & 1) == 0) &&
       (iVar7 = FUN_003679b4(DAT_004c59a4), pfVar10 = DAT_004c59a8, iVar7 != 0)) {
      *DAT_004c59a8 = fVar26;
      pfVar10[1] = fVar4;
      pfVar10[2] = fVar4;
      pfVar10[3] = fVar4;
      pfVar10[4] = fVar4;
      pfVar10[5] = fVar26;
      pfVar10[6] = fVar4;
      pfVar10[7] = fVar4;
      pfVar10[8] = fVar4;
      pfVar10[9] = fVar4;
      pfVar10[10] = fVar26;
      pfVar10[0xb] = fVar4;
    }
    FUN_00372224(&local_f0,DAT_004c59a8);
    fVar17 = DAT_004c5d6c;
    uVar30 = DAT_004c59ac;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(local_84 + 10),(byte)(uVar15 >> 0x15) & 3);
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(local_84 + 0xc),(byte)(uVar15 >> 0x15) & 3);
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(local_84 + 0xe),(byte)(uVar15 >> 0x15) & 3);
    fVar21 = fVar26 / SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar18 * fVar18);
    fVar22 = fVar22 * fVar21;
    fVar20 = fVar20 * fVar21;
    fVar18 = fVar18 * fVar21;
    local_a0 = local_a0 - local_94;
    local_9c = local_9c - local_90;
    local_98 = local_98 - local_8c;
    fVar21 = fVar26 / SQRT(local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98);
    if ((uint)DAT_004c59b0 <
        (uint)(local_a0 * fVar21 * fVar20 + local_9c * fVar21 * fVar22 + local_98 * fVar21 * fVar18)
       ) {
      FUN_00371fac(param_4,param_2 + 0x2fc);
    }
    else {
      uVar14 = uVar15 & 0xfffffff |
               (uint)((fVar4 - fVar20) * (fVar4 - fVar20) + (fVar4 - fVar22) * (fVar4 - fVar22) +
                      (fVar26 - fVar18) * (fVar26 - fVar18) == fVar4) << 0x1e;
      if (!SUB41(uVar14 >> 0x1e,0)) {
        fVar28 = fVar4 * fVar18 - fVar26 * fVar22;
        fVar27 = fVar26 * fVar20 - fVar4 * fVar18;
        fVar29 = fVar4 * fVar22 - fVar4 * fVar20;
        uVar14 = uVar15 & 0xfffffff |
                 (uint)(fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29 == fVar4) << 0x1e;
        fVar21 = DAT_004c5d6c;
        fVar19 = fVar26;
        fVar23 = fVar4;
        fVar24 = fVar4;
        if (!SUB41(uVar14 >> 0x1e,0)) {
          fVar21 = (float)FUN_00333ed8(fVar4 * fVar20 + fVar4 * fVar22 + fVar26 * fVar18);
          fVar19 = fVar27;
          fVar23 = fVar28;
          fVar24 = fVar29;
        }
        fVar27 = fVar26 / SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar24 * fVar24);
        fVar21 = fVar21 * fVar16;
        fVar20 = (float)FUN_003727f0(fVar21);
        fVar18 = (float)FUN_00372674(fVar21);
        fVar23 = fVar23 * fVar27 * fVar20;
        fVar28 = fVar19 * fVar27 * fVar20;
        fVar20 = fVar24 * fVar27 * fVar20;
        local_e4 = fVar4;
        local_d4 = fVar4;
        local_c4 = fVar4;
        fVar21 = fVar5 / (fVar23 * fVar23 + fVar28 * fVar28 + fVar20 * fVar20 + fVar18 * fVar18);
        fVar24 = fVar28 * fVar21;
        fVar27 = fVar20 * fVar21;
        fVar19 = fVar18 * fVar23 * fVar21;
        fVar21 = fVar23 * fVar23 * fVar21;
        local_ec = fVar23 * fVar24 - fVar18 * fVar27;
        local_e0 = (int *)(fVar23 * fVar24 + fVar18 * fVar27);
        local_e8 = fVar23 * fVar27 + fVar18 * fVar24;
        local_f0 = fVar26 - (fVar28 * fVar24 + fVar20 * fVar27);
        local_d8 = fVar28 * fVar27 - fVar19;
        local_cc = (undefined4 *)(fVar28 * fVar27 + fVar19);
        local_dc = fVar26 - (fVar21 + fVar20 * fVar27);
        local_d0 = fVar23 * fVar27 - fVar18 * fVar24;
        local_c8 = fVar26 - (fVar21 + fVar28 * fVar24);
      }
      FUN_0036c174(param_4,param_4,&local_f0);
      uVar14 = uVar14 & 0xfffffff | (uint)(fVar22 < fVar4) << 0x1f;
      uVar15 = uVar14 | (uint)(NAN(fVar22) || NAN(fVar4)) << 0x1c;
      fVar20 = fVar22;
      if ((byte)(uVar14 >> 0x1f) != ((byte)(uVar15 >> 0x1c) & 1)) {
        fVar20 = -fVar22;
      }
      if (DAT_004c5d70 < (int)fVar20) {
        uVar12 = FUN_0036e70c(*(undefined4 *)
                               (param_2 + *(short *)(DAT_004c5d74 + param_2) * 4 + 0xa54));
        fVar21 = *(float *)(param_2 + 0x1c0);
        fVar20 = (float)VectorSignedToFloat(uVar12,(byte)(uVar15 >> 0x15) & 3);
        fVar20 = fVar20 * DAT_004c5d78;
        fVar18 = *(float *)(param_2 + 0x1cc);
        uVar14 = uVar15 & 0xfffffff | (uint)(fVar18 < fVar21) << 0x1f |
                 (uint)(fVar18 == fVar21) << 0x1e;
        uVar15 = uVar14 | (uint)(NAN(fVar18) || NAN(fVar21)) << 0x1c;
        if (DAT_004c5d7c < (int)fVar20) {
          fVar20 = fVar20 - fVar17;
        }
        if ((uint)DAT_004c5d80 < (uint)fVar20) {
          fVar20 = fVar20 + fVar17;
        }
        bVar1 = (byte)(uVar14 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar15 >> 0x1c) & 1)) {
          uVar30 = DAT_004c5d84;
        }
        FUN_00371234(fVar22 * fVar20,param_4,1);
      }
    }
    FUN_003713fc(fVar4,uVar30,*(undefined4 *)(iVar13 + 0x20),param_4,1);
    *(undefined *)(*(int *)(param_3 + 0x290c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_3 + 0x290c),param_4);
    *(float *)(param_3 + 0x29c4) = fVar26;
    FUN_003695cc(fVar4,fVar4,fVar4,fVar26 * fVar25,*(undefined4 *)(param_3 + 0x290c),0,4,2);
    FUN_003695cc(fVar4,fVar4,fVar4,*(float *)(param_3 + 0x29c4) * fVar25,
                 *(undefined4 *)(param_3 + 0x290c),1,4,2);
    FUN_003695cc(fVar4,fVar4,fVar4,fVar2,*(undefined4 *)(param_3 + 0x290c),0,0,2);
    FUN_00372170(*(undefined4 *)(param_3 + 0x290c),0);
  }
  iVar13 = DAT_004c6094;
  fVar17 = DAT_004c5d88;
  iVar7 = *(int *)(param_3 + 0x1224);
  if (iVar7 != 0) {
    if ((uVar9 | uVar11) == 0) {
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c6088 + 0x110),
                                          (byte)(uVar15 >> 0x15) & 3);
      iVar7 = (int)(DAT_004c608c / fVar26 + fVar16);
      if (*(char *)(param_3 + 0x1a9) != '\x10') {
        fVar26 = (float)VectorSignedToFloat(iVar7,(byte)(uVar15 >> 0x15) & 3);
        iVar7 = (int)(fVar26 * fVar5);
      }
      fVar16 = (float)VectorSignedToFloat(iVar7,(byte)(uVar15 >> 0x15) & 3);
      fVar16 = fVar16 * DAT_004c6090;
      fVar26 = *(float *)(param_3 + 0x29bc) - DAT_004c5d88;
      *(float *)(param_3 + 0x29bc) = fVar26;
      if ((int)fVar26 <= iVar13) {
        fVar26 = fVar17;
      }
      *(float *)(param_3 + 0x29bc) = fVar26;
    }
    else {
      local_ac = *(float *)(param_3 + 0x1240) - local_ac;
      local_a8 = *(float *)(param_3 + 0x1244) - local_a8;
      local_a4 = *(float *)(param_3 + 0x1248) - local_a4;
      fVar16 = *(float *)(param_3 + 0x29bc) + DAT_004c5d88;
      *(float *)(param_3 + 0x29bc) = fVar16;
      if ((int)fVar16 < 0x3f800001) {
        fVar26 = fVar16;
      }
      fVar16 = SQRT(local_ac * local_ac + local_a8 * local_a8 + local_a4 * local_a4);
      *(float *)(param_3 + 0x29bc) = fVar26;
    }
    FUN_003713fc(*(undefined4 *)(param_3 + 0x1240),*(undefined4 *)(param_3 + 0x1244),
                 *(undefined4 *)(param_3 + 0x1248),&local_e0,0);
    fVar26 = DAT_004c5d78;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_3 + 0x1224) + 0xbe),
                                        (byte)(uVar15 >> 0x15) & 3);
    FUN_003735e8(fVar17 * DAT_004c5d78,&local_e0,1);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_3 + 0x1224) + 0xbc),
                                        (byte)(uVar15 >> 0x15) & 3);
    FUN_00369014(fVar17 * fVar26,&local_e0,1);
    uVar12 = DAT_004c60a4;
    uVar30 = DAT_004c60a0;
    local_110 = local_e0;
    fStack_10c = local_dc;
    local_108 = local_d8;
    local_104 = local_d4;
    local_100 = local_d0;
    puStack_fc = local_cc;
    fStack_f8 = local_c8;
    local_f4 = local_c4;
    local_f0 = local_c0;
    local_ec = fStack_bc;
    local_e8 = fStack_b8;
    local_e4 = fStack_b4;
    fVar26 = fVar16 * DAT_004c609c * fVar5 * DAT_004c6098;
    FUN_00371348(DAT_004c60a4,DAT_004c60a0,fVar26,&local_e0,1);
    FUN_00371234(DAT_004c60a8,&local_110,1);
    FUN_00371348(uVar12,uVar30,fVar26,&local_110,1);
    iVar13 = 0;
    do {
      iVar7 = param_3 + iVar13 * 4;
      FUN_003695cc(fVar4,fVar4,fVar4,*(float *)(param_3 + 0x29bc) * *(float *)(param_3 + 0x29c0),
                   *(undefined4 *)(iVar7 + 0x2910),0,0,2);
      FUN_003695cc(fVar4,fVar4,fVar4,fVar25,*(undefined4 *)(iVar7 + 0x2910),0,1,2);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    *(undefined *)(*(int *)(param_3 + 0x2910) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_3 + 0x2910),&local_e0);
    FUN_00372170(*(undefined4 *)(param_3 + 0x2910),0);
    *(undefined *)(*(int *)(param_3 + 0x2914) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_3 + 0x2914),&local_110);
    FUN_00372170(*(undefined4 *)(param_3 + 0x2914),0);
    iVar7 = extraout_r1;
  }
  puVar6 = DAT_004c60ac;
  if ((*(char *)(local_7c + 0x8f) != '\0') && (*(char *)(param_2 + 0x4c35) == '\0')) {
    if ((*DAT_004c60ac & 1) == 0) {
      uVar31 = FUN_003679b4(DAT_004c60ac);
      iVar7 = (int)((ulonglong)uVar31 >> 0x20);
      if ((int)uVar31 != 0) {
        FUN_0036788c(DAT_004c60b0);
        iVar7 = DAT_004c60b8;
      }
    }
    uVar30 = DAT_004c60bc;
    FUN_0032d5dc(DAT_004c60bc,iVar7);
    fVar26 = *(float *)(param_3 + 0x29c4);
    iVar13 = extraout_r1_00;
    if (fVar26 != fVar4 && fVar26 < fVar4 == (NAN(fVar26) || NAN(fVar4))) {
      FUN_00372170(*(undefined4 *)(param_3 + 0x290c),0);
      iVar13 = extraout_r1_01;
    }
    if (*(int *)(param_3 + 0x1224) != 0) {
      FUN_00372170(*(undefined4 *)(param_3 + 0x2910),0);
      FUN_00372170(*(undefined4 *)(param_3 + 0x2914),0);
      iVar13 = extraout_r1_02;
    }
    if ((*puVar6 & 1) == 0) {
      uVar31 = FUN_003679b4(DAT_004c60ac);
      iVar13 = (int)((ulonglong)uVar31 >> 0x20);
      if ((int)uVar31 != 0) {
        FUN_0036788c(DAT_004c60b0);
        iVar13 = DAT_004c60b8;
      }
    }
    FUN_0032d5b8(uVar30,iVar13);
  }
  return;
}

