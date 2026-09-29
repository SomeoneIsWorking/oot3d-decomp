// OoT3D decomp @ 003046b8  name=FUN_003046b8  size=60

undefined4 FUN_003046b8(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_003046f4) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_003046f4) {
    param_1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_003046f4) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
