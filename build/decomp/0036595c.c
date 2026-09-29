// OoT3D decomp @ 0036595c  name=FUN_0036595c  size=296

void FUN_0036595c(int param_1)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)FUN_003738a8(DAT_00365d00);
  FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + (short)(int)fVar1));
  FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + (short)(int)fVar1));
  if (0x1e < *(byte *)(param_1 + 0xa38)) {
    *(byte *)(param_1 + 0xa38) = *(byte *)(param_1 + 0xa38) - 0x10;
    *(char *)(param_1 + 0xa39) = *(char *)(param_1 + 0xa39) + -0x10;
  }
  if (*(byte *)(param_1 + 0xa3a) < 0x1e) {
    *(byte *)(param_1 + 0xa3a) = *(byte *)(param_1 + 0xa3a) + 5;
    *(char *)(param_1 + 0xa3b) = *(char *)(param_1 + 0xa3b) + '\b';
    *(char *)(param_1 + 0xa3f) = *(char *)(param_1 + 0xa3f) + '\b';
  }
  if (*(char *)(param_1 + 0xa3c) != '\0') {
    *(char *)(param_1 + 0xa3c) = *(char *)(param_1 + 0xa3c) + -0xf;
  }
  if (*(char *)(param_1 + 0xa3d) != '\0') {
    *(char *)(param_1 + 0xa3d) = *(char *)(param_1 + 0xa3d) + -1;
  }
  VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0xa3c),(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
