// OoT3D decomp @ 00309600  name=FUN_00309600  size=52

void FUN_00309600(float param_1,int param_2)

{
  if (param_1 < DAT_00309634) {
    param_1 = DAT_00309634;
  }
  if (*(float *)(param_2 + 0x24) != param_1) {
    *(float *)(param_2 + 0x24) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x40;
  }
  return;
}
