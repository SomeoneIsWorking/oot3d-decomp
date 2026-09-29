// OoT3D decomp @ 0036ec14  name=FUN_0036ec14  size=24

void FUN_0036ec14(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x223c) = *(uint *)(param_1 + 0x223c) | 1 << (param_2 & 0xff);
  return;
}
