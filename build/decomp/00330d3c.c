// OoT3D decomp @ 00330d3c  name=FUN_00330d3c  size=32

float FUN_00330d3c(float param_1,float param_2,float param_3,float param_4)

{
  if (param_4 <= ABS(param_1 - param_2)) {
    param_2 = param_2 + (param_1 - param_2) * param_3;
  }
  return param_2;
}
