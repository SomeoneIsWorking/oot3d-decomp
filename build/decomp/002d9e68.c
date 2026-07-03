// OoT3D decomp @ 002d9e68  name=FUN_002d9e68  size=252

void FUN_002d9e68(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar1 = fVar7 - *param_4;
  fVar9 = param_2[2];
  fVar2 = fVar8 - param_4[1];
  fVar3 = fVar9 - param_4[2];
  fVar4 = DAT_002d9f64 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar3 = fVar3 * fVar4;
  fVar1 = fVar1 * fVar4;
  fVar2 = fVar2 * fVar4;
  fVar4 = param_3[1] * fVar3 - param_3[2] * fVar2;
  fVar5 = param_3[2] * fVar1 - *param_3 * fVar3;
  fVar6 = *param_3 * fVar2 - param_3[1] * fVar1;
  fVar10 = DAT_002d9f64 / SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  fVar6 = fVar6 * fVar10;
  fVar4 = fVar4 * fVar10;
  fVar5 = fVar5 * fVar10;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  fVar10 = fVar2 * fVar6 - fVar3 * fVar5;
  fVar11 = fVar3 * fVar4 - fVar1 * fVar6;
  fVar12 = fVar1 * fVar5 - fVar2 * fVar4;
  param_1[4] = fVar10;
  param_1[5] = fVar11;
  param_1[6] = fVar12;
  param_1[8] = fVar1;
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  param_1[3] = -(fVar7 * fVar4 + fVar8 * fVar5) + -(fVar9 * fVar6);
  param_1[7] = -(fVar7 * fVar10 + fVar8 * fVar11) + -(fVar9 * fVar12);
  param_1[0xb] = -(fVar7 * fVar1 + fVar8 * fVar2) + -(fVar9 * fVar3);
  return;
}

