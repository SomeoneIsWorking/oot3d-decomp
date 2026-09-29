// OoT3D decomp @ 00353524  name=FUN_00353524  size=24

void FUN_00353524(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2240) = *(uint *)(param_1 + 0x2240) | 1 << (param_2 & 0xff);
  return;
}
