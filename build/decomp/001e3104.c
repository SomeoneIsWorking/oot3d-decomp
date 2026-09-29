// OoT3D decomp @ 001e3104  name=FUN_001e3104  size=64

undefined4 FUN_001e3104(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;

  if (*(char *)(param_4 + 0xf94) == '\0' && param_2 == 2) {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(DAT_001e3144 + param_4),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar1 * DAT_001e3148,param_3,1);
  }
  return 0;
}
