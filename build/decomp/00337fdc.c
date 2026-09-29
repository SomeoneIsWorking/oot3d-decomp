// OoT3D decomp @ 00337fdc  name=FUN_00337fdc  size=256

int FUN_00337fdc(int param_1,int param_2,short param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = -param_2;
  }
  if (0 < param_4) {
    fVar3 = (float)FUN_00338f60(param_4);
    fVar4 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    param_4 = (int)(short)(int)(fVar3 * fVar4);
  }
  fVar3 = DAT_003380dc;
  param_3 = param_3 - (short)param_4;
  iVar2 = (int)param_3;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < (short)iVar1) {
    fVar4 = (DAT_003380dc / *(float *)(param_1 + 0x10c)) * DAT_003380e0;
  }
  else {
    fVar5 = (float)VectorSignedToFloat((int)(short)iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003380e4 + 0x19e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)FUN_0032dab4(DAT_003380e8,DAT_003380dc - (DAT_003380dc / fVar4) * fVar5);
    fVar4 = (fVar3 / *(float *)(param_1 + 0x10c)) * fVar4;
  }
  iVar2 = (int)(short)(param_3 - (short)param_2);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = -iVar2;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar1) {
    param_3 = (short)param_2 + (short)(int)(DAT_003380ec + fVar3 * fVar4);
  }
  return (int)param_3;
}
