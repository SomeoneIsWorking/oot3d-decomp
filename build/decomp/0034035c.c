// OoT3D decomp @ 0034035c  name=FUN_0034035c  size=156

void FUN_0034035c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003403fc + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003356d4(param_1,2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (int)(short)(int)((fVar1 * DAT_003403f8) / fVar2 + DAT_00340400),0);
  return;
}
