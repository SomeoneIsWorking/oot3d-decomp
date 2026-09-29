// OoT3D decomp @ 002852e4  name=FUN_002852e4  size=96

void FUN_002852e4(int param_1)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x560),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_00285348,DAT_00285348,DAT_00285348,fVar1 * DAT_00285344,param_1,4,0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  return;
}
