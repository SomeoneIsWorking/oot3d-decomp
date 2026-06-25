// OoT3D decomp @ 0030f6b0  name=FUN_0030f6b0  size=584

void FUN_0030f6b0(float param_1,uint param_2,undefined4 param_3,float *param_4,float *param_5_00,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = DAT_0030f8fc;
  fVar1 = DAT_0030f8f8;
  if ((int)param_1 < 0x3f800000) {
    uVar4 = 0;
    if (param_2 != 0) {
      fVar5 = DAT_0030f8fc - param_1;
      do {
        pfVar3 = param_4 + 8;
        fVar6 = *param_5_00 * fVar5 + *param_5 * param_1;
        *param_4 = fVar6;
        fVar7 = param_5_00[1] * fVar5 + param_5[1] * param_1;
        param_4[1] = fVar7;
        fVar8 = param_5_00[2] * fVar5 + param_5[2] * param_1;
        param_4[2] = fVar8;
        fVar9 = param_5_00[4] * fVar5 + param_5[4] * param_1;
        param_4[4] = fVar9;
        fVar10 = param_5_00[5] * fVar5 + param_5[5] * param_1;
        param_4[5] = fVar10;
        fVar11 = param_5_00[6] * fVar5 + param_5[6] * param_1;
        param_4[6] = fVar11;
        param_4[3] = param_5_00[3] * fVar5 + param_5[3] * param_1;
        param_4[7] = param_5_00[7] * fVar5 + param_5[7] * param_1;
        param_4[0xb] = param_5_00[0xb] * fVar5 + param_5[0xb] * param_1;
        param_4[8] = fVar7 * fVar11 - fVar8 * fVar10;
        fVar10 = fVar6 * fVar10 - fVar7 * fVar9;
        param_4[9] = fVar8 * fVar9 - fVar6 * fVar11;
        param_4[10] = fVar10;
        fVar8 = *param_4;
        fVar6 = param_4[1];
        fVar7 = param_4[2];
        if ((SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) != fVar1) &&
           (fVar9 = *pfVar3 * *pfVar3,
           SQRT(fVar9 + param_4[9] * param_4[9] + fVar10 * fVar10) != fVar1)) {
          fVar10 = fVar2 / SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
          *param_4 = fVar8 * fVar10;
          param_4[1] = fVar6 * fVar10;
          param_4[2] = fVar7 * fVar10;
          fVar8 = param_4[9];
          fVar7 = param_4[10];
          fVar6 = fVar2 / SQRT(fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
          fVar7 = fVar7 * fVar6;
          *pfVar3 = *pfVar3 * fVar6;
          param_4[9] = fVar8 * fVar6;
          param_4[10] = fVar7;
          param_4[4] = param_4[9] * param_4[2] - fVar7 * param_4[1];
          param_4[5] = fVar7 * *param_4 - *pfVar3 * param_4[2];
          param_4[6] = *pfVar3 * param_4[1] - param_4[9] * *param_4;
        }
        uVar4 = uVar4 + 1;
        param_4 = param_4 + 0xd;
        param_5_00 = param_5_00 + 0xd;
        param_5 = param_5 + 0xd;
      } while (uVar4 < param_2);
    }
  }
  else {
    uVar4 = 0;
    if (param_2 != 0) {
      do {
        FUN_00372224(param_4,param_5);
        uVar4 = uVar4 + 1;
        param_4 = param_4 + 0xd;
        param_5 = param_5 + 0xd;
      } while (uVar4 < param_2);
      return;
    }
  }
  return;
}

