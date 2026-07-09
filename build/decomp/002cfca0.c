// OoT3D decomp @ 002cfca0  name=FUN_002cfca0  size=8

float FUN_002cfca0(uint param_1)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;
  
  pfVar1 = (float *)(iRam002cfcdc + ((param_1 & 0xffff) >> 8) * 0x10);
  fVar2 = (float)VectorUnsignedToFloat(param_1 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
  return *pfVar1 + pfVar1[2] * fVar2 * fRam002cfcd8;
}

