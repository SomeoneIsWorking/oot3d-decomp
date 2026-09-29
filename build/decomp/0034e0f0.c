// OoT3D decomp @ 0034e0f0  name=FUN_0034e0f0  size=52

void FUN_0034e0f0(float *param_1,float *param_2,float *param_3)

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

  fVar1 = param_2[3];
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  *param_1 = *param_2 * fVar7 + param_2[1] * fVar8 + param_2[2] * fVar9;
  param_1[1] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  param_1[2] = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
  return;
}
