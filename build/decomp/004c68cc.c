// OoT3D decomp @ 004c68cc  name=FUN_004c68cc  size=148

void FUN_004c68cc(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar3 = *(int *)(param_1 + 0x120);
  if (5 < iVar3) {
    iVar3 = 4;
  }
  iVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x1c));
  fVar1 = DAT_004c6960;
  iVar2 = iVar2 + (param_2 + iVar3 * 8 + 1) * 8;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 4),(byte)(in_fpscr >> 0x15) & 3);
  *param_3 = fVar4 * DAT_004c6960;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 5),(byte)(in_fpscr >> 0x15) & 3);
  param_3[1] = fVar4 * fVar1;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 6),(byte)(in_fpscr >> 0x15) & 3);
  param_3[2] = fVar4 * fVar1;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 7),(byte)(in_fpscr >> 0x15) & 3);
  param_3[3] = fVar4 * fVar1;
  return;
}

