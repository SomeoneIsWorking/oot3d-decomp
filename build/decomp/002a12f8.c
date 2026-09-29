// OoT3D decomp @ 002a12f8  name=FUN_002a12f8  size=140

void FUN_002a12f8(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  FUN_0032ae1c(param_1,param_2,5);
  FUN_0032a998(param_1,5);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002a1388 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_002a138c / fVar1 + DAT_002a1390) == (uint)*(ushort *)(DAT_002a1384 + param_2)) {
    FUN_0037547c(DAT_002a139c,param_1 + 0x28,4,DAT_002a1398,DAT_002a1398,DAT_002a1394);
  }
  return;
}
