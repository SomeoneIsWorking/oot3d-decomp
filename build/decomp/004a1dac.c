// OoT3D decomp @ 004a1dac  name=FUN_004a1dac  size=24

int FUN_004a1dac(int *param_1,int param_2)

{
  return param_1[6] * *(int *)(*param_1 + 8) + param_2 + ((uint)param_1[6] >> 1);
}
