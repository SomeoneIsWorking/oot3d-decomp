// OoT3D decomp @ 002907a4  name=FUN_002907a4  size=56

void FUN_002907a4(void)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00290908 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(fVar1 * DAT_0029090c);
}
