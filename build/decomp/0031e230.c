// OoT3D decomp @ 0031e230  name=FUN_0031e230  size=892

undefined4 FUN_0031e230(float *param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
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
  float extraout_s14;
  float extraout_s15;

  pfVar4 = DAT_0031e5ac;
  fVar16 = *param_1;
  *DAT_0031e5ac = fVar16;
  fVar17 = param_1[1];
  pfVar4[1] = fVar17;
  fVar15 = param_1[2];
  pfVar4[2] = fVar15;
  pfVar1 = DAT_0031e5b8;
  fVar12 = *param_2;
  fVar7 = param_2[1];
  fVar10 = param_2[2];
  fVar13 = param_2[3];
  fVar6 = param_1[3];
  fVar8 = fVar12;
  if (fVar13 < fVar12) {
    fVar8 = fVar13;
    fVar13 = fVar12;
  }
  fVar12 = param_2[4];
  fVar9 = fVar7;
  if (fVar12 < fVar7) {
    fVar9 = fVar12;
    fVar12 = fVar7;
  }
  fVar7 = param_2[5];
  fVar11 = fVar10;
  if (fVar7 < fVar10) {
    fVar11 = fVar7;
    fVar7 = fVar10;
  }
  fVar14 = param_2[6];
  fVar10 = fVar14;
  if ((fVar8 <= fVar14) && (fVar10 = fVar8, fVar13 <= fVar14)) {
    fVar13 = fVar14;
  }
  fVar14 = param_2[7];
  fVar8 = fVar14;
  if ((fVar9 <= fVar14) && (fVar8 = fVar9, fVar12 <= fVar14)) {
    fVar12 = fVar14;
  }
  fVar14 = param_2[8];
  fVar9 = fVar14;
  if ((fVar11 <= fVar14) && (fVar9 = fVar11, fVar7 <= fVar14)) {
    fVar7 = fVar14;
  }
  if ((((fVar10 - fVar6 <= fVar16) && (fVar16 <= fVar13 + fVar6)) && (fVar8 - fVar6 <= fVar17)) &&
     (((fVar17 <= fVar12 + fVar6 && (fVar9 - fVar6 <= fVar15)) && (fVar15 <= fVar7 + fVar6)))) {
    fVar7 = param_2[9];
    fVar8 = param_2[10];
    fVar10 = param_2[0xb];
    fVar12 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10);
    fVar13 = DAT_0031e5b4;
    if (DAT_0031e5b0 <= (int)ABS(fVar12)) {
      fVar13 = (fVar16 * fVar7 + fVar8 * fVar17 + fVar10 * fVar15 + param_2[0xc]) / fVar12;
    }
    if (ABS(fVar13) <= fVar6) {
      fVar13 = param_2[1];
      fVar8 = param_2[2];
      pfVar5 = DAT_0031e5b8 + 3;
      *DAT_0031e5b8 = *param_2;
      pfVar1[1] = fVar13;
      pfVar1[2] = fVar8;
      fVar13 = param_2[4];
      fVar8 = param_2[5];
      *pfVar5 = param_2[3];
      pfVar1[4] = fVar13;
      pfVar1[5] = fVar8;
      iVar3 = FUN_003188a8(param_1,pfVar1);
      if (iVar3 == 0) {
        fVar13 = param_2[4];
        fVar8 = param_2[5];
        *pfVar1 = param_2[3];
        pfVar1[1] = fVar13;
        pfVar1[2] = fVar8;
        fVar13 = param_2[7];
        fVar8 = param_2[8];
        *pfVar5 = param_2[6];
        pfVar1[4] = fVar13;
        pfVar1[5] = fVar8;
        iVar3 = FUN_003188a8(param_1,pfVar1);
        if (iVar3 == 0) {
          fVar13 = param_2[7];
          fVar8 = param_2[8];
          *pfVar1 = param_2[6];
          pfVar1[1] = fVar13;
          pfVar1[2] = fVar8;
          fVar13 = param_2[1];
          fVar8 = param_2[2];
          *pfVar5 = *param_2;
          pfVar1[4] = fVar13;
          pfVar1[5] = fVar8;
          iVar3 = FUN_003188a8(param_1,pfVar1);
          if (iVar3 == 0) {
            fVar8 = param_2[9];
            fVar10 = *pfVar4;
            fVar6 = param_2[10];
            fVar12 = pfVar4[1];
            fVar7 = param_2[0xb];
            fVar13 = pfVar4[2];
            pfVar4 = pfVar1 + 9;
            if (fVar10 * fVar8 + fVar6 * fVar12 + fVar7 * fVar13 + param_2[0xc] <= extraout_s15) {
              *pfVar4 = fVar10 + fVar8 * extraout_s14;
              pfVar1[10] = fVar12 + fVar6 * extraout_s14;
              fVar13 = fVar13 + fVar7 * extraout_s14;
            }
            else {
              *pfVar4 = fVar10 - fVar8 * extraout_s14;
              pfVar1[10] = fVar12 - fVar6 * extraout_s14;
              fVar13 = fVar13 - fVar7 * extraout_s14;
            }
            uVar2 = DAT_0031e5bc;
            pfVar1[0xb] = fVar13;
            if ((int)ABS(fVar6) < 0x3f000001) {
              if ((int)ABS(fVar8) < 0x3f000001) {
                iVar3 = FUN_00319718(*pfVar4,pfVar1[10],extraout_s15,uVar2,fVar7,param_2,param_2 + 3
                                     ,param_2 + 6);
              }
              else {
                iVar3 = FUN_0031990c(pfVar1[10],pfVar1[0xb],param_2);
              }
            }
            else {
              iVar3 = FUN_00322618(pfVar1[0xb],*pfVar4,extraout_s15,uVar2,fVar6,param_2,param_2 + 3,
                                   param_2 + 6);
            }
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      FUN_004c89c4(param_1,param_2,param_3);
      return 1;
    }
  }
  return 0;
}
