// OoT3D decomp @ 00309f1c  name=FUN_00309f1c  size=96

void FUN_00309f1c(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = DAT_00309f7c;
  if ((param_2 != 0x7f) && (fVar1 = DAT_00309f80, param_2 != 0x7e)) {
    if (param_2 < 0x32) {
      fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = fVar1 * DAT_00309f88;
    }
    else {
      fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = DAT_00309f8c / fVar1;
    }
    fVar1 = fVar1 * DAT_00309f84;
  }
  *(float *)(param_1 + 8) = fVar1;
  return;
}
