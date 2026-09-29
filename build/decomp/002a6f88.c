// OoT3D decomp @ 002a6f88  name=FUN_002a6f88  size=128

void FUN_002a6f88(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1b4) != 0) {
    *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + -1;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  if (*(short *)(param_1 + 0x1ac) == 4) {
    FUN_0037322c(*(undefined4 *)(param_1 + 0x1a8),param_1);
  }
  if (*(short *)(param_1 + 0x1ac) != 3 && *(short *)(param_1 + 0x1ac) != 8) {
    return;
  }
  FUN_0037632c(param_1,param_1 + 0x1d8);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1d8);
  return;
}
