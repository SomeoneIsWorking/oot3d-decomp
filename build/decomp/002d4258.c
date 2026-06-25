// OoT3D decomp @ 002d4258  name=FUN_002d4258  size=580

void FUN_002d4258(float param_1,int param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar2 = DAT_002d449c;
  if ((int)param_1 < 0x3f800000) {
    fVar3 = DAT_002d449c - param_1;
    fVar5 = *param_4 * fVar3 + *param_5 * param_1;
    *param_3 = fVar5;
    fVar7 = param_4[1] * fVar3 + param_5[1] * param_1;
    param_3[1] = fVar7;
    fVar10 = param_4[2] * fVar3 + param_5[2] * param_1;
    param_3[2] = fVar10;
    fVar8 = param_4[4] * fVar3 + param_5[4] * param_1;
    param_3[4] = fVar8;
    fVar9 = param_4[5] * fVar3 + param_5[5] * param_1;
    param_3[5] = fVar9;
    fVar6 = param_4[6] * fVar3 + param_5[6] * param_1;
    param_3[6] = fVar6;
    if (param_2 == 0) {
      param_3[3] = param_4[3];
      param_3[7] = param_4[7];
      param_3[0xb] = param_4[0xb];
    }
    else {
      param_3[3] = param_4[3] * fVar3 + param_5[3] * param_1;
      param_3[7] = param_4[7] * fVar3 + param_5[7] * param_1;
      param_3[0xb] = param_4[0xb] * fVar3 + param_5[0xb] * param_1;
    }
    pfVar1 = param_3 + 8;
    fVar4 = fVar5 * fVar9 - fVar7 * fVar8;
    param_3[8] = fVar7 * fVar6 - fVar10 * fVar9;
    param_3[9] = fVar10 * fVar8 - fVar5 * fVar6;
    param_3[10] = fVar4;
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar3 = param_3[2];
    fVar7 = fVar5 * fVar5 + fVar6 * fVar6;
    if ((SQRT(fVar7 + fVar3 * fVar3) != DAT_002d44a0) &&
       (fVar8 = SQRT(*pfVar1 * *pfVar1 + param_3[9] * param_3[9] + fVar4 * fVar4),
       fVar8 != DAT_002d44a0)) {
      fVar7 = fVar2 / SQRT(fVar7 + fVar3 * fVar3);
      *param_3 = fVar5 * fVar7;
      param_3[1] = fVar6 * fVar7;
      param_3[2] = fVar3 * fVar7;
      fVar2 = fVar2 / fVar8;
      fVar3 = param_3[10] * fVar2;
      *pfVar1 = *pfVar1 * fVar2;
      param_3[9] = param_3[9] * fVar2;
      param_3[10] = fVar3;
      param_3[4] = param_3[9] * param_3[2] - fVar3 * param_3[1];
      param_3[5] = fVar3 * *param_3 - *pfVar1 * param_3[2];
      param_3[6] = *pfVar1 * param_3[1] - param_3[9] * *param_3;
    }
  }
  else {
    FUN_00372224(param_3);
    if (param_2 == 0) {
      param_3[3] = param_4[3];
      param_3[7] = param_4[7];
      param_3[0xb] = param_4[0xb];
      return;
    }
  }
  return;
}

