// OoT3D decomp @ 002a13a0  name=FUN_002a13a0  size=140

void FUN_002a13a0(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  FUN_0032ae1c(param_1,param_2,6);
  FUN_0032a998(param_1,6);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002a1430 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_002a1434 / fVar1 + DAT_002a1438) == (uint)*(ushort *)(DAT_002a142c + param_2)) {
    FUN_0037547c(DAT_002a1444,param_1 + 0x28,4,DAT_002a1440,DAT_002a1440,DAT_002a143c);
  }
  return;
}
