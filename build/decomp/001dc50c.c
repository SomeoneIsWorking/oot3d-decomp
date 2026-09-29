// OoT3D decomp @ 001dc50c  name=FUN_001dc50c  size=220

void FUN_001dc50c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  fVar4 = DAT_001dc5f0;
  fVar1 = DAT_001dc5ec;
  fVar3 = *(float *)(param_1 + 0x248) - DAT_001dc5e8;
  *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) + 1;
  fVar4 = fVar4 + fVar3 * fVar1;
  FUN_0037322c(DAT_001dc5f4,param_1);
  FUN_0037572c(DAT_001dc5f8,param_1);
  uVar2 = DAT_001dc5fc;
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - fVar4;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar4;
  FUN_00376340(DAT_001dc600,DAT_001dc600,uVar2,param_2,param_1,7);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar4;
  *(float *)(param_1 + 600) = fVar4;
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_00376864(param_1);
  FUN_003705a0(*(undefined4 *)(param_1 + 0x250),DAT_001dc604,param_1 + 0x24c);
  return;
}
