// OoT3D decomp @ 004796f8  name=FUN_004796f8  size=68

float FUN_004796f8(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  if ((*(uint *)(param_1 + 0x1710) & 0x800000) == 0) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00479740 + 0x6e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar1 = DAT_00479744;
    if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
      fVar2 = fVar2 * DAT_00479744;
      fVar1 = DAT_00479748;
    }
    return fVar2 * fVar1;
  }
  return DAT_0047973c;
}
