// OoT3D decomp @ 004c1c90  name=FUN_004c1c90  size=3480

void FUN_004c1c90(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint extraout_r1;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  uint in_fpscr;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_b8 [6];
  undefined auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float *local_58;
  int local_54;
  float *local_50;
  
  fVar24 = DAT_004c2020;
  uVar5 = *(uint *)(DAT_004c201c + 0x24);
  if (((*(uint *)(DAT_004c201c + 0x24) & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_004c2024), puVar2 = DAT_004c2030, uVar7 = DAT_004c202c, uVar5 != 0))
  {
    *DAT_004c2030 = DAT_004c2028;
    puVar2[1] = uVar7;
    puVar2[2] = fVar24;
    uVar5 = DAT_004c2024;
  }
  iVar6 = FUN_003695f8(uVar5);
  if (iVar6 != 0) {
    FUN_00372224(param_3);
  }
  puVar2 = DAT_004c29b0;
  fVar27 = DAT_004c2544;
  uVar7 = DAT_004c2540;
  iVar6 = DAT_004c205c;
  fVar29 = DAT_004c2058;
  fVar28 = DAT_004c203c;
  fVar26 = DAT_004c2038;
  if (param_2 == 0x18) {
    if (*(char *)(param_4 + 0x1ac) != '\x06') {
      return;
    }
    uVar7 = FUN_003478bc(*(undefined4 *)(param_4 + 0x27c),0x10);
    FUN_00372224(param_3,uVar7);
    if (*(float *)(param_4 + 0x58) < fVar24 == (NAN(*(float *)(param_4 + 0x58)) || NAN(fVar24))) {
      *DAT_004c2040 = *(float *)(param_4 + 0x2244) * *(float *)(DAT_004c201c + 0x28);
      FUN_00313c18(param_4,param_3,&local_7c);
      if (*(char *)(param_4 + 0x2227) == '\0') {
        *(undefined4 *)(param_4 + 0x22a8) = local_7c;
        *(float *)(param_4 + 0x22ac) = local_78;
        *(float *)(param_4 + 0x22b0) = local_74;
      }
      else {
        FUN_002b9580(param_1,param_4,param_3,&local_7c);
      }
    }
    FUN_003713fc(DAT_004c204c,DAT_004c2048,DAT_004c2044,param_3,1);
    FUN_00371234(DAT_004c2050,param_3,1);
    FUN_00369014(DAT_004c2054,param_3,1);
    FUN_00371348(fVar26,*(undefined4 *)(param_4 + 0x2244),fVar26,param_3,1);
    FUN_002b9bf8(param_4,0x17,1);
    return;
  }
  local_50 = (float *)(param_4 + 0x1228);
  if (param_2 == 0x10) {
    FUN_0036df4c(local_50,param_4 + 0x23c4);
    if (((*(char *)(param_4 + 0x1ac) != '\x06') &&
        (uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_4 + 0x58) < fVar24) << 0x1f,
        in_fpscr = uVar5 | (uint)(NAN(*(float *)(param_4 + 0x58)) || NAN(fVar24)) << 0x1c,
        (byte)(uVar5 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) &&
       (*(char *)(param_4 + 0x2227) != '\0')) {
      iVar8 = (int)*(char *)(param_4 + 0x1a9);
      uVar5 = extraout_r1;
      if (iVar8 == 5) {
        uVar5 = (uint)*(ushort *)(iVar6 + 0x4a);
      }
      if (iVar8 == 5 && uVar5 == 0) {
        *DAT_004c2040 = fVar29;
      }
      else {
        iVar8 = iVar8 + -2;
        if ((iVar8 < 1) || (5 < iVar8)) {
          iVar8 = 0;
        }
        *DAT_004c2040 = *(float *)(DAT_004c2060 + iVar8 * 4);
      }
      FUN_00313c18(param_4,param_3,&local_7c);
      FUN_002b9580(param_1,param_4,param_3,&local_7c);
    }
    uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_4 + 0x58) < fVar24) << 0x1f;
    uVar23 = uVar5 | (uint)(NAN(*(float *)(param_4 + 0x58)) || NAN(fVar24)) << 0x1c;
    if ((byte)(uVar5 >> 0x1f) != ((byte)(uVar23 >> 0x1c) & 1)) {
      return;
    }
    cVar1 = *(char *)(param_4 + 0x1a9);
    iVar8 = 0x10;
    if (cVar1 != '\x10' && cVar1 != '\x11') {
      iVar8 = *(int *)(param_4 + 0x1224);
    }
    if ((cVar1 == '\x10' || cVar1 == '\x11') || iVar8 == 0) {
      FUN_00372224(param_4 + 0x240c,param_3);
      FUN_003624c8(param_4 + 0x240c,param_4 + 0x1234,0);
      return;
    }
    if ((*(uint *)(param_4 + 0x1710) & 0x200) != 0) {
      iVar6 = DAT_004c2064 + *(int *)(iVar6 + 4) * 0x30;
      FUN_003735ac(iVar8 + 0x28,param_3,iVar6 + 0x18);
      FUN_00372224(&local_88,param_3);
      if ((*(uint *)(param_4 + 0x29b8) & 2) == 0) {
        FUN_0035fb94(&local_90,iVar6 + 0x2a);
      }
      else {
        local_90 = *(undefined4 *)(iVar6 + 0x24);
        local_8c = *(undefined4 *)(iVar6 + 0x28);
      }
      iVar6 = (int)(short)local_90;
      iVar13 = (int)local_90._2_2_;
      fVar24 = (float)VectorSignedToFloat((int)(short)local_8c,(byte)(uVar23 >> 0x15) & 3);
      FUN_00371234(fVar24 * fVar28,&local_88,1);
      if (iVar13 != 0) {
        fVar24 = (float)VectorSignedToFloat(iVar13,(byte)(uVar23 >> 0x15) & 3);
        FUN_003735e8(fVar24 * fVar28,&local_88,1);
      }
      if (iVar6 != 0) {
        fVar24 = (float)VectorSignedToFloat(iVar6,(byte)(uVar23 >> 0x15) & 3);
        FUN_00369014(fVar24 * fVar28,&local_88,1);
      }
      FUN_003624c8(&local_88,iVar8 + 0x34,0);
      *(undefined2 *)(iVar8 + 0xbc) = *(undefined2 *)(iVar8 + 0x34);
      *(undefined2 *)(iVar8 + 0xbe) = *(undefined2 *)(iVar8 + 0x36);
      *(undefined2 *)(iVar8 + 0xc0) = *(undefined2 *)(iVar8 + 0x38);
      return;
    }
    if ((*(uint *)(param_4 + 0x1710) & 0x800) == 0) {
      return;
    }
    FUN_003624c8(param_3,&local_60,0);
    if ((*(uint *)(iVar8 + 4) & 0x20000) != 0) {
      local_60._0_2_ = local_60._0_2_ - *(short *)(param_4 + 0x1234);
      *(short *)(iVar8 + 0xbc) = local_60._0_2_;
      *(short *)(iVar8 + 0x34) = local_60._0_2_;
      return;
    }
    sVar3 = *(short *)(param_4 + 0x1236) + *(short *)(param_4 + 0xbe);
    *(short *)(iVar8 + 0xbe) = sVar3;
    *(short *)(iVar8 + 0x36) = sVar3;
    return;
  }
  if (param_2 == 0x12) {
    if (*(char *)(param_4 + 0x1b5) != '\v') {
      return;
    }
    bVar22 = *(int *)(DAT_004c205c + 4) == 0;
    if (!bVar22) {
      bVar22 = (*(uint *)(param_4 + 0x29b8) & 2) == 0;
    }
    if (bVar22) {
      return;
    }
    local_64 = *DAT_004c253c;
    local_60 = DAT_004c253c[1];
    local_5c = DAT_004c253c[2];
    FUN_003735ac(&local_70,param_3,&local_64);
    param_3[3] = local_70;
    param_3[7] = local_6c;
    param_3[0xb] = local_68;
    return;
  }
  local_54 = param_4 + 0x1568;
  if (param_2 != 0x14) {
    if (param_2 == 0x17) {
      uVar7 = DAT_004c2548[1];
      uVar11 = DAT_004c2548[2];
      uVar12 = DAT_004c2548[3];
      uVar14 = DAT_004c2548[4];
      uVar15 = DAT_004c2548[5];
      uVar16 = DAT_004c2548[6];
      uVar17 = DAT_004c2548[7];
      uVar18 = DAT_004c2548[8];
      uVar19 = DAT_004c2548[9];
      uVar20 = DAT_004c2548[10];
      uVar21 = DAT_004c2548[0xb];
      *param_3 = *DAT_004c2548;
      param_3[1] = uVar7;
      param_3[2] = uVar11;
      param_3[3] = uVar12;
      param_3[4] = uVar14;
      param_3[5] = uVar15;
      param_3[6] = uVar16;
      param_3[7] = uVar17;
      param_3[8] = uVar18;
      param_3[9] = uVar19;
      param_3[10] = uVar20;
      param_3[0xb] = uVar21;
      return;
    }
    uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_4 + 0x58) < fVar24) << 0x1f;
    uVar23 = uVar5 | (uint)(NAN(*(float *)(param_4 + 0x58)) || NAN(fVar24)) << 0x1c;
    if ((byte)(uVar5 >> 0x1f) != ((byte)(uVar23 >> 0x1c) & 1)) {
      return;
    }
    if (param_2 != 0x15) {
      if (param_2 == 0xb) {
        FUN_003735ac(param_4 + 0x3c,param_3,DAT_004c2030);
        return;
      }
      local_b8[0] = DAT_004c2b00 + *(int *)(DAT_004c205c + 4) * 0xc;
      FUN_0034cbb4(param_4,param_3,param_2,5,local_b8[0],8);
      return;
    }
    if (*(char *)(param_4 + 0x1b5) == '\n' || *(char *)(param_4 + 0x1b5) == -1) {
      return;
    }
    if (((*(uint *)(DAT_004c201c + 0x34) & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_004c29b4), uVar11 = DAT_004c29bc, iVar8 != 0)) {
      *puVar2 = DAT_004c29b8;
      puVar2[1] = uVar7;
      puVar2[2] = uVar11;
    }
    if ((*(int *)(iVar6 + 4) != 0) && (*(char *)(param_4 + 0x1a6) == '\x02')) {
      FUN_002b949c(param_1,param_4,local_54,param_3,DAT_004c29c0);
    }
    fVar26 = (float)VectorSignedToFloat((int)*DAT_004c29c4,(byte)(uVar23 >> 0x15) & 3);
    fVar29 = (float)VectorSignedToFloat((int)DAT_004c29c4[1],(byte)(uVar23 >> 0x15) & 3);
    fVar30 = (float)VectorSignedToFloat((int)DAT_004c29c4[2],(byte)(uVar23 >> 0x15) & 3);
    fVar27 = fVar26 * fVar28 * DAT_004c29c8;
    fVar25 = fVar29 * fVar28 * DAT_004c29c8;
    fVar29 = fVar30 * fVar28 * DAT_004c29c8;
    fVar28 = ABS(fVar25);
    uVar5 = uVar23 & 0xfffffff | (uint)(fVar24 <= fVar29) << 0x1d;
    fVar29 = ABS(fVar29);
    for (fVar26 = ABS(fVar27); DAT_004c29cc <= (int)fVar26; fVar26 = fVar26 - DAT_004c29d0) {
    }
    for (; DAT_004c29cc <= (int)fVar28; fVar28 = fVar28 - DAT_004c29d0) {
    }
    for (; DAT_004c29cc <= (int)fVar29; fVar29 = fVar29 - DAT_004c29d0) {
    }
    uVar23 = VectorFloatToUnsigned(fVar26,3);
    uVar31 = VectorFloatToUnsigned(fVar28,3);
    uVar32 = VectorFloatToUnsigned(fVar29,3);
    fVar34 = (float)VectorUnsignedToFloat(uVar23 & 0xffff,(byte)(uVar5 >> 0x15) & 3);
    fVar35 = (float)VectorUnsignedToFloat(uVar31 & 0xffff,(byte)(uVar5 >> 0x15) & 3);
    pfVar9 = (float *)(DAT_004c29d4 + (uVar23 & 0xff) * 0x10);
    fVar33 = (float)VectorUnsignedToFloat(uVar32 & 0xffff,(byte)(uVar5 >> 0x15) & 3);
    pfVar10 = (float *)(DAT_004c29d4 + (uVar31 & 0xff) * 0x10);
    fVar30 = *pfVar9 + (fVar26 - fVar34) * pfVar9[2];
    fVar26 = pfVar9[1] + (fVar26 - fVar34) * pfVar9[3];
    pfVar9 = (float *)(DAT_004c29d4 + (uVar32 & 0xff) * 0x10);
    local_68 = *pfVar10 + (fVar28 - fVar35) * pfVar10[2];
    local_88 = pfVar10[1] + (fVar28 - fVar35) * pfVar10[3];
    fVar28 = *pfVar9 + (fVar29 - fVar33) * pfVar9[2];
    if (fVar27 < fVar24) {
      fVar30 = -fVar30;
    }
    fVar29 = pfVar9[1] + (fVar29 - fVar33) * pfVar9[3];
    if (fVar25 < fVar24) {
      local_68 = -local_68;
    }
    if (!SUB41(uVar5 >> 0x1d,0)) {
      fVar28 = -fVar28;
    }
    local_64 = fVar30 * local_88;
    local_60 = fVar26 * local_88;
    local_78 = fVar28 * local_88;
    local_88 = fVar29 * local_88;
    local_84 = fVar30 * fVar29 * local_68 - fVar26 * fVar28;
    local_70 = fVar26 * fVar28 * local_68 - fVar30 * fVar29;
    local_80 = fVar30 * fVar28 + fVar26 * fVar29 * local_68;
    local_74 = fVar26 * fVar29 + fVar30 * fVar28 * local_68;
    local_68 = -local_68;
    local_7c = *puVar2;
    local_6c = (float)puVar2[1];
    local_5c = (float)puVar2[2];
    FUN_0036c174(local_b8,param_3,&local_88);
    FUN_00372224(param_4 + 0x243c,local_b8);
    return;
  }
  cVar1 = *(char *)(param_4 + 0x1b5);
  iVar6 = *(int *)(param_4 + 0x1224);
  local_58 = (float *)(param_4 + 0x23e8);
  if (cVar1 == -1) {
    FUN_00372224(param_4 + 0x243c,param_3);
  }
  else if (cVar1 == '\v' || cVar1 == '\f') {
    iVar8 = DAT_004c2064 + *(int *)(DAT_004c205c + 4) * 0x30;
    FUN_00372070(DAT_004c2548,param_3,iVar8 + 4);
    local_6c = (float)(int)*(short *)(iVar8 + 0x10);
    local_68 = (float)(int)*(short *)(iVar8 + 0x12);
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar25 * fVar28,DAT_004c2548,1);
    if (local_68 != 0.0) {
      fVar25 = (float)VectorSignedToFloat(local_68,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar25 * fVar28,DAT_004c2548,1);
    }
    if (local_6c != 0.0) {
      fVar25 = (float)VectorSignedToFloat(local_6c,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar25 * fVar28,DAT_004c2548,1);
    }
    if ((((*(uint *)(param_4 + 0x1710) & 0x200) != 0) && (-1 < *(short *)(param_4 + 0x2248))) &&
       (fVar28 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c254c + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3),
       (int)*(short *)(param_4 + 0x2218) <= (int)(DAT_004c2550 / fVar28 + fVar27))) {
      FUN_003735ac(&local_70,param_3,iVar8 + 4);
      fVar28 = DAT_004c2554;
      fVar25 = SQRT((local_70 - *local_58) * (local_70 - *local_58) +
                    (local_6c - local_58[1]) * (local_6c - local_58[1]) +
                    (local_68 - local_58[2]) * (local_68 - local_58[2]));
      if (*(int *)(DAT_004c205c + 4) == 0) {
        fVar25 = fVar25 - DAT_004c255c;
        *(float *)(param_4 + 0x2240) = fVar25;
        if (fVar24 <= fVar25) {
          fVar25 = fVar25 * fVar28;
          *(float *)(param_4 + 0x2240) = fVar25;
          goto joined_r0x004c2360;
        }
LAB_004c2348:
        *(float *)(param_4 + 0x2240) = fVar24;
      }
      else {
        fVar25 = fVar25 - DAT_004c2558;
        *(float *)(param_4 + 0x2240) = fVar25;
        if (fVar25 < fVar24) goto LAB_004c2348;
        fVar25 = fVar25 * fVar28;
        *(float *)(param_4 + 0x2240) = fVar25;
joined_r0x004c2360:
        if (0x3f800000 < (int)fVar25) {
          *(float *)(param_4 + 0x2240) = fVar26;
        }
      }
      *(undefined4 *)(param_4 + 0x2244) = DAT_004c2560;
    }
    local_60 = *(float *)(param_4 + 0x2240);
    local_64 = fVar26;
    local_5c = fVar26;
    FUN_003283a0(DAT_004c2548,DAT_004c2548,&local_64);
    if (*(int *)(DAT_004c205c + 4) != 0) {
      local_70 = fVar24;
      local_6c = fVar24;
      local_68 = fVar26;
      FUN_003625f8(*(float *)(param_4 + 0x2240) * DAT_004c2564,auStack_a0,&local_70);
      FUN_0036c174(DAT_004c2548,DAT_004c2548,auStack_a0);
    }
  }
  else {
    fVar28 = *(float *)(param_4 + 0x58);
    bVar22 = fVar28 == fVar24;
    if (fVar28 < fVar24 == (NAN(fVar28) || NAN(fVar24))) {
      bVar22 = cVar1 == '\n';
    }
    if (bVar22) {
      FUN_00372224(param_4 + 0x243c,param_3);
      FUN_002b949c(param_1,param_4,local_54,param_3,DAT_004c2568);
    }
  }
  iVar8 = DAT_004c201c;
  if (*(float *)(param_4 + 0x58) < fVar24 != (NAN(*(float *)(param_4 + 0x58)) || NAN(fVar24))) {
    return;
  }
  if (((*(uint *)(DAT_004c201c + 0x2c) & 1) == 0) &&
     (iVar13 = FUN_003679b4(DAT_004c201c + 0x2c), puVar2 = DAT_004c256c, iVar13 != 0)) {
    *DAT_004c256c = uVar7;
    puVar2[1] = fVar29;
    puVar2[2] = fVar24;
  }
  if ((*(char *)(param_4 + 0x1a9) == '\x10' || *(char *)(param_4 + 0x1a9) == '\x11') &&
     ((*(uint *)(param_4 + 0x1710) & 0x400000) == 0)) {
    if (((*(uint *)(iVar8 + 0x30) & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_004c2570), puVar2 = DAT_004c2578, uVar11 = DAT_004c2574, iVar8 != 0
       )) {
      *DAT_004c2578 = uVar7;
      puVar2[1] = uVar11;
      puVar2[2] = fVar24;
    }
    FUN_003735ac(param_4 + 0x1240,param_3,DAT_004c256c);
    if (iVar6 != 0) {
      FUN_003735ac(iVar6 + 0x28,param_3,DAT_004c2578);
      FUN_00372224(&local_88,param_3);
      uVar7 = DAT_004c257c;
      FUN_00371234(DAT_004c257c,&local_88,1);
      FUN_003735e8(uVar7,&local_88,1);
      FUN_003624c8(&local_88,iVar6 + 0x34,0);
      *(undefined2 *)(iVar6 + 0xbc) = *(undefined2 *)(iVar6 + 0x34);
      uVar11 = DAT_004c2994;
      uVar7 = DAT_004c2990;
      *(undefined2 *)(iVar6 + 0xbe) = *(undefined2 *)(iVar6 + 0x36);
      *(undefined2 *)(iVar6 + 0xc0) = *(undefined2 *)(iVar6 + 0x38);
      FUN_003713fc(uVar11,uVar7,fVar24,&local_88,1);
      iVar8 = FUN_004c4d30(param_4,param_1);
      uVar11 = DAT_004c29a0;
      uVar7 = DAT_004c299c;
      if (iVar8 == 0) {
        fVar26 = *(float *)(param_4 + 0x29c0) - DAT_004c2998;
        *(float *)(param_4 + 0x29c0) = fVar26;
        if (fVar26 <= fVar24) {
          *(float *)(param_4 + 0x29c0) = fVar24;
          goto LAB_004c268c;
        }
        fVar26 = *(float *)(param_4 + 0x29c4) - fVar27;
        *(float *)(param_4 + 0x29c4) = fVar26;
        if (fVar26 == fVar24 || fVar26 < fVar24 != (NAN(fVar26) || NAN(fVar24))) {
          fVar26 = fVar24;
        }
        *(float *)(param_4 + 0x29c4) = fVar26;
        cVar1 = *(char *)(param_4 + 0x1a9);
      }
      else {
        fVar24 = *(float *)(param_4 + 0x29c0) + DAT_004c2998;
        *(float *)(param_4 + 0x29c0) = fVar24;
        if ((int)fVar24 < 0x3f800001) {
          fVar26 = fVar24;
        }
        *(float *)(param_4 + 0x29c0) = fVar26;
        cVar1 = *(char *)(param_4 + 0x1a9);
      }
      if (cVar1 != '\x10') {
        uVar7 = uVar11;
      }
      FUN_004c55c0(uVar7,param_1,param_4,&local_88);
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x29bc) = DAT_004c29a4;
    *(float *)(param_4 + 0x29c0) = fVar24;
    *(float *)(param_4 + 0x29c4) = fVar24;
  }
LAB_004c268c:
  if (*(short *)(param_4 + 0x224e) == 0) {
    iVar8 = FUN_0034dd2c(param_4);
    if (iVar8 != 0) {
      return;
    }
    if (iVar6 == 0) {
      return;
    }
  }
  pfVar9 = DAT_004c29ac;
  if ((*(uint *)(param_4 + 0x1710) & 0x400) == 0) {
    uVar4 = *(ushort *)(param_4 + 0x224e);
    bVar22 = uVar4 != 0;
    if (bVar22) {
      uVar4 = (ushort)*(byte *)(DAT_004c29a8 + param_4);
    }
    if (bVar22 && uVar4 != 0) {
      FUN_0036df4c(DAT_004c29ac,local_50);
      goto LAB_004c2738;
    }
  }
  *DAT_004c29ac = *local_50 + fVar27 * (*local_58 - *local_50);
  pfVar9[1] = local_50[1] + fVar27 * (local_58[1] - local_50[1]);
  pfVar9[2] = local_50[2] + fVar27 * (local_58[2] - local_50[2]);
LAB_004c2738:
  if (*(short *)(param_4 + 0x224e) == 0) {
    FUN_0036df4c(iVar6 + 0x28,DAT_004c29ac);
  }
  return;
}

