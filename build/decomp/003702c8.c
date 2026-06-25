// OoT3D decomp @ 003702c8  name=FUN_003702c8  size=128

int FUN_003702c8(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_003759d0();
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (param_2 < 1) {
    fVar2 = fVar2 * DAT_00370348 * DAT_0037034c - DAT_0037034c;
  }
  else {
    fVar2 = DAT_0037034c + fVar2 * DAT_00370348 * DAT_0037034c;
  }
  fVar3 = (float)VectorSignedToFloat((int)fVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  if (param_1 < 1) {
    fVar2 = fVar2 * DAT_00370348 * DAT_0037034c - DAT_0037034c;
  }
  else {
    fVar2 = DAT_0037034c + fVar2 * DAT_00370348 * DAT_0037034c;
  }
  return (int)(short)((short)(int)fVar2 + (short)(int)(fVar1 * fVar3));
}

