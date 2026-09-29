// OoT3D decomp @ 004c5510  name=FUN_004c5510  size=72

float FUN_004c5510(int param_1)

{
  char cVar1;
  uint in_fpscr;
  float fVar2;

  cVar1 = *(char *)(param_1 + 0xe74);
  fVar2 = *(float *)(param_1 + 0xe78);
  if (((((cVar1 == '\a' || cVar1 == '\x05') || cVar1 == '\x06') || cVar1 == '\b') || cVar1 == '\x04'
      ) || cVar1 == '\t') {
    fVar2 = (float)VectorSignedToFloat((int)(DAT_004c555c + fVar2 * DAT_004c5558),
                                       (byte)(in_fpscr >> 0x15) & 3);
  }
  return fVar2;
}
