// OoT3D decomp @ 0036c174  name=FUN_0036c174  size=228

void FUN_0036c174(float *param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = param_2[3];
  fVar2 = param_2[7];
  fVar3 = param_2[0xb];
  fVar4 = *param_3;
  fVar6 = param_3[1];
  fVar8 = param_3[2];
  fVar10 = param_3[3];
  fVar16 = *param_2;
  fVar21 = param_2[4];
  fVar17 = param_2[8];
  fVar22 = param_2[1];
  fVar5 = param_3[8];
  fVar7 = param_3[9];
  fVar9 = param_3[10];
  fVar11 = param_3[0xb];
  fVar18 = param_2[5];
  fVar12 = (float)*(undefined8 *)(param_3 + 4);
  fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_3 + 6);
  fVar15 = (float)((ulonglong)*(undefined8 *)(param_3 + 6) >> 0x20);
  fVar23 = param_2[9];
  fVar19 = param_2[2];
  fVar24 = param_2[6];
  fVar20 = param_2[10];
  *param_1 = fVar4 * fVar16 + fVar12 * fVar22 + fVar5 * fVar19;
  param_1[1] = fVar6 * fVar16 + fVar13 * fVar22 + fVar7 * fVar19;
  param_1[2] = fVar8 * fVar16 + fVar14 * fVar22 + fVar9 * fVar19;
  param_1[3] = fVar1 + fVar10 * fVar16 + fVar15 * fVar22 + fVar11 * fVar19;
  param_1[4] = fVar4 * fVar21 + fVar12 * fVar18 + fVar5 * fVar24;
  param_1[5] = fVar6 * fVar21 + fVar13 * fVar18 + fVar7 * fVar24;
  param_1[6] = fVar8 * fVar21 + fVar14 * fVar18 + fVar9 * fVar24;
  param_1[7] = fVar2 + fVar10 * fVar21 + fVar15 * fVar18 + fVar11 * fVar24;
  param_1[8] = fVar4 * fVar17 + fVar12 * fVar23 + fVar5 * fVar20;
  param_1[9] = fVar6 * fVar17 + fVar13 * fVar23 + fVar7 * fVar20;
  param_1[10] = fVar8 * fVar17 + fVar14 * fVar23 + fVar9 * fVar20;
  param_1[0xb] = fVar3 + fVar10 * fVar17 + fVar15 * fVar23 + fVar11 * fVar20;
  return;
}

