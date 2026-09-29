// OoT3D decomp @ 0028f108  name=FUN_0028f108  size=128

void FUN_0028f108(int param_1)

{
  uint in_fpscr;
  float fVar1;

  FUN_0035e3a4(param_1 + 0x9e0,0,(int)*(short *)(param_1 + 0xbb0));
  FUN_0035e330(param_1 + 0x9e0);
  fVar1 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0xbc0),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_0028f18c,DAT_0028f18c,DAT_0028f18c,fVar1 * DAT_0028f188,param_1,4,2);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  return;
}
