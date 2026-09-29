// OoT3D decomp @ 001b7d58  name=FUN_001b7d58  size=204

void FUN_001b7d58(int param_1,int param_2)

{
  *(short *)(param_1 + 0x764) = *(short *)(param_1 + 0x764) + 1;
  FUN_0037322c(*DAT_001b7e24,param_1);
  *(undefined4 *)(param_1 + 0x50) = DAT_001b7e28;
  FUN_0037572c(DAT_001b7e2c,param_1);
  FUN_003731e0(param_1 + 0x1a4);
  (**(code **)(param_1 + 0x708))(param_1,param_2);
  if ((*DAT_001b7e30 == 0x157) && (*(int *)(DAT_001b7e34 + 0x4e8) == 8)) {
    FUN_00376864(param_1);
    FUN_00376340(DAT_001b7e38,DAT_001b7e38,DAT_001b7e38,param_2,param_1,4);
  }
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x70c);
  return;
}
