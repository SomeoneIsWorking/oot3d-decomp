// OoT3D decomp @ 002be430  name=FUN_002be430  size=136

undefined4
FUN_002be430(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  float *in_r3;

  if ((DAT_002be4b8 <= (int)ABS(param_3)) &&
     (iVar1 = FUN_00319718(param_5,param_6,DAT_002be4c0,DAT_002be4bc,param_3), iVar1 != 0)) {
    *in_r3 = ((-param_1 * param_5 - param_2 * param_6) - param_4) / param_3;
    return 1;
  }
  return 0;
}
