// OoT3D decomp @ 0034a928  name=FUN_0034a928  size=28

void FUN_0034a928(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefcfffff | 0x80000;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

