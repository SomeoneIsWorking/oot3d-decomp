// OoT3D decomp @ 002f13d0  name=FUN_002f13d0  size=80

void FUN_002f13d0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_002e5d60(DAT_002f1420);
  if ((*(ushort *)(param_1 + -0x2a) & 1) == 0) {
    FUN_002e5bb4(param_1);
  }
  else if (*(short *)(param_1 + -0x2c) != 0) {
    *(short *)(param_1 + -0x2c) = *(short *)(param_1 + -0x2c) + -1;
  }
  FUN_002e5cfc(DAT_002f1420);
  return;
}
