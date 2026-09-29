// OoT3D decomp @ 002ea330  name=FUN_002ea330  size=60

undefined4 FUN_002ea330(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_002ea36c) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_002ea36c) {
    param_1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_002ea36c) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
