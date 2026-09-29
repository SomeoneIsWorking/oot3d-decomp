// OoT3D decomp @ 001b9844  name=FUN_001b9844  size=252

void FUN_001b9844(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  float local_24;
  float local_20;
  float local_1c;

  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001b9940,param_1,0);
  if (*(short *)(param_1 + 0x298) != 0) {
    uVar2 = (uint)(short)(*(short *)(param_1 + 0x298) + -1);
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    uVar1 = DAT_001b9944;
    if ((uVar2 & 1) == 0) {
      local_24 = (float)FUN_003738a8(DAT_001b9944);
      pfVar3 = (float *)(DAT_001b9948 + (uVar2 & 3) * 0xc);
      local_24 = local_24 + *(float *)(param_1 + 0x28) + *pfVar3;
      local_20 = (float)FUN_003738a8(uVar1);
      local_20 = local_20 + *(float *)(param_1 + 0x2c) + pfVar3[1];
      local_1c = (float)FUN_003738a8(uVar1);
      local_1c = local_1c + *(float *)(param_1 + 0x30) + pfVar3[2];
      FUN_003580ec(param_2,param_1,&local_24,100,0,0,0xffffffff,1);
    }
  }
  return;
}
