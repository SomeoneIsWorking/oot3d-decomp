// OoT3D decomp @ 0031e5c0  name=FUN_0031e5c0  size=1448

/* WARNING: Removing unreachable block (ram,0x0031e83c) */
/* WARNING: Removing unreachable block (ram,0x0031e840) */
/* WARNING: Removing unreachable block (ram,0x0031e844) */
/* WARNING: Removing unreachable block (ram,0x0031e848) */
/* WARNING: Removing unreachable block (ram,0x0031e890) */
/* WARNING: Removing unreachable block (ram,0x0031e85c) */
/* WARNING: Removing unreachable block (ram,0x0031e8c4) */
/* WARNING: Removing unreachable block (ram,0x0031e8d0) */
/* WARNING: Removing unreachable block (ram,0x0031e8e0) */
/* WARNING: Removing unreachable block (ram,0x0031e8d8) */
/* WARNING: Removing unreachable block (ram,0x0031e8e4) */
/* WARNING: Removing unreachable block (ram,0x0031e8f0) */
/* WARNING: Removing unreachable block (ram,0x0031e900) */
/* WARNING: Removing unreachable block (ram,0x0031e8f8) */
/* WARNING: Removing unreachable block (ram,0x0031e904) */
/* WARNING: Removing unreachable block (ram,0x0031e91c) */
/* WARNING: Removing unreachable block (ram,0x0031e920) */
/* WARNING: Removing unreachable block (ram,0x0031e924) */
/* WARNING: Removing unreachable block (ram,0x0031e90c) */
/* WARNING: Removing unreachable block (ram,0x0031e99c) */
/* WARNING: Removing unreachable block (ram,0x0031e954) */
/* WARNING: Removing unreachable block (ram,0x0031e964) */
/* WARNING: Removing unreachable block (ram,0x0031e970) */
/* WARNING: Removing unreachable block (ram,0x0031ea5c) */
/* WARNING: Removing unreachable block (ram,0x0031ea54) */

int FUN_0031e5c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
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
  float local_48 [12];

  fVar14 = param_1[3];
  fVar9 = param_1[5];
  fVar6 = fVar14 - *param_2;
  fVar12 = param_1[4];
  fVar10 = fVar9 - param_2[2];
  fVar13 = param_1[2];
  fVar8 = fVar12 + fVar13;
  uVar3 = 0;
  fVar7 = *param_1 * *param_1;
  if ((((fVar6 * fVar6 + fVar10 * fVar10 < fVar7) && (fVar8 < param_2[1])) &&
      (param_2[1] < param_1[1] + fVar8)) &&
     ((((fVar14 - *param_3) * (fVar14 - *param_3) + (fVar9 - param_3[2]) * (fVar9 - param_3[2]) <
        fVar7 && (fVar8 < param_3[1])) && (param_3[1] < param_1[1] + fVar8)))) {
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    *param_4 = *param_2;
    param_4[1] = fVar6;
    param_4[2] = fVar7;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    *param_5 = *param_3;
    param_5[1] = fVar6;
    param_5[2] = fVar7;
    return 2;
  }
  fVar10 = *param_2 - fVar14;
  fVar11 = (param_2[1] - fVar12) - fVar13;
  fVar6 = param_2[2] - fVar9;
  fVar13 = ((param_3[1] - fVar12) - fVar13) - fVar11;
  fVar12 = (*param_3 - fVar14) - fVar10;
  fVar8 = (param_3[2] - fVar9) - fVar6;
  if (DAT_0031e8b8 <= (int)ABS(fVar13)) {
    fVar9 = -fVar11 / fVar13;
    if ((DAT_0031e8b4 <= fVar9) && ((int)fVar9 < 0x3f800001)) {
      fVar15 = fVar10 + fVar12 * fVar9;
      fVar9 = fVar6 + fVar8 * fVar9;
      if (fVar15 * fVar15 + fVar9 * fVar9 < fVar7) {
        uVar3 = 1;
        local_48[0] = fVar14 + fVar15;
        local_48[1] = param_1[4] + param_1[2];
        local_48[2] = param_1[5] + fVar9;
      }
    }
    fVar9 = (param_1[1] - fVar11) / fVar13;
    if ((DAT_0031e8b4 <= fVar9) && ((int)fVar9 < 0x3f800001)) {
      fVar14 = fVar10 + fVar12 * fVar9;
      fVar9 = fVar6 + fVar8 * fVar9;
      if (fVar14 * fVar14 + fVar9 * fVar9 < fVar7) {
        uVar3 = uVar3 | 2;
        local_48[3] = param_1[3] + fVar14;
        local_48[4] = param_1[4] + param_1[2] + param_1[1];
        local_48[5] = param_1[5] + fVar9;
      }
    }
  }
  fVar9 = (fVar12 * fVar10 + fVar8 * fVar6) * DAT_0031e8bc;
  if (((((int)ABS((fVar12 * fVar12 + fVar8 * fVar8) * DAT_0031e8bc) < DAT_0031e8b8) &&
       (DAT_0031e8b8 <= (int)ABS(fVar9))) &&
      (fVar9 = -((fVar10 * fVar10 + fVar6 * fVar6) - fVar7) / fVar9, DAT_0031e8b4 <= fVar9)) &&
     ((int)fVar9 < 0x3f800001)) {
    fVar7 = fVar11 + fVar9 * fVar13;
    bVar5 = false;
    if (DAT_0031e8b4 <= fVar7) {
      bVar5 = fVar7 <= param_1[1];
    }
    if (bVar5) {
      local_48[6] = fVar10 + param_1[3] + fVar9 * fVar12;
      local_48[7] = fVar11 + param_1[4] + param_1[2] + fVar9 * fVar13;
      local_48[8] = fVar6 + param_1[5] + fVar9 * fVar8;
      iVar1 = 0;
      uVar4 = 0;
      do {
        if (((uVar3 | 4) & 1 << (uVar4 & 0xff)) != 0) {
          if (iVar1 == 0) {
            fVar6 = local_48[uVar4 * 3 + 1];
            fVar7 = local_48[uVar4 * 3 + 2];
            *param_4 = local_48[uVar4 * 3];
            param_4[1] = fVar6;
            param_4[2] = fVar7;
          }
          else if (iVar1 == 1) {
            fVar12 = *param_4 - *param_2;
            fVar6 = param_4[1] - param_2[1];
            pfVar2 = local_48 + uVar4 * 3;
            fVar8 = param_4[2] - param_2[2];
            fVar10 = *param_4 - *pfVar2;
            fVar7 = param_4[1] - local_48[uVar4 * 3 + 1];
            fVar9 = param_4[2] - local_48[uVar4 * 3 + 2];
            if (fVar12 * fVar12 + fVar6 * fVar6 + fVar8 * fVar8 <
                fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9) {
              fVar6 = local_48[uVar4 * 3 + 1];
              fVar7 = local_48[uVar4 * 3 + 2];
              *param_5 = *pfVar2;
              param_5[1] = fVar6;
              param_5[2] = fVar7;
              return 1;
            }
            fVar6 = param_4[1];
            fVar7 = param_4[2];
            *param_5 = *param_4;
            param_5[1] = fVar6;
            param_5[2] = fVar7;
            fVar6 = local_48[uVar4 * 3 + 1];
            fVar7 = local_48[uVar4 * 3 + 2];
            *param_4 = *pfVar2;
            param_4[1] = fVar6;
            param_4[2] = fVar7;
            return 1;
          }
          iVar1 = iVar1 + 1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 4);
      return iVar1;
    }
  }
  return 0;
}
