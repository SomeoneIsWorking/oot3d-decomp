// OoT3D decomp @ 00304308  name=FUN_00304308  size=36

int FUN_00304308(int param_1)

{
  if (*(short *)(param_1 + 0x10) != 0x101) {
    return 0;
  }
  return param_1 + *(int *)(param_1 + 0x14);
}
