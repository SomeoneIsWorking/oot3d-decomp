// OoT3D decomp @ 0036aa8c  name=FUN_0036aa8c  size=24

void FUN_0036aa8c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x223c) = *(uint *)(param_1 + 0x223c) & ~(1 << (param_2 & 0xff));
  return;
}
