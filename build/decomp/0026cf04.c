// OoT3D decomp @ 0026cf04  name=FUN_0026cf04  size=216

void FUN_0026cf04(int param_1)

{
  uint in_fpscr;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;

  FUN_0035e3a4(param_1 + 0xba4,0,*(undefined2 *)(iRam0026cfdc + param_1));
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
  uStack_10 = *(undefined4 *)(iRam0026cfe0 + 0xc);
  fStack_1c = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0xb28),(byte)(in_fpscr >> 0x15) & 3);
  fStack_1c = fStack_1c * fRam0026cfe4;
  fStack_18 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0xb29),(byte)(in_fpscr >> 0x15) & 3);
  fStack_18 = fStack_18 * fRam0026cfe4;
  fStack_14 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0xb2a),(byte)(in_fpscr >> 0x15) & 3);
  fStack_14 = fStack_14 * fRam0026cfe4;
  FUN_00358778(*(undefined4 *)(param_1 + 0x1cc),3,4,&fStack_1c,1);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,uRam0026cfe8,param_1,0);
  FUN_0035e330(param_1 + 0xba4);
  return;
}
