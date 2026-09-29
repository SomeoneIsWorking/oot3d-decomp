// OoT3D decomp @ 002b12cc  name=FUN_002b12cc  size=40

void FUN_002b12cc(int param_1)

{
  (**(code **)(param_1 + 0x1a4))();
  if (*(short *)(param_1 + 0x1b0) != 0) {
    *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + -1;
  }
  return;
}
