// OoT3D decomp @ 001d1794  name=FUN_001d1794  size=68

undefined4 FUN_001d1794(undefined4 param_1,int param_2)

{
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0x7d;
  *(undefined4 *)(param_2 + 8) = 0;
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) & 0x7d;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined2 *)(param_2 + 0x2a) = 0;
  *(undefined2 *)(param_2 + 0x28) = 0;
  *(undefined2 *)(param_2 + 0x26) = 0;
  return 1;
}

