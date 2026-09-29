// OoT3D decomp @ 0016b31c  name=FUN_0016b31c  size=192

void FUN_0016b31c(int param_1,int param_2)

{
  (**(code **)(param_1 + 0x1a8))();
  FUN_00376864(param_1);
  if (*(float *)(param_1 + 0x70) != DAT_0016b3dc) {
    if (*(short *)(param_1 + 0x1c) == 0xb) {
      FUN_00376340(DAT_0016b3e0,DAT_0016b3e8,param_2,param_1,0x1d);
    }
    else {
      FUN_00376340(DAT_0016b3e0,DAT_0016b3e4,param_2,param_1,0x1d);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x208);
  if (*(short *)(param_1 + 0x1c) == 9 || *(short *)(param_1 + 0x1c) == 10) {
    FUN_0037632c(param_1,param_1 + 0x1b0);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
    return;
  }
  return;
}
