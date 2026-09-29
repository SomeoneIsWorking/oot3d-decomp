// OoT3D decomp @ 004c5560  name=FUN_004c5560  size=92

bool FUN_004c5560(float *param_1,float *param_2)

{
  return DAT_004c55bc <
         (int)((param_1[3] + param_2[3]) -
              SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                   (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                   (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])));
}
