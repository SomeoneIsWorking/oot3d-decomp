// OoT3D decomp @ 003348e8  name=FUN_003348e8  size=44

undefined4 FUN_003348e8(int param_1,undefined2 param_2,undefined param_3)

{
  if (-1 < *(short *)(param_1 + 0x5c32)) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x5c32) = param_2;
  *(undefined *)(param_1 + 0x5c2d) = param_3;
  return 1;
}

