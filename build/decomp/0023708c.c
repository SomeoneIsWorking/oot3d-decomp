// OoT3D decomp @ 0023708c  name=FUN_0023708c  size=2196

undefined4 FUN_0023708c(float *param_1)

{
  short sVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar15;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_b4 [4];
  undefined4 local_b0;
  int local_a0;
  float local_9c;
  short local_98;
  short local_96;
  undefined1 auStack_94 [8];
  float local_8c;
  short local_88;
  short local_86;
  float local_84;
  short local_80;
  short local_7e;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];

  pfVar11 = param_1 + 0x23;
  pfVar10 = param_1 + 0x20;
  pfVar12 = param_1 + 0x29;
  fVar14 = (float)FUN_00367ef0(param_1[0x36]);
  fVar4 = param_1[0x3c];
  iVar5 = 0;
  if (fVar4 != 0.0) {
    iVar5 = *(int *)((int)fVar4 + 0x13c);
  }
  if (fVar4 == 0.0 || iVar5 == 0) {
    param_1[0x3c] = 0.0;
    FUN_0033228c(param_1,1,0);
    return 1;
  }
  sVar3 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar3 == 0 || sVar3 == 10) || sVar3 == 0x14) {
    if (*(char *)((int)param_1[0x35] + 0x361) == '\0') {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x20;
      *(byte *)((int)param_1[0x35] + 0x361) = (byte)*(undefined2 *)(param_1 + 0x6b) | 0x50;
      return 1;
    }
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffdf;
  }
  iVar5 = DAT_00237454;
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffef;
  fVar2 = DAT_00237464;
  fVar4 = DAT_00237460;
  psVar6 = *(short **)
            (*(int *)(iVar5 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023745c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023745c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar15 = fVar14 * DAT_00237468;
  fVar17 = (float)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = fVar17 * fVar15 * DAT_00237460 * fVar14 *
           ((DAT_00237464 + fVar19 * DAT_00237460) - (DAT_00237458 / fVar14) * fVar16 * DAT_00237460
           );
  *param_1 = fVar17;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[7] = fVar16 * fVar4;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[0x10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[8] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[0x12],(byte)(in_fpscr >> 0x15) & 3);
  param_1[9] = fVar16 * fVar4;
  fVar4 = DAT_0023746c;
  fVar16 = (float)VectorSignedToFloat((int)psVar6[0x14],(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (fVar2 - fVar15) * DAT_0023746c;
  param_1[10] = fVar16;
  *(short *)(param_1 + 0xb) = psVar6[0x16];
  *(short *)((int)param_1 + 0x2e) = psVar6[0x18];
  param_1[10] = param_1[10] * fVar15;
  FUN_00372474(auStack_94,pfVar10,pfVar11);
  FUN_00372474(&local_9c,pfVar10,pfVar12);
  FUN_00338790(auStack_48,param_1[0x3c]);
  FUN_00371738(param_1 + 0x3d,auStack_48,0x12);
  param_1[0x3e] = param_1[0x3e] + param_1[10];
  FUN_00338790(auStack_5c,param_1[0x36]);
  FUN_00371738(auStack_b4,auStack_5c,0x12);
  local_68 = param_1[0x37];
  fStack_60 = param_1[0x39];
  local_64 = (float)local_b0;
  FUN_00372474(&local_84,&local_68,param_1 + 0x3d);
  fVar16 = local_84;
  fVar15 = DAT_00237474;
  iVar5 = DAT_00237470;
  *(int *)(DAT_00237470 + 0x14) = (int)*(short *)((int)param_1 + 0x2e);
  sVar3 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar3 != 0 && sVar3 != 10) && sVar3 != 0x14) {
    if (*(short *)(param_1 + 0x13) == 0) {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x410;
    }
    else {
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = (param_1[0x10] - *pfVar10) / fVar14 + *pfVar10;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      param_1[0x21] = (param_1[0x11] - param_1[0x21]) / fVar14 + param_1[0x21];
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      param_1[0x22] = (param_1[0x12] - param_1[0x22]) / fVar14 + param_1[0x22];
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_8c = fVar2 + param_1[0xc] * fVar14 + local_9c;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_86 = local_96 + (short)(int)(param_1[0xd] * fVar14);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_88 = local_98 + (short)(int)(param_1[0xe] * fVar14);
      FUN_00372448(pfVar10,&local_8c);
      *pfVar12 = extraout_s0_02;
      param_1[0x2a] = extraout_s1_02;
      param_1[0x2b] = extraout_s2_02;
      *pfVar11 = *pfVar12;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      fVar14 = (float)FUN_00355780(param_1[8],param_1[0x51],fVar15,fVar2);
      param_1[0x51] = fVar14;
      iVar8 = (int)-*(short *)((int)param_1 + 0x1a2);
      iVar7 = iVar8;
      if (iVar8 < 0) {
        iVar7 = -iVar8;
      }
      iVar9 = iVar7;
      if (iVar7 < 10) {
        iVar9 = 0;
      }
      sVar3 = (short)iVar9;
      fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if (9 < iVar7) {
        sVar3 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar15 + fVar14 * fVar15);
      }
      *(short *)((int)param_1 + 0x1a2) = sVar3;
      fVar14 = (float)FUN_003375bc(param_1[9],param_1);
      param_1[0x52] = fVar14;
      local_dc = *pfVar11;
      fStack_d8 = param_1[0x24];
      fStack_d4 = param_1[0x25];
      FUN_003553fc(param_1,pfVar10,&local_dc);
      *pfVar11 = local_dc;
      param_1[0x24] = fStack_d8;
      param_1[0x25] = fStack_d4;
      FUN_00372474(&local_8c,pfVar10,pfVar11);
      if (local_8c < param_1[1] * DAT_00237960) {
        local_8c = param_1[1] * DAT_00237960;
        FUN_00372448(pfVar10,&local_8c);
        *pfVar11 = extraout_s0_03;
        param_1[0x24] = extraout_s1_03;
        param_1[0x25] = extraout_s2_03;
      }
      FUN_00367df4(DAT_00237964,DAT_00237964,fVar4,pfVar12,pfVar11);
      *(short *)(param_1 + 0x13) = *(short *)(param_1 + 0x13) + -1;
    }
    if (((uint)param_1[0x65] & 8) == 0) {
      return 1;
    }
    *(undefined4 *)(iVar5 + 0x14) = 0;
    FUN_00338c04(param_1);
    iVar5 = DAT_0023796c;
    param_1[0x52] = DAT_00237968;
    if (((int)param_1[0x48] <= iVar5) && (iVar5 = FUN_003389e0(), iVar5 == 0)) {
      return 1;
    }
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff7 | 4;
    return 1;
  }
  local_7c = param_1[0x3c];
  local_78 = param_1[0x36];
  *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  param_1[0xf] = param_1[0x3c];
  uVar13 = in_fpscr & 0xfffffff | (uint)(local_84 <= param_1[2]) << 0x1d;
  fVar4 = fVar2;
  if (SUB41(uVar13 >> 0x1d,0)) {
    fVar4 = local_84 / param_1[2];
  }
  *(short *)(param_1 + 0x13) = *(short *)(param_1 + 0xb);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xb),(byte)(uVar13 >> 0x15) & 3);
  fVar18 = (float)VectorSignedToFloat((int)local_80,(byte)(uVar13 >> 0x15) & 3);
  local_88 = (short)(int)-(fVar18 * param_1[7]) +
             (short)(int)(fVar15 + (param_1[5] + (param_1[6] - param_1[5]) * fVar4) * DAT_00237478);
  local_a0 = (int)local_88;
  sVar3 = (short)(int)(fVar15 + (param_1[3] + (param_1[4] - param_1[3]) * fVar4) * DAT_00237478);
  if ((*(ushort *)((int)param_1 + 0x2e) & 0x10) == 0) {
    if ((*(ushort *)((int)param_1 + 0x2e) & 0x20) == 0) {
      sVar1 = local_7e - local_96;
      if ((uint)(DAT_00237868 + sVar1) <= DAT_0023786c) goto joined_r0x00237580;
    }
    else {
      sVar1 = local_7e - local_96;
    }
    if (sVar1 < 0) {
      sVar3 = (local_7e + -0x7fff) - sVar3;
    }
    else {
      sVar3 = sVar3 + local_7e + -0x7fff;
    }
  }
  else {
    sVar1 = local_7e - local_96;
joined_r0x00237580:
    if (sVar1 < 0) {
      sVar3 = sVar3 + local_7e;
    }
    else {
      sVar3 = local_7e - sVar3;
    }
  }
  local_84 = local_84 * DAT_00237864 + ((local_84 * (fVar2 - fVar4)) / fVar19) * DAT_00237860;
  local_68 = param_1[0x37];
  fStack_60 = param_1[0x39];
  local_64 = param_1[0x38] + fVar17 + fVar14;
  local_86 = sVar3;
  FUN_00372448(&local_68,&local_84);
  param_1[0x10] = extraout_s0;
  param_1[0x11] = extraout_s1;
  param_1[0x12] = extraout_s2;
  iVar5 = 0;
  local_8c = ((param_1[1] + fVar16 * fVar15) - local_9c) + local_9c;
  FUN_00372448(param_1 + 0x10,&local_8c);
  local_74 = extraout_s0_00;
  local_70 = extraout_s1_00;
  local_6c = extraout_s2_00;
  if ((*(ushort *)((int)param_1 + 0x2e) & 0x80) == 0) {
    do {
      local_dc = 2.8026e-45;
      iVar7 = FUN_003317ac(param_1[0x35],(int)param_1[0x35] + 0x5c78,param_1 + 0x10,&local_74,
                           &local_7c);
      if (iVar7 == 0) {
        local_dc = local_74;
        fStack_d8 = local_70;
        fStack_d4 = local_6c;
        iVar7 = FUN_003553fc(param_1,param_1 + 0x10,&local_dc);
        local_74 = local_dc;
        local_70 = fStack_d8;
        local_6c = fStack_d4;
        if (iVar7 == 0) break;
      }
      local_86 = *(short *)(DAT_00237870 + iVar5 * 2) + sVar3;
      local_88 = *(short *)(DAT_00237874 + iVar5 * 2) + (short)local_a0;
      FUN_00372448(param_1 + 0x10,&local_8c);
      iVar5 = iVar5 + 1;
      local_74 = extraout_s0_01;
      local_70 = extraout_s1_01;
      local_6c = extraout_s2_01;
    } while (iVar5 < 0xe);
  }
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff3;
  iVar5 = (*(short *)(param_1 + 0x13) + 1) * (int)*(short *)(param_1 + 0x13) >> 1;
  fVar4 = (float)VectorSignedToFloat((int)(short)(local_86 - local_96),(byte)(uVar13 >> 0x15) & 3);
  fVar14 = (float)VectorSignedToFloat(iVar5,(byte)(uVar13 >> 0x15) & 3);
  param_1[0xd] = fVar4 / fVar14;
  fVar14 = (float)VectorSignedToFloat(iVar5,(byte)(uVar13 >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)(short)(local_88 - local_98),(byte)(uVar13 >> 0x15) & 3);
  param_1[0xe] = fVar4 / fVar14;
  fVar4 = (float)VectorSignedToFloat(iVar5,(byte)(uVar13 >> 0x15) & 3);
  param_1[0xc] = (local_8c - local_9c) / fVar4;
  return 1;
}
