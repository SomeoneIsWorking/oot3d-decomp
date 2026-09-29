// OoT3D decomp @ 0028e140  name=FUN_0028e140  size=164

void FUN_0028e140(int param_1)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x40c),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_0028e1e8,DAT_0028e1e8,DAT_0028e1e8,fVar1 * DAT_0028e1e4,param_1,4,2);
  FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(param_1 + 0x3f4));
  FUN_0035e3a4(param_1 + 0x228,1,(int)*(short *)(param_1 + 0x3f8));
  FUN_0035e3a4(param_1 + 0x228,2,0);
  FUN_0035e330(param_1 + 0x228);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  return;
}
