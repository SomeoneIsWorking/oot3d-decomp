// OoT3D decomp @ 0027f34c  name=FUN_0027f34c  size=156

void FUN_0027f34c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027f3ec + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003356d4(param_1,4,param_2,param_3,param_4,DAT_0027f3f4 + -4,DAT_0027f3f4,param_5,param_6,
               (int)(short)(int)((fVar1 * DAT_0027f3e8) / fVar2 + DAT_0027f3f0),0);
  return;
}
