// OoT3D decomp @ 0037103c  name=FUN_0037103c  size=112

float FUN_0037103c(float param_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  uint uVar4;
  float fVar5;

  for (fVar3 = ABS(param_1); DAT_003710ac <= (int)fVar3; fVar3 = fVar3 - DAT_003710b0) {
  }
  uVar4 = VectorFloatToUnsigned(fVar3,3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003710b8 <= param_1) << 0x1d;
  pfVar2 = (float *)(DAT_003710b4 + (uVar4 & 0xff) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar3 = *pfVar2 + (fVar3 - fVar5) * pfVar2[2];
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar3 = -fVar3;
  }
  return fVar3;
}
