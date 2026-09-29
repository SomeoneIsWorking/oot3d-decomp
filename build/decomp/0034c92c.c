// OoT3D decomp @ 0034c92c  name=FUN_0034c92c  size=104

bool FUN_0034c92c(int param_1)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)(fVar3 - fVar5);
  if ((short)(int)(fVar4 - fVar2) < 0) {
    sVar1 = -sVar1;
  }
  return sVar1 < DAT_0034c994;
}
