// OoT3D decomp @ 0022eff8  name=FUN_0022eff8  size=188

void FUN_0022eff8(int param_1)

{
  uint in_fpscr;
  float fVar1;

  if (*(byte *)(param_1 + 0x2aa4) == 0xff) {
    FUN_0033dd8c(DAT_0022f0bc,DAT_0022f0b8,DAT_0022f0b8,param_1 + 0x254,4,1,0);
    FUN_0035e240(param_1 + 0x254,param_1 + 0x148,DAT_0022f0c4,DAT_0022f0c0,param_1,0);
    return;
  }
  fVar1 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x2aa4),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_0022f0b8,DAT_0022f0b8,DAT_0022f0b8,fVar1 * DAT_0022f0b4,param_1,4,0);
  FUN_0035e240(param_1 + 0x254,param_1 + 0x148,DAT_0022f0c4,DAT_0022f0c0,param_1,0);
  return;
}
