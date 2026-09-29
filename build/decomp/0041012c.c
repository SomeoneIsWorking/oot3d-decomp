// OoT3D decomp @ 0041012c  name=FUN_0041012c  size=148

void FUN_0041012c(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  if (5 < param_2) {
    param_2 = 4;
  }
  iVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x1c));
  fVar1 = DAT_004101c0;
  iVar2 = iVar2 + (param_3 + param_2 * 8 + 1) * 8;
  fVar3 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 4),(byte)(in_fpscr >> 0x15) & 3);
  *param_4 = fVar3 * DAT_004101c0;
  fVar3 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 5),(byte)(in_fpscr >> 0x15) & 3);
  param_4[1] = fVar3 * fVar1;
  fVar3 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 6),(byte)(in_fpscr >> 0x15) & 3);
  param_4[2] = fVar3 * fVar1;
  fVar3 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 7),(byte)(in_fpscr >> 0x15) & 3);
  param_4[3] = fVar3 * fVar1;
  return;
}
