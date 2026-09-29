// OoT3D decomp @ 00373d98  name=FUN_00373d98  size=484

uint FUN_00373d98(float *param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  fVar18 = DAT_00373f8c;
  fVar17 = DAT_00373f88;
  fVar20 = DAT_00373f84;
  fVar19 = DAT_00373f80;
  uVar8 = 0xffffffff;
  uVar7 = 5;
  iVar13 = 0;
  uVar10 = 0xffffffff;
  iVar12 = *(int *)(DAT_00373f7c + param_4);
  uVar5 = FUN_00373fa4(iVar12 + 0x28);
  uVar9 = uVar8;
  uVar11 = uVar10;
  if (DAT_00373f90 < (int)param_1[1]) {
    if ((int)param_2 < 0xf) {
      uVar7 = 0xe;
      fVar19 = DAT_00373f9c;
    }
    else {
      uVar7 = 0x17;
      fVar19 = fVar20;
    }
    iVar13 = 8;
    fVar20 = DAT_00373f98;
    if (uVar7 < 8) goto LAB_00373f00;
  }
  do {
    uVar8 = uVar9;
    uVar10 = uVar11;
    fVar1 = fVar17;
    fVar2 = fVar18;
    if ((uVar7 != param_2 && uVar7 != uVar5) &&
       ((uVar5 != 0xffffffff ||
        (pfVar6 = (float *)(DAT_00373f94 + uVar7 * 0xc),
        fVar16 = *pfVar6 - *(float *)(iVar12 + 0x28), fVar14 = pfVar6[1] - *(float *)(iVar12 + 0x2c)
        , fVar15 = pfVar6[2] - *(float *)(iVar12 + 0x30),
        fVar20 <= SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15))))) {
      pfVar6 = (float *)(DAT_00373f94 + uVar7 * 0xc);
      fVar14 = SQRT((*pfVar6 - *param_1) * (*pfVar6 - *param_1) +
                    (pfVar6[1] - param_1[1]) * (pfVar6[1] - param_1[1]) +
                    (pfVar6[2] - param_1[2]) * (pfVar6[2] - param_1[2]));
      if ((fVar14 <= fVar19) &&
         ((uVar8 = uVar7, uVar10 = uVar9, fVar1 = fVar14, fVar2 = fVar17, fVar17 <= fVar14 &&
          (uVar8 = uVar9, uVar10 = uVar11, fVar1 = fVar17, fVar2 = fVar18, fVar14 < fVar18)))) {
        uVar10 = uVar7;
        fVar2 = fVar14;
      }
    }
    fVar18 = fVar2;
    fVar17 = fVar1;
    uVar7 = (uint)(short)((short)uVar7 + -1);
    uVar9 = uVar8;
    uVar11 = uVar10;
  } while (iVar13 <= (int)uVar7);
LAB_00373f00:
  pfVar6 = (float *)(DAT_00373f94 + uVar8 * 0xc);
  if (0 < (int)uVar10) {
    sVar3 = FUN_003758b0(pfVar6[2] - param_1[2],*pfVar6 - *param_1);
    sVar4 = FUN_003758b0(*(float *)(iVar12 + 0x30) - param_1[2],*(float *)(iVar12 + 0x28) - *param_1
                        );
    if ((int)(short)(sVar3 - sVar4) + 13999U <= DAT_00373fa0) {
      uVar8 = uVar10;
    }
  }
  if ((int)uVar8 < 0) {
    uVar8 = param_3;
  }
  return uVar8;
}
