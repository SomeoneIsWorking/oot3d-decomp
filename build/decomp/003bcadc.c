// OoT3D decomp @ 003bcadc  name=FUN_003bcadc  size=156

void FUN_003bcadc(int param_1)

{
  uint in_fpscr;
  float fVar1;

  FUN_0036e168(DAT_003bcd4c,DAT_003bcd54,DAT_003bcd50,DAT_003bcd4c,param_1 + 0x6c);
  FUN_00372aa8(param_1 + 0xbc,DAT_003bcd58,0x160);
  fVar1 = *(float *)(param_1 + 0x54) - DAT_003bcd5c;
  if ((int)fVar1 < DAT_003bcd60) {
    fVar1 = DAT_003bcd64;
  }
  FUN_0037572c(fVar1,param_1);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003bcd68 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - fVar1 * DAT_003bcd6c * DAT_003bcd70;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
