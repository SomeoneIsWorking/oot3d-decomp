// OoT3D decomp @ 00309484  name=FUN_00309484  size=36

void FUN_00309484(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x34) != param_1) {
    *(float *)(param_2 + 0x34) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
