// OoT3D decomp @ 0023457c  name=FUN_0023457c  size=3220

undefined4 FUN_0023457c(float *param_1)

{
  short sVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  short sVar8;
  float fVar9;
  short *psVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_s0;
  undefined4 uVar23;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar24;
  float extraout_s0_02;
  float fVar25;
  float fVar26;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_e8 [4];
  short local_e4;
  short local_e2;
  float local_e0;
  short local_dc;
  short local_da;
  float local_d8;
  short local_d4;
  short local_d2;
  float local_d0;
  short local_cc;
  short local_ca;
  float local_c8;
  short local_c4;
  short local_c2;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_98;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float *local_7c;
  undefined1 auStack_78 [20];

  local_7c = param_1 + 0x23;
  pfVar12 = param_1 + 0x29;
  pfVar17 = param_1 + 0x20;
  local_98 = 0;
  fVar9 = param_1[0x36];
  fVar19 = (float)FUN_00367ef0();
  fVar5 = DAT_00234994;
  fVar24 = DAT_00234990;
  piVar4 = DAT_0023498c;
  psVar10 = *(short **)
             (*(int *)(DAT_00234984 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
             *(short *)(param_1 + 99) * 8 + 4);
  fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar27 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar26 = (DAT_00234994 + fVar27 * DAT_00234990) - (DAT_00234988 / fVar19) * fVar25 * DAT_00234990;
  fVar25 = (float)VectorSignedToFloat((int)*psVar10,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar25 * DAT_00234990 * fVar19 * fVar26;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar25 * fVar24;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[7] = fVar25;
  fVar25 = (float)VectorSignedToFloat((int)psVar10[0x10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[8] = fVar25 * fVar24;
  *(short *)(param_1 + 0xb) = psVar10[0x12];
  fVar6 = DAT_002349ac;
  uVar13 = DAT_002349a8;
  fVar30 = DAT_002349a4;
  fVar32 = DAT_002349a0;
  fVar27 = DAT_0023499c;
  fVar25 = DAT_00234998;
  fVar20 = (float)VectorSignedToFloat((int)psVar10[0x14],(byte)(in_fpscr >> 0x15) & 3);
  param_1[9] = fVar20 * fVar24 * fVar19 * fVar26;
  fVar20 = (float)VectorSignedToFloat((int)psVar10[0x16],(byte)(in_fpscr >> 0x15) & 3);
  param_1[10] = fVar20 * fVar24;
  *(undefined2 *)(param_1 + 0x13) = 0x3c;
  iVar11 = *piVar4;
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x1ac),(byte)(in_fpscr >> 0x15) & 3);
  param_1[0x10] = fVar20 * fVar24;
  fVar26 = param_1[1];
  fVar28 = param_1[4];
  fVar31 = param_1[5];
  fVar29 = param_1[7];
  if ((*(uint *)((int)param_1[0x36] + 0x1710) & 0x1000) == 0) {
    if (*(short *)(param_1 + 0x13) < 0) {
      sVar8 = *(short *)(param_1 + 0x13) + 1;
      goto LAB_00234834;
    }
    *(undefined2 *)(param_1 + 0x13) = 0x3c;
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x1ac),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar25 = (float)FUN_00355780(fVar27 * fVar24,param_1[0x10],fVar25 * fVar24);
    param_1[0x10] = fVar25;
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1e4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)FUN_00355780(fVar25 * fVar24,param_1[0x45],param_1[0x4a] * fVar27 * fVar24);
    param_1[0x45] = fVar25;
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1e4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)FUN_00355780(fVar25 * fVar24,param_1[0x46],param_1[0x4a] * fVar27 * fVar24);
    param_1[0x46] = fVar25;
    fVar25 = fVar26;
    fVar27 = fVar28;
    fVar30 = fVar29;
    fVar32 = fVar31;
  }
  else {
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x1ac),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar20 = (float)FUN_00355780(fVar22 * fVar24 * fVar6,fVar20 * fVar24,fVar21 * fVar24);
    param_1[0x10] = fVar20;
    uVar7 = DAT_002349b0;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_00355780(DAT_002349b0,param_1[0x45],fVar20 * fVar24,uVar13);
    param_1[0x45] = fVar20;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_00355780(uVar7,param_1[0x46],fVar20 * fVar24,uVar13);
    param_1[0x46] = fVar20;
    if (-0x1e < *(short *)(param_1 + 0x13)) {
      sVar8 = *(short *)(param_1 + 0x13) + -1;
      fVar25 = fVar26;
      fVar27 = fVar28;
      fVar30 = fVar29;
      fVar32 = fVar31;
LAB_00234834:
      *(short *)(param_1 + 0x13) = sVar8;
    }
  }
  fVar20 = DAT_002349b4;
  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar26 = (float)FUN_00355780(fVar26 * fVar24,param_1[0x47],param_1[0x4a] * DAT_002349b4,uVar13);
  param_1[0x47] = fVar26;
  fVar28 = *param_1;
  FUN_00372474(&local_e0,pfVar17,local_7c);
  FUN_00372474(auStack_e8,pfVar17,pfVar12);
  iVar16 = DAT_00234db0;
  fVar26 = param_1[0x3c];
  iVar11 = 0;
  if (fVar26 != 0.0) {
    iVar11 = *(int *)((int)fVar26 + 0x13c);
  }
  if (fVar26 == 0.0 || iVar11 == 0) {
    param_1[0x3c] = 0.0;
    FUN_0033228c(param_1,1,0);
    return 1;
  }
  *(int *)(DAT_00234db0 + 0x14) = (int)*(short *)(param_1 + 0xb);
  sVar8 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar8 == 0 || sVar8 == 10) || sVar8 == 0x14) {
    param_1[0xd] = DAT_00234db4;
    *(undefined2 *)(param_1 + 0x11) = 0;
    param_1[0xf] = param_1[0x3c];
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
    *(short *)((int)param_1 + 0x4a) = *(short *)(*piVar4 + 0x1c4) + *(short *)(*piVar4 + 0x1c2);
    *(short *)((int)param_1 + 0x46) = local_da;
    *(short *)(param_1 + 0x12) = local_dc;
    param_1[0xc] = local_e0;
    param_1[0xe] = param_1[0x38] - param_1[0x4f];
  }
  if (*(short *)(param_1 + 0x62) == 7) {
    *(undefined4 *)(iVar16 + 0x24) = 1;
    *(short *)(param_1 + 0x5f) = -local_dc;
    *(short *)((int)param_1 + 0x17e) = local_da + -0x7fff;
    *(undefined2 *)(param_1 + 0x60) = 0;
  }
  uVar18 = in_fpscr & 0xfffffff | (uint)(param_1[0x53] == param_1[0x38]) << 0x1e;
  if (((SUB41(uVar18 >> 0x1e,0)) || (*(uint *)((int)param_1[0x36] + 0x70) < DAT_00234db8)) ||
     ((*(uint *)(DAT_00234dbc + (int)param_1[0x36]) & 0x200000) != 0)) {
    param_1[0xe] = param_1[0x38];
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (*(short *)((int)param_1 + 0x4a) == 0) {
    if (bVar3) {
      fVar26 = param_1[10];
    }
    else {
      fVar26 = param_1[8];
    }
    fVar26 = (float)FUN_003375bc(fVar26,param_1);
    param_1[0x52] = fVar26;
  }
  FUN_00338790(auStack_78,param_1[0x3c]);
  FUN_00371738(param_1 + 0x3d,auStack_78,0x12);
  if (param_1[0xf] != param_1[0x3c]) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 0;
    return 1;
  }
  if (!bVar3) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0x81;
  }
  if (!bVar3) {
    fVar26 = *param_1;
  }
  else {
    fVar26 = param_1[9];
  }
  FUN_00331e10(fVar26,fVar25,param_1,auStack_e8,param_1 + 0x3d,param_1 + 0xe,&local_d8,
               (int)*(short *)(param_1 + 0xb) | uVar14);
  sVar8 = local_d2;
  local_88 = param_1[0x37];
  fStack_80 = param_1[0x39];
  local_84 = param_1[0x38] + fVar28 + fVar19;
  FUN_00372474(&local_d8,&local_88,param_1 + 0x3d);
  uVar18 = uVar18 & 0xfffffff | (uint)(local_d8 < fVar25) << 0x1f |
           (uint)(local_d8 == fVar25) << 0x1e;
  uVar14 = uVar18 | (uint)(NAN(local_d8) || NAN(fVar25)) << 0x1c;
  bVar2 = (byte)(uVar18 >> 0x18);
  fVar19 = fVar5;
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) {
    fVar19 = local_d8 / fVar25;
  }
  local_94 = param_1[0x3d];
  fStack_90 = param_1[0x3e];
  fStack_8c = param_1[0x3f];
  FUN_00372474(&local_d0,pfVar17,&local_94);
  fVar26 = DAT_00234dc4;
  uVar18 = uVar14 & 0xfffffff | (uint)(local_d0 == fVar25) << 0x1e |
           (uint)(fVar25 <= local_d0) << 0x1d;
  bVar2 = (byte)(uVar18 >> 0x18);
  if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
    local_d0 = fVar25;
  }
  local_d0 = fVar25 - local_d0 * fVar6;
  fVar31 = param_1[2] + (param_1[3] - param_1[2]) * (DAT_00234dc0 - fVar19);
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1ae),
                                      (byte)(uVar18 >> 0x15) & 3);
  fVar28 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1aa),
                                      (byte)(uVar18 >> 0x15) & 3);
  local_c8 = (float)FUN_00355780(fVar25,param_1[0x49],fVar28 * fVar24,DAT_00234dc4);
  param_1[0x49] = local_c8;
  fVar28 = DAT_00234dc8;
  local_c2 = local_e2;
  iVar11 = (int)(short)(local_ca - (local_e2 + -0x7fff));
  sVar1 = *(short *)((int)param_1 + 0x4a);
  if (sVar1 == 0) {
    iVar16 = iVar11;
    if (iVar11 < 0) {
      iVar16 = -iVar11;
    }
    sVar8 = (short)(int)(fVar6 + fVar31 * DAT_00234dc8);
    if (sVar8 < iVar16) {
      fVar22 = (float)VectorSignedToFloat(iVar11,(byte)(uVar18 >> 0x15) & 3);
      fVar22 = fVar22 * DAT_00235248;
      fVar21 = (float)FUN_00355804(local_d0,local_c8);
      fVar31 = fVar31 + ((fVar29 + fVar31) - fVar31) * (fVar21 / local_c8);
      fVar29 = (fVar31 * fVar31 - fVar26) / (fVar31 - DAT_0023524c);
      sVar8 = (short)(int)(fVar6 + ((fVar22 * fVar22) /
                                   ((fVar26 - fVar29 * DAT_0023524c) + fVar29 * fVar22)) * fVar28);
      if (iVar11 < 0) {
        sVar8 = -sVar8;
      }
      iVar16 = (int)sVar8;
      local_c2 = (short)DAT_00235250 + sVar8 + local_e2 + -0x7fff;
    }
    else {
      if (iVar11 < 0) {
        sVar8 = -sVar8;
      }
      iVar16 = (int)sVar8;
      fVar26 = (float)VectorSignedToFloat(iVar16 - iVar11,(byte)(uVar18 >> 0x15) & 3);
      local_c2 = local_e2 - (short)(int)(fVar26 * (fVar5 - param_1[0x4a]) * fVar20);
    }
  }
  else {
    if (sVar1 < *(short *)(*DAT_0023498c + 0x1c4)) {
      local_98 = 1;
    }
    else {
      sVar1 = sVar1 - *(short *)(*DAT_0023498c + 0x1c4);
      FUN_00372474(&local_d8,pfVar17,local_7c);
      local_d2 = sVar8 + -0x7fff;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1c2),
                                          (byte)(uVar18 >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)param_1 + 0x46) - local_d2),
                                          (byte)(uVar18 >> 0x15) & 3);
      fVar26 = fVar5 / fVar26;
      fVar29 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_1 + 0x12) - local_d4),
                                          (byte)(uVar18 >> 0x15) & 3);
      sVar8 = (short)(int)(fVar29 * fVar26);
      fVar29 = (float)VectorSignedToFloat((int)sVar1,(byte)(uVar18 >> 0x15) & 3);
      fVar31 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1cc),
                                          (byte)(uVar18 >> 0x15) & 3);
      local_c8 = (float)FUN_00355780(local_d8 + (param_1[0xc] - local_d8) * fVar26 * fVar29,local_e0
                                     ,fVar31 * fVar24);
      local_c2 = (short)(int)(fVar21 * fVar26) * sVar1 + local_d2;
      iVar16 = (int)(short)(local_c2 - local_da);
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1cc),
                                          (byte)(uVar18 >> 0x15) & 3);
      iVar11 = iVar16;
      if (iVar16 < 0) {
        iVar11 = -iVar16;
      }
      fVar29 = (float)VectorSignedToFloat(iVar16,(byte)(uVar18 >> 0x15) & 3);
      if (9 < iVar11) {
        local_c2 = local_da + (short)(int)(fVar6 + fVar29 * fVar26 * fVar24);
      }
      local_c4 = sVar8 * sVar1 + local_d4;
      iVar16 = (int)(short)(local_c4 - local_dc);
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1cc),
                                          (byte)(uVar18 >> 0x15) & 3);
      iVar11 = iVar16;
      if (iVar16 < 0) {
        iVar11 = -iVar16;
      }
      fVar29 = (float)VectorSignedToFloat(iVar16,(byte)(uVar18 >> 0x15) & 3);
      if (9 < iVar11) {
        local_c4 = local_dc + (short)(int)(fVar6 + fVar29 * fVar26 * fVar24);
      }
    }
    iVar16 = (int)sVar8;
    *(short *)((int)param_1 + 0x4a) = *(short *)((int)param_1 + 0x4a) + -1;
    if (local_98 != 0) goto LAB_0023519c;
  }
  fVar29 = (float)VectorSignedToFloat((int)local_d4,(byte)(uVar18 >> 0x15) & 3);
  fVar26 = (float)VectorSignedToFloat((int)local_cc,(byte)(uVar18 >> 0x15) & 3);
  local_c4 = ((short)(int)(fVar6 + (fVar27 + (fVar32 - fVar27) * fVar19) * fVar28) -
             (short)(int)(fVar29 * (fVar6 + fVar19 * fVar6))) + (short)(int)(fVar26 * param_1[6]);
  iVar11 = DAT_00235254;
  if ((local_c4 < DAT_00235254) || (iVar11 = -DAT_00235254, iVar11 < local_c4)) {
    local_c4 = (short)iVar11;
  }
  iVar15 = (int)(short)(local_c4 - local_e4);
  iVar11 = iVar15;
  if (iVar15 < 0) {
    iVar11 = -iVar15;
  }
  fVar27 = (float)VectorSignedToFloat(iVar15,(byte)(uVar18 >> 0x15) & 3);
  if (9 < iVar11) {
    local_c4 = local_e4 + (short)(int)(fVar6 + fVar27 * param_1[0x10]);
  }
  FUN_00372448(pfVar17,&local_c8);
  *pfVar12 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  param_1[0x2b] = extraout_s2;
  uVar7 = DAT_00235258;
  local_c0 = *pfVar12;
  local_bc = param_1[0x2a];
  local_b8 = param_1[0x2b];
  if (*(short *)(param_1 + 0x62) == 7) {
    if ((*(char *)((int)param_1[0x35] + 0x31a5) == '\0') || (((uint)param_1[0xb] & 1) != 0)) {
      iVar11 = FUN_003553fc(param_1,pfVar17,&local_c0);
      if (iVar11 != 0) {
        fVar25 = fVar25 * fVar6;
        fVar27 = SQRT((*pfVar17 - local_c0) * (*pfVar17 - local_c0) +
                      (param_1[0x21] - local_bc) * (param_1[0x21] - local_bc) +
                      (param_1[0x22] - local_b8) * (param_1[0x22] - local_b8));
        uVar14 = uVar18 & 0xfffffff | (uint)(fVar25 < fVar27) << 0x1f |
                 (uint)(fVar25 == fVar27) << 0x1e;
        uVar18 = uVar14 | (uint)(NAN(fVar25) || NAN(fVar27)) << 0x1c;
        bVar2 = (byte)(uVar14 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar18 >> 0x1c) & 1)) {
          local_c8 = fVar27;
          fVar25 = (float)FUN_00333ed8(fVar27 / fVar25);
          uVar23 = VectorFloatToUnsigned(fVar25 * DAT_0023525c * DAT_00235260,3);
          sVar8 = (short)uVar23 >> 3;
          if (0xb6 < sVar8) {
            sVar8 = 0xb6;
          }
          if (iVar16 < 0) {
            sVar8 = -sVar8;
          }
          local_c2 = sVar8 + local_c2;
          FUN_00372448(pfVar17,&local_c8);
          *pfVar12 = extraout_s0_00;
          param_1[0x2a] = extraout_s1_00;
          param_1[0x2b] = extraout_s2_00;
          local_c0 = *pfVar12;
          local_bc = param_1[0x2a];
          local_b8 = param_1[0x2b];
        }
      }
    }
    else if (((uint)param_1[0xb] & 2) == 0) {
      FUN_00372348(pfVar17,&local_c0);
      local_c0 = local_c0 - extraout_s0_01;
      local_bc = local_bc - extraout_s1_01;
      local_b8 = local_b8 - extraout_s2_01;
    }
    else {
      FUN_00331ae8(param_1,pfVar17,&local_c0);
    }
    pfVar12 = &local_c0;
  }
  FUN_00367df4(uVar7,uVar7,uVar13,pfVar12,local_7c);
LAB_0023519c:
  fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1dc),
                                      (byte)(uVar18 >> 0x15) & 3);
  fVar27 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023498c + 0x1de),
                                      (byte)(uVar18 >> 0x15) & 3);
  fVar25 = param_1[0xd] +
           (param_1[0x4a] * fVar25 * (fVar5 - fVar19) - param_1[0xd]) * fVar27 * fVar24;
  param_1[0xd] = fVar25;
  fVar24 = DAT_00235264;
  *(short *)((int)param_1 + 0x1a2) = (short)(int)(fVar6 + fVar25 * fVar28);
  if ((*(char *)((int)fVar9 + 0x2227) == '\0') && (0x10 < *(short *)(DAT_00235268 + 0x44))) {
    fVar24 = fVar5;
  }
  uVar13 = FUN_00355780((fVar30 - fVar30 * fVar20 * fVar19) * fVar24,param_1[0x51],param_1[0x47]);
  param_1[0x51] = extraout_s0_02;
  return uVar13;
}
