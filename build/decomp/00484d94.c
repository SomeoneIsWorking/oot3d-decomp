// OoT3D decomp @ 00484d94  name=FUN_00484d94  size=112

void FUN_00484d94(undefined4 param_1,undefined4 param_2,float *param_3,float param_4)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  FUN_00368cc0();
  fVar2 = DAT_00484e08;
  fVar1 = (float)VectorSignedToFloat((int)(short)(int)(DAT_00484e04 +
                                                      *param_3 * param_4 * DAT_00484e04),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *param_3 = fVar1;
  fVar2 = (float)VectorSignedToFloat((int)(short)(int)(DAT_00484e0c + param_3[1] * param_4 * fVar2),
                                     (byte)(in_fpscr >> 0x15) & 3);
  param_3[1] = fVar2;
  return;
}
