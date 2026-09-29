// OoT3D decomp @ 003095b8  name=FUN_003095b8  size=36

void FUN_003095b8(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x38) != param_1) {
    *(float *)(param_2 + 0x38) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x10;
  }
  return;
}
