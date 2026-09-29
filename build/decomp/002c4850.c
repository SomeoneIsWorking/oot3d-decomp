// OoT3D decomp @ 002c4850  name=FUN_002c4850  size=44

undefined4 FUN_002c4850(int param_1)

{
  if (*(ushort *)(param_1 + 0x14) == DAT_002c487c) {
    param_1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_002c487c) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
