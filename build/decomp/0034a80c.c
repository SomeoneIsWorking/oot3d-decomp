// OoT3D decomp @ 0034a80c  name=FUN_0034a80c  size=280

undefined4 FUN_0034a80c(float *param_1,float *param_2)

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
  
  fVar1 = *param_2;
  fVar3 = param_2[1];
  fVar5 = param_2[2];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[8];
  fVar12 = param_2[9];
  fVar13 = param_2[10];
  fVar14 = (fVar1 * fVar8 * fVar13 - fVar11 * fVar8 * fVar5) +
           (fVar3 * fVar10 * fVar11 - fVar7 * fVar3 * fVar13) +
           (fVar5 * fVar7 * fVar12 - fVar1 * fVar12 * fVar10);
  if (fVar14 != -0.0 && fVar14 != 0.0) {
    fVar14 = DAT_0034a924 / fVar14;
    fVar2 = (fVar8 * fVar13 - fVar12 * fVar10) * fVar14;
    fVar4 = -((fVar3 * fVar13 - fVar12 * fVar5) * fVar14);
    fVar6 = (fVar3 * fVar10 - fVar8 * fVar5) * fVar14;
    fVar9 = -((fVar7 * fVar13 - fVar11 * fVar10) * fVar14);
    fVar13 = (fVar1 * fVar13 - fVar11 * fVar5) * fVar14;
    fVar5 = -((fVar1 * fVar10 - fVar7 * fVar5) * fVar14);
    fVar10 = (fVar7 * fVar12 - fVar11 * fVar8) * fVar14;
    fVar15 = param_2[3];
    fVar11 = -((fVar1 * fVar12 - fVar11 * fVar3) * fVar14);
    fVar14 = (fVar1 * fVar8 - fVar7 * fVar3) * fVar14;
    fVar1 = param_2[7];
    fVar3 = param_2[0xb];
    *param_1 = fVar2;
    param_1[1] = fVar4;
    param_1[2] = fVar6;
    param_1[3] = (-(fVar2 * fVar15) - fVar4 * fVar1) - fVar6 * fVar3;
    param_1[4] = fVar9;
    param_1[5] = fVar13;
    param_1[6] = fVar5;
    param_1[7] = (-(fVar9 * fVar15) - fVar13 * fVar1) - fVar5 * fVar3;
    param_1[8] = fVar10;
    param_1[9] = fVar11;
    param_1[10] = fVar14;
    param_1[0xb] = (-(fVar10 * fVar15) - fVar11 * fVar1) - fVar14 * fVar3;
    return 1;
  }
  return 0;
}

