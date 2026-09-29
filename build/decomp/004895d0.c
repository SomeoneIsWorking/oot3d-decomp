// OoT3D decomp @ 004895d0  name=FUN_004895d0  size=20

int FUN_004895d0(int param_1,int param_2)

{
  return ((int)*(short *)(param_1 + param_2 * 0x80 + 4) >> 0x1f) + 1;
}
