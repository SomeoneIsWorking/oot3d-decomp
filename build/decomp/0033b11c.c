// OoT3D decomp @ 0033b11c  name=FUN_0033b11c  size=168

void FUN_0033b11c(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar15;
  float fVar16;

  fVar3 = DAT_0033b1c4;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_1[5];
  fVar9 = param_1[4];
  fVar10 = param_1[6];
  fVar8 = param_1[8];
  fVar11 = param_1[9];
  fVar12 = param_1[0xd];
  fVar1 = param_1[7] * DAT_0033b1c4;
  fVar13 = param_1[10];
  fVar14 = param_1[0xc];
  fVar15 = param_1[0xe];
  fVar2 = param_1[0xb] * DAT_0033b1c4;
  fVar16 = param_1[0xf];
  *param_3 = *param_1 * fVar4 + param_1[1] * fVar5 + param_1[2] * fVar6 + param_1[3] * DAT_0033b1c4;
  param_3[1] = fVar9 * fVar4 + fVar7 * fVar5 + fVar10 * fVar6 + fVar1;
  param_3[2] = -(fVar8 * fVar4 + fVar11 * fVar5 + fVar13 * fVar6 + fVar2);
  *param_4 = fVar14 * fVar4 + fVar12 * fVar5 + fVar15 * fVar6 + fVar16 * fVar3;
  return;
}
