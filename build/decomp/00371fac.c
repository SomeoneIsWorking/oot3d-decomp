// OoT3D decomp @ 00371fac  name=FUN_00371fac  size=196

void FUN_00371fac(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = SQRT(*param_1 * *param_1 + param_1[4] * param_1[4] + param_1[8] * param_1[8]);
  *param_1 = *param_2 * fVar1;
  param_1[4] = param_2[4] * fVar1;
  param_1[8] = param_2[8] * fVar1;
  fVar1 = SQRT(param_1[1] * param_1[1] + param_1[5] * param_1[5] + param_1[9] * param_1[9]);
  param_1[1] = param_2[1] * fVar1;
  param_1[5] = param_2[5] * fVar1;
  param_1[9] = param_2[9] * fVar1;
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[6] * param_1[6] + param_1[10] * param_1[10]);
  param_1[2] = param_2[2] * fVar1;
  param_1[6] = param_2[6] * fVar1;
  param_1[10] = param_2[10] * fVar1;
  return;
}

