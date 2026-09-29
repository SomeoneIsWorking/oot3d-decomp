// OoT3D decomp @ 0035f268  name=FUN_0035f268  size=172

void FUN_0035f268(float param_1,float param_2,float param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  FUN_0036e168(param_4,DAT_0035f31c,DAT_0035f318,DAT_0035f314,param_5 + 0x6c);
  param_1 = param_1 - *(float *)(param_5 + 0x28);
  param_2 = param_2 - *(float *)(param_5 + 0x2c);
  param_3 = param_3 - *(float *)(param_5 + 0x30);
  fVar1 = SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
  fVar2 = DAT_0035f320;
  fVar3 = DAT_0035f320;
  fVar4 = DAT_0035f320;
  if (fVar1 != DAT_0035f320) {
    fVar2 = param_2 / fVar1;
    fVar3 = param_3 / fVar1;
    fVar4 = param_1 / fVar1;
  }
  fVar1 = *(float *)(param_5 + 0x6c);
  *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) + fVar1 * fVar4;
  *(float *)(param_5 + 0x2c) = *(float *)(param_5 + 0x2c) + fVar1 * fVar2;
  *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) + fVar1 * fVar3;
  return;
}
