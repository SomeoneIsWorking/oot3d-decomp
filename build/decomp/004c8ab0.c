// OoT3D decomp @ 004c8ab0  name=FUN_004c8ab0  size=212

void FUN_004c8ab0(float param_1,float param_2,float param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)FUN_002cfca0(param_5);
  fVar4 = (float)FUN_00338f60(param_5);
  fVar1 = DAT_004c8b84;
  *param_4 = param_1 * param_1 + (DAT_004c8b84 - param_1 * param_1) * fVar4;
  fVar5 = fVar1 - fVar4;
  fVar7 = fVar5 * param_1 * param_2;
  fVar6 = fVar5 * param_1 * param_3;
  param_4[4] = fVar7 + param_3 * fVar3;
  param_4[8] = fVar6 - param_2 * fVar3;
  fVar2 = DAT_004c8b88;
  param_4[0xc] = DAT_004c8b88;
  param_4[1] = fVar7 - param_3 * fVar3;
  param_4[5] = param_2 * param_2 + (fVar1 - param_2 * param_2) * fVar4;
  fVar5 = fVar5 * param_2 * param_3;
  param_4[9] = fVar5 + param_1 * fVar3;
  param_4[0xd] = fVar2;
  param_4[2] = fVar6 + param_2 * fVar3;
  param_4[6] = fVar5 - param_1 * fVar3;
  param_4[10] = param_3 * param_3 + (fVar1 - param_3 * param_3) * fVar4;
  param_4[0xe] = fVar2;
  return;
}

