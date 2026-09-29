// OoT3D decomp @ 00275678  name=FUN_00275678  size=3020

void FUN_00275678(float *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  uint in_fpscr;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float extraout_s0;
  float fVar23;
  float extraout_s1;
  float extraout_s2;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float *local_98;
  uint local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 auStack_64 [4];
  short local_60;
  short local_5e;
  float local_5c;
  short local_58;
  short local_56;
  float local_54;
  short local_50;
  short local_4e;
  float *local_4c;
  int local_48;

  local_4c = param_1 + 0x23;
  pfVar16 = param_1 + 0x20;
  pfVar17 = param_1 + 0x29;
  fVar20 = (float)FUN_00367ef0(param_1[0x36]);
  fVar6 = DAT_00275a94;
  fVar5 = DAT_00275a8c;
  fVar22 = DAT_00275a88;
  piVar4 = DAT_00275a84;
  psVar11 = *(short **)
             (*(int *)(DAT_00275a7c + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
             *(short *)(param_1 + 99) * 8 + 4);
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar24 = (DAT_00275a8c + fVar24 * DAT_00275a88) - (DAT_00275a80 / fVar20) * fVar23 * DAT_00275a88;
  fVar23 = (float)VectorSignedToFloat((int)*psVar11,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar23 * DAT_00275a88 * fVar20 * fVar24;
  fVar23 = (float)VectorSignedToFloat((int)psVar11[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar23 * fVar22 * fVar20 * fVar24;
  fVar23 = DAT_00275a90;
  fVar25 = (float)VectorSignedToFloat((int)psVar11[4],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 8) = (short)(int)(fVar6 + fVar25 * DAT_00275a90);
  fVar25 = (float)VectorSignedToFloat((int)psVar11[6],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)((int)param_1 + 0x22) = (short)(int)(fVar6 + fVar25 * fVar23);
  fVar23 = (float)VectorSignedToFloat((int)psVar11[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar23;
  fVar23 = (float)VectorSignedToFloat((int)psVar11[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar23;
  fVar23 = (float)VectorSignedToFloat((int)psVar11[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar23;
  fVar23 = (float)VectorSignedToFloat((int)psVar11[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar23 * fVar22;
  *(short *)(param_1 + 9) = psVar11[0x10];
  fVar23 = (float)VectorSignedToFloat((int)psVar11[0x12],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar23 * fVar22 * fVar20 * fVar24;
  fVar23 = (float)VectorSignedToFloat((int)psVar11[0x14],(byte)(in_fpscr >> 0x15) & 3);
  param_1[7] = fVar23 * fVar22;
  FUN_00372474(&local_5c,pfVar16,local_4c);
  FUN_00372474(auStack_64,pfVar16,pfVar17);
  fVar23 = DAT_00275a98;
  sVar9 = *(short *)((int)param_1 + 0x1a6);
  if (((sVar9 == 0 || sVar9 == 10) || sVar9 == 0x14) || sVar9 == 0x19) {
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    if (((uint)param_1[9] & 4) == 0) {
      uVar8 = *(undefined2 *)(*piVar4 + 0x1c2);
    }
    else {
      uVar8 = 0x14;
    }
    *(undefined2 *)(param_1 + 0x10) = uVar8;
    param_1[10] = fVar23;
    param_1[0xd] = param_1[0x38] - param_1[0x4f];
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  }
  local_90 = 1;
  if (*(short *)(param_1 + 0x10) == 0) {
    if (((uint)param_1[9] & 0x20) != 0) {
      *(short *)((int)param_1 + 0x3a) =
           *(short *)((int)param_1 + 0x22) + *(short *)((int)param_1 + 0xea) + -0x7fff;
    }
    *(int *)(DAT_00275a9c + 0x14) = (int)*(short *)(param_1 + 9);
  }
  else if (((uint)param_1[9] & 2) == 0) {
    sVar9 = local_5e;
    if (((uint)param_1[9] & 4) != 0) {
      sVar9 = *(short *)((int)param_1 + 0x22);
    }
    *(short *)((int)param_1 + 0x3a) = sVar9;
  }
  else {
    *(short *)((int)param_1 + 0x3a) =
         *(short *)((int)param_1 + 0x22) + *(short *)((int)param_1 + 0xea) + -0x7fff;
  }
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_1 + 8);
  if (*(short *)((int)param_1 + 0x1a6) == 0x15) {
    *(undefined2 *)((int)param_1 + 0x3e) = 1;
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
  }
  else if (*(short *)((int)param_1 + 0x1a6) == 0xb) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
  }
  uVar7 = DAT_00275aa0;
  piVar4 = DAT_00275a84;
  iVar12 = *DAT_00275a84;
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3);
  fVar25 = param_1[0x4a] * fVar20 * fVar22;
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3);
  fVar26 = param_1[0x4a] * fVar20 * fVar22;
  uVar21 = VectorSignedToFloat((int)*(short *)(iVar12 + 0x1a0),(byte)(in_fpscr >> 0x15) & 3);
  fVar20 = (float)FUN_00355780(uVar21,param_1[0x42],fVar25);
  param_1[0x42] = fVar20;
  fVar24 = (float)FUN_00355780(param_1[2],param_1[0x44],fVar25,uVar7);
  fVar20 = DAT_00275aa4;
  param_1[0x44] = fVar24;
  fVar24 = (float)FUN_00355780(fVar20,param_1[0x43],fVar26,uVar7);
  param_1[0x43] = fVar24;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar24 = (float)FUN_00355780(fVar24 * fVar22,param_1[0x45],fVar25,uVar7);
  param_1[0x45] = fVar24;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar24 = (float)FUN_00355780(fVar24 * fVar22,param_1[0x46],fVar26,uVar7);
  param_1[0x46] = fVar24;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar24 = (float)FUN_00355780(fVar24 * fVar22,param_1[0x47],param_1[0x4a] * DAT_00275aa8,uVar7);
  param_1[0x47] = fVar24;
  if (((uint)param_1[9] & 1) == 0) {
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    sVar9 = FUN_00331480(param_1,(int)(short)(local_56 + -0x7fff),local_90);
    iVar15 = (int)(short)(sVar9 - *(short *)(param_1 + 0xe));
    iVar12 = iVar15;
    if (iVar15 < 0) {
      iVar12 = -iVar15;
    }
    fVar24 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
    if (0xe < iVar12) {
      sVar9 = *(short *)(param_1 + 0xe) +
              (short)(int)(fVar6 + fVar24 * ((fVar5 / param_1[3]) * DAT_00275d9c +
                                            (fVar5 / param_1[3]) * DAT_00275da0 *
                                            (fVar5 - param_1[0x4a])) * fVar20 * DAT_00275da4);
    }
    *(short *)(param_1 + 0xe) = sVar9;
  }
  uVar19 = in_fpscr & 0xfffffff | (uint)(param_1[0x53] == param_1[0x38]) << 0x1e;
  if (((SUB41(uVar19 >> 0x1e,0)) || (*(uint *)((int)param_1[0x36] + 0x70) < DAT_00275da8)) ||
     ((*(uint *)((int)param_1[0x36] + 0x1710) & 0x200000) != 0)) {
    param_1[0xd] = param_1[0x38];
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar13 = (uint)*(short *)(param_1 + 9);
  if ((uVar13 & 0x80) != 0 || bVar3) {
    FUN_003381e4(param_1[6],param_1,auStack_64,param_1 + 0xd,uVar13 & 1);
  }
  else {
    fVar24 = *param_1;
    local_94 = uVar13 & 1;
    local_98 = param_1 + 0x20;
    local_a0 = (float)FUN_00367ef0(param_1[0x36]);
    local_a0 = local_a0 + fVar24;
    local_a4 = fVar23;
    local_9c = fVar23;
    bVar18 = *(short *)(*DAT_00275a84 + 0x2ec) != 0;
    uVar13 = 0;
    if (bVar18) {
      uVar13 = local_94;
    }
    if (bVar18 && uVar13 != 0) {
      uVar21 = VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1a6),(byte)(uVar19 >> 0x15) & 3
                                  );
      fVar23 = (float)FUN_00367e88(uVar21,param_1 + 0x54,(int)*(short *)((int)param_1 + 0xea),
                                   (int)local_5e);
      local_a0 = local_a0 - fVar23;
    }
    fVar23 = DAT_00275dac;
    fVar24 = param_1[0x38];
    uVar19 = uVar19 & 0xfffffff | (uint)(param_1[0x53] == fVar24) << 0x1e;
    if (((SUB41(uVar19 >> 0x1e,0)) || (*(uint *)((int)param_1[0x36] + 0x70) < DAT_00275da8)) ||
       ((*(uint *)((int)param_1[0x36] + 0x1710) & 0x200000) != 0)) {
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1ea),
                                          (byte)(uVar19 >> 0x15) & 3);
      fVar22 = (float)FUN_00355780(fVar24,param_1[0xd],fVar23 * fVar22,uVar7);
      param_1[0xd] = fVar22;
      local_a0 = local_a0 - (param_1[0x38] - fVar22);
      FUN_00367df4(param_1[0x46],param_1[0x45],uVar7,&local_a4,param_1 + 0x4b);
    }
    else {
      fVar24 = fVar24 - param_1[0xd];
      if (*(short *)(*DAT_00275a84 + 0x2ea) == 0) {
        fVar23 = (float)FUN_00367e60(local_98,param_1 + 0x23);
        FUN_003696ec(fVar24,fVar23);
        fVar25 = (float)FUN_003555d8(param_1[0x51] * DAT_00275db0);
        fVar25 = fVar25 * fVar23;
        uVar13 = uVar19 & 0xfffffff;
        uVar1 = uVar13 | (uint)(fVar24 < fVar25) << 0x1f | (uint)(fVar24 == fVar25) << 0x1e;
        uVar19 = uVar1 | (uint)(NAN(fVar24) || NAN(fVar25)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar19 >> 0x1c) & 1)) {
          uVar19 = uVar13 | (uint)(-fVar25 <= fVar24) << 0x1d;
          if (!SUB41(uVar19 >> 0x1d,0)) {
            param_1[0xd] = param_1[0xd] + fVar24 + fVar25;
            fVar24 = -fVar25;
          }
        }
        else {
          param_1[0xd] = param_1[0xd] + (fVar24 - fVar25);
          fVar24 = fVar25;
        }
        local_a0 = local_a0 - fVar24;
      }
      else {
        uVar21 = FUN_00367e60(local_98,param_1 + 0x23);
        fVar25 = (float)FUN_003696ec(fVar24,uVar21);
        fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1d4),
                                            (byte)(uVar19 >> 0x15) & 3);
        fVar26 = fVar26 * fVar23;
        uVar13 = uVar19 & 0xfffffff;
        uVar19 = uVar13 | (uint)(fVar25 <= fVar26) << 0x1d;
        if (SUB41(uVar19 >> 0x1d,0)) {
          fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1d6),
                                              (byte)(uVar19 >> 0x15) & 3);
          fVar26 = fVar26 * fVar23;
          uVar13 = uVar13 | (uint)(fVar26 < fVar25) << 0x1f | (uint)(fVar26 == fVar25) << 0x1e;
          uVar19 = uVar13 | (uint)(NAN(fVar26) || NAN(fVar25)) << 0x1c;
          bVar2 = (byte)(uVar13 >> 0x18);
          fVar23 = fVar5;
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
            fVar23 = (float)FUN_003727f0(fVar26 - fVar25);
            fVar23 = fVar5 - fVar23;
          }
        }
        else {
          fVar23 = (float)FUN_003727f0(fVar25 - fVar26);
          fVar23 = fVar5 - fVar23;
        }
        local_a0 = local_a0 - fVar24 * fVar23;
      }
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1d0),
                                          (byte)(uVar19 >> 0x15) & 3);
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00275a84 + 0x1ce),
                                          (byte)(uVar19 >> 0x15) & 3);
      FUN_00367df4(fVar24 * fVar22,fVar23 * fVar22,uVar7,&local_a4,param_1 + 0x4b);
      iVar12 = *DAT_00275a84;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x1ce),(byte)(uVar19 >> 0x15) & 3
                                         );
      param_1[0x46] = fVar23 * fVar22;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x1d0),(byte)(uVar19 >> 0x15) & 3
                                         );
      param_1[0x45] = fVar23 * fVar22;
    }
    local_b0 = param_1[0x37] + param_1[0x4b];
    local_ac = param_1[0x38] + param_1[0x4c];
    local_a8 = param_1[0x39] + param_1[0x4d];
    FUN_00367df4(param_1[0x52],param_1[0x52],DAT_002761bc,&local_b0,local_98);
  }
  sVar9 = *(short *)(param_1 + 0x10);
  iVar12 = (int)sVar9;
  if (iVar12 == 0) {
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    fVar22 = (float)FUN_00355780(param_1[1],param_1[0x49],fVar5 / param_1[0x42],fVar20);
    param_1[0x49] = fVar22;
    FUN_00372474(&local_54,pfVar16,pfVar17);
    local_54 = param_1[0x49];
    local_4e = *(short *)((int)param_1 + 0x3a);
    if (((uint)param_1[9] & 0x40) == 0) {
      iVar15 = (int)(short)(local_4e - local_5e);
      iVar12 = iVar15;
      if (iVar15 < 0) {
        iVar12 = -iVar15;
      }
      fVar22 = (float)VectorSignedToFloat(iVar15,(byte)(uVar19 >> 0x15) & 3);
      sVar9 = (short)(int)(fVar6 + fVar22 * DAT_002761c4);
    }
    else {
      iVar15 = (int)(short)(local_4e - local_5e);
      iVar12 = iVar15;
      if (iVar15 < 0) {
        iVar12 = -iVar15;
      }
      fVar22 = (float)VectorSignedToFloat(iVar15,(byte)(uVar19 >> 0x15) & 3);
      sVar9 = (short)(int)(fVar6 + fVar22 * DAT_002761c0);
    }
    if (9 < iVar12) {
      local_4e = local_5e + sVar9;
    }
    if (((uint)param_1[9] & 1) == 0) {
      local_50 = *(short *)(param_1 + 0xf);
    }
    else {
      local_50 = *(short *)(param_1 + 0xf) - *(short *)(param_1 + 0xe);
    }
    iVar15 = (int)(short)(local_50 - local_60);
    iVar12 = iVar15;
    if (iVar15 < 0) {
      iVar12 = -iVar15;
    }
    fVar22 = (float)VectorSignedToFloat(iVar15,(byte)(uVar19 >> 0x15) & 3);
    if (3 < iVar12) {
      local_50 = local_60 + (short)(int)(fVar6 + fVar22 * (fVar5 / param_1[0x43]));
    }
    sVar9 = *(short *)(*DAT_00275a84 + 0x19e);
    if (sVar9 < local_50) {
      local_50 = sVar9;
    }
    sVar9 = *(short *)(*DAT_00275a84 + 0x1d8);
    if (local_50 <= sVar9) {
      local_50 = sVar9;
    }
  }
  else {
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x20;
    local_48 = (int)local_56;
    sVar10 = FUN_00368d94((int)(short)(*(short *)((int)param_1 + 0x3a) - local_56),
                          (int)(short)((iVar12 + 1) * iVar12 >> 1));
    local_4e = sVar10 * sVar9 + (short)local_48;
    local_50 = local_58;
    local_54 = local_5c;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  }
  FUN_00372448(pfVar16,&local_54);
  *pfVar17 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  param_1[0x2b] = extraout_s2;
  uVar21 = DAT_002761c8;
  if (*(short *)(param_1 + 0x62) == 7) {
    local_8c = *pfVar17;
    local_88 = param_1[0x2a];
    local_84 = param_1[0x2b];
    if ((*(char *)((int)param_1[0x35] + 0x31a5) == '\0') || (((uint)param_1[9] & 0x10) != 0)) {
      iVar12 = FUN_003553fc(param_1,pfVar16,&local_8c);
      if (iVar12 != 0) {
        fVar24 = local_8c - *pfVar16;
        fVar23 = local_88 - param_1[0x21];
        fVar20 = local_84 - param_1[0x22];
        fVar22 = DAT_002761d0;
        if (*(int *)(DAT_002761cc + 4) == 0) {
          fVar22 = DAT_002761d4;
        }
        fVar25 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar20 * fVar20);
        uVar19 = uVar19 & 0xfffffff | (uint)(fVar25 == fVar22) << 0x1e |
                 (uint)(fVar22 <= fVar25) << 0x1d;
        bVar2 = (byte)(uVar19 >> 0x18);
        if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
          fVar26 = fVar5 / fVar25;
          fVar22 = (fVar5 - fVar25 / fVar22) * DAT_002761d0;
          local_8c = local_8c + fVar24 * fVar26 * fVar22;
          local_88 = local_88 + fVar23 * fVar26 * fVar22;
          local_84 = local_84 + fVar20 * fVar26 * fVar22;
        }
      }
      FUN_00367df4(uVar21,uVar21,uVar7,&local_8c,local_4c);
    }
    else {
      FUN_00331ae8(param_1,pfVar16,&local_8c);
      FUN_00367df4(uVar21,uVar21,uVar7,&local_8c,local_4c);
      FUN_00372474(&local_54,param_1 + 0x23,param_1 + 0x20);
      *(short *)(param_1 + 0x5f) = local_50;
      *(short *)((int)param_1 + 0x17e) = local_4e;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
  }
  fVar22 = (float)FUN_00355780(param_1[4],param_1[0x51],param_1[0x47],fVar5);
  param_1[0x51] = fVar22;
  iVar15 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar12 = iVar15;
  if (iVar15 < 0) {
    iVar12 = -iVar15;
  }
  iVar14 = iVar12;
  if (iVar12 < 10) {
    iVar14 = 0;
  }
  sVar9 = (short)iVar14;
  fVar22 = (float)VectorSignedToFloat(iVar15,(byte)(uVar19 >> 0x15) & 3);
  if (9 < iVar12) {
    sVar9 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar6 + fVar22 * fVar6);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar9;
  if (bVar3) {
    fVar22 = param_1[7];
  }
  else {
    fVar22 = param_1[5];
  }
  fVar22 = (float)FUN_003375bc(fVar22,param_1);
  param_1[0x52] = fVar22;
  return;
}
