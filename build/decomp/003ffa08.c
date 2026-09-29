// OoT3D decomp @ 003ffa08  name=FUN_003ffa08  size=52

void FUN_003ffa08(float param_1,int param_2,float param_3)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;

  if (param_3 == 0.0) {
    param_3 = 1.4013e-45;
  }
  pfVar1 = (float *)(DAT_003ffa3c + param_2 * 0x10);
  pfVar1[1] = param_1;
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1[2] = (param_1 - *pfVar1) / fVar2;
  pfVar1[3] = param_3;
  return;
}
