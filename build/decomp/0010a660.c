// OoT3D decomp @ 0010a660  name=FUN_0010a660  size=104

void FUN_0010a660(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar2 = DAT_0010a6c8;
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    *(char *)(param_1 + 0x1c0) = *(char *)(param_1 + 0x1c0) + -1;
  }
  fVar1 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_003727f0(fVar1 * fVar2);
  *(short *)(DAT_0010a6d0 + param_1) = (short)(int)(fVar2 * DAT_0010a6cc);
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    *(undefined1 *)(param_1 + 0x1c0) = 0x4b;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0010a6d4;
  }
  return;
}
