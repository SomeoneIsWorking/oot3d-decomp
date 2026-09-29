// OoT3D decomp @ 0025d43c  name=FUN_0025d43c  size=920

undefined4 FUN_0025d43c(float *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  float extraout_s0;
  float fVar16;
  float fVar17;
  float extraout_s1;
  float fVar18;
  float fVar19;
  float fVar20;
  float extraout_s2;
  float fVar21;
  float fVar22;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  short local_30;
  short local_2e;

  iVar5 = DAT_0025d7d4;
  pfVar12 = param_1 + 0x23;
  local_48 = param_1[0x37];
  local_44 = param_1[0x38] + *(float *)(DAT_0025d7d4 + 0x78);
  pfVar11 = param_1 + 2;
  local_40 = param_1[0x39];
  psVar4 = *(short **)
            (*(int *)(DAT_0025d7d4 + *(short *)((int)param_1 + 0x18a) * 8 + 0x158) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar15 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar15;
  *(short *)(param_1 + 1) = psVar4[2];
  psVar4 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  fVar20 = DAT_0025d7d8;
  fVar15 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[0x29] = fVar15;
  param_1[0x2a] = fVar16;
  param_1[0x2b] = fVar18;
  fVar18 = param_1[0x29];
  fVar9 = param_1[0x2a];
  fVar10 = param_1[0x2b];
  bVar3 = false;
  fVar22 = fVar18 - local_48;
  fVar19 = fVar9 - local_44;
  fVar21 = fVar10 - local_40;
  fVar17 = fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21;
  fVar15 = *(float *)(iVar5 + 0x7c);
  fVar16 = fVar20;
  if (fVar17 != fVar20) {
    fVar16 = SQRT(fVar17);
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar15) << 0x1f | (uint)(fVar16 == fVar15) << 0x1e;
  uVar14 = uVar1 | (uint)(NAN(fVar16) || NAN(fVar15)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  local_54 = fVar18;
  local_50 = fVar9;
  local_4c = fVar10;
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
    fVar17 = *(float *)(iVar5 + 0x80);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar17) << 0x1f |
            (uint)(fVar16 == fVar17) << 0x1e;
    uVar14 = uVar1 | (uint)(NAN(fVar16) || NAN(fVar17)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
      fVar15 = (fVar16 - fVar17) + fVar15;
    }
    fVar15 = fVar15 / fVar16;
    bVar3 = true;
    local_54 = local_48 + fVar22 * fVar15;
    local_4c = local_40 + fVar21 * fVar15;
    local_50 = local_44 + fVar19 * fVar15 + *(float *)(iVar5 + 0x84);
  }
  FUN_0035fb94(auStack_3c,psVar4 + 3,fVar18,fVar9,fVar18,fVar9,fVar10);
  FUN_00372474(auStack_34,&local_54,&local_48);
  iVar5 = (int)psVar4[6];
  if (iVar5 == -1) {
    iVar5 = (int)(short)(int)(*param_1 * DAT_0025d7dc);
  }
  iVar6 = iVar5;
  if (iVar5 < 0x169) {
    iVar6 = (short)iVar5 * 100;
  }
  if (iVar5 < 0x169) {
    iVar6 = (int)(short)iVar6;
  }
  if (-1 < psVar4[8]) {
    *(undefined1 *)((int)param_1 + 0x1b6) = 0;
    fVar15 = (float)VectorSignedToFloat((int)psVar4[8],(byte)(uVar14 >> 0x15) & 3);
    fVar15 = fVar15 * DAT_0025d7e0;
    param_1[0x34] = fVar15;
    if ((int)fVar15 < 0x34000001) {
      fVar15 = DAT_0025d7e4;
    }
    param_1[0x34] = fVar15;
  }
  *(int *)(DAT_0025d7d4 + 0x14) = (int)*(short *)(param_1 + 1);
  fVar15 = DAT_0025d7e8;
  bVar13 = *(short *)((int)param_1 + 0x1a6) != 0;
  if (!bVar13) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(uVar14 >> 0x15) & 3);
    param_1[0x51] = fVar16 * fVar15;
    param_1[0x52] = fVar20;
    *(undefined2 *)((int)param_1 + 0x1a2) = 0;
    *(short *)pfVar11 = local_2e;
  }
  fVar15 = DAT_0025d7f0;
  sVar8 = *(short *)pfVar11;
  iVar6 = (int)(short)(local_2e - sVar8);
  iVar5 = iVar6;
  if (iVar6 < 0) {
    iVar5 = -iVar6;
  }
  fVar20 = (float)VectorSignedToFloat(iVar6,(byte)(uVar14 >> 0x15) & 3);
  if (1999 < iVar5) {
    sVar8 = sVar8 + (short)(int)(DAT_0025d7f0 + fVar20 * DAT_0025d7ec);
  }
  *(short *)pfVar11 = sVar8;
  if (!bVar3) {
    fVar20 = (float)FUN_00338f60((int)(short)(local_2e - psVar4[4]));
    fVar16 = (float)VectorSignedToFloat(-(int)psVar4[3],(byte)(uVar14 >> 0x15) & 3);
    local_30 = (short)(int)(fVar20 * fVar16);
  }
  iVar5 = DAT_0025d7d4;
  if (bVar13) {
    sVar8 = *(short *)((int)param_1 + 10);
    iVar7 = (int)(short)(local_30 - sVar8);
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = -iVar7;
    }
    fVar20 = (float)VectorSignedToFloat(iVar7,(byte)(uVar14 >> 0x15) & 3);
    if (-1 < iVar6) {
      sVar8 = sVar8 + (short)(int)(fVar15 + fVar20 * *(float *)(DAT_0025d7d4 + 0x88));
    }
    *(short *)((int)param_1 + 10) = sVar8;
    local_30 = sVar8;
    FUN_00367df4(*(undefined4 *)(iVar5 + 0x8c),*(undefined4 *)(iVar5 + 0x90),
                 *(undefined4 *)(iVar5 + 0x94),&local_54,pfVar12);
  }
  else {
    *(short *)((int)param_1 + 10) = local_30;
    *pfVar12 = local_54;
    param_1[0x24] = local_50;
    param_1[0x25] = local_4c;
  }
  FUN_00372448(pfVar12,auStack_34);
  param_1[0x20] = extraout_s0;
  param_1[0x21] = extraout_s1;
  param_1[0x22] = extraout_s2;
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x400;
  return 1;
}
