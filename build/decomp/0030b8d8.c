// OoT3D decomp @ 0030b8d8  name=FUN_0030b8d8  size=1736

float FUN_0030b8d8(float param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar14;
  ulonglong uVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  fVar5 = DAT_0030c030;
  fVar12 = DAT_0030bbd4;
  fVar18 = DAT_0030bbd0;
  iVar7 = 0;
  fVar6 = (float)((int)param_2 * 2 + 0x2000000);
  fVar10 = param_2;
  if (0x7effffff < (int)param_1 - 0x800000U) {
    if ((uint)fVar6 < 0x40000000) goto LAB_0030b9d0;
    goto LAB_0030b928;
  }
  if (0x3fffffff < (uint)fVar6) goto LAB_0030bbf4;
LAB_0030b9d0:
  uVar3 = (int)param_2 * 2 + 0x2000000;
  if (uVar3 < 0x2000000) {
    if (uVar3 < 0x1000000) {
      fVar10 = (float)((int)param_2 - 0x800000);
      goto LAB_0030b928;
    }
LAB_0030ba1c:
    fVar14 = ABS(param_1);
    fVar5 = (float)((int)fVar14 + 0x807fffff);
    bVar9 = (uint)fVar5 < (uint)DAT_0030bbe0;
    if (!bVar9) {
      fVar5 = ABS(param_2);
      fVar6 = (float)((int)fVar5 + 0x807fffff);
    }
    if (bVar9 || (uint)fVar6 < (uint)DAT_0030bbe0) {
LAB_0030ba60:
      return param_1 + fVar10;
    }
    if (param_1 == 1.0 || ABS(param_2) == 0.0) {
      return DAT_0030bbd0;
    }
    bVar8 = (uint)DAT_0030bbe4 <= (uint)fVar14;
    bVar9 = fVar14 == DAT_0030bbe4;
    if (!bVar8 || bVar9) {
      bVar8 = (uint)DAT_0030bbe4 <= (uint)fVar5;
      bVar9 = fVar5 == DAT_0030bbe4;
    }
    if (bVar8 && !bVar9) goto LAB_0030ba60;
    if (param_1 == DAT_0030bbe4) {
      if (((uint)param_2 & 0x80000000) != 0) {
        return DAT_0030bbd4;
      }
      return DAT_0030bbf0;
    }
    uVar3 = (uint)((int)param_2 << 1) >> 0x18;
    if (uVar3 < 0x7f) {
LAB_0030bab0:
      iVar7 = 0;
    }
    else if (uVar3 < 0x97) {
      uVar3 = 1 << (0x96 - uVar3 & 0xff);
      if ((uVar3 - 1 & (uint)param_2) != 0) goto LAB_0030bab0;
      if ((uVar3 & (uint)param_2) == 0) goto LAB_0030bac4;
      iVar7 = 1;
    }
    else {
LAB_0030bac4:
      iVar7 = 2;
    }
    if (param_1 == -INFINITY) {
      if (((uint)param_2 & 0x80000000) == 0) {
        if (iVar7 != 1) {
          return DAT_0030bbf0;
        }
        return DAT_0030bbe8;
      }
joined_r0x0030bb7c:
      if (iVar7 != 1) {
        return DAT_0030bbd4;
      }
      return DAT_0030bbec;
    }
    if (param_1 == 0.0) {
      if (((uint)param_2 & 0x80000000) == 0) {
        return DAT_0030bbd4;
      }
    }
    else {
      if (param_1 != -0.0) {
        if (param_1 == -1.0) {
          return DAT_0030bbd0;
        }
        if ((uint)(0x7effffff < (uint)((int)param_1 * 2)) != ((int)param_2 >> 0x1f) + 1U) {
          return DAT_0030bbd4;
        }
        return DAT_0030bbf0;
      }
      if (param_2 == DAT_0030bbe4) {
        return DAT_0030bbd4;
      }
      if (param_2 != -INFINITY) {
        if (((uint)param_2 & 0x80000000) == 0) {
          if (iVar7 == 0) {
            return DAT_0030bbd4;
          }
          goto joined_r0x0030bb7c;
        }
        if ((iVar7 != 0) && (iVar7 == 1)) {
          FUN_002eb01c(2);
          return fVar18 / -0.0;
        }
      }
    }
    FUN_002eb01c(2);
    return fVar18 / fVar12;
  }
  in_fpscr = in_fpscr & 0xfffffff | (uint)(param_2 == DAT_0030bbd4) << 0x1e;
  if (SUB41(in_fpscr >> 0x1e,0)) {
    bVar9 = ABS(param_1) == 0.0;
    bVar8 = true;
    if (!bVar9) {
      bVar8 = (uint)((int)param_1 * 2) < 0xff000001;
      bVar9 = (int)param_1 * 2 == 0xff000000;
    }
    if (bVar8 && !bVar9) {
      return DAT_0030bbd0;
    }
  }
  else {
    param_2 = (float)((uint)param_2 & 0x80000000 | 0x1f800000);
    fVar10 = param_2;
  }
LAB_0030b928:
  if ((int)param_1 + 0x7f800000U < 0x7f000000) {
LAB_0030b938:
    param_1 = ABS(param_1);
    uVar3 = (uint)((int)param_2 << 1) >> 0x18;
    if (uVar3 < 0x7f) {
LAB_0030b970:
      FUN_002eb01c(1);
      return fVar12 / fVar12;
    }
    if (uVar3 < 0x97) {
      uVar3 = 1 << (0x96 - uVar3 & 0xff);
      if ((uVar3 - 1 & (uint)param_2) != 0) goto LAB_0030b970;
      if (((uint)param_2 & uVar3) != 0) {
        fVar18 = DAT_0030bbd8;
      }
    }
  }
  else {
    bVar9 = ABS(param_1) == 0.0;
    bVar8 = true;
    if (!bVar9) {
      bVar8 = (uint)((int)param_1 * 2) < 0x1000001;
      bVar9 = (int)param_1 * 2 == 0x1000000;
    }
    if (!bVar8 || bVar9) {
      if (0x7effffff < (int)param_1 - 0x800000U) goto LAB_0030ba1c;
    }
    else {
      iVar7 = -0x1b;
      param_1 = param_1 * DAT_0030bbdc;
      if (((uint)param_1 & 0x80000000) != 0) goto LAB_0030b938;
    }
  }
LAB_0030bbf4:
  if ((uint)(DAT_0030bee0 + (int)param_1) < 0x2001) {
    fVar12 = (float)((double)param_1 - DAT_0030bef0);
    fVar14 = fVar12 * DAT_0030bf00 +
             -(fVar12 * fVar12) * (DAT_0030bee8 - fVar12 * (DAT_0030bee4 - fVar12 * DAT_0030bef8)) *
             DAT_0030bf04;
    fVar6 = (float)((int)(fVar12 * DAT_0030befc + fVar14) + 0x800U & 0xfffff000);
    fVar14 = (fVar12 * DAT_0030befc - fVar6) + fVar14;
  }
  else {
    uVar3 = (int)param_1 + 0x40000U >> 0x13;
    uVar13 = CONCAT44(DAT_0030bbd0,uVar3) & 0xffffffff0000000f;
    iVar4 = ((uVar3 << 0x14) >> 0x18) - 0x7f;
    fVar6 = (float)VectorSignedToFloat((int)uVar13,(byte)(in_fpscr >> 0x15) & 3);
    param_1 = (float)((int)param_1 + iVar4 * -0x800000);
    fVar15 = (float)(uVar13 >> 0x20) + fVar6 * DAT_0030bf08;
    fVar6 = (float)((int)(param_1 + fVar15) + 0x800U & 0xfffff000);
    fVar14 = DAT_0030bbd0 / (param_1 + fVar15);
    fVar12 = (float)((int)((param_1 - fVar15) * fVar14) + 0x800U & 0xfffff000);
    fVar14 = (((param_1 - fVar15) - fVar12 * fVar6) - fVar12 * ((fVar15 - fVar6) + param_1)) *
             fVar14;
    fVar6 = (fVar12 + fVar14) * (fVar12 + fVar14);
    fVar14 = fVar14 * DAT_0030bbd0 +
             (DAT_0030bee4 + fVar6 * DAT_0030bf0c) * fVar6 * (fVar12 + fVar14);
    fVar6 = (float)((int)(fVar12 * DAT_0030bbd0 + fVar14) + 0x800U & 0xfffff000);
    fVar14 = fVar6 * DAT_0030bf14 + ((fVar12 * DAT_0030bbd0 - fVar6) + fVar14) * DAT_0030bf18;
    fVar12 = (float)((int)(fVar6 * DAT_0030bf10 + fVar14) + 0x800U & 0xfffff000);
    fVar14 = (fVar6 * DAT_0030bf10 - fVar12) + fVar14;
    pfVar2 = (float *)(DAT_0030bf1c + 0x30bd80 + (uVar3 & 0xf) * 8);
    fVar16 = pfVar2[1];
    fVar15 = *pfVar2;
    fVar17 = (float)VectorSignedToFloat((iVar4 + iVar7) * 0x10,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)((int)(fVar14 + fVar16 + fVar12 + fVar15 + fVar17) + 0x800U & 0xfffff000);
    fVar14 = fVar14 - ((((fVar6 - fVar17) - fVar15) - fVar12) - fVar16);
  }
  fVar12 = (float)((int)fVar10 + 0x800U & 0xfffff000);
  fVar14 = fVar6 * (fVar10 - fVar12) + fVar14 * (fVar12 + (fVar10 - fVar12));
  fVar10 = (float)((int)(fVar6 * fVar12 + fVar14) + 0x800U & 0xfffff000);
  fVar14 = (fVar6 * fVar12 - fVar10) + fVar14;
  fVar12 = fVar10 + fVar14;
  uVar3 = in_fpscr & 0xfffffff | (uint)(DAT_0030bbd4 <= fVar12) << 0x1d;
  fVar6 = DAT_0030bee8;
  if (!SUB41(uVar3 >> 0x1d,0)) {
    fVar6 = DAT_0030bf20;
  }
  uVar11 = (uint)(fVar6 + fVar12);
  uVar1 = uVar11 & 0xf;
  fVar12 = (float)VectorSignedToFloat(uVar11,(byte)(uVar3 >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)uVar11 >> 4,(byte)(uVar3 >> 0x15) & 3);
  fVar14 = (fVar10 - fVar12) + fVar14;
  fVar12 = *(float *)(DAT_0030bf30 + 0x30be6c + uVar1 * 4) +
           *(float *)(DAT_0030bf34 + 0x30be7c + uVar1 * 4) *
           (DAT_0030bf2c + fVar14 * (DAT_0030bf28 + fVar14 * DAT_0030bf24)) * fVar14 +
           *(float *)(DAT_0030bf38 + 0x30be88 + uVar1 * 4);
  if (ABS(fVar6) < DAT_0030bf3c) {
    fVar6 = (float)FUN_004a5a94((fVar6 + DAT_0030bf40) * DAT_0030bf44);
    return fVar6 * fVar18 * fVar12;
  }
  if (DAT_0030c02c <= ABS(fVar6)) {
    if (DAT_0030bbd4 <= fVar6) goto LAB_0030c000;
  }
  else {
    iVar7 = (int)fVar6 / 2;
    fVar6 = (float)(iVar7 * 0x800000 + 0x3f800000) * fVar18 * fVar12 *
            (float)(((int)fVar6 - iVar7) * 0x800000 + 0x3f800000);
    if (ABS(fVar6) == INFINITY) {
LAB_0030c000:
      FUN_002eb01c(2);
      return (float)((uint)ABS(fVar5 * fVar5) | (uint)fVar18 & 0x80000000);
    }
    if (ABS(fVar6) != 0.0) {
      iVar7 = FUN_002c0b34(fVar6);
      if (iVar7 == 4) {
        FUN_002c0b24();
      }
      return fVar6;
    }
  }
  FUN_002eb01c(2);
  uVar3 = FUN_002c0b24();
  return (float)(uVar3 & 0x7fffffff | (uint)fVar18 & 0x80000000);
}
