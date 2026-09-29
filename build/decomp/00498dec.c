// OoT3D decomp @ 00498dec  name=FUN_00498dec  size=40

undefined4 FUN_00498dec(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
