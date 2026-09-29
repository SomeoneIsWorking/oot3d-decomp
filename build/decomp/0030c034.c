// OoT3D decomp @ 0030c034  name=FUN_0030c034  size=60

float FUN_0030c034(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;

  if (param_2 == param_3) {
    fVar1 = (param_4 + param_5) * DAT_0030c070;
  }
  else {
    fVar1 = ((param_4 - param_5) * param_1) / (param_2 - param_3) +
            (param_2 * param_5 - param_3 * param_4) / (param_2 - param_3);
  }
  return fVar1;
}
