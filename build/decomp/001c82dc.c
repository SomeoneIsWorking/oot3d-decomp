// OoT3D decomp @ 001c82dc  name=FUN_001c82dc  size=68

void FUN_001c82dc(int param_1)

{
  FUN_0036e734(param_1 + 0x208,*(undefined4 *)(DAT_001c8320 + 0x24));
  *(undefined2 *)(DAT_001c8324 + param_1) = 3;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) | 1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001c8328;
  return;
}
