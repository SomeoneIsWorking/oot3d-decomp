// OoT3D decomp @ 002e1adc  name=FUN_002e1adc  size=56

float FUN_002e1adc(float param_1)

{
  float *pfVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;

  uVar2 = VectorFloatToUnsigned(param_1 * DAT_002e1b14,3);
  pfVar1 = (float *)(DAT_002e1b18 + (uVar2 & 0xffff) * 8);
  fVar3 = (float)VectorUnsignedToFloat(uVar2 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  return *pfVar1 + (param_1 * DAT_002e1b14 - fVar3) * pfVar1[1];
}
