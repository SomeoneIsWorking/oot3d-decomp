// OoT3D decomp @ 003804e0  name=FUN_003804e0  size=288

void FUN_003804e0(int param_1,int param_2)

{
  float *pfVar1;

  (**(code **)(param_1 + 0x1a4))();
  pfVar1 = (float *)(DAT_00380600 + *(short *)(param_1 + 0x1a8) * 0x30);
  *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x28) + *pfVar1;
  *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x2c) + pfVar1[1];
  *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x30) + pfVar1[2];
  *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x28) + pfVar1[3];
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x2c) + pfVar1[4];
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x30) + pfVar1[5];
  *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x28) + pfVar1[6];
  *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x2c) + pfVar1[7];
  *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x30) + pfVar1[8];
  *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x28) + pfVar1[9];
  *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x2c) + pfVar1[10];
  *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x30) + pfVar1[0xb];
  FUN_0035479c(param_1 + 0x1e8,param_1 + 0x1b8,param_1 + 0x1c4,param_1 + 0x1d0);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1e8,param_1 + 0x1dc);
  return;
}
