// OoT3D decomp @ 002ab8b0  name=FUN_002ab8b0  size=52

void FUN_002ab8b0(int param_1)

{
  (**(code **)(param_1 + 0x1bc))();
  *(char *)(param_1 + 0x1c5) = *(char *)(param_1 + 0x1c5) + '\x01';
  if (*(short *)(param_1 + 0x1c0) != 0) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  return;
}
