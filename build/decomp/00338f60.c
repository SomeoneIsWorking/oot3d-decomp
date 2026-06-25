// OoT3D decomp @ 00338f60  name=FUN_00338f60  size=8

float FUN_00338f60(uint param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = DAT_00338f9c + ((param_1 & 0xffff) >> 8) * 0x10;
  fVar2 = (float)VectorUnsignedToFloat(param_1 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
  return *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0xc) * fVar2 * DAT_00338f98;
}

