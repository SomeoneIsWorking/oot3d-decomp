// OoT3D decomp @ 00375b70  name=FUN_00375b70  size=72

void FUN_00375b70(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00375bb8 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(char *)(DAT_00375bc4 + param_1) = (char)(int)(DAT_00375bbc / fVar1 + DAT_00375bc0);
  FUN_00375c44(param_1,param_2 + 0x28,0x14,DAT_00375bc8);
  return;
}
