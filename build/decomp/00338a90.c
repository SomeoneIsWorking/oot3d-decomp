// OoT3D decomp @ 00338a90  name=FUN_00338a90  size=56

float FUN_00338a90(float *param_1,float *param_2)

{
  return SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}

