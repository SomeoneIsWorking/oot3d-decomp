// OoT3D decomp @ 00249014  name=FUN_00249014  size=40

void FUN_00249014(int param_1)

{
  (**(code **)(param_1 + 0x1a4))();
  if (*(short *)(param_1 + 0x1be) != 0) {
    *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + -1;
  }
  return;
}
