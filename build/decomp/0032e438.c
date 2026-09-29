// OoT3D decomp @ 0032e438  name=FUN_0032e438  size=508

void FUN_0032e438(float *param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  fVar4 = ABS(param_2[1] * DAT_0032e634);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0032e638 <= param_2[2] * DAT_0032e634) << 0x1d;
  fVar5 = ABS(param_2[2] * DAT_0032e634);
  for (fVar6 = ABS(*param_2 * DAT_0032e634); DAT_0032e63c <= (int)fVar6;
      fVar6 = fVar6 - DAT_0032e640) {
  }
  for (; DAT_0032e63c <= (int)fVar4; fVar4 = fVar4 - DAT_0032e640) {
  }
  for (; DAT_0032e63c <= (int)fVar5; fVar5 = fVar5 - DAT_0032e640) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar4,3);
  uVar9 = VectorFloatToUnsigned(fVar5,3);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar2 = (float *)(DAT_0032e644 + (uVar7 & 0xff) * 0x10);
  fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_0032e644 + (uVar8 & 0xff) * 0x10);
  fVar12 = *pfVar2 + (fVar6 - fVar10) * pfVar2[2];
  fVar10 = pfVar2[1] + (fVar6 - fVar10) * pfVar2[3];
  pfVar2 = (float *)(DAT_0032e644 + (uVar9 & 0xff) * 0x10);
  fVar6 = *pfVar3 + (fVar4 - fVar11) * pfVar3[2];
  fVar4 = pfVar3[1] + (fVar4 - fVar11) * pfVar3[3];
  fVar11 = *pfVar2 + (fVar5 - fVar13) * pfVar2[2];
  if (*param_2 * DAT_0032e634 < DAT_0032e638) {
    fVar12 = -fVar12;
  }
  fVar5 = pfVar2[1] + (fVar5 - fVar13) * pfVar2[3];
  if (param_2[1] * DAT_0032e634 < DAT_0032e638) {
    fVar6 = -fVar6;
  }
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar11 = -fVar11;
  }
  *param_1 = fVar5 * fVar4;
  param_1[4] = fVar11 * fVar4;
  param_1[9] = fVar12 * fVar4;
  param_1[10] = fVar10 * fVar4;
  param_1[1] = fVar12 * fVar5 * fVar6 - fVar10 * fVar11;
  param_1[6] = fVar10 * fVar11 * fVar6 - fVar12 * fVar5;
  param_1[2] = fVar12 * fVar11 + fVar10 * fVar5 * fVar6;
  param_1[5] = fVar10 * fVar5 + fVar12 * fVar11 * fVar6;
  param_1[8] = -fVar6;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  return;
}
