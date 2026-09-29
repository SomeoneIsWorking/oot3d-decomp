// OoT3D decomp @ 0040da5c  name=FUN_0040da5c  size=60

undefined4 FUN_0040da5c(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_0040da98) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0040da98) {
    param_1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_0040da98) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
