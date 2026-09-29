// OoT3D decomp @ 004c6a10  name=FUN_004c6a10  size=404

void FUN_004c6a10(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar2 = DAT_004c6ba4;
  fVar1 = DAT_004c6ba4 - param_1;
  fVar8 = *param_3 * fVar1 + *param_4 * param_1;
  *param_2 = fVar8;
  fVar4 = param_3[1] * fVar1 + param_4[1] * param_1;
  param_2[1] = fVar4;
  fVar3 = param_3[2] * fVar1 + param_4[2] * param_1;
  param_2[2] = fVar3;
  fVar5 = param_3[4] * fVar1 + param_4[4] * param_1;
  param_2[4] = fVar5;
  fVar7 = param_3[5] * fVar1 + param_4[5] * param_1;
  param_2[5] = fVar7;
  fVar9 = param_3[6] * fVar1 + param_4[6] * param_1;
  param_2[6] = fVar9;
  param_2[3] = param_3[3] * fVar1 + param_4[3] * param_1;
  param_2[7] = param_3[7] * fVar1 + param_4[7] * param_1;
  param_2[0xb] = param_3[0xb] * fVar1 + param_4[0xb] * param_1;
  fVar6 = fVar4 * fVar9 - fVar3 * fVar7;
  fVar1 = fVar8 * fVar7 - fVar4 * fVar5;
  param_2[8] = fVar6;
  fVar4 = fVar3 * fVar5 - fVar8 * fVar9;
  param_2[9] = fVar4;
  param_2[10] = fVar1;
  fVar8 = *param_2;
  fVar3 = param_2[1];
  fVar5 = param_2[2];
  fVar7 = fVar2 / SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar5 * fVar5);
  *param_2 = fVar8 * fVar7;
  param_2[1] = fVar3 * fVar7;
  param_2[2] = fVar5 * fVar7;
  fVar2 = fVar2 / SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar1 = fVar1 * fVar2;
  param_2[8] = fVar6 * fVar2;
  param_2[9] = fVar4 * fVar2;
  param_2[10] = fVar1;
  fVar2 = param_2[8];
  param_2[4] = param_2[9] * param_2[2] - fVar1 * param_2[1];
  param_2[5] = fVar1 * *param_2 - fVar2 * param_2[2];
  param_2[6] = fVar2 * param_2[1] - param_2[9] * *param_2;
  return;
}
