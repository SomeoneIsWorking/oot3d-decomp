// OoT3D decomp @ 002a0048  name=FUN_002a0048  size=1028

/* WARNING: Removing unreachable block (ram,0x002a01a4) */
/* WARNING: Removing unreachable block (ram,0x002a01ac) */
/* WARNING: Removing unreachable block (ram,0x002a01b0) */
/* WARNING: Removing unreachable block (ram,0x002a01b4) */
/* WARNING: Removing unreachable block (ram,0x002a02a8) */
/* WARNING: Removing unreachable block (ram,0x002a01c8) */
/* WARNING: Removing unreachable block (ram,0x002a02cc) */
/* WARNING: Removing unreachable block (ram,0x002a02d8) */
/* WARNING: Removing unreachable block (ram,0x002a02e8) */
/* WARNING: Removing unreachable block (ram,0x002a02e0) */
/* WARNING: Removing unreachable block (ram,0x002a02ec) */
/* WARNING: Removing unreachable block (ram,0x002a02f8) */
/* WARNING: Removing unreachable block (ram,0x002a0308) */
/* WARNING: Removing unreachable block (ram,0x002a0300) */
/* WARNING: Removing unreachable block (ram,0x002a030c) */
/* WARNING: Removing unreachable block (ram,0x002a0324) */
/* WARNING: Removing unreachable block (ram,0x002a0328) */
/* WARNING: Removing unreachable block (ram,0x002a032c) */
/* WARNING: Removing unreachable block (ram,0x002a0314) */
/* WARNING: Removing unreachable block (ram,0x002a03e4) */
/* WARNING: Removing unreachable block (ram,0x002a035c) */
/* WARNING: Removing unreachable block (ram,0x002a0370) */
/* WARNING: Removing unreachable block (ram,0x002a037c) */
/* WARNING: Removing unreachable block (ram,0x002a042c) */
/* WARNING: Removing unreachable block (ram,0x002a0424) */

undefined4
FUN_002a0048(float param_1,float param_2,float param_3,float *param_4,float *param_5,float *param_6,
            float *param_7,float *param_8)

{
  bool bVar1;
  bool bVar2;
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

  fVar8 = *param_4;
  fVar6 = *param_5 - fVar8;
  fVar11 = *param_6 - fVar8;
  fVar5 = param_5[2] - param_4[2];
  fVar4 = (param_5[1] - param_4[1]) - param_3;
  param_3 = (param_6[1] - param_4[1]) - param_3;
  fVar7 = fVar11 - fVar6;
  fVar12 = param_6[2] - param_4[2];
  fVar3 = fVar12 - fVar5;
  if ((((DAT_002a0398 < fVar4) && (fVar4 < param_2)) &&
      (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < param_1)) ||
     (((DAT_002a0398 < param_3 && (param_3 < param_2)) &&
      (SQRT(fVar11 * fVar11 + fVar12 * fVar12) < param_1)))) {
    return 3;
  }
  fVar9 = fVar7 * fVar6 * DAT_002a039c + DAT_002a039c * fVar3 * fVar5;
  fVar10 = (fVar6 * fVar6 + fVar5 * fVar5) - param_1 * param_1;
  if ((int)ABS(fVar7 * fVar7 + fVar3 * fVar3) < DAT_002a03a0) {
    if ((int)ABS(fVar9) < DAT_002a03a0) {
      if (fVar10 <= DAT_002a0398) {
        if ((fVar4 <= DAT_002a0398) || (param_2 <= fVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((param_3 <= DAT_002a0398) || (param_2 <= param_3)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar1) {
          param_7[2] = fVar5;
          param_7[1] = fVar4;
          *param_7 = fVar6;
          if (bVar2) {
            param_8[2] = fVar12;
            param_8[1] = param_3;
            *param_8 = fVar11;
            return 2;
          }
        }
        else {
          if (!bVar2) {
            return 0;
          }
          param_7[2] = fVar12;
          param_7[1] = param_3;
          *param_7 = fVar11;
        }
        return 1;
      }
    }
    else {
      fVar9 = -fVar10 / fVar9;
      if ((DAT_002a0398 <= fVar9) && ((int)fVar9 < 0x3f800001)) {
        bVar1 = true;
        fVar11 = fVar4 + fVar9 * (param_3 - fVar4);
        if ((fVar11 < DAT_002a0398) || (param_2 < fVar11)) {
          bVar1 = false;
        }
        if (bVar1) {
          *param_7 = fVar6 + fVar8 + fVar9 * fVar7;
          param_7[1] = fVar4 + param_4[1] + fVar9 * (param_3 - fVar4);
          param_7[2] = fVar5 + param_4[2] + fVar9 * fVar3;
          return 1;
        }
      }
    }
  }
  return 0;
}
