// OoT3D decomp @ 002038c8  name=FUN_002038c8  size=2152

undefined4 FUN_002038c8(float *param_1)

{
  short sVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short sVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float fVar23;
  float fVar24;
  undefined1 auStack_84 [4];
  float local_80;
  undefined1 auStack_70 [4];
  short local_6c;
  short local_6a;
  undefined1 auStack_68 [4];
  short local_64;
  short local_62;
  float local_60;
  short local_5c;
  short local_5a;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float *local_48;

  pfVar13 = param_1 + 0x23;
  local_48 = param_1 + 0x20;
  pfVar14 = param_1 + 0x29;
  fVar19 = (float)FUN_00367ef0(param_1[0x36]);
  FUN_00338790(auStack_84,param_1[0x36]);
  iVar9 = DAT_00203ddc;
  fVar24 = param_1[0x57] - param_1[0x24];
  if (((*(uint *)(DAT_00203ddc + 0x58) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_00203ddc + 0x58), iVar8 != 0)) {
    uVar20 = VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x1ec),(byte)(in_fpscr >> 0x15) & 3
                                );
    *(undefined4 *)(iVar9 + 0x5c) = uVar20;
  }
  if (((*(uint *)(iVar9 + 0x54) & 1) == 0) && (iVar8 = FUN_003679b4(DAT_00203de4), iVar8 != 0)) {
    uVar20 = VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x1ee),(byte)(in_fpscr >> 0x15) & 3
                                );
    *(undefined4 *)(iVar9 + 0x60) = uVar20;
  }
  uVar16 = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_00203ddc + 0x5c) <= fVar24) << 0x1d;
  if ((SUB41(uVar16 >> 0x1d,0)) && (*(short *)((int)param_1 + 0x1a6) != 0)) {
    fVar21 = *(float *)(DAT_00203ddc + 0x60);
    uVar17 = in_fpscr & 0xfffffff | (uint)(fVar24 < fVar21) << 0x1f |
             (uint)(fVar24 == fVar21) << 0x1e;
    uVar16 = uVar17 | (uint)(NAN(fVar24) || NAN(fVar21)) << 0x1c;
    bVar2 = (byte)(uVar17 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar16 >> 0x1c) & 1)) &&
       (*(short *)((int)param_1 + 0x46) != 10)) {
      *(undefined2 *)((int)param_1 + 0x46) = 10;
    }
  }
  else if (*(short *)((int)param_1 + 0x46) != 0) {
    *(undefined2 *)((int)param_1 + 0x46) = 0;
  }
  FUN_00372474(auStack_68,local_48,pfVar13);
  FUN_00372474(auStack_70,local_48,pfVar14);
  fVar6 = DAT_00203e04;
  fVar5 = DAT_00203e00;
  fVar4 = DAT_00203df4;
  fVar21 = DAT_00203df0;
  psVar11 = *(short **)
             (*(int *)(DAT_00203de8 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
             *(short *)((int)param_1 + 0x46) * 8 + 4);
  fVar22 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x1f0),
                                      (byte)(uVar16 >> 0x15) & 3);
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x1f0),
                                      (byte)(uVar16 >> 0x15) & 3);
  fVar23 = fVar19 * DAT_00203df0 *
           ((DAT_00203df4 + fVar23 * DAT_00203df0) - (DAT_00203dec / fVar19) * fVar22 * DAT_00203df0
           );
  fVar19 = param_1[0x35];
  fVar22 = (float)VectorSignedToFloat((int)*psVar11,(byte)(uVar16 >> 0x15) & 3);
  bVar15 = *(short *)((int)fVar19 + 0x104) == 5;
  if (bVar15) {
    fVar19 = (float)(uint)*(byte *)((int)fVar19 + 0x4c30);
  }
  if (bVar15 && fVar19 == 0.0) {
    fVar22 = DAT_00203df8;
  }
  uVar16 = uVar16 & 0xfffffff | (uint)(fVar24 < DAT_00203e04) << 0x1f |
           (uint)(fVar24 == DAT_00203e04) << 0x1e;
  uVar17 = uVar16 | (uint)(NAN(fVar24) || NAN(DAT_00203e04)) << 0x1c;
  *param_1 = fVar22 * fVar23;
  param_1[0x12] = fVar22 * fVar23;
  fVar19 = (float)VectorSignedToFloat((int)psVar11[2],(byte)(uVar17 >> 0x15) & 3);
  param_1[1] = fVar19 * fVar23;
  fVar19 = DAT_00203dfc;
  fVar24 = (float)VectorSignedToFloat((int)psVar11[4],(byte)(uVar17 >> 0x15) & 3);
  param_1[2] = fVar24 * fVar23;
  local_4c = (float)VectorSignedToFloat((int)psVar11[6],(byte)(uVar17 >> 0x15) & 3);
  *(short *)(param_1 + 8) = (short)(int)(fVar5 + local_4c * fVar19);
  fVar19 = (float)VectorSignedToFloat((int)psVar11[8],(byte)(uVar17 >> 0x15) & 3);
  param_1[3] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)psVar11[10],(byte)(uVar17 >> 0x15) & 3);
  param_1[4] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)psVar11[0xc],(byte)(uVar17 >> 0x15) & 3);
  param_1[5] = fVar19 * fVar21;
  fVar19 = (float)VectorSignedToFloat((int)psVar11[0xe],(byte)(uVar17 >> 0x15) & 3);
  param_1[6] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)psVar11[0x10],(byte)(uVar17 >> 0x15) & 3);
  param_1[7] = fVar19 * fVar21;
  bVar2 = (byte)(uVar16 >> 0x18);
  *(short *)((int)param_1 + 0x22) = psVar11[0x12];
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar17 >> 0x1c) & 1)) {
    fVar19 = *param_1;
    if ((uint)*param_1 < (uint)DAT_00203e0c) {
      fVar19 = DAT_00203e08;
    }
    *param_1 = fVar19;
  }
  iVar9 = DAT_00203ddc;
  *(undefined2 *)(param_1 + 99) = *(undefined2 *)(param_1 + 99);
  *(int *)(iVar9 + 0x14) = (int)*(short *)((int)param_1 + 0x22);
  sVar12 = *(short *)((int)param_1 + 0x1a6);
  if (((sVar12 == 0 || sVar12 == 10) || sVar12 == 0x14) || sVar12 == 0x19) {
    param_1[0xc] = 0.0;
    param_1[0x10] = param_1[0x53];
    *(undefined2 *)(param_1 + 0xf) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x11) = 10;
    param_1[0xd] = param_1[3];
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
  }
  else if (*(short *)(param_1 + 0x11) != 0) {
    *(short *)(param_1 + 0x11) = *(short *)(param_1 + 0x11) + -1;
  }
  uVar20 = DAT_00203e14;
  fVar19 = DAT_00203e10;
  local_58 = *pfVar13;
  fStack_54 = param_1[0x24];
  fStack_50 = param_1[0x25];
  iVar9 = (int)*(short *)(*DAT_00203de0 + 0x1c6);
  fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(uVar17 >> 0x15) & 3);
  fVar22 = param_1[0x4a] * fVar24 * fVar21;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x1c8),
                                      (byte)(uVar17 >> 0x15) & 3);
  if (*(short *)(param_1 + 0xf) == 0) {
    local_4c = fVar22;
  }
  fVar24 = param_1[0x4a] * fVar24 * fVar21;
  if (*(short *)(param_1 + 0xf) != 0) {
    local_4c = (float)VectorSignedToFloat(iVar9,(byte)(uVar17 >> 0x15) & 3);
    local_4c = local_4c * fVar21;
  }
  if (*(short *)((int)param_1 + 0x3e) == 0) {
    fVar23 = (float)FUN_00355780(param_1[0xd],param_1[0x44],local_4c,DAT_00203e14);
    param_1[0x44] = fVar23;
    fVar19 = (float)FUN_00355780(fVar19,param_1[0x43],fVar24,uVar20);
    param_1[0x43] = fVar19;
  }
  else {
    fVar23 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3e) << 1,
                                        (byte)(uVar17 >> 0x15) & 3);
    fVar23 = (float)FUN_00355780(param_1[0xd] + fVar23,param_1[0x44],fVar22,DAT_00203e14);
    param_1[0x44] = fVar23;
    fVar23 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3e) << 1,
                                        (byte)(uVar17 >> 0x15) & 3);
    fVar19 = (float)FUN_00355780(fVar23 + fVar19,param_1[0x43],fVar24,uVar20);
    param_1[0x43] = fVar19;
    *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
  }
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00203de0 + 0x198),
                                      (byte)(uVar17 >> 0x15) & 3);
  fVar19 = (float)FUN_00355780(fVar19 * fVar21,param_1[0x45],fVar22,uVar20);
  piVar3 = DAT_00203de0;
  param_1[0x45] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19a),(byte)(uVar17 >> 0x15) & 3);
  fVar19 = (float)FUN_00355780(fVar19 * fVar21,param_1[0x46],fVar24,uVar20);
  piVar3 = DAT_00203de0;
  param_1[0x46] = fVar19;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19c),(byte)(uVar17 >> 0x15) & 3);
  fVar19 = (float)FUN_00355780(fVar24 * fVar21,fVar19,param_1[0x4a] * DAT_00203e18,uVar20);
  param_1[0x47] = fVar19;
  FUN_00338ac8(*param_1,param_1,auStack_70,(int)*(short *)((int)param_1 + 0x22));
  FUN_00372474(&local_60,local_48,pfVar14);
  local_60 = (float)FUN_0033743c(local_60,param_1[1],param_1[2],param_1,
                                 (int)*(short *)(param_1 + 0x11));
  param_1[0x49] = local_60;
  fVar19 = param_1[0x38] - param_1[0x53];
  if (NAN(fVar19) || NAN(fVar6)) {
    fVar19 = param_1[0x53] - param_1[0x38];
  }
  uVar16 = uVar17 & 0xfffffff | (uint)(fVar19 < *(float *)(DAT_00203ddc + 100)) << 0x1f;
  uVar18 = uVar16 | (uint)(NAN(fVar19) || NAN(*(float *)(DAT_00203ddc + 100))) << 0x1c;
  if ((byte)(uVar16 >> 0x1f) == ((byte)(uVar18 >> 0x1c) & 1)) {
    fVar19 = local_80 - param_1[0x57];
    if (NAN(fVar19) || NAN(fVar6)) {
      fVar19 = param_1[0x57] - local_80;
    }
    uVar16 = uVar17 & 0xfffffff | (uint)(fVar19 < *(float *)(DAT_00203ddc + 0x68)) << 0x1f;
    uVar18 = uVar16 | (uint)(NAN(fVar19) || NAN(*(float *)(DAT_00203ddc + 0x68))) << 0x1c;
    if ((byte)(uVar16 >> 0x1f) == ((byte)(uVar18 >> 0x1c) & 1)) {
      param_1[0x43] = DAT_00204170;
    }
  }
  if (*(short *)(param_1 + 0xf) == 0) {
    local_5a = FUN_003380f0(param_1[5],param_1,(int)local_6a,(int)*(short *)((int)param_1 + 0xea));
    local_5c = FUN_00337fdc(param_1,(int)local_6c,(int)*(short *)(param_1 + 8),0);
  }
  else {
    local_5a = *(short *)((int)param_1 + 0x3a);
    iVar8 = (int)(short)(local_5a - local_6a);
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = -iVar8;
    }
    fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(uVar18 >> 0x15) & 3);
    if (9 < iVar9) {
      local_5a = local_6a + (short)(int)(fVar5 + fVar19 * (fVar4 / param_1[0x44]));
    }
    local_5c = *(short *)(param_1 + 0xe);
    iVar8 = (int)(short)(local_5c - local_6c);
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = -iVar8;
    }
    fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(uVar18 >> 0x15) & 3);
    if (9 < iVar9) {
      local_5c = local_6c + (short)(int)(fVar5 + fVar19 * (fVar4 / param_1[0x44]));
    }
  }
  sVar12 = *(short *)(*DAT_00203de0 + 0x19e);
  if ((local_5c <= sVar12) &&
     (sVar1 = *(short *)(*DAT_00203de0 + 0x1d8), sVar12 = local_5c, local_5c <= sVar1)) {
    sVar12 = sVar1;
  }
  local_5c = sVar12;
  FUN_00372448(local_48,&local_60);
  *pfVar14 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  param_1[0x2b] = extraout_s2;
  iVar9 = DAT_00203ddc;
  if ((*(short *)(param_1 + 0x62) == 7) && ((*(ushort *)((int)param_1 + 0x22) & 0x10) == 0)) {
    FUN_00337624(param_1[1],param_1[3],param_1,&local_60,&local_4c,param_1 + 9,1);
    if ((*(ushort *)((int)param_1 + 0x22) & 4) == 0) {
      FUN_00372474(&local_60,param_1 + 0x23,param_1 + 0x20);
      *(short *)(param_1 + 0x5f) = local_5c;
      *(short *)((int)param_1 + 0x17e) = local_5a;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
    else {
      *(short *)(param_1 + 0x5f) = -local_64;
      *(short *)((int)param_1 + 0x17e) = local_62 + -0x7fff;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
    if (*(short *)(param_1 + 0xf) != 0) {
      sVar12 = *(short *)((int)param_1 + 0x3a) + -0x7fff;
      iVar8 = (int)(short)(sVar12 - *(short *)((int)param_1 + 0x17e));
      iVar9 = iVar8;
      if (iVar8 < 0) {
        iVar9 = -iVar8;
      }
      fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(uVar18 >> 0x15) & 3);
      if (9 < iVar9) {
        sVar12 = *(short *)((int)param_1 + 0x17e) +
                 (short)(int)(fVar5 + fVar19 * (fVar4 - local_4c * DAT_00204174));
      }
      *(short *)((int)param_1 + 0x17e) = sVar12;
    }
  }
  else {
    param_1[0xd] = param_1[3];
    uVar7 = DAT_00204178;
    *(undefined2 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(iVar9 + 0x24) = 0;
    FUN_00367df4(uVar7,uVar7,uVar20,pfVar14,pfVar13);
  }
  fVar19 = (float)FUN_00355780(param_1[6],param_1[0x51],param_1[0x47],fVar4);
  param_1[0x51] = fVar19;
  iVar8 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = -iVar8;
  }
  iVar10 = iVar9;
  if (iVar9 < 10) {
    iVar10 = 0;
  }
  sVar12 = (short)iVar10;
  fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(uVar18 >> 0x15) & 3);
  if (9 < iVar9) {
    sVar12 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar5 + fVar19 * fVar5);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar12;
  fVar19 = (float)FUN_003375bc(param_1[7],param_1);
  param_1[0x52] = fVar19;
  return 1;
}
