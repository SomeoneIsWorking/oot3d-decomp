// OoT3D decomp @ 0036a024  name=FUN_0036a024  size=152

void FUN_0036a024(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  FUN_00372aa8(param_1 + 0x236,(int)*(short *)(param_1 + 0x238),(int)*(short *)(param_1 + 0x23a));
  FUN_00372aa8(param_1 + 0x23c,(int)*(short *)(param_1 + 0x23e),(int)*(short *)(param_1 + 0x240));
  *(short *)(param_1 + 0x242) = *(short *)(param_1 + 0x242) + *(short *)(param_1 + 0x23c);
  fVar1 = (float)FUN_002cfca0();
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x236),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x244) = (short)(int)(DAT_0036a0bc - fVar1 * fVar2);
  fVar1 = (float)FUN_002cfca0();
  *(float *)(param_1 + 0x58) = fVar1 * DAT_0036a0c0;
  fVar1 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x244));
  fVar1 = fVar1 * DAT_0036a0c4;
  *(float *)(param_1 + 0x5c) = fVar1;
  *(float *)(param_1 + 0x54) = fVar1;
  return;
}
