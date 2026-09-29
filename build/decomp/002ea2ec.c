// OoT3D decomp @ 002ea2ec  name=FUN_002ea2ec  size=56

undefined4 FUN_002ea2ec(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x2000) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2000) {
    param_1 = param_1 + 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2000) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
