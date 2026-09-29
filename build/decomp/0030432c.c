// OoT3D decomp @ 0030432c  name=FUN_0030432c  size=36

int FUN_0030432c(int param_1)

{
  if (*(short *)(param_1 + 8) != 0x101) {
    return 0;
  }
  return param_1 + *(int *)(param_1 + 0xc);
}
