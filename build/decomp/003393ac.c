// OoT3D decomp @ 003393ac  name=FUN_003393ac  size=64

void FUN_003393ac(float *param_1,float *param_2,float *param_3)

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
  float fVar13;
  float fVar14;

  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar7 = param_3[7];
  fVar8 = param_3[8];
  fVar9 = param_3[9];
  fVar10 = param_3[10];
  fVar11 = param_3[0xb];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  *param_1 = *param_3 * fVar12;
  param_1[1] = fVar1 * fVar12;
  param_1[2] = fVar2 * fVar12;
  param_1[3] = fVar3 * fVar12;
  param_1[4] = fVar4 * fVar13;
  param_1[5] = fVar5 * fVar13;
  param_1[6] = fVar6 * fVar13;
  param_1[7] = fVar7 * fVar13;
  param_1[8] = fVar8 * fVar14;
  param_1[9] = fVar9 * fVar14;
  param_1[10] = fVar10 * fVar14;
  param_1[0xb] = fVar11 * fVar14;
  return;
}
