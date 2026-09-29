// OoT3D decomp @ 0040da24  name=FUN_0040da24  size=56

undefined4 FUN_0040da24(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x4000) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x4000) {
    param_1 = param_1 + 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x4000) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 8);
}
