// OoT3D decomp @ 00326084  name=FUN_00326084  size=152

void FUN_00326084(int param_1)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032611c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_00326120 / fVar1 + DAT_00326124) <= (int)(uint)*(ushort *)(param_1 + 0x22b8)) {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032611c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(uint)*(ushort *)(param_1 + 0x22b8) <= (int)(DAT_00326128 / fVar1 + DAT_00326124)) {
      FUN_0037547c(DAT_00326134,0,4,DAT_00326130,DAT_00326130,DAT_0032612c);
    }
  }
  return;
}
