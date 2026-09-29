// OoT3D decomp @ 00372298  name=FUN_00372298  size=92

float FUN_00372298(float param_1)

{
  int iVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;

  for (param_1 = ABS(param_1); DAT_003722f4 <= (int)param_1; param_1 = param_1 - DAT_003722f8) {
  }
  uVar2 = VectorFloatToUnsigned(param_1,3);
  iVar1 = DAT_003722fc + (uVar2 & 0xff) * 0x10;
  fVar3 = (float)VectorUnsignedToFloat(uVar2 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  return *(float *)(iVar1 + 4) + (param_1 - fVar3) * *(float *)(iVar1 + 0xc);
}
