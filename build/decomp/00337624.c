// OoT3D decomp @ 00337624  name=FUN_00337624  size=2380

void FUN_00337624(float param_1,float param_2,int param_3,undefined4 *param_4,float *param_5,
                 float *param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  undefined4 uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  bool bVar24;
  float *pfVar25;
  uint in_fpscr;
  uint uVar26;
  undefined4 *extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar27;
  undefined4 extraout_s0_02;
  undefined4 *extraout_s0_03;
  float *extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float fVar28;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  undefined4 extraout_s2_03;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_94;
  float local_90;
  float local_8c;
  float *local_88;
  undefined4 *local_84;
  float *local_80;
  float local_7c;
  float local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  short local_6c;
  short local_6a;
  float local_68;
  float local_64;
  float local_60;

  iVar9 = DAT_00337be8;
  pfVar17 = (float *)(param_3 + 0x8c);
  pfVar21 = (float *)(param_3 + 0x80);
  pfVar22 = (float *)(param_3 + 0xa4);
  if ((*(uint *)(DAT_00337be8 + 0x44) & 1) == 0) {
    FUN_003679b4(DAT_00337be8 + 0x44);
  }
  if ((*(uint *)(iVar9 + 0x40) & 1) == 0) {
    FUN_003679b4(DAT_00337bec);
  }
  if ((*(uint *)(iVar9 + 0x3c) & 1) == 0) {
    FUN_003679b4(DAT_00337bf0);
  }
  pfVar20 = DAT_00337bf4;
  local_88 = (float *)(param_3 + 0xa4);
  local_7c = (float)(1 - (uint)*(ushort *)(param_6 + 6));
  if (1 < *(ushort *)(param_6 + 6)) {
    local_7c = 0.0;
  }
  local_80 = (float *)(param_3 + 0x8c);
  local_84 = (undefined4 *)(param_3 + 0x80);
  fVar15 = *(float *)(param_3 + 0xa8);
  fVar23 = *(float *)(param_3 + 0xac);
  iVar18 = 0;
  *DAT_00337bf4 = *local_88;
  pfVar20[1] = fVar15;
  pfVar20[2] = fVar23;
  iVar9 = FUN_003553fc(param_3,local_84,pfVar20);
  puVar3 = DAT_00337bf8;
  if (iVar9 == 0) goto LAB_0033784c;
  uVar16 = local_84[1];
  uVar19 = local_84[2];
  *DAT_00337bf8 = *local_84;
  puVar3[1] = uVar16;
  puVar3[2] = uVar19;
  FUN_00342e8c(puVar3 + -3,puVar3 + -7);
  puVar4 = DAT_00337bf8;
  if (DAT_00337bfc < *(short *)(puVar3 + -2)) {
    *(undefined2 *)((int)puVar3 + -6) = *(undefined2 *)((int)param_4 + 6);
  }
  iVar18 = FUN_003553fc(param_3,local_88,puVar4);
  puVar4 = DAT_00337bf8;
  if (iVar18 == 0) {
    if (((uint)local_7c & 1) != 0) {
      uVar16 = local_84[1];
      uVar19 = local_84[2];
      *DAT_00337bf8 = *local_84;
      puVar4[1] = uVar16;
      puVar4[2] = uVar19;
      local_94 = *local_80;
      local_90 = local_80[1];
      local_8c = local_80[2];
      iVar10 = FUN_003553fc(param_3,&local_94,DAT_00337bf8);
      if ((iVar10 != 0) && (puVar3[-4] != DAT_00337bf8[6])) goto LAB_003377d4;
    }
LAB_00337818:
    iVar18 = 3;
  }
  else {
    if (puVar3[-4] == DAT_00337bf8[6]) goto LAB_00337818;
LAB_003377d4:
    FUN_00342e8c(DAT_00337c00 + 0x10);
    if (DAT_00337bfc < *(short *)(DAT_00337bf8 + 8)) {
      *(short *)((int)DAT_00337bf8 + 0x22) = *(short *)((int)param_4 + 6) + -0x7fff;
    }
    if (iVar9 != iVar18) goto LAB_00337818;
    uVar26 = FUN_00340404(puVar3 + -7,DAT_00337c00);
    if (uVar26 < 0xbf000001) {
      if (0x3f000000 < (int)uVar26) goto LAB_00337818;
      iVar18 = 2;
    }
    else {
      iVar18 = 6;
    }
  }
LAB_0033784c:
  fVar5 = DAT_00337c14;
  fVar23 = DAT_00337c10;
  uVar19 = DAT_00337c0c;
  uVar16 = DAT_00337c08;
  fVar15 = DAT_00337c04;
  puVar3 = DAT_00337bf8;
  if (iVar18 == 1 || iVar18 == 2) {
    pfVar20 = (float *)(DAT_00337bf8 + -10);
    FUN_003a2f84(DAT_00337bf8[-4],DAT_00337bf8[6],pfVar21,pfVar22,&local_90);
    *param_6 = local_90;
    param_6[1] = local_8c;
    param_6[2] = (float)local_88;
    local_68 = local_90 + (float)puVar3[-7] + (float)puVar3[3] * fVar5;
    local_64 = param_6[1] + (float)puVar3[-6] + (float)puVar3[4] * fVar5;
    local_60 = param_6[2] + (float)puVar3[-5] + (float)puVar3[5] * fVar5;
    fVar28 = (float)FUN_00338a90(pfVar21,pfVar20);
    uVar26 = in_fpscr & 0xfffffff | (uint)(fVar28 < param_1) << 0x1f |
             (uint)(fVar28 == param_1) << 0x1e;
    in_fpscr = uVar26 | (uint)(NAN(fVar28) || NAN(param_1)) << 0x1c;
    bVar1 = (byte)(uVar26 >> 0x18);
    fVar27 = fVar23;
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar27 = fVar28 / param_1;
    }
    *param_5 = fVar27;
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00337c18 + 0x1a8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    param_6[4] = fVar27 * fVar15;
    *(undefined2 *)(param_6 + 6) = 1;
    param_6[3] = (float)DAT_00337bf8[6];
    FUN_00372474(&local_70,pfVar21,&local_68);
    local_70 = *param_4;
    FUN_00372448(pfVar21,&local_70);
    local_84 = extraout_s0;
    local_80 = extraout_s1;
    local_7c = extraout_s2;
    FUN_00367df4(uVar19,uVar19,uVar16,&local_84,pfVar17);
    pfVar7 = DAT_00337c1c;
    fVar27 = *(float *)(param_3 + 0x90);
    fVar28 = *(float *)(param_3 + 0x94);
    *DAT_00337c1c = *pfVar17;
    pfVar7[1] = fVar27;
    pfVar7[2] = fVar28;
    iVar9 = FUN_003553fc(param_3,pfVar21,pfVar7);
    if (iVar9 == 0) {
      local_6a = local_6a + ((short)(*(short *)((int)param_4 + 6) - local_6a) >> 1);
      local_6c = local_6c + ((short)(*(short *)(param_4 + 1) - local_6c) >> 1);
      FUN_00372448(pfVar21,&local_70);
      local_90 = extraout_s0_00;
      local_8c = (float)extraout_s1_00;
      local_88 = (float *)extraout_s2_00;
      FUN_00367df4(uVar19,uVar19,uVar16,&local_90,pfVar17);
      if (*(short *)(puVar3 + -2) < DAT_00337c20) {
        *(short *)((int)param_6 + 0x16) = local_6a;
        sVar8 = local_6c;
      }
      else {
        *(undefined2 *)((int)param_6 + 0x16) = *(undefined2 *)((int)param_4 + 6);
        sVar8 = *(short *)(param_4 + 1);
      }
      *(short *)(param_6 + 5) = sVar8;
      local_68 = *param_6 - ((float)puVar3[-7] + (float)DAT_00337bf8[3] * fVar5);
      local_64 = param_6[1] - ((float)puVar3[-6] + (float)DAT_00337bf8[4] * fVar5);
      local_60 = param_6[2] - ((float)puVar3[-5] + (float)DAT_00337bf8[5] * fVar5);
      FUN_00372474(&local_70,pfVar21,&local_68);
      local_70 = *param_4;
      FUN_00372448(pfVar21,&local_70);
      *pfVar22 = extraout_s0_01;
      *(undefined4 *)(param_3 + 0xa8) = extraout_s1_01;
      *(undefined4 *)(param_3 + 0xac) = extraout_s2_01;
      return;
    }
    FUN_00367df4(uVar19,uVar19,uVar16,DAT_00337c1c,pfVar17);
    pfVar7 = DAT_00337c1c;
    fVar27 = DAT_00337c1c[1];
    fVar28 = DAT_00337c1c[2];
    fVar11 = DAT_00337c1c[3];
    fVar13 = DAT_00337c1c[4];
    pfVar25 = DAT_00337c1c + 5;
    *pfVar20 = *DAT_00337c1c;
    puVar3[-9] = fVar27;
    puVar3[-8] = fVar28;
    puVar3[-7] = fVar11;
    puVar3[-6] = fVar13;
    fVar27 = pfVar7[6];
    fVar28 = pfVar7[7];
    fVar11 = pfVar7[8];
    fVar13 = pfVar7[9];
    puVar3[-5] = *pfVar25;
    puVar3[-4] = fVar27;
    puVar3[-3] = fVar28;
    puVar3[-2] = fVar11;
    puVar3[-1] = fVar13;
  }
  else if (iVar18 != 3 && iVar18 != 6) {
    if (*(short *)(param_6 + 6) != 0) {
      *(undefined2 *)((int)param_6 + 0x1a) = *(undefined2 *)(*DAT_00337c18 + 0x1fc);
      *pfVar22 = *pfVar17;
      *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(param_3 + 0x90);
      *(undefined4 *)(param_3 + 0xac) = *(undefined4 *)(param_3 + 0x94);
      *(undefined2 *)(param_6 + 6) = 0;
    }
    pfVar21 = DAT_00337bf4;
    param_6[4] = param_2;
    param_6[3] = 0.0;
    local_84 = (undefined4 *)(*pfVar21 + pfVar21[3] * fVar5);
    local_80 = (float *)(pfVar21[1] + pfVar21[4] * fVar5);
    local_7c = pfVar21[2] + pfVar21[5] * fVar5;
    FUN_00367df4(uVar19,uVar19,uVar16,&local_84,pfVar17);
    return;
  }
  pfVar20 = DAT_00337bf4;
  if ((uint)DAT_00337bf4[4] <= (uint)DAT_00337c24) goto LAB_00337bd4;
  fVar27 = (float)FUN_00367ef0(*(undefined4 *)(param_3 + 0xd8));
  uVar12 = *(ushort *)(*(int *)(param_3 + 0xd4) + 0x104);
  bVar2 = false;
  if (uVar12 == 5) {
LAB_00337b68:
    fVar27 = *(float *)(*(int *)(param_3 + 0xd8) + 0x2c) + fVar27 + DAT_00337c2c;
    fVar28 = pfVar20[1];
    uVar26 = in_fpscr & 0xfffffff | (uint)(fVar27 < fVar28) << 0x1f |
             (uint)(fVar27 == fVar28) << 0x1e;
    in_fpscr = uVar26 | (uint)(NAN(fVar27) || NAN(fVar28)) << 0x1c;
    bVar1 = (byte)(uVar26 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      bVar2 = true;
    }
  }
  else {
    bVar24 = uVar12 == 4;
    if (bVar24) {
      uVar12 = (ushort)*(byte *)(DAT_00337c28 + *(int *)(param_3 + 0xd4));
    }
    if (bVar24 && uVar12 == 5) goto LAB_00337b68;
  }
  if (bVar2 || param_7 != 0) {
    FUN_00372474(&local_70,pfVar21,DAT_00337bf4);
    local_70 = *param_4;
    local_6c = (short)DAT_00337c30;
    FUN_00372448(pfVar21,&local_70);
    iVar9 = DAT_00337c34;
    iVar18 = DAT_00337c34 + 0x28;
    *(undefined4 *)(DAT_00337c34 + 0x28) = extraout_s0_02;
    *(undefined4 *)(iVar9 + 0x2c) = extraout_s1_02;
    *(undefined4 *)(iVar9 + 0x30) = extraout_s2_02;
    FUN_003553fc(param_3,pfVar21,iVar18);
  }
LAB_00337bd4:
  if (*(short *)(param_6 + 6) != 0) {
    *(undefined2 *)((int)param_6 + 0x1a) = *(undefined2 *)(*DAT_00337c18 + 0x1fc);
    *(undefined2 *)(param_6 + 6) = 0;
    *pfVar22 = *pfVar17;
    *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(param_3 + 0x90);
    *(undefined4 *)(param_3 + 0xac) = *(undefined4 *)(param_3 + 0x94);
  }
  fVar28 = (float)FUN_00338a90(pfVar21,DAT_00337bf4);
  fVar27 = fVar23;
  if (fVar28 <= param_1) {
    fVar27 = fVar28 / param_1;
  }
  *param_5 = fVar27;
  iVar9 = DAT_00337fc0;
  param_6[4] = fVar27 * param_2;
  pfVar22 = DAT_00337bf4;
  fVar27 = DAT_00337fc4;
  if (*(int *)(iVar9 + 4) != 0) {
    fVar27 = DAT_00337fc8;
  }
  uVar26 = in_fpscr & 0xfffffff | (uint)(fVar27 <= fVar28) << 0x1d;
  if (!SUB41(uVar26 >> 0x1d,0)) {
    fVar11 = *pfVar20;
    fVar13 = pfVar20[1];
    fVar14 = pfVar20[2];
    local_94 = pfVar20[3];
    local_90 = pfVar20[4];
    local_8c = pfVar20[5];
    local_88 = (float *)pfVar20[6];
    local_84 = (undefined4 *)pfVar20[7];
    local_80 = (float *)pfVar20[8];
    local_7c = pfVar20[9];
    fVar28 = SQRT(fVar27 * fVar27 - fVar28 * fVar28);
    if ((param_7 != 0) && ((uint)DAT_00337c24 < (uint)pfVar20[4])) {
      fVar28 = -fVar28;
    }
    pfVar20[1] = pfVar20[1] + fVar28;
    iVar9 = FUN_003553fc(param_3,pfVar21,pfVar22);
    if ((iVar9 != 0) && (iVar9 = FUN_00338a90(pfVar21,DAT_00337bf4), iVar9 <= DAT_00337fcc)) {
      *pfVar20 = fVar11;
      pfVar20[1] = fVar13;
      pfVar20[2] = fVar14;
      pfVar20[3] = local_94;
      pfVar20[4] = local_90;
      pfVar20[5] = local_8c;
      pfVar20[6] = (float)local_88;
      pfVar20[7] = (float)local_84;
      pfVar20[8] = (float)local_80;
      pfVar20[9] = local_7c;
    }
    fVar28 = (float)FUN_00338a90(pfVar21,DAT_00337bf4);
  }
  fVar11 = pfVar20[6];
  uVar12 = 0;
  if (fVar11 != 0.0) {
    uVar12 = *(ushort *)((int)fVar11 + 2);
  }
  if (fVar11 != 0.0 && (uVar12 & 0x4000) != 0) {
    fVar23 = pfVar20[1];
    fVar11 = pfVar20[2];
    *pfVar17 = *pfVar20;
    *(float *)(param_3 + 0x90) = fVar23;
    *(float *)(param_3 + 0x94) = fVar11;
  }
  else {
    fVar13 = *pfVar20;
    fVar14 = pfVar20[1];
    fVar32 = *pfVar21 - fVar13;
    fVar29 = pfVar20[2];
    fVar11 = *(float *)(param_3 + 0x84) - fVar14;
    fVar30 = *(float *)(param_3 + 0x88) - fVar29;
    fVar31 = fVar32 * fVar32 + fVar11 * fVar11 + fVar30 * fVar30;
    uVar26 = uVar26 & 0xfffffff | (uint)(fVar31 == DAT_00337fd0) << 0x1e;
    if (SUB41(uVar26 >> 0x1e,0)) {
      fVar23 = pfVar20[4];
      fVar11 = pfVar20[5];
      *pfVar17 = fVar13 + pfVar20[3] * fVar5;
      *(float *)(param_3 + 0x90) = fVar14 + fVar23 * fVar5;
      *(float *)(param_3 + 0x94) = fVar29 + fVar11 * fVar5;
    }
    else {
      fVar33 = pfVar20[4];
      fVar23 = fVar23 / SQRT(fVar31);
      fVar31 = pfVar20[5];
      if ((int)(fVar32 * fVar23 * pfVar20[3] + fVar11 * fVar23 * fVar33 + fVar30 * fVar23 * fVar31)
          < DAT_00337fd4) {
        *pfVar17 = fVar13 + pfVar20[3] * fVar5;
        *(float *)(param_3 + 0x90) = fVar14 + fVar33 * fVar5;
        *(float *)(param_3 + 0x94) = fVar29 + fVar31 * fVar5;
      }
      else {
        *pfVar17 = fVar13 + fVar32 * fVar23 * fVar5;
        *(float *)(param_3 + 0x90) = fVar14 + fVar11 * fVar23 * fVar5;
        *(float *)(param_3 + 0x94) = fVar29 + fVar30 * fVar23 * fVar5;
      }
    }
  }
  param_6[3] = 0.0;
  piVar6 = DAT_00337c18;
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00337c18 + 0x1be),
                                      (byte)(uVar26 >> 0x15) & 3);
  if (param_7 != 0) {
    fVar23 = fVar27;
  }
  uVar26 = uVar26 & 0xfffffff | (uint)(fVar23 <= fVar28) << 0x1d;
  if (!SUB41(uVar26 >> 0x1d,0)) {
    local_72 = *(undefined2 *)((int)param_4 + 6);
    fVar27 = (float)FUN_002cfca0((int)(short)(*(short *)(pfVar20 + 8) + 0x3fff));
    local_74 = (undefined2)(int)(fVar27 * DAT_00337fd8);
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x1c0),(byte)(uVar26 >> 0x15) & 3)
    ;
    fVar15 = (fVar23 - fVar28) * fVar27 * fVar15;
    local_78 = fVar5;
    if (DAT_00337fcc < (int)fVar15) {
      local_78 = fVar15;
    }
    FUN_00372448(pfVar17,&local_78);
    local_84 = extraout_s0_03;
    local_80 = (float *)extraout_s1_03;
    local_7c = (float)extraout_s2_03;
    FUN_00367df4(uVar19,uVar19,uVar16,&local_84,pfVar17);
  }
  return;
}
