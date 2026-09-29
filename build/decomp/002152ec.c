// OoT3D decomp @ 002152ec  name=FUN_002152ec  size=88

void FUN_002152ec(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  *(short *)(param_1 + 0x21a) = *(short *)(param_1 + 0x21a) + 12000;
  (**(code **)(param_1 + 0x1a4))();
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x21a));
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x218),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0xbc) = (short)(int)(fVar2 + fVar1 * fVar3);
  return;
}
