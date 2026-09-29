// OoT3D decomp @ 004c2c18  name=FUN_004c2c18  size=128

void FUN_004c2c18(float *param_1,float *param_2,float *param_3)

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

  fVar2 = DAT_004c2c98;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[9];
  fVar9 = param_1[6];
  fVar10 = param_1[8];
  fVar11 = param_1[10];
  fVar1 = param_1[7] * DAT_004c2c98;
  fVar12 = param_1[0xb];
  *param_3 = *param_1 * fVar3 + param_1[1] * fVar4 + param_1[2] * fVar5 + param_1[3] * DAT_004c2c98;
  param_3[1] = fVar6 * fVar3 + fVar7 * fVar4 + fVar9 * fVar5 + fVar1;
  param_3[2] = -(fVar10 * fVar3 + fVar8 * fVar4 + fVar11 * fVar5) + -(fVar12 * fVar2);
  return;
}
