// OoT3D decomp @ 0034e4fc  name=FUN_0034e4fc  size=104

void FUN_0034e4fc(float param_1,float param_2)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;

  FUN_003ffa08(0,param_2);
  pfVar1 = DAT_0034e564;
  if (param_2 == 0.0) {
    param_2 = 1.4013e-45;
  }
  DAT_0034e564[1] = param_1;
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1[2] = (param_1 - *pfVar1) / fVar2;
  pfVar1[3] = param_2;
  return;
}
