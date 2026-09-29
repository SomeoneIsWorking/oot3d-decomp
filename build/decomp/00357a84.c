// OoT3D decomp @ 00357a84  name=FUN_00357a84  size=156

void FUN_00357a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00357b24 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003356d4(param_1,5,param_2,param_3,param_4,DAT_00357b2c + -4,DAT_00357b2c,param_5,param_6,
               (int)(short)(int)((fVar1 * DAT_00357b20) / fVar2 + DAT_00357b28),0);
  return;
}
