// OoT3D decomp @ 00344a28  name=FUN_00344a28  size=20

uint FUN_00344a28(int param_1,int param_2)

{
  return (*(uint *)(param_1 + param_2 * 0x10 + 0x40) & 4) >> 2;
}
