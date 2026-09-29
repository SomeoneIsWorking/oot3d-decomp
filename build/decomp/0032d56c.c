// OoT3D decomp @ 0032d56c  name=FUN_0032d56c  size=64

float FUN_0032d56c(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;

  fVar1 = param_5 * (DAT_0032d5ac / param_6);
  return param_1 + (param_1 - param_3) * (fVar1 * DAT_0032d5b0 - DAT_0032d5b4) * fVar1 * fVar1 +
         param_5 * (fVar1 - DAT_0032d5ac) * ((fVar1 - DAT_0032d5ac) * param_2 + fVar1 * param_4);
}
