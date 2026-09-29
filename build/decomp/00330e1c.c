// OoT3D decomp @ 00330e1c  name=FUN_00330e1c  size=184

void FUN_00330e1c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  fVar1 = param_1[3] * param_1[3] + param_1[4] * param_1[4] + param_1[5] * param_1[5];
  if ((int)ABS(fVar1) < DAT_00330ed4) {
    FUN_0036df4c(param_3,param_2);
  }
  fVar1 = ((*param_2 - *param_1) * param_1[3] + (param_2[1] - param_1[1]) * param_1[4] +
          (param_2[2] - param_1[2]) * param_1[5]) / fVar1;
  *param_3 = *param_1 + param_1[3] * fVar1;
  param_3[1] = param_1[1] + param_1[4] * fVar1;
  param_3[2] = param_1[2] + param_1[5] * fVar1;
  return;
}
