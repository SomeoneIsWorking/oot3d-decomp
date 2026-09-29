// OoT3D decomp @ 00352ce8  name=FUN_00352ce8  size=104

void FUN_00352ce8(void)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352d9c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352d9c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8((int)(short)(int)(DAT_00352da8 + (DAT_00352da0 / fVar2) * DAT_00352dac),
               (int)(short)(int)(DAT_00352da8 + (DAT_00352da0 / fVar1) * DAT_00352da4));
}
