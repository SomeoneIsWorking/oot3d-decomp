// OoT3D decomp @ 0036ec2c  name=FUN_0036ec2c  size=20

uint FUN_0036ec2c(int param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x2240) & 1 << (param_2 & 0xff);
}
