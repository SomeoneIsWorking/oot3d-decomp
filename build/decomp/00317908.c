// OoT3D decomp @ 00317908  name=FUN_00317908  size=104

void FUN_00317908(void)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003179b0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003179b0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8((int)(short)(int)(DAT_003179bc + (DAT_003179b4 / fVar2) * DAT_003179c0),
               (int)(short)(int)(DAT_003179bc + (DAT_003179b4 / fVar1) * DAT_003179b8));
}
