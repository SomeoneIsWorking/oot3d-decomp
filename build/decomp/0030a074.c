// OoT3D decomp @ 0030a074  name=FUN_0030a074  size=96

void FUN_0030a074(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = DAT_0030a0d4;
  if ((param_2 != 0x7f) && (fVar1 = DAT_0030a0d8, param_2 != 0x7e)) {
    if (param_2 < 0x32) {
      fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = fVar1 * DAT_0030a0e0;
    }
    else {
      fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = DAT_0030a0e4 / fVar1;
    }
    fVar1 = fVar1 * DAT_0030a0dc;
  }
  *(float *)(param_1 + 0xc) = fVar1;
  return;
}
