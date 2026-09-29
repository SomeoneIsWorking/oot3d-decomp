// OoT3D decomp @ 00458758  name=FUN_00458758  size=28

void FUN_00458758(uint param_1)

{
  *(char *)(DAT_00458768 + 10) = (char)(param_1 & 0x7f);
  *(uint *)(DAT_0047d7bc + 0xc) = param_1 & 0x7f;
  return;
}
