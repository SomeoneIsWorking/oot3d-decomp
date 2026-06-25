// OoT3D decomp @ 0030b44c  name=FUN_0030b44c  size=60

float FUN_0030b44c(float *param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  if ((int)param_1[3] < (int)param_1[2]) {
    fVar2 = (float)VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = ((fVar1 - *param_1) * fVar2) / fVar3 + *param_1;
  }
  return fVar1;
}

