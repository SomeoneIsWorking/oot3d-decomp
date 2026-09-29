// OoT3D decomp @ 002311e0  name=FUN_002311e0  size=364

undefined4
FUN_002311e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

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

  fVar12 = *param_1;
  fVar9 = *param_2 - fVar12;
  fVar8 = param_2[1] - param_1[1];
  fVar10 = param_2[2] - param_1[2];
  fVar2 = param_4[2] - param_3[2];
  fVar3 = *param_4 - *param_3;
  fVar1 = param_4[1] - param_3[1];
  fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  if (DAT_0023134c <= (int)ABS(fVar4)) {
    fVar15 = param_1[1] - param_3[1];
    fVar14 = fVar12 - *param_3;
    fVar4 = DAT_00231350 / fVar4;
    fVar16 = param_1[2] - param_3[2];
    fVar5 = (fVar9 * fVar3 + fVar8 * fVar1 + fVar10 * fVar2) * fVar4;
    fVar4 = (fVar14 * fVar3 + fVar1 * fVar15 + fVar2 * fVar16) * fVar4;
    fVar6 = fVar9 - fVar3 * fVar5;
    fVar11 = fVar10 - fVar2 * fVar5;
    fVar7 = fVar8 - fVar1 * fVar5;
    fVar13 = fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11;
    if (DAT_0023134c <= (int)ABS(fVar13)) {
      fVar13 = -(fVar6 * (fVar14 - fVar3 * fVar4) + fVar7 * (fVar15 - fVar1 * fVar4) +
                fVar11 * (fVar16 - fVar2 * fVar4)) / fVar13;
      fVar4 = fVar4 + fVar5 * fVar13;
      *param_5 = fVar12 + fVar9 * fVar13;
      param_5[1] = param_1[1] + fVar8 * fVar13;
      param_5[2] = param_1[2] + fVar10 * fVar13;
      *param_6 = *param_3 + fVar3 * fVar4;
      param_6[1] = param_3[1] + fVar1 * fVar4;
      param_6[2] = param_3[2] + fVar2 * fVar4;
      return 1;
    }
  }
  return 0;
}
