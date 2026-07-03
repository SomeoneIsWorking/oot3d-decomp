// OoT3D decomp @ 002dcef4  name=FUN_002dcef4  size=372

/* WARNING: Removing unreachable block (ram,0x002dcfb4) */

void FUN_002dcef4(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  fVar7 = param_3[3];
  fVar8 = param_3[4];
  fVar9 = param_3[5];
  fVar10 = *param_2;
  fVar15 = param_2[3];
  fVar11 = param_2[6];
  fVar16 = param_2[1];
  fVar12 = param_2[4];
  fVar2 = param_3[6];
  fVar4 = param_3[7];
  fVar6 = param_3[8];
  fVar17 = param_2[7];
  fVar13 = param_2[2];
  fVar18 = param_2[5];
  fVar14 = param_2[8];
  *param_1 = fVar1 * fVar10 + fVar7 * fVar16 + fVar2 * fVar13;
  param_1[1] = fVar3 * fVar10 + fVar8 * fVar16 + fVar4 * fVar13;
  param_1[2] = fVar5 * fVar10 + fVar9 * fVar16 + fVar6 * fVar13;
  param_1[3] = fVar1 * fVar15 + fVar7 * fVar12 + fVar2 * fVar18;
  param_1[4] = fVar3 * fVar15 + fVar8 * fVar12 + fVar4 * fVar18;
  param_1[5] = fVar5 * fVar15 + fVar9 * fVar12 + fVar6 * fVar18;
  param_1[6] = fVar1 * fVar11 + fVar7 * fVar17 + fVar2 * fVar14;
  param_1[7] = fVar3 * fVar11 + fVar8 * fVar17 + fVar4 * fVar14;
  param_1[8] = fVar5 * fVar11 + fVar9 * fVar17 + fVar6 * fVar14;
  return;
}

