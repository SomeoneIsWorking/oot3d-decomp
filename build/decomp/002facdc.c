// OoT3D decomp @ 002facdc  name=FUN_002facdc  size=60

undefined4 FUN_002facdc(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_002fad18) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_002fad18) {
    param_1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_002fad18) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 8);
}
