// OoT3D decomp @ 0036d260  name=FUN_0036d260  size=40

float FUN_0036d260(float *param_1,float *param_2)

{
  return SQRT((*param_2 - *param_1) * (*param_2 - *param_1) +
              (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]));
}
