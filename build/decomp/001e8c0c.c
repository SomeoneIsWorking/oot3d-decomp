// OoT3D decomp @ 001e8c0c  name=FUN_001e8c0c  size=224

void FUN_001e8c0c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  uint in_fpscr;
  float fVar4;

  iVar2 = FUN_0037571c(param_2);
  psVar3 = (short *)0x0;
  if (iVar2 != 0) {
    psVar3 = *(short **)(DAT_001e8cec + param_2);
  }
  if (((iVar2 != 0 && psVar3 != (short *)0x0) && (*psVar3 == 2)) &&
     (bVar1 = *(char *)(param_1 + 0x1c2) + 1, *(byte *)(param_1 + 0x1c2) = bVar1, 0xf < bVar1)) {
    FUN_00374428(param_1);
  }
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001e8cf0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (((int)(DAT_001e8cf4 / fVar4 + DAT_001e8cf8) == (uint)*(ushort *)(DAT_001e8cfc + param_2)) ||
     (fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001e8cf0 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3),
     (int)(DAT_001e8d00 / fVar4 + DAT_001e8cf8) == (uint)*(ushort *)(DAT_001e8cfc + param_2))) {
    FUN_0037547c(DAT_001e8d0c,0,4,DAT_001e8d08,DAT_001e8d08,DAT_001e8d04);
  }
  return;
}
