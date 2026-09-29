// OoT3D decomp @ 003448f4  name=FUN_003448f4  size=20

uint FUN_003448f4(int param_1,int param_2)

{
  return (*(uint *)(param_1 + param_2 * 0x10 + 0x40) & 2) >> 1;
}
