// OoT3D decomp @ 0035ae08  name=FUN_0035ae08  size=28

void FUN_0035ae08(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefe7ffff | 0x200000;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}
