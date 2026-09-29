// OoT3D decomp @ 0036cf6c  name=FUN_0036cf6c  size=20

uint FUN_0036cf6c(int param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x223c) & 1 << (param_2 & 0xff);
}
