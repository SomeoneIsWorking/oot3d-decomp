// OoT3D decomp @ 002ee5e4  name=FUN_002ee5e4  size=584

void FUN_002ee5e4(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  fVar9 = DAT_002ee84c;
  fVar8 = DAT_002ee848;
  fVar7 = DAT_002ee844;
  fVar6 = DAT_002ee840;
  fVar5 = DAT_002ee83c;
  fVar4 = DAT_002ee838;
  iVar3 = DAT_002ee834;
  fVar2 = DAT_002ee830;
  iVar1 = DAT_002ee82c;
  iVar14 = 0;
  iVar19 = DAT_002ee82c + -0x68;
  iVar18 = DAT_002ee82c + -0x30;
  iVar15 = DAT_002ee82c + -0x24;
  iVar16 = DAT_002ee82c + -0x18;
  iVar17 = DAT_002ee82c + -0xd4;
  do {
    fVar20 = DAT_002ee854;
    pfVar10 = (float *)(DAT_002ee850 + iVar14 * 4);
    if (DAT_002ee854 < *pfVar10) {
      pfVar12 = (float *)(iVar15 + iVar14 * 4);
      fVar21 = *(float *)(DAT_002ee858 + iVar14 * 4);
      if ((*pfVar12 < fVar21) && (fVar22 = *pfVar12 + *pfVar10, *pfVar12 = fVar22, fVar21 <= fVar22)
         ) {
        *pfVar12 = fVar21;
        *pfVar10 = fVar20;
      }
    }
    pfVar12 = (float *)(iVar1 + iVar14 * 4);
    if (fVar20 < *pfVar12) {
      pfVar13 = (float *)(iVar16 + iVar14 * 4);
      fVar21 = *(float *)(iVar18 + iVar14 * 4);
      if ((*pfVar13 < fVar21) && (fVar22 = *pfVar13 + *pfVar12, *pfVar13 = fVar22, fVar21 <= fVar22)
         ) {
        *pfVar13 = fVar21;
        *pfVar12 = fVar20;
      }
    }
    if (*pfVar10 < fVar20) {
      pfVar13 = (float *)(iVar15 + iVar14 * 4);
      fVar21 = *(float *)(DAT_002ee858 + iVar14 * 4);
      if ((fVar21 < *pfVar13) && (fVar22 = *pfVar13 + *pfVar10, *pfVar13 = fVar22, fVar22 <= fVar21)
         ) {
        *pfVar13 = fVar21;
        *pfVar10 = fVar20;
      }
    }
    if (*pfVar12 < fVar20) {
      pfVar10 = (float *)(iVar16 + iVar14 * 4);
      fVar21 = *(float *)(iVar18 + iVar14 * 4);
      if ((fVar21 < *pfVar10) && (fVar22 = *pfVar10 + *pfVar12, *pfVar10 = fVar22, fVar22 <= fVar21)
         ) {
        *pfVar10 = fVar21;
        *pfVar12 = fVar20;
      }
    }
    fVar20 = fVar2;
    if ((*(int *)(iVar19 + iVar14 * 4) != 0) &&
       (iVar11 = *(int *)(iVar3 + 0x10), (iVar11 == 3 || iVar11 == 5) || iVar11 == 0xe)) {
      fVar20 = fVar4;
    }
    iVar11 = *(int *)(iVar17 + iVar14 * 4);
    if (*(int *)(DAT_002ee860 + iVar14 * 4) == 0) {
      if (iVar11 != 0) {
        fVar21 = *(float *)(iVar16 + iVar14 * 4) + (DAT_002ee85c - fVar20);
        fVar20 = *(float *)(iVar15 + iVar14 * 4) + fVar5;
        goto LAB_002ee814;
      }
    }
    else {
      if (iVar11 != 0) {
        FUN_002e946c(*(float *)(iVar15 + iVar14 * 4) + fVar6,
                     *(float *)(iVar16 + iVar14 * 4) + (fVar7 - fVar20));
      }
      if (*(int *)(iVar17 + iVar14 * 4 + 0xc) != 0) {
        fVar21 = *(float *)(iVar16 + iVar14 * 4) + (fVar9 - fVar20);
        fVar20 = *(float *)(iVar15 + iVar14 * 4) + fVar8;
LAB_002ee814:
        FUN_002e946c(fVar20,fVar21);
      }
    }
    iVar14 = iVar14 + 1;
    if (2 < iVar14) {
      return;
    }
  } while( true );
}
