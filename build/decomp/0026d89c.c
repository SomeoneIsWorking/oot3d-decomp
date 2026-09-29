// OoT3D decomp @ 0026d89c  name=FUN_0026d89c  size=136

void FUN_0026d89c(int param_1)

{
  uint in_fpscr;
  float fVar1;

  FUN_0035e3a4(param_1 + 0xba0,0,(int)*(short *)(param_1 + 0xb80));
  fVar1 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0xb90),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_0026d928,DAT_0026d928,DAT_0026d928,fVar1 * DAT_0026d924,param_1,4,2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  FUN_0035e330(param_1 + 0xba0);
  return;
}
