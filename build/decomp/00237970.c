// OoT3D decomp @ 00237970  name=FUN_00237970  size=3156

int FUN_00237970(float *param_1)

{
  ushort uVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int *piVar23;
  short sVar24;
  short *psVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  short sVar30;
  int iVar31;
  float *pfVar32;
  bool bVar33;
  uint in_fpscr;
  uint uVar34;
  float fVar35;
  float fVar36;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar37;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float *local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_94 [2];
  float local_8c;
  short local_88;
  short local_86;
  int local_80;
  float *local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [4];
  short local_70;
  short local_6e;
  undefined1 auStack_6c [8];
  float local_64;
  short local_60;
  short local_5e;
  undefined1 auStack_5c [4];
  float local_58;
  float local_54;
  float *local_50;
  float *local_4c;
  float *local_48;

  fVar29 = DAT_00237c9c;
  local_48 = param_1 + 0x23;
  pfVar32 = param_1 + 0x5d;
  local_4c = param_1 + 0x20;
  local_50 = param_1 + 0x29;
  local_7c = param_1 + 0x37;
  fVar28 = param_1[0x35];
  sVar30 = *(short *)((int)param_1 + 0x1a6);
  iVar31 = *(int *)(DAT_00237ca0 + (int)fVar28);
  if ((sVar30 == 0 || sVar30 == 10) || sVar30 == 0x14) {
    if (*(char *)((int)fVar28 + 0x361) == '\0') {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff9 | 0x20;
      *(byte *)((int)fVar28 + 0x361) = (byte)*(undefined2 *)(param_1 + 0x6b) | 0x50;
      return 1;
    }
    *(short *)(param_1 + 0xd) = *(short *)pfVar32;
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffdf;
  }
  if (*(short *)(param_1 + 0xd) != *(short *)pfVar32) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 0x14;
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff9 | 0x20;
    *(byte *)((int)param_1[0x35] + 0x361) = (byte)*(undefined2 *)(param_1 + 0x6b) | 0x50;
    return 1;
  }
  fVar35 = (float)FUN_00367ef0(param_1[0x36]);
  fVar28 = DAT_00237ca8;
  iVar27 = DAT_00237ca4;
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffef;
  fVar12 = DAT_00237cd4;
  fVar11 = DAT_00237cd0;
  fVar10 = DAT_00237ccc;
  uVar9 = DAT_00237cc8;
  fVar8 = DAT_00237cc4;
  fVar6 = DAT_00237cbc;
  fVar5 = DAT_00237cb4;
  fVar4 = DAT_00237cb0;
  fVar3 = DAT_00237cac;
  psVar25 = *(short **)
             (*(int *)(iVar27 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
             *(short *)(param_1 + 99) * 8 + 4);
  fVar37 = DAT_00237cac - (fVar28 / fVar35) * fVar29;
  fVar28 = (float)VectorSignedToFloat((int)*psVar25,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar28 * DAT_00237cb0 * fVar35 * fVar37;
  fVar7 = DAT_00237cc0;
  fVar28 = (float)VectorSignedToFloat((int)psVar25[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar28 * fVar4 * fVar35 * fVar37;
  fVar28 = (float)VectorSignedToFloat((int)psVar25[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar28;
  fVar28 = (float)VectorSignedToFloat((int)psVar25[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar28;
  fVar28 = (float)VectorSignedToFloat((int)psVar25[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar28;
  fVar28 = (float)VectorSignedToFloat((int)psVar25[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar28;
  *(short *)(param_1 + 7) = psVar25[0xc];
  fVar28 = (float)VectorSignedToFloat((int)psVar25[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar28 * fVar4;
  fVar28 = DAT_00237cb8;
  *(short *)((int)param_1 + 0x1e) = psVar25[0x10];
  uVar22 = DAT_00238088;
  uVar21 = DAT_00238078;
  fVar20 = DAT_00238070;
  fVar19 = DAT_0023806c;
  fVar18 = DAT_0023805c;
  uVar17 = DAT_00237d08;
  fVar16 = DAT_00237d04;
  fVar15 = DAT_00237d00;
  iVar27 = DAT_00237cf4;
  fVar14 = DAT_00237cf0;
  fVar36 = DAT_00237ce0;
  fVar13 = DAT_00237cdc;
  iVar26 = (int)*(short *)pfVar32;
  if (iVar26 == 9) {
    *param_1 = fVar35 * DAT_00238064 * fVar37;
    param_1[1] = fVar35 * fVar3 * fVar37;
    param_1[2] = fVar28;
    param_1[3] = fVar12;
    *(undefined2 *)(param_1 + 7) = 0x540;
  }
  else if (iVar26 < 10) {
    switch(iVar26) {
    case 1:
      *param_1 = fVar35 * fVar5 * fVar37;
      param_1[1] = fVar35 * fVar10 * fVar37;
      param_1[2] = fVar11;
      break;
    case 2:
    case 3:
      param_1[2] = fVar28;
      param_1[6] = DAT_00238058;
      break;
    case 4:
      *param_1 = fVar35 * DAT_00237cd8 * fVar37;
      param_1[2] = fVar18;
      break;
    case 5:
      *param_1 = fVar35 * DAT_00238068 * fVar37;
      param_1[2] = fVar19;
      param_1[3] = fVar8;
      *(short *)(param_1 + 7) = (short)uVar9;
      break;
    case 8:
      fVar29 = fVar35 * DAT_00238060;
      *param_1 = fVar35 * DAT_00237cd8 * fVar37;
      param_1[1] = fVar29 * fVar37;
      param_1[2] = fVar6;
      param_1[6] = fVar7;
    }
  }
  else if (iVar26 == 0x51) {
    fVar29 = fVar35 * DAT_00237cdc;
    *param_1 = fVar35 * DAT_00237ce4 * fVar37;
    param_1[1] = fVar29 * fVar37;
    param_1[2] = fVar10;
    param_1[3] = fVar36;
    param_1[6] = fVar8;
    param_1[4] = fVar36;
    *(undefined2 *)(param_1 + 7) = 0x280;
    *(undefined2 *)((int)param_1 + 0x1e) = 0x1e;
  }
  else if (iVar26 < 0x52) {
    if (iVar26 == 10) {
      *param_1 = fVar35 * fVar29 * fVar37;
      fVar29 = DAT_00238074;
      param_1[1] = fVar35 * fVar13 * fVar37;
      param_1[2] = fVar20;
      param_1[3] = fVar29;
      param_1[6] = fVar7;
      *(short *)(param_1 + 7) = (short)uVar9;
      *(undefined2 *)((int)param_1 + 0x1e) = 0x3c;
    }
    else if (iVar26 == 0xb) {
      fVar28 = fVar35 * DAT_00238080;
      *param_1 = fVar35 * DAT_0023807c * fVar37;
      fVar29 = DAT_00238084;
      param_1[1] = fVar28 * fVar37;
      param_1[3] = fVar29;
      param_1[4] = fVar11;
      *(short *)(param_1 + 7) = (short)uVar22;
    }
    else if (iVar26 == 0xc) {
      fVar28 = fVar35 * DAT_00237ce8;
      *param_1 = fVar35 * fVar5 * fVar37;
      fVar29 = DAT_00237cec;
      param_1[1] = fVar28 * fVar37;
      param_1[2] = fVar29;
      param_1[3] = fVar14;
      uVar9 = DAT_00237cf8;
      if ((*(uint *)(iVar27 + iVar31) & 0x8000000) != 0) {
        fVar36 = fVar12;
      }
      param_1[4] = fVar36;
      param_1[6] = fVar6;
      *(short *)(param_1 + 7) = (short)uVar9;
      *(undefined2 *)((int)param_1 + 0x1e) = 0x1e;
    }
  }
  else if (iVar26 == 0x5a) {
    *param_1 = fVar35 * DAT_00237ce4 * fVar37;
    param_1[6] = fVar8;
    *(short *)(param_1 + 7) = (short)uVar21;
  }
  else if (iVar26 == 0x5b) {
    *param_1 = fVar35 * DAT_00237cfc * fVar37;
    param_1[1] = fVar35 * fVar13 * fVar37;
    param_1[2] = fVar15;
    param_1[3] = fVar11;
    param_1[6] = fVar16;
    *(short *)(param_1 + 7) = (short)uVar17;
  }
  iVar31 = DAT_0023808c;
  *(undefined4 *)(DAT_0023808c + 0x24) = 1;
  *(int *)(iVar31 + 0x14) = (int)*(short *)(param_1 + 7);
  FUN_00372474(auStack_6c,local_4c,local_48);
  FUN_00372474(auStack_74,local_4c,local_50);
  pfVar32 = DAT_00238090;
  fVar29 = local_7c[1];
  fVar28 = local_7c[2];
  *DAT_00238090 = *local_7c;
  pfVar32[1] = fVar29;
  pfVar32[2] = fVar28;
  pfVar32[1] = pfVar32[1] + fVar35;
  fVar29 = (float)FUN_00372300((int)param_1[0x35] + 0xa98,auStack_5c,&local_80,pfVar32);
  uVar34 = in_fpscr & 0xfffffff | (uint)(fVar29 <= pfVar32[1] + *param_1) << 0x1d;
  if (SUB41(uVar34 >> 0x1d,0)) {
    pfVar32[1] = pfVar32[1] + *param_1;
  }
  else {
    pfVar32[1] = fVar29 + fVar11;
  }
  piVar23 = DAT_00238098;
  sVar30 = *(short *)((int)param_1 + 0x1a6);
  if (sVar30 != 0) {
    if (sVar30 == 10) {
      param_1[10] = local_7c[1] - param_1[0x4f];
      goto LAB_002383bc;
    }
    if (sVar30 != 0x14) goto LAB_002383bc;
  }
  local_58 = param_1[0x36];
  local_78 = 1;
  param_1[0x44] = DAT_00238094;
  fVar5 = DAT_0023809c;
  iVar31 = *piVar23;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar31 + 0x1a2),(byte)(uVar34 >> 0x15) & 3);
  param_1[0x43] = fVar29;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar31 + 0x1a0),(byte)(uVar34 >> 0x15) & 3);
  param_1[0x42] = fVar29;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar31 + 0x198),(byte)(uVar34 >> 0x15) & 3);
  param_1[0x45] = fVar29 * fVar4;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar31 + 0x19a),(byte)(uVar34 >> 0x15) & 3);
  param_1[0x46] = fVar29 * fVar4;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar31 + 0x19c),(byte)(uVar34 >> 0x15) & 3);
  param_1[0x47] = fVar29 * fVar4;
  fVar29 = (float)(*(ushort *)(param_1 + 0x65) & 0xfffffff9);
  *(short *)(param_1 + 0x65) = SUB42(fVar29,0);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((int)param_1 + 0x1e);
  param_1[10] = local_7c[1] - param_1[0x4f];
  fVar28 = param_1[7];
  if (((uint)fVar28 & 2) == 0) {
    if (((uint)fVar28 & 4) == 0) {
      bVar33 = ((uint)fVar28 & 8) == 0;
      if (!bVar33) {
        fVar29 = param_1[0x3c];
      }
      if (bVar33 || fVar29 == 0.0) {
        bVar33 = ((uint)fVar28 & 0x80) == 0;
        if (!bVar33) {
          fVar29 = param_1[0x3c];
        }
        if (bVar33 || fVar29 == 0.0) {
          sVar24 = local_6e;
          sVar30 = local_70;
          if (((uint)fVar28 & 0x40) != 0) {
            sVar30 = (short)(int)(fVar3 + param_1[2] * fVar5);
          }
          goto LAB_0023822c;
        }
        FUN_00342ec0(local_94);
        sVar30 = (short)(int)(fVar3 + param_1[2] * fVar5);
        fVar29 = (float)FUN_003696ec(*local_7c - local_94[0],local_7c[2] - local_8c);
        sVar24 = (short)(int)(fVar3 + fVar29 * DAT_002384b0 * fVar5);
        sVar2 = (short)(int)(fVar3 + param_1[3] * fVar5);
        if ((short)(sVar24 - local_6e) < 1) {
          sVar2 = -sVar2;
        }
        sVar24 = sVar24 + sVar2;
      }
      else {
        FUN_00331764(local_94);
        sVar30 = (short)(int)(fVar3 + param_1[2] * fVar5) - local_88;
        local_86 = local_86 + -0x7fff;
        sVar24 = (short)(int)(fVar3 + param_1[3] * fVar5);
        if ((short)(local_86 - local_6e) < 1) {
          sVar24 = local_86 - sVar24;
        }
        else {
          sVar24 = local_86 + sVar24;
        }
      }
      local_54 = param_1[0x3c];
      local_78 = 2;
    }
    else {
      sVar24 = (short)(int)(fVar3 + param_1[3] * fVar5);
      sVar30 = (short)(int)(fVar3 + param_1[2] * fVar5);
    }
  }
  else {
    sVar30 = *(short *)((int)local_7c + 0xe) + -0x7fff;
    sVar24 = (short)(int)(fVar3 + param_1[3] * fVar5);
    if ((short)(sVar30 - local_6e) < 1) {
      sVar24 = -sVar24;
    }
    sVar24 = sVar30 + sVar24;
    sVar30 = (short)(int)(fVar3 + param_1[2] * fVar5);
  }
LAB_0023822c:
  local_64 = param_1[1];
  local_60 = sVar30;
  local_5e = sVar24;
  FUN_00372448(DAT_00238090,&local_64);
  iVar31 = DAT_002384b4;
  *(undefined4 *)(DAT_002384b4 + 0xac) = extraout_s0;
  *(undefined4 *)(iVar31 + 0xb0) = extraout_s1;
  *(undefined4 *)(iVar31 + 0xb4) = extraout_s2;
  if (((uint)param_1[7] & 1) == 0) {
    local_80 = 0;
    do {
      local_a8 = &local_58;
      fStack_a4 = (float)local_78;
      iVar27 = FUN_003317ac(param_1[0x35],(int)param_1[0x35] + 0x5c78,DAT_002384b8 + -0xc);
      if (iVar27 == 0) {
        local_a8 = *(float **)(iVar31 + 0xac);
        fStack_a4 = *(float *)(iVar31 + 0xb0);
        fStack_a0 = *(float *)(iVar31 + 0xb4);
        iVar27 = FUN_003553fc(param_1,DAT_00238090,&local_a8);
        *(float **)(iVar31 + 0xac) = local_a8;
        *(float *)(iVar31 + 0xb0) = fStack_a4;
        *(float *)(iVar31 + 0xb4) = fStack_a0;
        if (iVar27 == 0) break;
      }
      local_5e = *(short *)(DAT_002384bc + local_80 * 2) + sVar24;
      local_60 = *(short *)(DAT_002384c0 + local_80 * 2) + sVar30;
      FUN_00372448(DAT_00238090,&local_64);
      iVar27 = DAT_002384b4;
      *(undefined4 *)(DAT_002384b4 + 0xac) = extraout_s0_00;
      *(undefined4 *)(iVar27 + 0xb0) = extraout_s1_00;
      *(undefined4 *)(iVar27 + 0xb4) = extraout_s2_00;
      local_80 = local_80 + 1;
    } while (local_80 < 0xe);
  }
  fVar29 = (float)VectorSignedToFloat((int)(short)(local_60 - local_70),(byte)(uVar34 >> 0x15) & 3);
  fVar28 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc),(byte)(uVar34 >> 0x15) & 3);
  param_1[9] = fVar29 / fVar28;
  fVar28 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc),(byte)(uVar34 >> 0x15) & 3);
  fVar29 = (float)VectorSignedToFloat((int)(short)(local_5e - local_6e),(byte)(uVar34 >> 0x15) & 3);
  param_1[8] = fVar29 / fVar28;
  *(short *)(param_1 + 0xb) = local_6e;
  *(short *)((int)param_1 + 0x2e) = local_70;
  *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  *(undefined2 *)((int)param_1 + 0x32) = 1;
LAB_002383bc:
  uVar9 = DAT_002384cc;
  fVar29 = DAT_002384c4;
  pfVar32 = DAT_00238090;
  param_1[0x45] = DAT_002384c4;
  param_1[0x46] = fVar29;
  param_1[0x52] = DAT_002384c8;
  FUN_00367df4(fVar3,fVar3,uVar9,pfVar32,local_4c);
  uVar34 = uVar34 & 0xfffffff | (uint)(param_1[4] == fVar12) << 0x1e;
  if (!SUB41(uVar34 >> 0x1e,0)) {
    local_60 = 0;
    local_5e = *(short *)((int)local_7c + 0xe);
    local_64 = param_1[4];
    FUN_00372448(local_4c,&local_64);
    *local_4c = extraout_s0_01;
    local_4c[1] = extraout_s1_01;
    local_4c[2] = extraout_s2_01;
  }
  param_1[0x52] = fVar12;
  local_64 = (float)FUN_00355780(param_1[1],param_1[0x49],fVar29,fVar10);
  param_1[0x49] = local_64;
  if (*(short *)(param_1 + 0xc) == 0) {
    if (((uint)param_1[7] & 0x10) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x65);
      *(ushort *)(param_1 + 0x65) = uVar1 | 0x410;
      if (((uVar1 & 8) != 0) || (((uint)param_1[7] & 0x80) != 0)) {
        *(undefined4 *)(DAT_0023808c + 0x14) = 0;
        *(ushort *)(param_1 + 0x65) = uVar1 & 0xfff7 | 0x416;
        if (*(short *)((int)param_1 + 0x1ae) < 0) {
          FUN_00338864(param_1,(int)*(short *)(param_1 + 0x67),2);
        }
        else {
          FUN_003387a8(param_1);
          *(undefined2 *)((int)param_1 + 0x1ae) = 0xffff;
        }
      }
    }
    else {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff7 | 0x416;
      if (0 < *(short *)(param_1 + 0x6a)) {
        *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -1;
      }
    }
  }
  else {
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x20;
    *(short *)(param_1 + 0xb) = *(short *)(param_1 + 0xb) + (short)(int)param_1[8];
    *(short *)((int)param_1 + 0x2e) = *(short *)((int)param_1 + 0x2e) + (short)(int)param_1[9];
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
  }
  local_5e = *(short *)(param_1 + 0xb);
  iVar27 = (int)(short)(local_5e - local_6e);
  iVar31 = iVar27;
  if (iVar27 < 0) {
    iVar31 = -iVar27;
  }
  fVar29 = (float)VectorSignedToFloat(iVar27,(byte)(uVar34 >> 0x15) & 3);
  if (3 < iVar31) {
    local_5e = local_6e + (short)(int)(fVar3 + fVar29 * param_1[5]);
  }
  local_60 = *(short *)((int)param_1 + 0x2e);
  iVar27 = (int)(short)(local_60 - local_70);
  iVar31 = iVar27;
  if (iVar27 < 0) {
    iVar31 = -iVar27;
  }
  fVar29 = (float)VectorSignedToFloat(iVar27,(byte)(uVar34 >> 0x15) & 3);
  if (3 < iVar31) {
    local_60 = local_70 + (short)(int)(fVar3 + fVar29 * param_1[5]);
  }
  FUN_00372448(local_4c,&local_64);
  *local_50 = extraout_s0_02;
  local_50[1] = extraout_s1_02;
  local_50[2] = extraout_s2_02;
  fVar29 = local_50[1];
  fVar28 = local_50[2];
  *local_48 = *local_50;
  local_48[1] = fVar29;
  local_48[2] = fVar28;
  local_a8 = (float *)*local_48;
  fStack_a4 = local_48[1];
  fStack_a0 = local_48[2];
  FUN_003553fc(param_1,local_4c,&local_a8);
  uVar9 = DAT_002386c0;
  *local_48 = (float)local_a8;
  local_48[1] = fStack_a4;
  local_48[2] = fStack_a0;
  fVar29 = (float)FUN_00355780(param_1[6],param_1[0x51],param_1[0x47],uVar9);
  param_1[0x51] = fVar29;
  iVar27 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar31 = iVar27;
  if (iVar27 < 0) {
    iVar31 = -iVar27;
  }
  iVar26 = iVar31;
  if (iVar31 < 10) {
    iVar26 = 0;
  }
  fVar29 = (float)VectorSignedToFloat(iVar27,(byte)(uVar34 >> 0x15) & 3);
  if (9 < iVar31) {
    iVar26 = (int)*(short *)((int)param_1 + 0x1a2) + (int)(short)(int)(fVar3 + fVar29 * fVar3);
  }
  *(short *)((int)param_1 + 0x1a2) = (short)iVar26;
  return iVar26;
}
