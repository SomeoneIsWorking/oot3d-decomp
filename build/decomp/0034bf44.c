// OoT3D decomp @ 0034bf44  name=FUN_0034bf44  size=24

void FUN_0034bf44(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2238) = *(uint *)(param_1 + 0x2238) | 1 << (param_2 & 0xff);
  return;
}
