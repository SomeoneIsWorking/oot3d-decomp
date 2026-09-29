// OoT3D decomp @ 00345420  name=FUN_00345420  size=152

void FUN_00345420(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  if (*(short *)(param_1 + 0x5dc) == 0) {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00345564 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(param_1 + 0x616) < (int)(DAT_00345568 / fVar1 + DAT_0034556c)) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0(*(undefined4 *)(param_2 + 0x1cc),*(undefined4 *)(param_2 + 0x1c0));
    }
  }
  return;
}
