// OoT3D decomp @ 00202f40  name=FUN_00202f40  size=2340

undefined4 FUN_00202f40(float *param_1)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar25;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar26;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar27;
  float fVar28;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [12];
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [4];
  short local_74;
  short local_72;
  float local_70;
  undefined2 local_6c;
  short local_6a;
  float local_68;
  short local_64;
  short local_62;
  undefined1 auStack_60 [12];
  float local_54;
  float local_50;
  float local_4c;
  float *local_48;

  pfVar15 = param_1 + 0x23;
  local_48 = param_1 + 0x20;
  pfVar11 = param_1 + 0x29;
  pfVar14 = param_1 + 0x37;
  pfVar13 = param_1 + 9;
  fVar21 = (float)FUN_00367ef0(param_1[0x36]);
  fVar23 = DAT_00203384;
  fVar5 = DAT_00203380;
  fVar24 = DAT_0020337c;
  piVar4 = DAT_00203378;
  psVar8 = *(short **)
            (*(int *)(DAT_00203370 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar22 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203378 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar27 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203378 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar27 = (DAT_00203380 + fVar27 * DAT_0020337c) - (DAT_00203374 / fVar21) * fVar22 * DAT_0020337c;
  fVar22 = param_1[0x4f];
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar22 < DAT_00203384) << 0x1f |
          (uint)(fVar22 == DAT_00203384) << 0x1e;
  uVar19 = uVar1 | (uint)(NAN(fVar22) || NAN(DAT_00203384)) << 0x1c;
  bVar3 = (byte)(uVar1 >> 0x18);
  fVar22 = DAT_00203388;
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
    fVar22 = DAT_0020338c;
  }
  fVar26 = (float)VectorSignedToFloat((int)*psVar8,(byte)(uVar19 >> 0x15) & 3);
  *param_1 = (fVar26 + fVar22) * DAT_0020337c * fVar21 * fVar27;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[2],(byte)(uVar19 >> 0x15) & 3);
  param_1[1] = fVar22 * fVar24 * fVar21 * fVar27;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[4],(byte)(uVar19 >> 0x15) & 3);
  param_1[2] = fVar22 * fVar24 * fVar21 * fVar27;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[6],(byte)(uVar19 >> 0x15) & 3);
  param_1[3] = fVar22 * fVar24;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[8],(byte)(uVar19 >> 0x15) & 3);
  param_1[4] = fVar22;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[10],(byte)(uVar19 >> 0x15) & 3);
  param_1[5] = fVar22 * fVar24;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[0xc],(byte)(uVar19 >> 0x15) & 3);
  param_1[6] = fVar22;
  fVar22 = (float)VectorSignedToFloat((int)psVar8[0xe],(byte)(uVar19 >> 0x15) & 3);
  param_1[7] = fVar22 * fVar24;
  *(short *)(param_1 + 8) = psVar8[0x10];
  FUN_00372474(auStack_80,local_48,pfVar15);
  FUN_00372474(auStack_78,local_48,pfVar11);
  *(int *)(DAT_00203390 + 0x14) = (int)*(short *)(param_1 + 8);
  sVar7 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar7 == 0 || sVar7 == 10) || sVar7 == 0x14) {
    local_b8 = *pfVar14;
    local_50 = param_1[0x38];
    fStack_b0 = param_1[0x39];
    local_b4 = local_50 + DAT_00203394;
    local_54 = local_b8;
    local_4c = fStack_b0;
    fVar22 = (float)FUN_00337518(param_1,auStack_c4,&local_b8,auStack_c8);
    *pfVar13 = fVar22;
    *(short *)(param_1 + 10) = local_72;
    *(undefined2 *)((int)param_1 + 0x2a) = 0;
    if (*pfVar13 == -32000.0) {
      *(undefined2 *)((int)param_1 + 0x2e) = 0xffff;
      *pfVar13 = param_1[0x38] - DAT_00203398;
    }
    else {
      uVar19 = uVar19 & 0xfffffff | (uint)(fVar21 <= param_1[0x38] - *pfVar13) << 0x1d;
      if (SUB41(uVar19 >> 0x1d,0)) {
        *(undefined2 *)((int)param_1 + 0x2e) = 0xffff;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x2e) = 1;
      }
    }
    sVar7 = FUN_00368d94((int)(short)((*(short *)((int)param_1 + 0xea) + -0x7fff) - local_72),
                         (int)*(short *)(*piVar4 + 0x1c2) << 2);
    *(short *)((int)param_1 + 0x2a) = sVar7 * 3;
    if (((uint)param_1[8] & 2) == 0) {
      *(short *)(param_1 + 0xb) = (short)DAT_0020339c;
    }
    else {
      *(undefined2 *)(param_1 + 0xb) = 10;
    }
    *pfVar14 = *pfVar14 - param_1[0x4e];
    param_1[0x38] = param_1[0x38] - param_1[0x4f];
    param_1[0x39] = param_1[0x39] - param_1[0x50];
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(*piVar4 + 0x1c2);
    param_1[0x52] = param_1[7];
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  }
  fVar22 = DAT_002033a0;
  fVar27 = param_1[0x4a];
  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),(byte)(uVar19 >> 0x15) & 3);
  fVar28 = fVar27 * fVar26 * fVar24;
  fVar25 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),(byte)(uVar19 >> 0x15) & 3);
  fVar26 = (float)FUN_00355780(param_1[4],param_1[0x44],fVar28,DAT_002033a0);
  param_1[0x44] = fVar26;
  fVar26 = (float)FUN_00355780(param_1[5],param_1[0x45],fVar28,fVar22);
  param_1[0x45] = fVar26;
  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19a),(byte)(uVar19 >> 0x15) & 3);
  fVar27 = (float)FUN_00355780(fVar26 * fVar24,param_1[0x46],fVar27 * fVar25 * fVar24,fVar22);
  param_1[0x46] = fVar27;
  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19c),(byte)(uVar19 >> 0x15) & 3);
  fVar27 = (float)FUN_00355780(fVar26 * fVar24,fVar27,param_1[0x4a] * DAT_002033a4,fVar22);
  param_1[0x47] = fVar27;
  fVar27 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1ca),(byte)(uVar19 >> 0x15) & 3);
  param_1[0x42] = fVar27;
  FUN_00338ac8(*param_1,param_1,auStack_78,0);
  FUN_00372474(&local_68,local_48,pfVar15);
  fVar27 = DAT_002036b0;
  fVar26 = param_1[2] + param_1[2] * param_1[3];
  fVar25 = param_1[1] - param_1[1] * param_1[3];
  uVar1 = uVar19 & 0xfffffff | (uint)(local_68 < fVar26) << 0x1f |
          (uint)(local_68 == fVar26) << 0x1e;
  uVar20 = uVar1 | (uint)(NAN(local_68) || NAN(fVar26)) << 0x1c;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar20 >> 0x1c) & 1)) &&
     (uVar1 = uVar19 & 0xfffffff | (uint)(local_68 < fVar25) << 0x1f |
              (uint)(local_68 == fVar25) << 0x1e,
     uVar20 = uVar1 | (uint)(NAN(local_68) || NAN(fVar25)) << 0x1c, bVar3 = (byte)(uVar1 >> 0x18),
     fVar26 = fVar25, !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar20 >> 0x1c) & 1))) {
    fVar26 = local_68;
  }
  local_68 = fVar26;
  sVar7 = *(short *)((int)param_1 + 0xea) + -0x7fff;
  iVar9 = (int)(short)(sVar7 - local_62);
  if (*(short *)(param_1 + 0xc) == 0) {
    sVar2 = *(short *)(param_1 + 0xb);
    iVar10 = iVar9;
    if (iVar9 < 0) {
      iVar10 = -iVar9;
    }
    if (iVar10 <= sVar2) {
      iVar10 = (int)(short)(local_62 - local_72);
      iVar9 = iVar10;
      if (iVar10 < 0) {
        iVar9 = -iVar10;
      }
      fVar26 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
      sVar2 = (short)(int)(DAT_002036b0 + fVar26 * DAT_002036b4);
      goto joined_r0x002034d4;
    }
    if (-1 < iVar9) {
      sVar2 = -sVar2;
    }
    iVar10 = (int)(short)((sVar7 + sVar2) - local_72);
    iVar9 = iVar10;
    if (iVar10 < 0) {
      iVar9 = -iVar10;
    }
    fVar26 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
    local_62 = local_72;
    if (9 < iVar9) {
      local_62 = local_72 + (short)(int)(DAT_002036b0 + fVar26 * fVar22);
    }
  }
  else {
    *(short *)(param_1 + 10) = sVar7;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
    iVar10 = (int)(short)(sVar7 - local_72);
    iVar9 = iVar10;
    if (iVar10 < 0) {
      iVar9 = -iVar10;
    }
    fVar26 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
    sVar2 = (short)(int)(fVar27 + fVar26 * fVar27);
    local_62 = sVar7;
joined_r0x002034d4:
    if (9 < iVar9) {
      local_62 = local_72 + sVar2;
    }
  }
  fVar25 = (float)FUN_002cfca0((int)*(short *)((int)param_1 + 0xea));
  fVar26 = DAT_002036b8;
  local_54 = *pfVar14 + fVar25 * DAT_002036b8;
  local_50 = param_1[0x38] + fVar21 * DAT_002036bc;
  fVar25 = (float)FUN_00338f60((int)*(short *)((int)param_1 + 0xea));
  local_4c = param_1[0x39] + fVar25 * fVar26;
  fVar25 = (float)FUN_00337518(param_1,auStack_60,&local_54,auStack_84);
  fVar26 = DAT_002038b4;
  uVar6 = DAT_002036c4;
  bVar18 = SBORROW4((int)fVar25,(int)DAT_002036c0);
  bVar16 = (int)fVar25 - (int)DAT_002036c0 < 0;
  bVar17 = fVar25 == DAT_002036c0;
  if (!bVar17) {
    fVar25 = fVar25 - param_1[0x38];
    uVar20 = uVar20 & 0xfffffff | (uint)(fVar25 < fVar23) << 0x1f | (uint)(fVar25 == fVar23) << 0x1e
             | (uint)(NAN(fVar25) || NAN(fVar23)) << 0x1c;
    bVar3 = (byte)(uVar20 >> 0x18);
    bVar16 = (bool)(bVar3 >> 7);
    bVar17 = (bool)(bVar3 >> 6 & 1);
    bVar18 = (bool)(bVar3 >> 4 & 1);
  }
  if (bVar17 || bVar16 != bVar18) {
    uVar20 = uVar20 & 0xfffffff | (uint)(fVar21 <= param_1[0x38] - *pfVar13) << 0x1d;
    if (!SUB41(uVar20 >> 0x1d,0)) {
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                          (byte)(uVar20 >> 0x15) & 3);
      fVar23 = (float)FUN_00355780(DAT_002036c4,param_1[0x43],fVar23 * fVar24,fVar22);
      param_1[0x43] = fVar23;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                          (byte)(uVar20 >> 0x15) & 3);
      fVar24 = (float)FUN_00355780(uVar6,param_1[0x42],fVar23 * fVar24,fVar22);
      param_1[0x42] = fVar24;
      iVar10 = (int)(short)(500 - local_74);
      iVar9 = iVar10;
      if (iVar10 < 0) {
        iVar9 = -iVar10;
      }
      fVar24 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
      local_64 = (short)(int)(fVar27 + fVar24 * (fVar5 / param_1[0x43]));
      goto joined_r0x002036a8;
    }
    param_1[0x43] = DAT_002038b4;
    param_1[0x42] = fVar26;
  }
  else {
    fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),(byte)(uVar20 >> 0x15) & 3)
    ;
    fVar23 = (float)FUN_00355780(DAT_002036c4,param_1[0x43],fVar23 * fVar24,fVar22);
    param_1[0x43] = fVar23;
    fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),(byte)(uVar20 >> 0x15) & 3)
    ;
    fVar24 = (float)FUN_00355780(uVar6,param_1[0x42],fVar23 * fVar24,fVar22);
    param_1[0x42] = fVar24;
    iVar10 = (int)(short)(500 - local_74);
    iVar9 = iVar10;
    if (iVar10 < 0) {
      iVar9 = -iVar10;
    }
    fVar24 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
    local_64 = (short)(int)(fVar27 + fVar24 * (fVar5 / param_1[0x43]));
joined_r0x002036a8:
    if (iVar9 < 10) {
      local_64 = 500;
    }
    else {
      local_64 = local_74 + local_64;
    }
  }
  if (DAT_002038b8 < local_64) {
    local_64 = (short)DAT_002038b8;
  }
  if (local_64 < DAT_002038bc) {
    local_64 = (short)DAT_002038bc;
  }
  FUN_00372448(local_48,&local_68);
  *pfVar11 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  param_1[0x2b] = extraout_s2;
  local_ac = *pfVar11;
  local_a8 = param_1[0x2a];
  local_a4 = param_1[0x2b];
  iVar9 = FUN_003553fc(param_1,local_48,&local_ac);
  uVar6 = DAT_002038c0;
  if (iVar9 != 0) {
    local_54 = local_ac;
    local_50 = local_a8;
    local_4c = local_a4;
    local_70 = local_68;
    local_6c = 0;
    local_6a = local_62;
    FUN_00372448(local_48,&local_70);
    local_ac = extraout_s0_00;
    local_a8 = extraout_s1_00;
    local_a4 = extraout_s2_00;
    iVar9 = FUN_003553fc(param_1,local_48,&local_ac);
    if (iVar9 == 0) {
      iVar10 = (int)-local_64;
      iVar9 = iVar10;
      if (iVar10 < 0) {
        iVar9 = -iVar10;
      }
      iVar12 = iVar9;
      if (iVar9 < 10) {
        iVar12 = 0;
      }
      sVar7 = (short)iVar12;
      fVar24 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
      if (9 < iVar9) {
        sVar7 = local_64 + (short)(int)(fVar27 + fVar24 * DAT_002038c4);
      }
      local_64 = sVar7;
      FUN_00372448(local_48,&local_68);
      *pfVar15 = extraout_s0_01;
      param_1[0x24] = extraout_s1_01;
      param_1[0x25] = extraout_s2_01;
      local_d4 = *pfVar15;
      fStack_d0 = param_1[0x24];
      fStack_cc = param_1[0x25];
      FUN_003553fc(param_1,local_48,&local_d4);
      *pfVar15 = local_d4;
      param_1[0x24] = fStack_d0;
      param_1[0x25] = fStack_cc;
      goto LAB_00203828;
    }
    pfVar11 = &local_54;
  }
  FUN_00367df4(uVar6,uVar6,fVar22,pfVar11,pfVar15);
LAB_00203828:
  param_1[0x49] = local_68;
  fVar24 = (float)FUN_00355780(param_1[6],param_1[0x51],param_1[0x47],fVar5);
  param_1[0x51] = fVar24;
  iVar10 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar9 = iVar10;
  if (iVar10 < 0) {
    iVar9 = -iVar10;
  }
  iVar12 = iVar9;
  if (iVar9 < 10) {
    iVar12 = 0;
  }
  sVar7 = (short)iVar12;
  fVar24 = (float)VectorSignedToFloat(iVar10,(byte)(uVar20 >> 0x15) & 3);
  if (9 < iVar9) {
    sVar7 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar27 + fVar24 * fVar27);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar7;
  return 1;
}
