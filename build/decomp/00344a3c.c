// OoT3D decomp @ 00344a3c  name=FUN_00344a3c  size=16

uint FUN_00344a3c(int param_1,int param_2)

{
  return *(uint *)(param_1 + param_2 * 0x10 + 0x40) & 1;
}
