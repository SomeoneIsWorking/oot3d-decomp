// OoT3D decomp @ 003094a8  name=FUN_003094a8  size=36

void FUN_003094a8(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x30) != param_1) {
    *(float *)(param_2 + 0x30) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
