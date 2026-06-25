// OoT3D decomp @ 0033ee60  name=FUN_0033ee60  size=80

float FUN_0033ee60(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
  fVar1 = DAT_0033eeb4;
  if (DAT_0033eeb0 <= (int)ABS(fVar2)) {
    fVar1 = (*param_5 * param_1 + param_2 * param_5[1] + param_3 * param_5[2] + param_4) / fVar2;
  }
  return ABS(fVar1);
}

