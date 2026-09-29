// OoT3D decomp @ 003095dc  name=FUN_003095dc  size=36

void FUN_003095dc(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x28) != param_1) {
    *(float *)(param_2 + 0x28) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 4;
  }
  return;
}
