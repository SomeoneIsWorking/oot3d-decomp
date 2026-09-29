// OoT3D decomp @ 00497dac  name=FUN_00497dac  size=28

void FUN_00497dac(int param_1,short param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffef | param_2 << 4;
  return;
}
