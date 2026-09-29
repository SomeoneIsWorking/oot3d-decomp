// OoT3D decomp @ 004710d8  name=FUN_004710d8  size=20

void FUN_004710d8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  *(byte *)(param_2 + 0x1d8) = *(byte *)(param_2 + 0x1d8) | 4;
  return;
}
