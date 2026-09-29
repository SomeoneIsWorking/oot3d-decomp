// OoT3D decomp @ 002d399c  name=FUN_002d399c  size=148

int FUN_002d399c(int param_1)

{
  uint in_fpscr;
  int iVar1;
  float fVar2;
  int iVar3;

  iVar1 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_002d3a34;
  if (DAT_002d3a30 < iVar1) {
    fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar1 = VectorFloatToUnsigned(fVar2 * DAT_002d3a38,3);
  iVar3 = VectorUnsignedToFloat(*(float *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_002d3a34;
  if (DAT_002d3a30 < iVar3) {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  if (DAT_002d3a30 < iVar3) {
    fVar2 = (float)VectorUnsignedToFloat(fVar2,(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar3 = VectorFloatToUnsigned(fVar2 * DAT_002d3a38,3);
  return (iVar1 * 0x280 + iVar3 * 0x280 + *(int *)(param_1 + 0x2c) * 4 +
          *(int *)(param_1 + 0x30) * 4 + *(int *)(param_1 + 0x34) * 4) * 2 + 0x20;
}
