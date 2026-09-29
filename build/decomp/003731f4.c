// OoT3D decomp @ 003731f4  name=FUN_003731f4  size=56

void FUN_003731f4(int param_1)

{
  if (*(short *)(param_1 + 0x1b0) != 0) {
    *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + -1;
  }
  (**(code **)(param_1 + 0x1a4))(param_1);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x38);
  return;
}
