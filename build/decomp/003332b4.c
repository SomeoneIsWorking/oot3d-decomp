// OoT3D decomp @ 003332b4  name=FUN_003332b4  size=492

void FUN_003332b4(float param_1,float param_2,float param_3,float *param_4)

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
  
  fVar4 = ABS(param_2 * DAT_003334a0);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003334a4 <= param_3 * DAT_003334a0) << 0x1d;
  fVar5 = ABS(param_3 * DAT_003334a0);
  for (fVar6 = ABS(param_1 * DAT_003334a0); DAT_003334a8 <= (int)fVar6; fVar6 = fVar6 - DAT_003334ac
      ) {
  }
  for (; DAT_003334a8 <= (int)fVar4; fVar4 = fVar4 - DAT_003334ac) {
  }
  for (; DAT_003334a8 <= (int)fVar5; fVar5 = fVar5 - DAT_003334ac) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar4,3);
  uVar9 = VectorFloatToUnsigned(fVar5,3);
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar2 = (float *)(DAT_003334b0 + (uVar7 & 0xff) * 0x10);
  fVar11 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_003334b0 + (uVar8 & 0xff) * 0x10);
  fVar12 = *pfVar2 + (fVar6 - fVar10) * pfVar2[2];
  fVar10 = pfVar2[1] + (fVar6 - fVar10) * pfVar2[3];
  pfVar2 = (float *)(DAT_003334b0 + (uVar9 & 0xff) * 0x10);
  fVar6 = *pfVar3 + (fVar4 - fVar13) * pfVar3[2];
  fVar4 = pfVar3[1] + (fVar4 - fVar13) * pfVar3[3];
  fVar13 = *pfVar2 + (fVar5 - fVar11) * pfVar2[2];
  if (param_1 * DAT_003334a0 < DAT_003334a4) {
    fVar12 = -fVar12;
  }
  fVar5 = pfVar2[1] + (fVar5 - fVar11) * pfVar2[3];
  if (param_2 * DAT_003334a0 < DAT_003334a4) {
    fVar6 = -fVar6;
  }
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar13 = -fVar13;
  }
  *param_4 = fVar5 * fVar4;
  param_4[4] = fVar13 * fVar4;
  param_4[9] = fVar12 * fVar4;
  param_4[10] = fVar10 * fVar4;
  param_4[1] = fVar12 * fVar5 * fVar6 - fVar10 * fVar13;
  param_4[6] = fVar10 * fVar13 * fVar6 - fVar12 * fVar5;
  param_4[2] = fVar12 * fVar13 + fVar10 * fVar5 * fVar6;
  param_4[5] = fVar10 * fVar5 + fVar12 * fVar13 * fVar6;
  param_4[8] = -fVar6;
  param_4[3] = 0.0;
  param_4[7] = 0.0;
  param_4[0xb] = 0.0;
  return;
}

