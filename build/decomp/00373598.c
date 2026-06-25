// OoT3D decomp @ 00373598  name=FUN_00373598  size=20

void FUN_00373598(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  *param_3 = param_1[3] + *param_1 * fVar9 + param_1[1] * fVar10 + param_1[2] * fVar11;
  param_3[1] = fVar4 + fVar1 * fVar9 + fVar2 * fVar10 + fVar3 * fVar11;
  param_3[2] = fVar8 + fVar5 * fVar9 + fVar6 * fVar10 + fVar7 * fVar11;
  return;
}

