// OoT3D decomp @ 003188a8  name=FUN_003188a8  size=356

undefined4 FUN_003188a8(float *param_1,float *param_2)

{
  float *pfVar1;
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
  
  pfVar1 = DAT_00318a14;
  fVar3 = param_1[3];
  fVar2 = SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
               (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  if (fVar3 == fVar2 || fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
    fVar3 = param_1[3];
    fVar2 = SQRT((*param_1 - param_2[3]) * (*param_1 - param_2[3]) +
                 (param_1[1] - param_2[4]) * (param_1[1] - param_2[4]) +
                 (param_1[2] - param_2[5]) * (param_1[2] - param_2[5]));
    if (fVar3 == fVar2 || fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar6 = param_2[3] - fVar7;
      fVar4 = param_2[4] - fVar8;
      fVar5 = param_2[5] - fVar9;
      fVar2 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
      if (DAT_00318a0c <= (int)ABS(fVar2)) {
        fVar10 = *param_1;
        fVar11 = param_1[1];
        fVar12 = param_1[2];
        fVar2 = ((fVar10 - fVar7) * fVar6 + (fVar11 - fVar8) * fVar4 + (fVar12 - fVar9) * fVar5) /
                fVar2;
        if ((DAT_00318a10 <= fVar2) && ((int)fVar2 < 0x3f800001)) {
          fVar7 = fVar7 + fVar6 * fVar2;
          fVar8 = fVar8 + fVar4 * fVar2;
          fVar9 = fVar9 + fVar5 * fVar2;
          *DAT_00318a14 = fVar7;
          fVar7 = fVar7 - fVar10;
          pfVar1[1] = fVar8;
          pfVar1[2] = fVar9;
          fVar8 = fVar8 - fVar11;
          fVar9 = fVar9 - fVar12;
          if (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 <= fVar3 * fVar3) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}

