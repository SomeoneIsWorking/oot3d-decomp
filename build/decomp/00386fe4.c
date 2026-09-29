// OoT3D decomp @ 00386fe4  name=FUN_00386fe4  size=144

void FUN_00386fe4(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  FUN_003731e0(param_1 + 0x1a4);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00387078 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0038707c / fVar1 + DAT_00387080) == (uint)*(ushort *)(DAT_00387074 + param_2)) {
    FUN_003674e4(7);
  }
  FUN_00376340(DAT_00387088,DAT_00387084,DAT_00387084,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_00326528(param_1,param_2);
  return;
}
