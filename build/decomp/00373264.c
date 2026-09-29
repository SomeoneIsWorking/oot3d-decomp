// OoT3D decomp @ 00373264  name=FUN_00373264  size=24

void FUN_00373264(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}
