// OoT3D decomp @ 0014ffec  name=FUN_0014ffec  size=116

float * FUN_0014ffec(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
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
  
  pfVar2 = *(float **)(iRam00150060 + 4);
  if ((((uint)*(float **)(iRam00150060 + 4) & 1) == 0) &&
     (pfVar2 = (float *)FUN_003679b4(pfRam00150064), pfVar1 = pfRam00150070, fVar3 = fRam0015006c,
     pfVar2 != (float *)0x0)) {
    *pfRam00150070 = fRam00150068;
    pfVar1[1] = fVar3;
    pfVar1[2] = fVar3;
    pfVar2 = pfRam00150064;
  }
  if (param_2 == 9) {
    fVar3 = param_3[4];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar7 = param_3[8];
    fVar8 = param_3[9];
    fVar9 = param_3[10];
    fVar10 = param_3[0xb];
    fVar11 = *pfRam00150070;
    fVar12 = pfRam00150070[1];
    fVar13 = pfRam00150070[2];
    *(float *)(param_4 + 0x3c) =
         param_3[3] + *param_3 * fVar11 + param_3[1] * fVar12 + param_3[2] * fVar13;
    *(float *)(param_4 + 0x40) = fVar6 + fVar3 * fVar11 + fVar4 * fVar12 + fVar5 * fVar13;
    *(float *)(param_4 + 0x44) = fVar10 + fVar7 * fVar11 + fVar8 * fVar12 + fVar9 * fVar13;
    return (float *)(param_4 + 0x3c);
  }
  return pfVar2;
}

