// OoT3D decomp @ 0040da9c  name=FUN_0040da9c  size=60

undefined4 FUN_0040da9c(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_0040dad8) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0040dad8) {
    param_1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_0040dad8) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
