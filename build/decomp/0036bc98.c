// OoT3D decomp @ 0036bc98  name=FUN_0036bc98  size=28

bool FUN_0036bc98(int param_1)

{
  bool bVar1;

  bVar1 = (*(uint *)(param_1 + 4) & 0x100) != 0;
  if (bVar1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
  }
  return bVar1;
}
