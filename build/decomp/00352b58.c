// OoT3D decomp @ 00352b58  name=FUN_00352b58  size=104

void FUN_00352b58(void)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352c00 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352c00 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8((int)(short)(int)(DAT_00352c0c + (DAT_00352c04 / fVar2) * DAT_00352c10),
               (int)(short)(int)(DAT_00352c0c + (DAT_00352c04 / fVar1) * DAT_00352c08));
}
