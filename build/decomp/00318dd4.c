// OoT3D decomp @ 00318dd4  name=FUN_00318dd4  size=852

undefined4 FUN_00318dd4(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float extraout_s14;
  float extraout_s14_00;
  float fVar10;
  float fVar11;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  fVar10 = param_1[4] + param_1[2];
  fVar11 = param_1[1] + fVar10;
  fVar9 = param_2[1];
  bVar6 = fVar10 <= fVar9;
  if (!bVar6) {
    bVar6 = fVar10 <= param_2[4];
  }
  if (!bVar6) {
    bVar6 = fVar10 <= param_2[7];
  }
  if (bVar6) {
    bVar6 = fVar9 < fVar11;
    bVar7 = fVar9 == fVar11;
    bVar8 = NAN(fVar9) || NAN(fVar11);
    if (!bVar7 && !bVar6) {
      fVar9 = param_2[4];
      bVar6 = fVar9 < fVar11;
      bVar7 = fVar9 == fVar11;
      bVar8 = NAN(fVar9) || NAN(fVar11);
    }
    if (!bVar7 && bVar6 == bVar8) {
      fVar9 = param_2[7];
      bVar6 = fVar9 < fVar11;
      bVar7 = fVar9 == fVar11;
      bVar8 = NAN(fVar9) || NAN(fVar11);
    }
    if (bVar7 || bVar6 != bVar8) {
      iVar2 = FUN_0031e5c0(param_1,param_2,param_2 + 3,DAT_0031912c + -0xc,DAT_0031912c);
      pfVar1 = DAT_00319130;
      if (iVar2 != 0) {
        fVar9 = DAT_00319130[1];
        fVar4 = DAT_00319130[2];
        *param_3 = *DAT_00319130;
        param_3[1] = fVar9;
        param_3[2] = fVar4;
      }
      iVar2 = FUN_0031e5c0(param_1,param_2 + 6,param_2 + 3,DAT_0031912c + -0xc,DAT_0031912c);
      if ((iVar2 != 0) &&
         ((*pfVar1 - param_2[6]) * (*pfVar1 - param_2[6]) +
          (pfVar1[1] - param_2[7]) * (pfVar1[1] - param_2[7]) +
          (pfVar1[2] - param_2[8]) * (pfVar1[2] - param_2[8]) < extraout_s14)) {
        fVar9 = pfVar1[1];
        fVar4 = pfVar1[2];
        *param_3 = *pfVar1;
        param_3[1] = fVar9;
        param_3[2] = fVar4;
      }
      iVar2 = FUN_0031e5c0(param_1,param_2,param_2 + 6,DAT_0031912c + -0xc,DAT_0031912c);
      fVar9 = extraout_s14_00;
      if ((iVar2 != 0) &&
         (fVar4 = (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
                  (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]) +
                  (pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]), fVar9 = extraout_s14_00,
         fVar4 < extraout_s14_00)) {
        fVar9 = pfVar1[1];
        fVar5 = pfVar1[2];
        *param_3 = *pfVar1;
        param_3[1] = fVar9;
        param_3[2] = fVar5;
        fVar9 = fVar4;
      }
      if (fVar9 == DAT_00319134) {
        iVar2 = FUN_00356ebc(param_2[9],param_2[10],param_2[0xb],param_2[0xc],param_1[5],param_1[3],
                             fVar10,fVar11,param_2,param_2 + 3,param_2 + 6,&local_20);
        pfVar1 = DAT_00319140;
        if (iVar2 == 0) {
          fVar9 = param_1[3];
          pfVar3 = DAT_00319140 + -4;
          *DAT_00319140 = fVar9;
          *pfVar3 = fVar9;
          fVar9 = param_1[5];
          pfVar1[2] = fVar9;
          pfVar1[-2] = fVar9;
          pfVar1[-3] = fVar11;
          pfVar1[1] = fVar10;
          fVar9 = *param_1;
          pfVar1[3] = fVar9;
          pfVar1[-1] = fVar9;
          iVar2 = FUN_0031e230(pfVar1 + -4,param_2,param_3);
          if ((iVar2 == 0) && (iVar2 = FUN_0031e230(DAT_00319140,param_2,param_3), iVar2 == 0)) {
            return 0;
          }
        }
        else {
          fVar4 = param_1[5];
          local_2c = (*param_2 + param_2[3]) * DAT_00319138;
          fVar11 = local_2c - param_1[3];
          local_28 = (param_2[1] + param_2[4]) * DAT_00319138;
          local_24 = (param_2[2] + param_2[5]) * DAT_00319138;
          fVar10 = local_24 - fVar4;
          fVar9 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
          if ((int)ABS(fVar9) < DAT_0031913c) {
            FUN_0036df4c(param_3,&local_2c);
          }
          else {
            fVar9 = *param_1 / fVar9;
            *param_3 = param_1[3] + fVar11 * fVar9;
            param_3[1] = local_20 + (local_28 - local_20) * fVar9;
            param_3[2] = fVar4 + fVar10 * fVar9;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
