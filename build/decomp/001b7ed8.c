// OoT3D decomp @ 001b7ed8  name=FUN_001b7ed8  size=208

void FUN_001b7ed8(int param_1,int param_2)

{
  float fVar1;

  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x30);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x56c);
  FUN_00370734(param_1 + 0x1a4);
  FUN_00376340(DAT_001b7fa8,DAT_001b7fa8,DAT_001b7fa8,param_2,param_1,4);
  (**(code **)(param_1 + 0x568))(param_1,param_2);
  FUN_00342714(*(float *)(param_1 + 0x5ac) + DAT_001b7fac,param_2,param_1,param_1 + 0x5c4,
               DAT_001b7fb4,DAT_001b7fb0);
  fVar1 = DAT_001b7fb8;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar1;
  return;
}
