// OoT3D decomp @ 0036bcb4  name=FUN_0036bcb4  size=20

uint FUN_0036bcb4(int param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x2238) & 1 << (param_2 & 0xff);
}
