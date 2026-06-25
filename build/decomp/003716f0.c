// OoT3D decomp @ 003716f0  name=FUN_003716f0  size=60

undefined4 FUN_003716f0(int param_1,undefined2 param_2,undefined param_3,undefined param_4)

{
  if (-1 < *(short *)(param_1 + 0x5c32)) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x5c32) = param_2;
  *(undefined *)(param_1 + 0x5c2d) = param_3;
  *(undefined *)(param_1 + 0x5c76) = param_4;
  return 1;
}

