// OoT3D decomp @ 00367e60  name=FUN_00367e60  size=40

float FUN_00367e60(float *param_1,float *param_2)

{
  return SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}
