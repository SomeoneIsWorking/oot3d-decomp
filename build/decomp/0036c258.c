// OoT3D decomp @ 0036c258  name=FUN_0036c258  size=128

void FUN_0036c258(float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  for (fVar3 = ABS(param_1); DAT_0036c2d8 <= (int)fVar3; fVar3 = fVar3 - DAT_0036c2dc) {
  }
  uVar4 = VectorFloatToUnsigned(fVar3,3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0036c2e4 <= param_1) << 0x1d;
  pfVar2 = (float *)(DAT_0036c2e0 + (uVar4 & 0xff) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar8 = pfVar2[3];
  fVar6 = *pfVar2 + (fVar3 - fVar5) * pfVar2[2];
  fVar7 = pfVar2[1];
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar6 = -fVar6;
  }
  *param_2 = fVar6;
  *param_3 = fVar7 + (fVar3 - fVar5) * fVar8;
  return;
}

