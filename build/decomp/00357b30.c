// OoT3D decomp @ 00357b30  name=FUN_00357b30  size=80

float FUN_00357b30(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;

  fVar1 = SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
  if ((int)ABS(fVar1) < DAT_00357b80) {
    return DAT_00357b84;
  }
  return (*param_5 * param_1 + param_2 * param_5[1] + param_3 * param_5[2] + param_4) / fVar1;
}
