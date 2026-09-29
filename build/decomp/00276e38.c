// OoT3D decomp @ 00276e38  name=FUN_00276e38  size=48

void FUN_00276e38(int param_1)

{
  (**(code **)(param_1 + 0x1bc))();
  if (*(short *)(param_1 + 0x1c) == 3) {
    *(short *)(param_1 + 0x1ca) = *(short *)(param_1 + 0x1ca) + 1;
  }
  return;
}
