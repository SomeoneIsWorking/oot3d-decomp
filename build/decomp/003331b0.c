// OoT3D decomp @ 003331b0  name=FUN_003331b0  size=48

uint FUN_003331b0(float param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = VectorFloatToUnsigned(fVar3 + (fVar2 - fVar4) * param_1,3);
  return uVar1 & 0xff;
}
