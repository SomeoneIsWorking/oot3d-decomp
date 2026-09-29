// OoT3D decomp @ 00355780  name=FUN_00355780  size=28

float FUN_00355780(float param_1,float param_2,float param_3,float param_4)

{
  if (param_4 <= ABS(param_1 - param_2)) {
    param_1 = param_2 + (param_1 - param_2) * param_3;
  }
  return param_1;
}
