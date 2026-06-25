// OoT3D decomp @ 00434ed4  name=FUN_00434ed4  size=76

float FUN_00434ed4(float param_1)

{
  if (((int)(DAT_00434f20 - ((uint)SQRT(param_1) & 0x7fffffff)) < 0) &&
     (-1 < (int)(DAT_00434f20 - ((uint)param_1 & 0x7fffffff)))) {
    FUN_002eb01c(1);
  }
  return SQRT(param_1);
}

