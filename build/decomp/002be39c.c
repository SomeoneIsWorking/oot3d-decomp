// OoT3D decomp @ 002be39c  name=FUN_002be39c  size=136

undefined4
FUN_002be39c(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  float *in_r3;

  if ((DAT_002be424 <= (int)ABS(param_1)) &&
     (iVar1 = FUN_0031990c(param_5,param_6,DAT_002be42c,DAT_002be428,param_1), iVar1 != 0)) {
    *in_r3 = ((-param_2 * param_5 - param_3 * param_6) - param_4) / param_1;
    return 1;
  }
  return 0;
}
