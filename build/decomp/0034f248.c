// OoT3D decomp @ 0034f248  name=FUN_0034f248  size=52

int FUN_0034f248(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_0034f27c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  return param_2 + 0x10;
}
