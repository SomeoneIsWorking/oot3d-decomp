// OoT3D decomp @ 00177ca4  name=FUN_00177ca4  size=72

void FUN_00177ca4(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_1 + 0x338);
  FUN_003731e0(param_1 + 0x2fc);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(DAT_00177cec + param_1),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (fVar1 <= fVar2) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00177cf0;
  }
  return;
}
