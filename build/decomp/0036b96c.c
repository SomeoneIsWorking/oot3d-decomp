// OoT3D decomp @ 0036b96c  name=FUN_0036b96c  size=108

void FUN_0036b96c(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0036b9d8 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_0036b9dc;
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x60) * fVar1;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 100) * fVar1;
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x68) * fVar1;
  return;
}

