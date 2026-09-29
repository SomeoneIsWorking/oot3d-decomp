// OoT3D decomp @ 002c8434  name=FUN_002c8434  size=18188

void FUN_002c8434(undefined4 param_1,undefined4 param_2,float param_3,uint param_4,float *param_5,
                 uint param_6,uint param_7,int param_8,int param_9)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;

  fVar29 = DAT_002cce10;
  fVar28 = DAT_002cc23c;
  fVar35 = DAT_002cc238;
  fVar30 = DAT_002c8aac;
  fVar27 = DAT_002c8aa8;
  if (param_4 == 0xffffffff) {
    return;
  }
  if (param_7 == 0) {
    return;
  }
  piVar19 = *(int **)(DAT_002c8aa0 + 8);
  iVar13 = *piVar19;
  puVar16 = (uint *)*DAT_002c8aa4;
  uVar23 = param_4 << 0xe;
  if ((param_4 & 0x40000) == 0) {
    param_4 = param_4 & 0x7f;
    uVar18 = 1;
    uVar23 = *(uint *)(*(int *)(iVar13 + 0x1c) + (uVar23 >> 0x15) * 0xc + 8);
    if (param_9 != 0) {
      uVar18 = ((uVar23 << 0x11) >> 0x1e) + 1;
    }
    *puVar16 = *puVar16 | 0x10000;
    bVar26 = (uVar23 & 0x400) == 0;
    uVar2 = uVar23;
    if (bVar26) {
      uVar2 = *(uint *)(iVar13 + 0x2c);
    }
    iVar21 = uVar18 * param_7;
    if (bVar26) {
      iVar13 = iVar13 + 0x1b4;
    }
    else {
      uVar2 = *(uint *)(iVar13 + 0x1c0);
      iVar13 = iVar13 + 0x348;
    }
    if (0 < iVar21) {
      uVar9 = param_7 & uVar18 & 1;
      if (uVar9 == 1) {
        uVar14 = uVar18 * param_4 + (uVar23 >> 0x18);
        uVar24 = uVar14 >> 5;
        *(uint *)(iVar13 + uVar24 * 4) = *(uint *)(iVar13 + uVar24 * 4) | 1 << (uVar14 & 0x1f);
      }
      uVar24 = (uint)(uVar9 == 1);
      if (iVar21 - uVar9 != 0 && (int)uVar9 <= iVar21) {
        do {
          uVar9 = uVar9 + 2;
          uVar25 = uVar18 * param_4 + uVar24 + (uVar23 >> 0x18);
          uVar14 = uVar25 >> 5;
          *(uint *)(iVar13 + uVar14 * 4) = *(uint *)(iVar13 + uVar14 * 4) | 1 << (uVar25 & 0x1f);
          uVar25 = uVar18 * param_4 + uVar24 + 1 + (uVar23 >> 0x18);
          uVar24 = uVar24 + 2;
          uVar14 = uVar25 >> 5;
          *(uint *)(iVar13 + uVar14 * 4) = *(uint *)(iVar13 + uVar14 * 4) | 1 << (uVar25 & 0x1f);
        } while (iVar21 - uVar9 != 0 && (int)uVar9 <= iVar21);
      }
    }
    iVar13 = (int)param_6 >> 1;
    if (param_9 != 0) {
      iVar21 = 0;
      if ((int)param_7 < 1) {
        return;
      }
      do {
        iVar15 = 0;
        if (0 < (int)param_6) {
          do {
            iVar4 = (iVar21 * param_6 + iVar15) * param_6;
            if (param_8 == 0) {
              pfVar5 = param_5 + iVar4;
              pfVar11 = (float *)(uVar2 + (uVar18 * (param_4 + iVar21) + iVar15 + (uVar23 >> 0x18))
                                          * 0x10 + (4 - ((uVar23 << 0x13) >> 0x1e)) * 4);
              pfVar3 = pfVar5 + -1;
              if ((param_6 & 1) != 0) {
                pfVar11 = pfVar11 + -1;
                *pfVar11 = *pfVar5;
                pfVar3 = pfVar5;
              }
              fVar27 = pfVar3[1];
              for (iVar4 = iVar13; 0 < iVar4; iVar4 = iVar4 + -1) {
                fVar30 = pfVar3[2];
                pfVar11[-1] = fVar27;
                fVar27 = pfVar3[3];
                pfVar11 = pfVar11 + -2;
                *pfVar11 = fVar30;
                pfVar3 = pfVar3 + 2;
              }
            }
            else {
              pfVar5 = param_5 + iVar4;
              pfVar10 = (float *)(uVar2 + ((param_4 + iVar21) * uVar18 + (uVar23 >> 0x18)) * 0x10 +
                                 ((3 - iVar15) - ((uVar23 << 0x13) >> 0x1e)) * 4);
              pfVar3 = pfVar5 + -1;
              pfVar11 = pfVar10 + -4;
              if ((param_6 & 1) != 0) {
                *pfVar10 = *pfVar5;
                pfVar3 = pfVar5;
                pfVar11 = pfVar10;
              }
              fVar27 = pfVar3[1];
              for (iVar4 = iVar13; 0 < iVar4; iVar4 = iVar4 + -1) {
                fVar30 = pfVar3[2];
                pfVar11[4] = fVar27;
                fVar27 = pfVar3[3];
                pfVar11 = pfVar11 + 8;
                *pfVar11 = fVar30;
                pfVar3 = pfVar3 + 2;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)param_6);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)param_7);
      return;
    }
    iVar15 = 0;
    iVar21 = 0;
    if ((int)param_7 < 1) {
      return;
    }
    do {
      if (0 < (int)param_6) {
        pfVar5 = param_5 + iVar15;
        pfVar11 = (float *)(uVar2 + (param_4 + (uVar23 >> 0x18) + iVar21) * 0x10 +
                           (4 - ((uVar23 << 0x13) >> 0x1e)) * 4);
        pfVar3 = pfVar5 + -1;
        if ((param_6 & 1) != 0) {
          pfVar11 = pfVar11 + -1;
          *pfVar11 = *pfVar5;
          pfVar3 = pfVar5;
        }
        fVar27 = pfVar3[1];
        for (iVar4 = iVar13; iVar4 != 0; iVar4 = iVar4 + -1) {
          fVar30 = pfVar3[2];
          pfVar11[-1] = fVar27;
          fVar27 = pfVar3[3];
          pfVar11 = pfVar11 + -2;
          *pfVar11 = fVar30;
          pfVar3 = pfVar3 + 2;
        }
      }
      iVar21 = iVar21 + 1;
      iVar15 = iVar15 + param_6;
    } while (iVar21 < (int)param_7);
    return;
  }
  uVar18 = uVar23 >> 0x10;
  iVar21 = *(int *)(DAT_002c8aa0 + 8);
  if (uVar18 == 100) {
switchD_002c87b8_caseD_61:
    iVar15 = (uVar23 >> 0x10) - 0x61;
    fVar27 = *param_5;
    iVar21 = 2;
    pfVar3 = param_5 + -1;
    pfVar11 = (float *)(iVar13 + iVar15 * 0x70 + 0x9e0);
    do {
      fVar35 = pfVar3[2];
      pfVar11[1] = fVar27;
      fVar27 = pfVar3[3];
      iVar21 = iVar21 + -1;
      pfVar11[2] = fVar35;
      pfVar3 = pfVar3 + 2;
      pfVar11 = pfVar11 + 2;
    } while (iVar21 != 0);
    fVar27 = *param_5;
    fVar35 = param_5[1];
    uVar23 = 0;
    if (ABS(fVar27) != 0.0) {
      uVar23 = (int)fVar27 << 1;
    }
    if (ABS(fVar27) != 0.0) {
      uVar23 = (uVar23 >> 0x18) - 0x70;
    }
    if ((int)uVar23 < 0) {
      uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
    }
    else {
      uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
    }
    uVar18 = 0;
    if (ABS(fVar35) != 0.0) {
      uVar18 = (int)fVar35 << 1;
    }
    if (ABS(fVar35) != 0.0) {
      uVar18 = (uVar18 >> 0x18) - 0x70;
    }
    if ((int)uVar18 < 0) {
      uVar18 = ((uint)fVar35 >> 0x1f) << 0xf;
    }
    else {
      uVar18 = (uint)((int)fVar35 << 9) >> 0x16 | uVar18 << 10 | ((uint)fVar35 >> 0x1f) << 0xf;
    }
    iVar21 = iVar15 * 0xb;
    iVar4 = iVar21 + iVar13;
    *(byte *)(iVar4 + 0x456) = *(byte *)(iVar4 + 0x456) | 0xf;
    if ((char)puVar16[3] == '\0') {
      iVar17 = iVar13 + iVar15 * 0x2c;
      uVar23 = uVar23 | uVar18 << 0x10;
      if (*(uint *)(iVar17 + 0x634) != uVar23) {
        *(uint *)(iVar17 + 0x634) = uVar23;
        iVar17 = iVar13 + ((int)(iVar21 + 0x60U) >> 5) * 4;
        *(uint *)(iVar17 + 0x7a8) = *(uint *)(iVar17 + 0x7a8) | 1 << (iVar21 + 0x60U & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
      }
    }
    else {
      iVar17 = iVar13 + iVar15 * 0x2c;
      *(uint *)(iVar17 + 0x634) = uVar23 | uVar18 << 0x10;
      iVar20 = iVar13 + ((int)(iVar21 + 0x60U) >> 5) * 4;
      *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 1 << (iVar21 + 0x60U & 0x1f);
      *puVar16 = *puVar16 | 0x80000;
      piVar19[iVar15 * 0xb + 0x463] = ~*(uint *)(iVar17 + 0x634);
    }
    fVar27 = param_5[2];
    uVar23 = 0;
    if (ABS(fVar27) != 0.0) {
      uVar23 = (int)fVar27 << 1;
    }
    if (ABS(fVar27) != 0.0) {
      uVar23 = (uVar23 >> 0x18) - 0x70;
    }
    if ((int)uVar23 < 0) {
      uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
    }
    else {
      uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
    }
    *(byte *)(iVar4 + 0x457) = *(byte *)(iVar4 + 0x457) | 0xf;
    iVar17 = iVar13 + iVar15 * 0x2c;
    if ((char)puVar16[3] == '\0') {
      if (*(uint *)(iVar17 + 0x638) != uVar23) {
        *(uint *)(iVar17 + 0x638) = uVar23;
        iVar17 = iVar13 + ((int)(iVar21 + 0x61U) >> 5) * 4;
        *(uint *)(iVar17 + 0x7a8) = *(uint *)(iVar17 + 0x7a8) | 1 << (iVar21 + 0x61U & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
      }
    }
    else {
      *(uint *)(iVar17 + 0x638) = uVar23;
      iVar20 = iVar13 + ((int)(iVar21 + 0x61U) >> 5) * 4;
      *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 1 << (iVar21 + 0x61U & 0x1f);
      *puVar16 = *puVar16 | 0x80000;
      piVar19[iVar15 * 0xb + 0x464] = ~*(uint *)(iVar17 + 0x638);
    }
    *(byte *)(iVar4 + 0x45a) = *(byte *)(iVar4 + 0x45a) | 1;
    if ((char)puVar16[3] != '\0') {
      iVar4 = iVar13 + iVar15 * 0x2c;
      *(uint *)(iVar4 + 0x644) =
           (uint)(param_5[3] == fVar30) | *(uint *)(iVar4 + 0x644) & 0xfffffffe;
      iVar13 = iVar13 + ((int)(iVar21 + 100U) >> 5) * 4;
      *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 100U & 0x1f);
      *puVar16 = *puVar16 | 0x80000;
      piVar19[iVar15 * 0xb + 0x467] = ~*(uint *)(iVar4 + 0x644);
      return;
    }
    iVar15 = iVar13 + iVar15 * 0x2c;
    uVar23 = *(uint *)(iVar15 + 0x644);
    if ((uVar23 & 1) != (uint)(param_5[3] == fVar30)) {
      *(uint *)(iVar15 + 0x644) = (uint)(param_5[3] == fVar30) | uVar23 & 0xfffffffe;
      iVar13 = iVar13 + ((int)(iVar21 + 100U) >> 5) * 4;
      *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 100U & 0x1f);
      *puVar16 = *puVar16 | 0x80000;
      return;
    }
  }
  else {
    if (100 < uVar18) {
      if (uVar18 == 0xb0) {
switchD_002c89e8_caseD_a9:
        iVar21 = (uVar23 >> 0x10) - 0xa9;
        *(float *)(iVar13 + iVar21 * 0x70 + 0xa08) = *param_5;
        fVar27 = *param_5;
        uVar23 = 0;
        if (ABS(fVar27) != 0.0) {
          uVar23 = (int)fVar27 << 1;
        }
        if (ABS(fVar27) != 0.0) {
          uVar23 = (uVar23 >> 0x18) - 0x40;
        }
        if ((int)uVar23 < 0) {
          uVar23 = ((uint)fVar27 >> 0x1f) << 0x13;
        }
        else {
          uVar23 = (uint)((int)fVar27 << 9) >> 0x14 | uVar23 << 0xc | ((uint)fVar27 >> 0x1f) << 0x13
          ;
        }
        iVar15 = iVar21 * 0xb + iVar13;
        *(byte *)(iVar15 + 0x45c) = *(byte *)(iVar15 + 0x45c) | 7;
        uVar18 = iVar21 * 0xb + 0x66;
        iVar15 = (int)uVar18 >> 5;
        uVar18 = 1 << (uVar18 & 0x1f);
        iVar4 = iVar13 + iVar21 * 0x2c;
        if ((char)puVar16[3] == '\0') {
          if ((*(uint *)(iVar4 + 0x64c) & 0xfffff) == (uVar23 & 0xfffff)) {
            return;
          }
          *(uint *)(iVar4 + 0x64c) = *(uint *)(iVar4 + 0x64c) & 0xfff00000 | uVar23 & 0xfffff;
          iVar13 = iVar13 + iVar15 * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
        *(uint *)(iVar4 + 0x64c) = uVar23 & 0xfffff | *(uint *)(iVar4 + 0x64c) & 0xfff00000;
        iVar13 = iVar13 + iVar15 * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
        *puVar16 = *puVar16 | 0x80000;
        piVar19[iVar21 * 0xb + 0x469] = ~*(uint *)(iVar4 + 0x64c);
        return;
      }
      if (0xb0 < uVar18) {
        if (uVar18 == 0x114) {
switchD_002c8b8c_caseD_115:
          iVar15 = (int)*param_5;
          iVar21 = DAT_002cc954 + (uVar23 >> 0x10);
          if (iVar15 == 1) {
            iVar15 = 0;
          }
          else if (iVar15 == 2) {
            iVar15 = 1;
          }
          else {
            if (iVar15 != 4) {
              return;
            }
            iVar15 = 2;
          }
          iVar4 = iVar21 * 5 + iVar13;
          *(byte *)(iVar4 + 0x42c) = *(byte *)(iVar4 + 0x42c) | 4;
          uVar23 = iVar21 * 5 + 0x36;
          iVar4 = (int)uVar23 >> 5;
          uVar23 = 1 << (uVar23 & 0x1f);
          iVar17 = iVar13 + iVar21 * 0x14;
          if ((char)puVar16[3] == '\0') {
            if ((*(uint *)(iVar17 + 0x58c) & 0x30000) == iVar15 * 0x10000) {
              return;
            }
            *(uint *)(iVar17 + 0x58c) = iVar15 * 0x10000 | *(uint *)(iVar17 + 0x58c) & 0xfffcffff;
            iVar13 = iVar13 + iVar4 * 4;
            *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar23;
            *puVar16 = *puVar16 | 0x80000;
            return;
          }
          *(uint *)(iVar17 + 0x58c) = iVar15 << 0x10 | *(uint *)(iVar17 + 0x58c) & 0xfffcffff;
          iVar13 = iVar13 + iVar4 * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar23;
          *puVar16 = *puVar16 | 0x80000;
          piVar19[iVar21 * 5 + 0x439] = ~*(uint *)(iVar17 + 0x58c);
          return;
        }
        if (0x114 < uVar18) {
          switch(uVar18) {
          case 0x115:
          case 0x116:
          case 0x117:
          case 0x118:
          case 0x119:
            goto switchD_002c8b8c_caseD_115;
          case 0x11a:
          case 0x11b:
          case 0x11c:
          case 0x11d:
          case 0x11e:
          case 0x11f:
            fVar27 = *param_5;
            iVar21 = 2;
            iVar15 = DAT_002cc958 + (uVar23 >> 0x10);
            pfVar3 = param_5 + -1;
            pfVar11 = (float *)(iVar13 + iVar15 * 0x10 + 0xe28);
            do {
              fVar30 = pfVar3[2];
              pfVar11[1] = fVar27;
              fVar27 = pfVar3[3];
              iVar21 = iVar21 + -1;
              pfVar11[2] = fVar30;
              pfVar3 = pfVar3 + 2;
              pfVar11 = pfVar11 + 2;
            } while (iVar21 != 0);
            iVar21 = iVar15 * 5;
            *(byte *)(iVar21 + iVar13 + 0x42b) = *(byte *)(iVar21 + iVar13 + 0x42b) | 0xf;
            if ((char)puVar16[3] == '\0') {
              uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
              iVar4 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
              iVar17 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
              iVar20 = VectorFloatToUnsigned(DAT_002cc960 + param_5[3] * DAT_002cc95c,3);
              iVar15 = iVar13 + iVar15 * 0x14;
              if ((uVar23 | iVar4 << 8 | iVar17 << 0x10 | iVar20 << 0x18) ==
                  *(uint *)(iVar15 + 0x588)) {
                return;
              }
              *(uint *)(iVar15 + 0x588) = uVar23 | iVar4 << 8 | iVar17 << 0x10 | iVar20 << 0x18;
              iVar13 = iVar13 + ((int)(iVar21 + 0x35U) >> 5) * 4;
              *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x35U & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
              return;
            }
            uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
            iVar20 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
            iVar12 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
            iVar17 = VectorFloatToUnsigned(DAT_002cc960 + param_5[3] * DAT_002cc95c,3);
            iVar4 = iVar13 + iVar15 * 0x14;
            *(uint *)(iVar4 + 0x588) = uVar23 | iVar20 << 8 | iVar12 << 0x10 | iVar17 << 0x18;
            iVar13 = iVar13 + ((int)(iVar21 + 0x35U) >> 5) * 4;
            *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x35U & 0x1f);
            *puVar16 = *puVar16 | 0x80000;
            piVar19[iVar15 * 5 + 0x438] = ~*(uint *)(iVar4 + 0x588);
            return;
          case 0x120:
            fVar27 = *param_5;
            iVar15 = 2;
            pfVar3 = param_5 + -1;
            pfVar11 = (float *)(iVar13 + 0xe88);
            do {
              fVar30 = pfVar3[2];
              pfVar11[1] = fVar27;
              fVar27 = pfVar3[3];
              iVar15 = iVar15 + -1;
              pfVar11[2] = fVar30;
              pfVar3 = pfVar3 + 2;
              pfVar11 = pfVar11 + 2;
            } while (iVar15 != 0);
            *(byte *)(iVar13 + 0x44a) = *(byte *)(iVar13 + 0x44a) | 0xf;
            if ((char)puVar16[3] == '\0') {
              uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
              iVar4 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
              iVar21 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
              iVar15 = VectorFloatToUnsigned(DAT_002cc960 + param_5[3] * DAT_002cc95c,3);
              if ((uVar23 | iVar4 << 8 | iVar21 << 0x10 | iVar15 << 0x18) ==
                  *(uint *)(iVar13 + 0x604)) {
                return;
              }
              *(uint *)(iVar13 + 0x604) = uVar23 | iVar4 << 8 | iVar21 << 0x10 | iVar15 << 0x18;
              *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x100000;
              *puVar16 = *puVar16 | 0x80000;
              return;
            }
            uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
            iVar4 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
            iVar17 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
            iVar15 = VectorFloatToUnsigned(DAT_002cc960 + param_5[3] * DAT_002cc95c,3);
            *(uint *)(iVar13 + 0x604) = uVar23 | iVar4 << 8 | iVar17 << 0x10 | iVar15 << 0x18;
            *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x100000;
            *puVar16 = *puVar16 | 0x80000;
            *(uint *)(iVar21 + 0x115c) = ~*(uint *)(iVar13 + 0x604);
            return;
          default:
            return;
          case 0x126:
            *(float *)(iVar13 + 0xde8) = *param_5;
            *(float *)(iVar13 + 0xdec) = param_5[1];
            *(float *)(iVar13 + 0xdf0) = param_5[2];
            *(byte *)(iVar13 + 0x447) = *(byte *)(iVar13 + 0x447) | 0xf;
            if ((char)puVar16[3] != '\0') {
              uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
              iVar4 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
              iVar15 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
              *(uint *)(iVar13 + 0x5f8) = uVar23 | iVar4 << 8 | iVar15 << 0x10;
              *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x20000;
              *puVar16 = *puVar16 | 0x80000;
              *(uint *)(iVar21 + 0x1150) = ~*(uint *)(iVar13 + 0x5f8);
              return;
            }
            uVar23 = VectorFloatToUnsigned(DAT_002cc960 + *param_5 * DAT_002cc95c,3);
            iVar21 = VectorFloatToUnsigned(DAT_002cc960 + param_5[1] * DAT_002cc95c,3);
            iVar15 = VectorFloatToUnsigned(DAT_002cc960 + param_5[2] * DAT_002cc95c,3);
            if ((uVar23 | iVar21 << 8 | iVar15 << 0x10) == *(uint *)(iVar13 + 0x5f8)) {
              return;
            }
            *(uint *)(iVar13 + 0x5f8) = uVar23 | iVar21 << 8 | iVar15 << 0x10;
            *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x20000;
            *puVar16 = *puVar16 | 0x80000;
            return;
          }
        }
        if (uVar18 != 0xd5) {
          if (0xd5 < uVar18) {
            if (5 < uVar18 - 0x10e) {
              return;
            }
            iVar15 = (int)*param_5;
            iVar21 = DAT_002c8ef8 + (uVar23 >> 0x10);
            if (iVar15 == 1) {
              uVar23 = 0;
            }
            else if (iVar15 == 2) {
              uVar23 = 1;
            }
            else {
              if (iVar15 != 4) {
                return;
              }
              uVar23 = 2;
            }
            iVar15 = iVar21 * 5 + iVar13;
            *(byte *)(iVar15 + 0x42c) = *(byte *)(iVar15 + 0x42c) | 1;
            uVar18 = iVar21 * 5 + 0x36;
            iVar15 = (int)uVar18 >> 5;
            uVar18 = 1 << (uVar18 & 0x1f);
            iVar4 = iVar13 + iVar21 * 0x14;
            if ((char)puVar16[3] == '\0') {
              if ((*(uint *)(iVar4 + 0x58c) & 3) == uVar23) {
                return;
              }
              *(uint *)(iVar4 + 0x58c) = uVar23 | *(uint *)(iVar4 + 0x58c) & 0xfffffffc;
              iVar13 = iVar13 + iVar15 * 4;
              *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
              *puVar16 = *puVar16 | 0x80000;
              return;
            }
            *(uint *)(iVar4 + 0x58c) = *(uint *)(iVar4 + 0x58c) & 0xfffffffc | uVar23;
            iVar13 = iVar13 + iVar15 * 4;
            *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
            *puVar16 = *puVar16 | 0x80000;
            piVar19[iVar21 * 5 + 0x439] = ~*(uint *)(iVar4 + 0x58c);
            return;
          }
          if (5 < uVar18 - 0xcf) {
            return;
          }
        }
        iVar15 = (int)(*param_5 * DAT_002c8ab0);
        if (iVar15 == 8) {
          iVar15 = 1;
        }
        else if (iVar15 < 9) {
          if (iVar15 == 1) {
            iVar15 = 6;
          }
          else if (iVar15 == 2) {
            iVar15 = 7;
          }
          else {
            if (iVar15 != 4) {
              return;
            }
            iVar15 = 0;
          }
        }
        else if (iVar15 == 0x10) {
          iVar15 = 2;
        }
        else {
          if (iVar15 != 0x20) {
            return;
          }
          iVar15 = 3;
        }
        uVar18 = uVar18 * 4 - 0x33c;
        uVar23 = 0xf << (uVar18 & 0xff);
        bVar6 = (byte)uVar23;
        if ((uVar23 & 0xff) != 0) {
          bVar6 = 1;
        }
        bVar22 = 0;
        if ((uVar23 & 0xff00) != 0) {
          bVar22 = 2;
        }
        bVar7 = 0;
        if ((uVar23 & 0xff0000) != 0) {
          bVar7 = 4;
        }
        bVar8 = 0;
        if ((uVar23 & 0xff000000) != 0) {
          bVar8 = 8;
        }
        *(byte *)(iVar13 + 0x4b1) = bVar8 | bVar22 | bVar6 | bVar7 | *(byte *)(iVar13 + 0x4b1);
        uVar2 = *(uint *)(iVar13 + 0x7a0);
        uVar18 = iVar15 << (uVar18 & 0xff);
        if ((char)puVar16[3] == '\0') {
          if ((uVar2 & uVar23) == uVar18) {
            return;
          }
          *(uint *)(iVar13 + 0x7a0) = uVar18 | uVar2 & ~uVar23;
          *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x8000000;
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
        *(uint *)(iVar13 + 0x7a0) = uVar18 | uVar2 & ~uVar23;
        *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x8000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x12f8) = ~*(uint *)(iVar13 + 0x7a0);
        return;
      }
      if (uVar18 == 0xa2) {
switchD_002c89e8_caseD_a3:
        iVar21 = (uVar23 >> 0x10) - 0xa1;
        *(float *)(iVar13 + iVar21 * 0x70 + 0xa04) = *param_5;
        fVar27 = *param_5;
        uVar23 = 0;
        if (ABS(fVar27) != 0.0) {
          uVar23 = (int)fVar27 << 1;
        }
        if (ABS(fVar27) != 0.0) {
          uVar23 = (uVar23 >> 0x18) - 0x40;
        }
        if ((int)uVar23 < 0) {
          uVar23 = ((uint)fVar27 >> 0x1f) << 0x13;
        }
        else {
          uVar23 = (uint)((int)fVar27 << 9) >> 0x14 | uVar23 << 0xc | ((uint)fVar27 >> 0x1f) << 0x13
          ;
        }
        iVar15 = iVar21 * 0xb + iVar13;
        *(byte *)(iVar15 + 0x45b) = *(byte *)(iVar15 + 0x45b) | 7;
        uVar18 = iVar21 * 0xb + 0x65;
        iVar15 = (int)uVar18 >> 5;
        uVar18 = 1 << (uVar18 & 0x1f);
        iVar4 = iVar13 + iVar21 * 0x2c;
        if ((char)puVar16[3] == '\0') {
          if ((*(uint *)(iVar4 + 0x648) & 0xfffff) == (uVar23 & 0xfffff)) {
            return;
          }
          *(uint *)(iVar4 + 0x648) = uVar23 & 0xfffff | *(uint *)(iVar4 + 0x648) & 0xfff00000;
          iVar13 = iVar13 + iVar15 * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
        *(uint *)(iVar4 + 0x648) = uVar23 & 0xfffff | *(uint *)(iVar4 + 0x648) & 0xfff00000;
        iVar13 = iVar13 + iVar15 * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar18;
        *puVar16 = *puVar16 | 0x80000;
        piVar19[iVar21 * 0xb + 0x468] = ~*(uint *)(iVar4 + 0x648);
        return;
      }
      if (0xa2 < uVar18) {
        switch(uVar18) {
        case 0xa3:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa7:
        case 0xa8:
          goto switchD_002c89e8_caseD_a3;
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xaf:
          goto switchD_002c89e8_caseD_a9;
        default:
          return;
        }
      }
      if (uVar18 != 0x6b) {
        if (uVar18 < 0x6c) {
          switch(uVar18) {
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
            goto switchD_002c87b8_caseD_61;
          case 0x69:
          case 0x6a:
            goto switchD_002c8988_caseD_69;
          default:
            return;
          }
        }
        if (uVar18 != 0x6f) {
          if (uVar18 < 0x70) {
            if ((uVar18 != 0x6c && uVar18 != 0x6d) && uVar18 != 0x6e) {
              return;
            }
          }
          else if (uVar18 != 0x70) {
            if (uVar18 != 0xa1) {
              return;
            }
            goto switchD_002c89e8_caseD_a3;
          }
        }
      }
switchD_002c8988_caseD_69:
      iVar21 = (uVar23 >> 0x10) - 0x69;
      iVar15 = iVar13 + iVar21 * 0x70;
      *(float *)(iVar15 + 0x9f4) = *param_5;
      *(float *)(iVar15 + 0x9f8) = param_5[1];
      *(float *)(iVar15 + 0x9fc) = param_5[2];
      fVar29 = DAT_002cc234;
      fVar36 = -*param_5;
      if (fVar36 == fVar30 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
        uVar23 = 0;
      }
      else {
        fVar37 = (fVar36 + DAT_002cc234) * fVar35;
        fVar36 = fVar30;
        if ((fVar30 <= fVar37) && (fVar36 = fVar37, 0x45ffffff < (int)fVar37)) {
          fVar36 = fVar28;
        }
        if ((int)fVar36 < DAT_002cc240) {
          uVar23 = VectorFloatToUnsigned(fVar36 + fVar27,3);
        }
        else {
          uVar23 = VectorFloatToUnsigned(fVar36 - fVar27,3);
        }
      }
      fVar36 = -param_5[1];
      if (fVar36 == fVar30 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
        iVar15 = 0;
      }
      else {
        fVar37 = (fVar36 + DAT_002cc234) * fVar35;
        fVar36 = fVar30;
        if ((fVar30 <= fVar37) && (fVar36 = fVar37, 0x45ffffff < (int)fVar37)) {
          fVar36 = fVar28;
        }
        if ((int)fVar36 < DAT_002cc240) {
          iVar15 = VectorFloatToUnsigned(fVar36 + fVar27,3);
        }
        else {
          iVar15 = VectorFloatToUnsigned(fVar36 - fVar27,3);
        }
      }
      iVar17 = iVar21 * 0xb + iVar13;
      uVar18 = iVar21 * 0xb + 0x62;
      *(byte *)(iVar17 + 0x458) = *(byte *)(iVar17 + 0x458) | 0xf;
      iVar4 = (int)uVar18 >> 5;
      uVar18 = 1 << (uVar18 & 0x1f);
      iVar20 = *(int *)(DAT_002cc244 + 8) + iVar21 * 0x2c;
      if ((char)puVar16[3] == '\0') {
        iVar12 = iVar13 + iVar21 * 0x2c;
        uVar23 = uVar23 | iVar15 << 0x10;
        if (*(uint *)(iVar12 + 0x63c) != uVar23) {
          *(uint *)(iVar12 + 0x63c) = uVar23;
          iVar15 = iVar13 + iVar4 * 4;
          *(uint *)(iVar15 + 0x7a8) = *(uint *)(iVar15 + 0x7a8) | uVar18;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        iVar12 = iVar13 + iVar21 * 0x2c;
        *(uint *)(iVar12 + 0x63c) = uVar23 | iVar15 << 0x10;
        iVar15 = iVar13 + iVar4 * 4;
        *(uint *)(iVar15 + 0x7a8) = *(uint *)(iVar15 + 0x7a8) | uVar18;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar20 + 0x1194) = ~*(uint *)(iVar12 + 0x63c);
      }
      fVar36 = -param_5[2];
      if (fVar36 == fVar30 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
        iVar15 = 0;
      }
      else {
        fVar35 = (fVar36 + fVar29) * fVar35;
        if ((fVar30 <= fVar35) && (fVar30 = fVar35, 0x45ffffff < (int)fVar35)) {
          fVar30 = fVar28;
        }
        if ((int)fVar30 < DAT_002cc240) {
          iVar15 = VectorFloatToUnsigned(fVar30 + fVar27,3);
        }
        else {
          iVar15 = VectorFloatToUnsigned(fVar30 - fVar27,3);
        }
      }
      iVar4 = iVar13 + iVar21 * 0x2c;
      *(byte *)(iVar17 + 0x459) = *(byte *)(iVar17 + 0x459) | 0xf;
      uVar23 = (((param_4 << 0xe) >> 0x10) - 0x69) * 0xb + 99;
      iVar21 = (int)uVar23 >> 5;
      uVar23 = 1 << (uVar23 & 0x1f);
      if ((char)puVar16[3] == '\0') {
        if (*(int *)(iVar4 + 0x640) == iVar15) {
          return;
        }
        iVar13 = iVar13 + iVar21 * 4;
        *(int *)(iVar4 + 0x640) = iVar15;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar23;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      iVar13 = iVar13 + iVar21 * 4;
      *(int *)(iVar4 + 0x640) = iVar15;
      *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | uVar23;
      *puVar16 = *puVar16 | 0x80000;
      *(uint *)(iVar20 + 0x1198) = ~*(uint *)(iVar4 + 0x640);
      return;
    }
    switch(uVar18) {
    case 1:
      *(float *)(iVar13 + 0xdc4) = *param_5;
      fVar27 = *param_5;
      if ((fVar27 <= fVar30) || ((uint)((int)fVar27 << 1) >> 0x18 == 0xff)) {
        uVar23 = 0;
      }
      else if ((int)(fVar27 * DAT_002c8efc) < DAT_002c8f00) {
        uVar23 = VectorFloatToUnsigned(fVar27 * DAT_002c8efc,3);
      }
      else {
        uVar23 = 0xffffff;
      }
      *(byte *)(iVar13 + 0x420) = *(byte *)(iVar13 + 0x420) | 7;
      uVar18 = *(uint *)(iVar13 + 0x55c);
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x55c) = uVar23 & ~DAT_002c8f04 | uVar18 & DAT_002c8f04;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x400;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10b4) = ~*(uint *)(iVar13 + 0x55c);
        return;
      }
      if ((uVar18 & 0xfffffe) != (uVar23 & 0xfffffe)) {
        *(uint *)(iVar13 + 0x55c) = uVar23 & 0xfffffe | uVar18 & DAT_002c8f04;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x400;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 2:
      *(float *)(iVar13 + 0xdc8) = *param_5;
      fVar27 = *param_5;
      *(byte *)(iVar13 + 0x420) = *(byte *)(iVar13 + 0x420) | 8;
      uVar18 = *(uint *)(iVar13 + 0x55c);
      uVar23 = (((uint)fVar27 >> 0x17) - 0x7f) * 0x1000000;
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x55c) = uVar23 | uVar18 & 0xffffff;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x400;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10b4) = ~*(uint *)(iVar13 + 0x55c);
        return;
      }
      if ((uVar18 & 0xff000000) != uVar23) {
        *(uint *)(iVar13 + 0x55c) = uVar23 | uVar18 & 0xffffff;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x400;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x13:
      *(float *)(iVar13 + 0xd90) = *param_5;
      fVar27 = *param_5;
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      uVar2 = (uVar23 & 0xff) * 0x100000;
      *(byte *)(iVar13 + 0x422) = *(byte *)(iVar13 + 0x422) | 0xc;
      uVar18 = *(uint *)(iVar13 + 0x564);
      if ((char)puVar16[3] == '\0') {
        if ((uVar18 & 0xff00000) != uVar2) {
          *(uint *)(iVar13 + 0x564) = uVar18 & 0xf00fffff | uVar2;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x1000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x564) = uVar18 & 0xf00fffff | uVar2;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x1000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10bc) = ~*(uint *)(iVar13 + 0x564);
      }
      *(byte *)(iVar13 + 0x426) = *(byte *)(iVar13 + 0x426) | 0xc;
      uVar18 = *(uint *)(iVar13 + 0x574);
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x574) = (uVar23 >> 8 & 0xff) << 0x13 | uVar18 & 0xf807ffff;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x10000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10cc) = ~*(uint *)(iVar13 + 0x574);
        return;
      }
      uVar23 = (uVar23 >> 8 & 0xff) * 0x80000;
      if ((DAT_002c8f08 & uVar18) != uVar23) {
        *(uint *)(iVar13 + 0x574) = uVar23 | uVar18 & 0xf807ffff;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x10000;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x15:
      fVar27 = param_5[1];
      fVar30 = param_5[2];
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      if (fVar30 == DAT_002c8aac || (uint)((int)fVar30 << 1) >> 0x18 == 0xff) {
        uVar18 = 0;
      }
      else {
        fVar30 = (fVar30 + DAT_002c9288) * DAT_002c8aa8;
        fVar27 = DAT_002c8aac;
        if ((DAT_002c8aac <= fVar30) && (fVar27 = fVar30, DAT_002c928c <= (int)fVar30)) {
          fVar27 = DAT_002c9290;
        }
        if ((int)fVar27 < 0x47000000) {
          fVar27 = fVar27 + DAT_002c9294;
        }
        else {
          fVar27 = fVar27 - DAT_002c9294;
        }
        uVar18 = VectorFloatToUnsigned(fVar27,3);
      }
      *(byte *)(iVar13 + 0x423) = *(byte *)(iVar13 + 0x423) | 0xf;
      if ((char)puVar16[3] == '\0') {
        uVar18 = uVar18 | uVar23 << 0x10;
        if (*(uint *)(iVar13 + 0x568) != uVar18) {
          *(uint *)(iVar13 + 0x568) = uVar18;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x2000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x568) = uVar18 | uVar23 << 0x10;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x2000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10c0) = ~*(uint *)(iVar13 + 0x568);
      }
      fVar27 = *param_5;
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x425) = *(byte *)(iVar13 + 0x425) | 3;
      uVar18 = *(uint *)(iVar13 + 0x570);
      if ((char)puVar16[3] == '\0') {
        if ((uVar18 & 0xffff) != (uVar23 & 0xffff)) {
          *(uint *)(iVar13 + 0x570) = (uVar23 & 0xffff) + (uVar18 & 0xffff0000);
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x8000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x570) = (uVar23 & 0xffff) + (uVar18 & 0xffff0000);
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x8000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10c8) = ~*(uint *)(iVar13 + 0x570);
      }
      *(float *)(iVar13 + 0xd94) = *param_5;
      *(float *)(iVar13 + 0xd98) = param_5[1];
      *(float *)(iVar13 + 0xd9c) = param_5[2];
      return;
    case 0x16:
      fVar27 = param_5[1];
      fVar30 = param_5[2];
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      if (fVar30 == DAT_002c8aac || (uint)((int)fVar30 << 1) >> 0x18 == 0xff) {
        uVar18 = 0;
      }
      else {
        fVar30 = (fVar30 + DAT_002c9288) * DAT_002c8aa8;
        fVar27 = DAT_002c8aac;
        if ((DAT_002c8aac <= fVar30) && (fVar27 = fVar30, DAT_002c928c <= (int)fVar30)) {
          fVar27 = DAT_002c9290;
        }
        if ((int)fVar27 < 0x47000000) {
          fVar27 = fVar27 + DAT_002c9294;
        }
        else {
          fVar27 = fVar27 - DAT_002c9294;
        }
        uVar18 = VectorFloatToUnsigned(fVar27,3);
      }
      *(byte *)(iVar13 + 0x424) = *(byte *)(iVar13 + 0x424) | 0xf;
      if ((char)puVar16[3] == '\0') {
        uVar18 = uVar18 | uVar23 << 0x10;
        if (*(uint *)(iVar13 + 0x56c) != uVar18) {
          *(uint *)(iVar13 + 0x56c) = uVar18;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x4000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x56c) = uVar18 | uVar23 << 0x10;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x4000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10c4) = ~*(uint *)(iVar13 + 0x56c);
      }
      fVar27 = *param_5;
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x425) = *(byte *)(iVar13 + 0x425) | 0xc;
      uVar18 = *(uint *)(iVar13 + 0x570);
      if ((char)puVar16[3] == '\0') {
        if ((uVar18 & 0xffff0000) != uVar23 * 0x10000) {
          *(uint *)(iVar13 + 0x570) = (uVar18 & 0xffff) + uVar23 * 0x10000;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x8000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x570) = (uVar18 & 0xffff) + uVar23 * 0x10000;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x8000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10c8) = ~*(uint *)(iVar13 + 0x570);
      }
      *(float *)(iVar13 + 0xda0) = *param_5;
      *(float *)(iVar13 + 0xda4) = param_5[1];
      *(float *)(iVar13 + 0xda8) = param_5[2];
      return;
    case 0x1f:
      *(float *)(iVar13 + 0xdc0) = *param_5;
      fVar30 = -*param_5;
      fVar27 = *(float *)(iVar13 + 0xdbc) + *param_5;
      uVar23 = 0;
      if (ABS(fVar30) != 0.0) {
        uVar23 = (int)fVar30 << 1;
      }
      if (ABS(fVar30) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar30 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar30 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar30 >> 0x1f) << 0xf;
      }
      uVar18 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar18 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar18 = (uVar18 >> 0x18) - 0x70;
      }
      if ((int)uVar18 < 0) {
        uVar18 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar18 = (uint)((int)fVar27 << 9) >> 0x16 | uVar18 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x451) = *(byte *)(iVar13 + 0x451) | 0xf;
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x620) = uVar18 | uVar23 << 0x10;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x8000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1178) = ~*(uint *)(iVar13 + 0x620);
        return;
      }
      uVar18 = uVar18 | uVar23 << 0x10;
      if (*(uint *)(iVar13 + 0x620) != uVar18) {
LAB_002c94a0:
        *(uint *)(iVar13 + 0x620) = uVar18;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x8000000;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x20:
      *(float *)(iVar13 + 0xdbc) = *param_5;
      fVar30 = -*(float *)(iVar13 + 0xdc0);
      fVar27 = *(float *)(iVar13 + 0xdc0) + *param_5;
      uVar23 = 0;
      if (ABS(fVar30) != 0.0) {
        uVar23 = (int)fVar30 << 1;
      }
      if (ABS(fVar30) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar30 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar30 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar30 >> 0x1f) << 0xf;
      }
      uVar18 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar18 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar18 = (uVar18 >> 0x18) - 0x70;
      }
      if ((int)uVar18 < 0) {
        uVar18 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar18 = (uint)((int)fVar27 << 9) >> 0x16 | uVar18 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x451) = *(byte *)(iVar13 + 0x451) | 0xf;
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x620) = uVar18 | uVar23 << 0x10;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x8000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1178) = ~*(uint *)(iVar13 + 0x620);
        return;
      }
      uVar18 = uVar18 | uVar23 << 0x10;
      if (*(uint *)(iVar13 + 0x620) != uVar18) goto LAB_002c94a0;
      break;
    case 0x21:
      *(byte *)(iVar13 + 0x41d) = *(byte *)(iVar13 + 0x41d) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x550) != (uint)(*param_5 == fVar30)) {
          *(uint *)(iVar13 + 0x550) = (uint)(*param_5 == fVar30);
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x80;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x550) = (uint)(*param_5 == fVar30);
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x80;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10a8) = ~*(uint *)(iVar13 + 0x550);
      }
      if (*param_5 == fVar30) {
        fVar27 = (float)puVar16[0x13] - (float)puVar16[0x14];
        fVar35 = (float)puVar16[0x13];
      }
      else {
        fVar27 = -*param_5;
        fVar35 = fVar30;
      }
      bVar26 = (char)puVar16[0x15] == '\0';
      if (!bVar26) {
        param_3 = (float)puVar16[0x11];
        bVar26 = param_3 == fVar30;
      }
      if (!bVar26) {
        fVar28 = DAT_002c9900;
        if (puVar16[0x16f] != 0) {
          fVar28 = DAT_002c9904;
        }
        fVar35 = fVar35 + param_3 * fVar28;
      }
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x40;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0x17;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x10 | uVar23 << 0x10 | ((uint)fVar27 >> 0x1f) << 0x17;
      }
      if (fVar35 == fVar30) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        if (ABS(fVar35) != 0.0) {
          uVar18 = (int)fVar35 << 1;
        }
        if (ABS(fVar35) != 0.0) {
          uVar18 = (uVar18 >> 0x18) - 0x40;
        }
        if ((int)uVar18 < 0) {
          uVar18 = ((uint)fVar35 >> 0x1f) << 0x17;
        }
        else {
          uVar18 = (uint)((int)fVar35 << 9) >> 0x10 | uVar18 << 0x10 |
                   ((uint)fVar35 >> 0x1f) << 0x17;
        }
      }
      *(byte *)(iVar13 + 0x40d) = *(byte *)(iVar13 + 0x40d) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x510) != uVar23) {
          *(uint *)(iVar13 + 0x510) = uVar23;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 0x800000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x510) = uVar23;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 0x800000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1068) = ~*(uint *)(iVar13 + 0x510);
      }
      *(byte *)(iVar13 + 0x40e) = *(byte *)(iVar13 + 0x40e) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x514) != uVar18) {
          *(uint *)(iVar13 + 0x514) = uVar18;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 0x1000000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x514) = uVar18;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 0x1000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x106c) = ~*(uint *)(iVar13 + 0x514);
      }
      *(float *)(iVar13 + 0xdcc) = *param_5;
      return;
    case 0x23:
      fVar27 = *param_5;
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x40;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0x17;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x10 | uVar23 << 0x10 | ((uint)fVar27 >> 0x1f) << 0x17;
      }
      *(byte *)(iVar13 + 0x418) = *(byte *)(iVar13 + 0x418) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x53c) != uVar23) {
          *(uint *)(iVar13 + 0x53c) = uVar23;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 4;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x53c) = uVar23;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 4;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1094) = ~*(uint *)(iVar13 + 0x53c);
      }
      fVar27 = param_5[1];
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x40;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0x17;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x10 | uVar23 << 0x10 | ((uint)fVar27 >> 0x1f) << 0x17;
      }
      *(byte *)(iVar13 + 0x419) = *(byte *)(iVar13 + 0x419) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x540) != uVar23) {
          *(uint *)(iVar13 + 0x540) = uVar23;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 8;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x540) = uVar23;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 8;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1098) = ~*(uint *)(iVar13 + 0x540);
      }
      fVar27 = param_5[2];
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x40;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0x17;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x10 | uVar23 << 0x10 | ((uint)fVar27 >> 0x1f) << 0x17;
      }
      *(byte *)(iVar13 + 0x41a) = *(byte *)(iVar13 + 0x41a) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x544) != uVar23) {
          *(uint *)(iVar13 + 0x544) = uVar23;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x10;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x544) = uVar23;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x10;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x109c) = ~*(uint *)(iVar13 + 0x544);
      }
      fVar27 = param_5[3];
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x40;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0x17;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x10 | uVar23 << 0x10 | ((uint)fVar27 >> 0x1f) << 0x17;
      }
      *(byte *)(iVar13 + 0x41b) = *(byte *)(iVar13 + 0x41b) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x548) != uVar23) {
          *(uint *)(iVar13 + 0x548) = uVar23;
          *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x20;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x548) = uVar23;
        *(uint *)(iVar13 + 0x7ac) = *(uint *)(iVar13 + 0x7ac) | 0x20;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x10a0) = ~*(uint *)(iVar13 + 0x548);
      }
      fVar27 = *param_5;
      iVar21 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + 0xdcc);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar21 = iVar21 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar21 != 0);
      return;
    case 0x26:
      *(float *)(iVar13 + 0xde0) = *param_5;
      fVar27 = DAT_002cce14 + *param_5 * fVar29;
      *(byte *)(iVar13 + 0x450) = *(byte *)(iVar13 + 0x450) | 2;
      uVar18 = *(uint *)(iVar13 + 0x61c);
      uVar23 = VectorFloatToUnsigned(fVar27,3);
      uVar23 = (uVar23 & 0xff) * 0x100;
      if ((char)puVar16[3] != '\0') {
        *(uint *)(iVar13 + 0x61c) = uVar23 | uVar18 & 0xffff00ff;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x4000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1174) = ~*(uint *)(iVar13 + 0x61c);
        return;
      }
      if ((uVar18 & 0xff00) != uVar23) {
        *(uint *)(iVar13 + 0x61c) = uVar23 | uVar18 & 0xffff00ff;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x4000000;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x27:
      *(byte *)(iVar13 + 1099) = *(byte *)(iVar13 + 1099) | 7;
      if ((char)puVar16[3] == '\0') {
        uVar23 = VectorFloatToUnsigned(DAT_002c990c + *param_5 * DAT_002c9908,3);
        iVar21 = VectorFloatToUnsigned(DAT_002c990c + param_5[1] * DAT_002c9908,3);
        iVar15 = VectorFloatToUnsigned(DAT_002c990c + param_5[2] * DAT_002c9908,3);
        if (((uVar23 | iVar21 << 8 | iVar15 << 0x10) & 0xffffff) !=
            (*(uint *)(iVar13 + 0x608) & 0xffffff)) {
          *(uint *)(iVar13 + 0x608) =
               *(uint *)(iVar13 + 0x608) & 0xff000000 |
               (uVar23 | iVar21 << 8 | iVar15 << 0x10) & 0xffffff;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x200000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        uVar23 = VectorFloatToUnsigned(DAT_002c990c + *param_5 * DAT_002c9908,3);
        iVar4 = VectorFloatToUnsigned(DAT_002c990c + param_5[1] * DAT_002c9908,3);
        iVar15 = VectorFloatToUnsigned(DAT_002c990c + param_5[2] * DAT_002c9908,3);
        *(uint *)(iVar13 + 0x608) =
             (uVar23 | iVar4 << 8 | iVar15 << 0x10) & 0xffffff |
             *(uint *)(iVar13 + 0x608) & 0xff000000;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x200000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1160) = ~*(uint *)(iVar13 + 0x608);
      }
      *(float *)(iVar13 + 0xe04) = *param_5;
      *(float *)(iVar13 + 0xe08) = param_5[1];
      *(float *)(iVar13 + 0xe0c) = param_5[2];
      return;
    case 0x28:
      *(byte *)(iVar13 + 0x44c) = *(byte *)(iVar13 + 0x44c) | 7;
      if ((char)puVar16[3] == '\0') {
        uVar23 = VectorFloatToUnsigned(DAT_002c990c + *param_5 * DAT_002c9908,3);
        iVar15 = VectorFloatToUnsigned(DAT_002c990c + param_5[1] * DAT_002c9908,3);
        iVar4 = VectorFloatToUnsigned(DAT_002c990c + param_5[2] * DAT_002c9908,3);
        if (((uVar23 | iVar15 << 8 | iVar4 << 0x10) & 0xffffff) !=
            (*(uint *)(iVar13 + 0x60c) & 0xffffff)) {
          *(uint *)(iVar13 + 0x60c) =
               *(uint *)(iVar13 + 0x60c) & 0xff000000 |
               (uVar23 | iVar15 << 8 | iVar4 << 0x10) & 0xffffff;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x400000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        uVar23 = VectorFloatToUnsigned(DAT_002c990c + *param_5 * DAT_002c9908,3);
        iVar4 = VectorFloatToUnsigned(DAT_002c990c + param_5[1] * DAT_002c9908,3);
        iVar15 = VectorFloatToUnsigned(DAT_002c990c + param_5[2] * DAT_002c9908,3);
        *(uint *)(iVar13 + 0x60c) =
             (uVar23 | iVar4 << 8 | iVar15 << 0x10) & 0xffffff |
             *(uint *)(iVar13 + 0x60c) & 0xff000000;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x400000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1164) = ~*(uint *)(iVar13 + 0x60c);
      }
      *(byte *)(iVar13 + 0x44d) = *(byte *)(iVar13 + 0x44d) | 1;
      fVar27 = param_5[3];
      uVar23 = *(uint *)(iVar13 + 0x610);
      if ((char)puVar16[3] == '\0') {
        fVar30 = fVar27;
        if (0x3f800000 < (int)fVar27) {
          fVar30 = DAT_002c9ce0;
        }
        uVar18 = VectorFloatToUnsigned(DAT_002c990c + fVar30 * DAT_002c9908,3);
        if ((uVar23 & 0xff) != (uVar18 & 0xff)) {
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002c9ce0;
          }
          uVar18 = VectorFloatToUnsigned(DAT_002c990c + fVar27 * DAT_002c9908,3);
          *(uint *)(iVar13 + 0x610) = uVar23 & 0xffffff00 | uVar18 & 0xff;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x800000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002c9ce0;
        }
        uVar18 = VectorFloatToUnsigned(DAT_002c990c + fVar27 * DAT_002c9908,3);
        *(uint *)(iVar13 + 0x610) = uVar23 & 0xffffff00 | uVar18 & 0xff;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x800000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1168) = ~*(uint *)(iVar13 + 0x610);
      }
      *(float *)(iVar13 + 0xe10) = *param_5;
      *(float *)(iVar13 + 0xe14) = param_5[1];
      *(float *)(iVar13 + 0xe18) = param_5[2];
      *(float *)(iVar13 + 0xe1c) = param_5[3];
      return;
    case 0x29:
      fVar27 = *param_5;
      if ((fVar27 <= DAT_002c8aac) || ((uint)((int)fVar27 << 1) >> 0x18 == 0xff)) {
        uVar23 = 0;
      }
      else if ((int)(fVar27 * DAT_002c9ce4) < DAT_002c8f00) {
        uVar23 = VectorFloatToUnsigned(fVar27 * DAT_002c9ce4,3);
      }
      else {
        uVar23 = 0xffffff;
      }
      uVar23 = uVar23 & 0xffffff;
      *(byte *)(iVar13 + 0x44e) = *(byte *)(iVar13 + 0x44e) | 7;
      uVar18 = *(uint *)(iVar13 + 0x614);
      if ((char)puVar16[3] == '\0') {
        if ((uVar18 & 0xffffff) != uVar23) {
          *(uint *)(iVar13 + 0x614) = uVar23 | uVar18 & 0xff000000;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x1000000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x614) = uVar23 | uVar18 & 0xff000000;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x1000000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x116c) = ~*(uint *)(iVar13 + 0x614);
      }
      *(float *)(iVar13 + 0xe20) = *param_5;
      return;
    case 0x2a:
      fVar27 = *param_5;
      if (*param_5 == DAT_002c8aac) {
        fVar27 = DAT_002c8aac;
      }
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x449) = *(byte *)(iVar13 + 0x449) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x600) != uVar23) {
          *(uint *)(iVar13 + 0x600) = uVar23;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x80000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x600) = uVar23;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x80000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1158) = ~*(uint *)(iVar13 + 0x600);
      }
      *(float *)(iVar13 + 0xe24) = *param_5;
      return;
    case 0x2c:
      fVar27 = *param_5;
      uVar23 = 0;
      if (ABS(fVar27) != 0.0) {
        uVar23 = (int)fVar27 << 1;
      }
      if (ABS(fVar27) != 0.0) {
        uVar23 = (uVar23 >> 0x18) - 0x70;
      }
      if ((int)uVar23 < 0) {
        uVar23 = ((uint)fVar27 >> 0x1f) << 0xf;
      }
      else {
        uVar23 = (uint)((int)fVar27 << 9) >> 0x16 | uVar23 << 10 | ((uint)fVar27 >> 0x1f) << 0xf;
      }
      *(byte *)(iVar13 + 0x448) = *(byte *)(iVar13 + 0x448) | 0xf;
      if ((char)puVar16[3] == '\0') {
        if (*(uint *)(iVar13 + 0x5fc) != uVar23) {
          *(uint *)(iVar13 + 0x5fc) = uVar23;
          *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x40000;
          *puVar16 = *puVar16 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar13 + 0x5fc) = uVar23;
        *(uint *)(iVar13 + 0x7b0) = *(uint *)(iVar13 + 0x7b0) | 0x40000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x1154) = ~*(uint *)(iVar13 + 0x5fc);
      }
      *(float *)(iVar13 + 0xe28) = *param_5;
      return;
    case 0x33:
      fVar27 = *param_5;
      iVar15 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + 0x98c);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar15 = iVar15 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar15 != 0);
      *(byte *)(iVar13 + 0x4aa) = *(byte *)(iVar13 + 0x4aa) | 0xf;
      if ((char)puVar16[3] != '\0') {
        fVar27 = *(float *)(iVar13 + 0xd68) + param_5[2] * *(float *)(iVar13 + 0xd28);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002c9ce0;
        }
        fVar30 = *(float *)(iVar13 + 0xd64) + param_5[1] * *(float *)(iVar13 + 0xd24);
        uVar23 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002c9ce0;
        }
        iVar15 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar30 * DAT_002ca0b0,3);
        fVar27 = *(float *)(iVar13 + 0xd60) + *param_5 * *(float *)(iVar13 + 0xd20);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002c9ce0;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
        *(uint *)(iVar13 + 0x784) = uVar23 | iVar15 << 10 | iVar4 << 0x14;
        *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x100000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x12dc) = ~*(uint *)(iVar13 + 0x784);
        return;
      }
      fVar30 = *(float *)(iVar13 + 0xd68) + param_5[2] * *(float *)(iVar13 + 0xd28);
      fVar27 = fVar30;
      if (0x3f800000 < (int)fVar30) {
        fVar27 = DAT_002c9ce0;
      }
      uVar23 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
      fVar27 = *(float *)(iVar13 + 0xd64) + param_5[1] * *(float *)(iVar13 + 0xd24);
      fVar35 = fVar27;
      if (0x3f800000 < (int)fVar27) {
        fVar35 = DAT_002c9ce0;
      }
      iVar21 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar35 * DAT_002ca0b0,3);
      fVar35 = *(float *)(iVar13 + 0xd60) + *param_5 * *(float *)(iVar13 + 0xd20);
      fVar28 = fVar35;
      if (0x3f800000 < (int)fVar35) {
        fVar28 = DAT_002c9ce0;
      }
      iVar15 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar28 * DAT_002ca0b0,3);
      if ((uVar23 | iVar21 << 10 | iVar15 << 0x14) != *(uint *)(iVar13 + 0x784)) {
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002c9ce0;
        }
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002c9ce0;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar30 * DAT_002ca0b0,3);
        iVar21 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
        uVar23 = uVar23 | iVar21 << 10;
        fVar27 = DAT_002ca0b0;
        fVar30 = DAT_002ca0b4;
joined_r0x002ca5d4:
        if (0x3f800000 < (int)fVar35) {
          fVar35 = DAT_002c9ce0;
        }
        iVar21 = VectorFloatToUnsigned(fVar30 + fVar35 * fVar27,3);
        *(uint *)(iVar13 + 0x784) = uVar23 | iVar21 << 0x14;
        *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x100000;
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x34:
      fVar27 = *param_5;
      iVar15 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + 0xd5c);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar15 = iVar15 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar15 != 0);
      *(byte *)(iVar13 + 0x4aa) = *(byte *)(iVar13 + 0x4aa) | 0xf;
      if ((char)puVar16[3] != '\0') {
        fVar27 = param_5[2] + *(float *)(iVar13 + 0x998) * *(float *)(iVar13 + 0xd28);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002ca784;
        }
        fVar30 = param_5[1] + *(float *)(iVar13 + 0x994) * *(float *)(iVar13 + 0xd24);
        uVar23 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002ca784;
        }
        iVar15 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar30 * DAT_002ca0b0,3);
        fVar27 = *param_5 + *(float *)(iVar13 + 0x990) * *(float *)(iVar13 + 0xd20);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002ca784;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002ca0b4 + fVar27 * DAT_002ca0b0,3);
        *(uint *)(iVar13 + 0x784) = uVar23 | iVar15 << 10 | iVar4 << 0x14;
        *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x100000;
        *puVar16 = *puVar16 | 0x80000;
        *(uint *)(iVar21 + 0x12dc) = ~*(uint *)(iVar13 + 0x784);
        return;
      }
      fVar30 = param_5[2] + *(float *)(iVar13 + 0x998) * *(float *)(iVar13 + 0xd28);
      fVar27 = fVar30;
      if (0x3f800000 < (int)fVar30) {
        fVar27 = DAT_002ca784;
      }
      uVar23 = VectorFloatToUnsigned(DAT_002ca78c + fVar27 * DAT_002ca788,3);
      fVar27 = param_5[1] + *(float *)(iVar13 + 0x994) * *(float *)(iVar13 + 0xd24);
      fVar35 = fVar27;
      if (0x3f800000 < (int)fVar27) {
        fVar35 = DAT_002ca784;
      }
      iVar21 = VectorFloatToUnsigned(DAT_002ca78c + fVar35 * DAT_002ca788,3);
      fVar35 = *param_5 + *(float *)(iVar13 + 0x990) * *(float *)(iVar13 + 0xd20);
      fVar28 = fVar35;
      if (0x3f800000 < (int)fVar35) {
        fVar28 = DAT_002ca784;
      }
      iVar15 = VectorFloatToUnsigned(DAT_002ca78c + fVar28 * DAT_002ca788,3);
      if ((uVar23 | iVar21 << 10 | iVar15 << 0x14) != *(uint *)(iVar13 + 0x784)) {
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002ca784;
        }
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002ca784;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002ca78c + fVar30 * DAT_002ca788,3);
        iVar21 = VectorFloatToUnsigned(DAT_002ca78c + fVar27 * DAT_002ca788,3);
        uVar23 = uVar23 | iVar21 << 10;
        fVar27 = DAT_002ca788;
        fVar30 = DAT_002ca78c;
        goto joined_r0x002ca5d4;
      }
      break;
    case 0x35:
      fVar28 = *param_5;
      fVar31 = *(float *)(iVar13 + 0xd20);
      *(float *)(iVar13 + 0xd20) = fVar28;
      fVar32 = *(float *)(iVar13 + 0xd24);
      fVar29 = param_5[1];
      *(float *)(iVar13 + 0xd24) = fVar29;
      fVar33 = *(float *)(iVar13 + 0xd28);
      fVar36 = param_5[2];
      *(float *)(iVar13 + 0xd28) = fVar36;
      fVar34 = *(float *)(iVar13 + 0xd2c);
      fVar37 = param_5[3];
      *(float *)(iVar13 + 0xd2c) = fVar37;
      fVar35 = DAT_002ca0b4;
      fVar30 = DAT_002ca0b0;
      fVar27 = DAT_002c9ce0;
      if (fVar34 != fVar37 || (fVar33 != fVar36 || (fVar32 != fVar29 || fVar31 != fVar28))) {
        iVar15 = 0;
        do {
          iVar17 = iVar13 + iVar15 * 0x70;
          iVar4 = iVar15 * 0xb;
          fVar28 = *(float *)(iVar17 + 0x9a4) * *(float *)(iVar13 + 0xd20);
          fVar29 = *(float *)(iVar17 + 0x9a8) * *(float *)(iVar13 + 0xd24);
          fVar36 = *(float *)(iVar17 + 0x9ac) * *(float *)(iVar13 + 0xd28);
          *(byte *)(iVar4 + iVar13 + 0x455) = *(byte *)(iVar4 + iVar13 + 0x455) | 0xf;
          if ((char)puVar16[3] == '\0') {
            fVar37 = fVar36;
            if (0x3f800000 < (int)fVar36) {
              fVar37 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar29;
            if (0x3f800000 < (int)fVar29) {
              fVar37 = fVar27;
            }
            iVar17 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar28;
            if (0x3f800000 < (int)fVar28) {
              fVar37 = fVar27;
            }
            iVar12 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            iVar20 = iVar13 + iVar15 * 0x2c;
            if ((uVar23 | iVar17 << 10 | iVar12 << 0x14) != *(uint *)(iVar20 + 0x630)) {
              if (0x3f800000 < (int)fVar36) {
                fVar36 = fVar27;
              }
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
              iVar17 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              if (0x3f800000 < (int)fVar28) {
                fVar28 = fVar27;
              }
              iVar12 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              *(uint *)(iVar20 + 0x630) = uVar23 | iVar17 << 10 | iVar12 << 0x14;
              iVar17 = iVar13 + ((int)(iVar4 + 0x5fU) >> 5) * 4;
              *(uint *)(iVar17 + 0x7a8) = *(uint *)(iVar17 + 0x7a8) | 1 << (iVar4 + 0x5fU & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
            }
          }
          else {
            if (0x3f800000 < (int)fVar36) {
              fVar36 = fVar27;
            }
            if (0x3f800000 < (int)fVar29) {
              fVar29 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
            iVar17 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
            if (0x3f800000 < (int)fVar28) {
              fVar28 = fVar27;
            }
            iVar12 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
            iVar20 = iVar13 + iVar15 * 0x2c;
            *(uint *)(iVar20 + 0x630) = uVar23 | iVar17 << 10 | iVar12 << 0x14;
            iVar17 = iVar13 + ((int)(iVar4 + 0x5fU) >> 5) * 4;
            *(uint *)(iVar17 + 0x7a8) = *(uint *)(iVar17 + 0x7a8) | 1 << (iVar4 + 0x5fU & 0x1f);
            *puVar16 = *puVar16 | 0x80000;
            piVar19[iVar15 * 0xb + 0x462] = ~*(uint *)(iVar20 + 0x630);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 8);
        *(byte *)(iVar13 + 0x4aa) = *(byte *)(iVar13 + 0x4aa) | 0xf;
        if ((char)puVar16[3] != '\0') {
          fVar28 = *(float *)(iVar13 + 0xd68) + *(float *)(iVar13 + 0x998) * param_5[2];
          if (0x3f800000 < (int)fVar28) {
            fVar28 = fVar27;
          }
          fVar29 = *(float *)(iVar13 + 0xd64) + *(float *)(iVar13 + 0x994) * param_5[1];
          uVar23 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
          if (0x3f800000 < (int)fVar29) {
            fVar29 = fVar27;
          }
          iVar15 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
          fVar28 = *(float *)(iVar13 + 0xd60) + *(float *)(iVar13 + 0x990) * *param_5;
          if ((int)fVar28 < 0x3f800001) {
            fVar27 = fVar28;
          }
          iVar4 = VectorFloatToUnsigned(fVar35 + fVar27 * fVar30,3);
          *(uint *)(iVar13 + 0x784) = uVar23 | iVar15 << 10 | iVar4 << 0x14;
          *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x100000;
          *puVar16 = *puVar16 | 0x80000;
          *(uint *)(iVar21 + 0x12dc) = ~*(uint *)(iVar13 + 0x784);
          return;
        }
        fVar29 = *(float *)(iVar13 + 0xd68) + *(float *)(iVar13 + 0x998) * param_5[2];
        fVar28 = fVar29;
        if (0x3f800000 < (int)fVar29) {
          fVar28 = fVar27;
        }
        uVar23 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
        fVar36 = *(float *)(iVar13 + 0xd64) + *(float *)(iVar13 + 0x994) * param_5[1];
        fVar28 = fVar36;
        if (0x3f800000 < (int)fVar36) {
          fVar28 = fVar27;
        }
        iVar21 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
        fVar37 = *(float *)(iVar13 + 0xd60) + *(float *)(iVar13 + 0x990) * *param_5;
        fVar28 = fVar37;
        if (0x3f800000 < (int)fVar37) {
          fVar28 = fVar27;
        }
        iVar15 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
        if ((uVar23 | iVar21 << 10 | iVar15 << 0x14) != *(uint *)(iVar13 + 0x784)) {
          if (0x3f800000 < (int)fVar29) {
            fVar29 = fVar27;
          }
          if (0x3f800000 < (int)fVar36) {
            fVar36 = fVar27;
          }
          uVar23 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
          iVar21 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
          if ((int)fVar37 < 0x3f800001) {
            fVar27 = fVar37;
          }
          iVar15 = VectorFloatToUnsigned(fVar35 + fVar27 * fVar30,3);
          *(uint *)(iVar13 + 0x784) = uVar23 | iVar21 << 10 | iVar15 << 0x14;
          *(uint *)(iVar13 + 0x7bc) = *(uint *)(iVar13 + 0x7bc) | 0x100000;
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
      }
      break;
    case 0x36:
      fVar28 = *param_5;
      fVar31 = *(float *)(iVar13 + 0xd30);
      *(float *)(iVar13 + 0xd30) = fVar28;
      fVar32 = *(float *)(iVar13 + 0xd34);
      fVar29 = param_5[1];
      *(float *)(iVar13 + 0xd34) = fVar29;
      fVar33 = *(float *)(iVar13 + 0xd38);
      fVar36 = param_5[2];
      *(float *)(iVar13 + 0xd38) = fVar36;
      fVar34 = *(float *)(iVar13 + 0xd3c);
      fVar37 = param_5[3];
      *(float *)(iVar13 + 0xd3c) = fVar37;
      fVar35 = DAT_002ca78c;
      fVar30 = DAT_002ca788;
      fVar27 = DAT_002ca784;
      if (fVar34 != fVar37 || (fVar33 != fVar36 || (fVar32 != fVar29 || fVar31 != fVar28))) {
        iVar21 = 0;
        do {
          iVar4 = iVar13 + iVar21 * 0x70;
          iVar15 = iVar21 * 0xb;
          fVar28 = *(float *)(iVar4 + 0x9b4) * *(float *)(iVar13 + 0xd30);
          fVar29 = *(float *)(iVar4 + 0x9b8) * *(float *)(iVar13 + 0xd34);
          fVar36 = *(float *)(iVar4 + 0x9bc) * *(float *)(iVar13 + 0xd38);
          *(byte *)(iVar15 + iVar13 + 0x454) = *(byte *)(iVar15 + iVar13 + 0x454) | 0xf;
          if ((char)puVar16[3] == '\0') {
            fVar37 = fVar36;
            if (0x3f800000 < (int)fVar36) {
              fVar37 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar29;
            if (0x3f800000 < (int)fVar29) {
              fVar37 = fVar27;
            }
            iVar4 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar28;
            if (0x3f800000 < (int)fVar28) {
              fVar37 = fVar27;
            }
            iVar20 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            iVar17 = iVar13 + iVar21 * 0x2c;
            if ((uVar23 | iVar4 << 10 | iVar20 << 0x14) != *(uint *)(iVar17 + 0x62c)) {
              if (0x3f800000 < (int)fVar36) {
                fVar36 = fVar27;
              }
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
              iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              if (0x3f800000 < (int)fVar28) {
                fVar28 = fVar27;
              }
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              *(uint *)(iVar17 + 0x62c) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
              iVar4 = iVar13 + ((int)(iVar15 + 0x5eU) >> 5) * 4;
              *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5eU & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
            }
          }
          else {
            if (0x3f800000 < (int)fVar36) {
              fVar36 = fVar27;
            }
            if (0x3f800000 < (int)fVar29) {
              fVar29 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
            iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
            if (0x3f800000 < (int)fVar28) {
              fVar28 = fVar27;
            }
            iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
            iVar17 = iVar13 + iVar21 * 0x2c;
            *(uint *)(iVar17 + 0x62c) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
            iVar4 = iVar13 + ((int)(iVar15 + 0x5eU) >> 5) * 4;
            *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5eU & 0x1f);
            *puVar16 = *puVar16 | 0x80000;
            piVar19[iVar21 * 0xb + 0x461] = ~*(uint *)(iVar17 + 0x62c);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 8);
        return;
      }
      break;
    case 0x37:
      fVar28 = *param_5;
      fVar31 = *(float *)(iVar13 + 0xd40);
      *(float *)(iVar13 + 0xd40) = fVar28;
      fVar32 = *(float *)(iVar13 + 0xd44);
      fVar29 = param_5[1];
      *(float *)(iVar13 + 0xd44) = fVar29;
      fVar33 = *(float *)(iVar13 + 0xd48);
      fVar36 = param_5[2];
      *(float *)(iVar13 + 0xd48) = fVar36;
      fVar34 = *(float *)(iVar13 + 0xd4c);
      fVar37 = param_5[3];
      *(float *)(iVar13 + 0xd4c) = fVar37;
      fVar35 = DAT_002ca78c;
      fVar30 = DAT_002ca788;
      fVar27 = DAT_002ca784;
      if (fVar34 != fVar37 || (fVar33 != fVar36 || (fVar32 != fVar29 || fVar31 != fVar28))) {
        iVar21 = 0;
        do {
          iVar4 = iVar13 + iVar21 * 0x70;
          iVar15 = iVar21 * 0xb;
          fVar28 = *(float *)(iVar4 + 0x9c4) * *(float *)(iVar13 + 0xd40);
          fVar29 = *(float *)(iVar4 + 0x9c8) * *(float *)(iVar13 + 0xd44);
          fVar36 = *(float *)(iVar4 + 0x9cc) * *(float *)(iVar13 + 0xd48);
          *(byte *)(iVar15 + iVar13 + 0x452) = *(byte *)(iVar15 + iVar13 + 0x452) | 0xf;
          if ((char)puVar16[3] == '\0') {
            fVar37 = fVar36;
            if (0x3f800000 < (int)fVar36) {
              fVar37 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar29;
            if (0x3f800000 < (int)fVar29) {
              fVar37 = fVar27;
            }
            iVar4 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            fVar37 = fVar28;
            if (0x3f800000 < (int)fVar28) {
              fVar37 = fVar27;
            }
            iVar20 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
            iVar17 = iVar13 + iVar21 * 0x2c;
            if ((uVar23 | iVar4 << 10 | iVar20 << 0x14) != *(uint *)(iVar17 + 0x624)) {
              if (0x3f800000 < (int)fVar36) {
                fVar36 = fVar27;
              }
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
              iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              if (0x3f800000 < (int)fVar28) {
                fVar28 = fVar27;
              }
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              *(uint *)(iVar17 + 0x624) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
              iVar4 = iVar13 + ((int)(iVar15 + 0x5cU) >> 5) * 4;
              *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5cU & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
            }
          }
          else {
            if (0x3f800000 < (int)fVar36) {
              fVar36 = fVar27;
            }
            if (0x3f800000 < (int)fVar29) {
              fVar29 = fVar27;
            }
            uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
            iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
            if (0x3f800000 < (int)fVar28) {
              fVar28 = fVar27;
            }
            iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
            iVar17 = iVar13 + iVar21 * 0x2c;
            *(uint *)(iVar17 + 0x624) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
            iVar4 = iVar13 + ((int)(iVar15 + 0x5cU) >> 5) * 4;
            *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5cU & 0x1f);
            *puVar16 = *puVar16 | 0x80000;
            piVar19[iVar21 * 0xb + 0x45f] = ~*(uint *)(iVar17 + 0x624);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 8);
        return;
      }
      break;
    case 0x38:
      fVar28 = *param_5;
      fVar31 = *(float *)(iVar13 + 0xd50);
      *(float *)(iVar13 + 0xd50) = fVar28;
      fVar32 = *(float *)(iVar13 + 0xd54);
      fVar29 = param_5[1];
      *(float *)(iVar13 + 0xd54) = fVar29;
      fVar33 = *(float *)(iVar13 + 0xd58);
      fVar36 = param_5[2];
      *(float *)(iVar13 + 0xd58) = fVar36;
      fVar34 = *(float *)(iVar13 + 0xd5c);
      fVar37 = param_5[3];
      *(float *)(iVar13 + 0xd5c) = fVar37;
      fVar35 = DAT_002cae9c;
      fVar30 = DAT_002cae98;
      fVar27 = DAT_002cae94;
      if (fVar34 != fVar37 || (fVar33 != fVar36 || (fVar32 != fVar29 || fVar31 != fVar28))) {
        iVar21 = 0;
        do {
          if (*(char *)(iVar13 + 0x96c) == '\0') {
            iVar15 = iVar21 * 0xb;
            *(byte *)(iVar15 + iVar13 + 0x453) = *(byte *)(iVar15 + iVar13 + 0x453) | 0xf;
            iVar4 = iVar13 + iVar21 * 0x70;
            fVar28 = *(float *)(iVar4 + 0x9dc);
            if ((char)puVar16[3] == '\0') {
              fVar29 = fVar28;
              if (0x3f800000 < (int)fVar28) {
                fVar29 = fVar27;
              }
              fVar36 = *(float *)(iVar4 + 0x9d8);
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              fVar29 = fVar36;
              if (0x3f800000 < (int)fVar36) {
                fVar29 = fVar27;
              }
              iVar17 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              fVar29 = *(float *)(iVar4 + 0x9d4);
              fVar37 = fVar29;
              if (0x3f800000 < (int)fVar29) {
                fVar37 = fVar27;
              }
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
              iVar4 = iVar13 + iVar21 * 0x2c;
              if ((uVar23 | iVar17 << 10 | iVar20 << 0x14) != *(uint *)(iVar4 + 0x628)) {
                if (0x3f800000 < (int)fVar28) {
                  fVar28 = fVar27;
                }
                if (0x3f800000 < (int)fVar36) {
                  fVar36 = fVar27;
                }
                uVar23 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
                iVar17 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
                if (0x3f800000 < (int)fVar29) {
                  fVar29 = fVar27;
                }
                iVar20 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
                *(uint *)(iVar4 + 0x628) = uVar23 | iVar17 << 10 | iVar20 << 0x14;
                iVar4 = iVar13 + ((int)(iVar15 + 0x5dU) >> 5) * 4;
                *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5dU & 0x1f);
                *puVar16 = *puVar16 | 0x80000;
              }
            }
            else {
              if (0x3f800000 < (int)fVar28) {
                fVar28 = fVar27;
              }
              fVar29 = *(float *)(iVar4 + 0x9d8);
              if (0x3f800000 < (int)*(float *)(iVar4 + 0x9d8)) {
                fVar29 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              iVar17 = iVar13 + iVar21 * 0x2c;
              fVar28 = *(float *)(iVar4 + 0x9d4);
              if (0x3f800000 < (int)*(float *)(iVar4 + 0x9d4)) {
                fVar28 = fVar27;
              }
              iVar4 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              *(uint *)(iVar17 + 0x628) = uVar23 | iVar20 << 10 | iVar4 << 0x14;
              iVar4 = iVar13 + ((int)(iVar15 + 0x5dU) >> 5) * 4;
              *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5dU & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
              piVar19[iVar21 * 0xb + 0x460] = ~*(uint *)(iVar17 + 0x628);
            }
          }
          else {
            iVar4 = iVar13 + iVar21 * 0x70;
            iVar15 = iVar21 * 0xb;
            fVar28 = *(float *)(iVar4 + 0x9d4) * *(float *)(iVar13 + 0xd50);
            fVar29 = *(float *)(iVar4 + 0x9d8) * *(float *)(iVar13 + 0xd54);
            fVar36 = *(float *)(iVar4 + 0x9dc) * *(float *)(iVar13 + 0xd58);
            *(byte *)(iVar15 + iVar13 + 0x453) = *(byte *)(iVar15 + iVar13 + 0x453) | 0xf;
            if ((char)puVar16[3] == '\0') {
              fVar37 = fVar36;
              if (0x3f800000 < (int)fVar36) {
                fVar37 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
              fVar37 = fVar29;
              if (0x3f800000 < (int)fVar29) {
                fVar37 = fVar27;
              }
              iVar4 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
              fVar37 = fVar28;
              if (0x3f800000 < (int)fVar28) {
                fVar37 = fVar27;
              }
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar37 * fVar30,3);
              iVar17 = iVar13 + iVar21 * 0x2c;
              if ((uVar23 | iVar4 << 10 | iVar20 << 0x14) != *(uint *)(iVar17 + 0x628)) {
                if (0x3f800000 < (int)fVar36) {
                  fVar36 = fVar27;
                }
                if (0x3f800000 < (int)fVar29) {
                  fVar29 = fVar27;
                }
                uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
                iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
                if (0x3f800000 < (int)fVar28) {
                  fVar28 = fVar27;
                }
                iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
                *(uint *)(iVar17 + 0x628) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
                iVar4 = iVar13 + ((int)(iVar15 + 0x5dU) >> 5) * 4;
                *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5dU & 0x1f);
                *puVar16 = *puVar16 | 0x80000;
              }
            }
            else {
              if (0x3f800000 < (int)fVar36) {
                fVar36 = fVar27;
              }
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar27;
              }
              uVar23 = VectorFloatToUnsigned(fVar35 + fVar36 * fVar30,3);
              iVar4 = VectorFloatToUnsigned(fVar35 + fVar29 * fVar30,3);
              if (0x3f800000 < (int)fVar28) {
                fVar28 = fVar27;
              }
              iVar20 = VectorFloatToUnsigned(fVar35 + fVar28 * fVar30,3);
              iVar17 = iVar13 + iVar21 * 0x2c;
              *(uint *)(iVar17 + 0x628) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
              iVar4 = iVar13 + ((int)(iVar15 + 0x5dU) >> 5) * 4;
              *(uint *)(iVar4 + 0x7a8) = *(uint *)(iVar4 + 0x7a8) | 1 << (iVar15 + 0x5dU & 0x1f);
              *puVar16 = *puVar16 | 0x80000;
              piVar19[iVar21 * 0xb + 0x460] = ~*(uint *)(iVar17 + 0x628);
            }
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 8);
        return;
      }
      break;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
      iVar15 = (uVar23 >> 0x10) - 0x41;
      fVar27 = *param_5;
      iVar21 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + iVar15 * 0x70 + 0x9a0);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar21 = iVar21 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar21 != 0);
      iVar21 = iVar15 * 0xb;
      *(byte *)(iVar21 + iVar13 + 0x455) = *(byte *)(iVar21 + iVar13 + 0x455) | 0xf;
      if ((char)puVar16[3] != '\0') {
        fVar27 = param_5[2] * *(float *)(iVar13 + 0xd28);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cae94;
        }
        fVar30 = param_5[1] * *(float *)(iVar13 + 0xd24);
        uVar23 = VectorFloatToUnsigned(DAT_002cae9c + fVar27 * DAT_002cae98,3);
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cae94;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cae9c + fVar30 * DAT_002cae98,3);
        iVar4 = iVar13 + iVar15 * 0x2c;
        fVar27 = *param_5 * *(float *)(iVar13 + 0xd20);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cae94;
        }
        iVar20 = VectorFloatToUnsigned(DAT_002cae9c + fVar27 * DAT_002cae98,3);
        *(uint *)(iVar4 + 0x630) = uVar23 | iVar17 << 10 | iVar20 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5fU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5fU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        piVar19[iVar15 * 0xb + 0x462] = ~*(uint *)(iVar4 + 0x630);
        return;
      }
      fVar30 = param_5[2] * *(float *)(iVar13 + 0xd28);
      fVar27 = fVar30;
      if (0x3f800000 < (int)fVar30) {
        fVar27 = DAT_002cae94;
      }
      uVar23 = VectorFloatToUnsigned(DAT_002cae9c + fVar27 * DAT_002cae98,3);
      fVar27 = param_5[1] * *(float *)(iVar13 + 0xd24);
      fVar35 = fVar27;
      if (0x3f800000 < (int)fVar27) {
        fVar35 = DAT_002cae94;
      }
      iVar4 = VectorFloatToUnsigned(DAT_002cae9c + fVar35 * DAT_002cae98,3);
      fVar35 = *param_5 * *(float *)(iVar13 + 0xd20);
      fVar28 = fVar35;
      if (0x3f800000 < (int)fVar35) {
        fVar28 = DAT_002cae94;
      }
      iVar17 = VectorFloatToUnsigned(DAT_002cae9c + fVar28 * DAT_002cae98,3);
      iVar15 = iVar13 + iVar15 * 0x2c;
      if ((uVar23 | iVar4 << 10 | iVar17 << 0x14) != *(uint *)(iVar15 + 0x630)) {
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cae94;
        }
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cae94;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002cae9c + fVar30 * DAT_002cae98,3);
        iVar4 = VectorFloatToUnsigned(DAT_002cae9c + fVar27 * DAT_002cae98,3);
        if (0x3f800000 < (int)fVar35) {
          fVar35 = DAT_002cae94;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cae9c + fVar35 * DAT_002cae98,3);
        *(uint *)(iVar15 + 0x630) = uVar23 | iVar4 << 10 | iVar17 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5fU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5fU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
      iVar15 = (uVar23 >> 0x10) - 0x49;
      fVar27 = *param_5;
      iVar21 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + iVar15 * 0x70 + 0x9b0);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar21 = iVar21 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar21 != 0);
      iVar21 = iVar15 * 0xb;
      *(byte *)(iVar21 + iVar13 + 0x454) = *(byte *)(iVar21 + iVar13 + 0x454) | 0xf;
      if ((char)puVar16[3] != '\0') {
        fVar27 = param_5[2] * *(float *)(iVar13 + 0xd38);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        fVar30 = param_5[1] * *(float *)(iVar13 + 0xd34);
        uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cb5bc;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        fVar27 = *param_5 * *(float *)(iVar13 + 0xd30);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        iVar20 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        iVar17 = iVar13 + iVar15 * 0x2c;
        *(uint *)(iVar17 + 0x62c) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5eU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5eU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        piVar19[iVar15 * 0xb + 0x461] = ~*(uint *)(iVar17 + 0x62c);
        return;
      }
      fVar30 = param_5[2] * *(float *)(iVar13 + 0xd38);
      fVar27 = fVar30;
      if (0x3f800000 < (int)fVar30) {
        fVar27 = DAT_002cb5bc;
      }
      uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
      fVar27 = param_5[1] * *(float *)(iVar13 + 0xd34);
      fVar35 = fVar27;
      if (0x3f800000 < (int)fVar27) {
        fVar35 = DAT_002cb5bc;
      }
      iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar35 * DAT_002cb5c0,3);
      fVar35 = *param_5 * *(float *)(iVar13 + 0xd30);
      fVar28 = fVar35;
      if (0x3f800000 < (int)fVar35) {
        fVar28 = DAT_002cb5bc;
      }
      iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar28 * DAT_002cb5c0,3);
      iVar15 = iVar13 + iVar15 * 0x2c;
      if ((uVar23 | iVar4 << 10 | iVar17 << 0x14) != *(uint *)(iVar15 + 0x62c)) {
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cb5bc;
        }
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        if (0x3f800000 < (int)fVar35) {
          fVar35 = DAT_002cb5bc;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar35 * DAT_002cb5c0,3);
        *(uint *)(iVar15 + 0x62c) = uVar23 | iVar4 << 10 | iVar17 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5eU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5eU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
      iVar15 = (uVar23 >> 0x10) - 0x51;
      fVar27 = *param_5;
      iVar21 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + iVar15 * 0x70 + 0x9c0);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar21 = iVar21 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar21 != 0);
      iVar21 = iVar15 * 0xb;
      *(byte *)(iVar21 + iVar13 + 0x452) = *(byte *)(iVar21 + iVar13 + 0x452) | 0xf;
      if ((char)puVar16[3] != '\0') {
        fVar27 = param_5[2] * *(float *)(iVar13 + 0xd48);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        fVar30 = param_5[1] * *(float *)(iVar13 + 0xd44);
        uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cb5bc;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        fVar27 = *param_5 * *(float *)(iVar13 + 0xd40);
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        iVar20 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        iVar17 = iVar13 + iVar15 * 0x2c;
        *(uint *)(iVar17 + 0x624) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5cU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5cU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        piVar19[iVar15 * 0xb + 0x45f] = ~*(uint *)(iVar17 + 0x624);
        return;
      }
      fVar30 = param_5[2] * *(float *)(iVar13 + 0xd48);
      fVar27 = fVar30;
      if (0x3f800000 < (int)fVar30) {
        fVar27 = DAT_002cb5bc;
      }
      uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
      fVar27 = param_5[1] * *(float *)(iVar13 + 0xd44);
      fVar35 = fVar27;
      if (0x3f800000 < (int)fVar27) {
        fVar35 = DAT_002cb5bc;
      }
      iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar35 * DAT_002cb5c0,3);
      fVar35 = *param_5 * *(float *)(iVar13 + 0xd40);
      fVar28 = fVar35;
      if (0x3f800000 < (int)fVar35) {
        fVar28 = DAT_002cb5bc;
      }
      iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar28 * DAT_002cb5c0,3);
      iVar15 = iVar13 + iVar15 * 0x2c;
      if ((uVar23 | iVar4 << 10 | iVar17 << 0x14) != *(uint *)(iVar15 + 0x624)) {
        if (0x3f800000 < (int)fVar30) {
          fVar30 = DAT_002cb5bc;
        }
        if (0x3f800000 < (int)fVar27) {
          fVar27 = DAT_002cb5bc;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
        if (0x3f800000 < (int)fVar35) {
          fVar35 = DAT_002cb5bc;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar35 * DAT_002cb5c0,3);
        *(uint *)(iVar15 + 0x624) = uVar23 | iVar4 << 10 | iVar17 << 0x14;
        iVar13 = iVar13 + ((int)(iVar21 + 0x5cU) >> 5) * 4;
        *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5cU & 0x1f);
        *puVar16 = *puVar16 | 0x80000;
        return;
      }
      break;
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
      iVar15 = (uVar23 >> 0x10) - 0x59;
      fVar27 = *param_5;
      iVar21 = 2;
      pfVar3 = param_5 + -1;
      pfVar11 = (float *)(iVar13 + iVar15 * 0x70 + 0x9d0);
      do {
        fVar30 = pfVar3[2];
        pfVar11[1] = fVar27;
        fVar27 = pfVar3[3];
        iVar21 = iVar21 + -1;
        pfVar11[2] = fVar30;
        pfVar3 = pfVar3 + 2;
        pfVar11 = pfVar11 + 2;
      } while (iVar21 != 0);
      cVar1 = *(char *)(iVar13 + 0x96c);
      iVar21 = iVar15 * 0xb;
      *(byte *)(iVar21 + iVar13 + 0x453) = *(byte *)(iVar21 + iVar13 + 0x453) | 0xf;
      if (cVar1 == '\0') {
        fVar27 = param_5[2];
        if ((char)puVar16[3] != '\0') {
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002cb5bc;
          }
          fVar30 = param_5[1];
          if (0x3f800000 < (int)param_5[1]) {
            fVar30 = DAT_002cb5bc;
          }
          uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
          iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
          fVar27 = *param_5;
          if (0x3f800000 < (int)*param_5) {
            fVar27 = DAT_002cb5bc;
          }
          iVar20 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
          iVar17 = iVar13 + iVar15 * 0x2c;
          *(uint *)(iVar17 + 0x628) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
          iVar13 = iVar13 + ((int)(iVar21 + 0x5dU) >> 5) * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5dU & 0x1f);
          *puVar16 = *puVar16 | 0x80000;
          piVar19[iVar15 * 0xb + 0x460] = ~*(uint *)(iVar17 + 0x628);
          return;
        }
        fVar30 = fVar27;
        if (0x3f800000 < (int)fVar27) {
          fVar30 = DAT_002cb5bc;
        }
        fVar35 = param_5[1];
        uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        fVar30 = fVar35;
        if (0x3f800000 < (int)fVar35) {
          fVar30 = DAT_002cb5bc;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
        fVar30 = *param_5;
        fVar28 = fVar30;
        if (0x3f800000 < (int)fVar30) {
          fVar28 = DAT_002cb5bc;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar28 * DAT_002cb5c0,3);
        iVar15 = iVar13 + iVar15 * 0x2c;
        if ((uVar23 | iVar4 << 10 | iVar17 << 0x14) != *(uint *)(iVar15 + 0x628)) {
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002cb5bc;
          }
          if (0x3f800000 < (int)fVar35) {
            fVar35 = DAT_002cb5bc;
          }
          uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
          iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar35 * DAT_002cb5c0,3);
          if (0x3f800000 < (int)fVar30) {
            fVar30 = DAT_002cb5bc;
          }
          iVar17 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
          *(uint *)(iVar15 + 0x628) = uVar23 | iVar4 << 10 | iVar17 << 0x14;
          iVar13 = iVar13 + ((int)(iVar21 + 0x5dU) >> 5) * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5dU & 0x1f);
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
      }
      else {
        if ((char)puVar16[3] != '\0') {
          fVar27 = param_5[2] * *(float *)(iVar13 + 0xd58);
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002cb5bc;
          }
          fVar30 = param_5[1] * *(float *)(iVar13 + 0xd54);
          uVar23 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
          if (0x3f800000 < (int)fVar30) {
            fVar30 = DAT_002cb5bc;
          }
          iVar4 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar30 * DAT_002cb5c0,3);
          fVar27 = *param_5 * *(float *)(iVar13 + 0xd50);
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002cbd2c;
          }
          iVar20 = VectorFloatToUnsigned(DAT_002cb5c4 + fVar27 * DAT_002cb5c0,3);
          iVar17 = iVar13 + iVar15 * 0x2c;
          *(uint *)(iVar17 + 0x628) = uVar23 | iVar4 << 10 | iVar20 << 0x14;
          iVar13 = iVar13 + ((int)(iVar21 + 0x5dU) >> 5) * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5dU & 0x1f);
          *puVar16 = *puVar16 | 0x80000;
          piVar19[iVar15 * 0xb + 0x460] = ~*(uint *)(iVar17 + 0x628);
          return;
        }
        fVar30 = param_5[2] * *(float *)(iVar13 + 0xd58);
        fVar27 = fVar30;
        if (0x3f800000 < (int)fVar30) {
          fVar27 = DAT_002cbd2c;
        }
        uVar23 = VectorFloatToUnsigned(DAT_002cbd34 + fVar27 * DAT_002cbd30,3);
        fVar27 = param_5[1] * *(float *)(iVar13 + 0xd54);
        fVar35 = fVar27;
        if (0x3f800000 < (int)fVar27) {
          fVar35 = DAT_002cbd2c;
        }
        iVar4 = VectorFloatToUnsigned(DAT_002cbd34 + fVar35 * DAT_002cbd30,3);
        fVar35 = *param_5 * *(float *)(iVar13 + 0xd50);
        fVar28 = fVar35;
        if (0x3f800000 < (int)fVar35) {
          fVar28 = DAT_002cbd2c;
        }
        iVar17 = VectorFloatToUnsigned(DAT_002cbd34 + fVar28 * DAT_002cbd30,3);
        iVar15 = iVar13 + iVar15 * 0x2c;
        if ((uVar23 | iVar4 << 10 | iVar17 << 0x14) != *(uint *)(iVar15 + 0x628)) {
          if (0x3f800000 < (int)fVar30) {
            fVar30 = DAT_002cbd2c;
          }
          if (0x3f800000 < (int)fVar27) {
            fVar27 = DAT_002cbd2c;
          }
          uVar23 = VectorFloatToUnsigned(DAT_002cbd34 + fVar30 * DAT_002cbd30,3);
          iVar4 = VectorFloatToUnsigned(DAT_002cbd34 + fVar27 * DAT_002cbd30,3);
          if (0x3f800000 < (int)fVar35) {
            fVar35 = DAT_002cbd2c;
          }
          iVar17 = VectorFloatToUnsigned(DAT_002cbd34 + fVar35 * DAT_002cbd30,3);
          *(uint *)(iVar15 + 0x628) = uVar23 | iVar4 << 10 | iVar17 << 0x14;
          iVar13 = iVar13 + ((int)(iVar21 + 0x5dU) >> 5) * 4;
          *(uint *)(iVar13 + 0x7a8) = *(uint *)(iVar13 + 0x7a8) | 1 << (iVar21 + 0x5dU & 0x1f);
          *puVar16 = *puVar16 | 0x80000;
          return;
        }
      }
      break;
    case 0x61:
    case 0x62:
    case 99:
      goto switchD_002c87b8_caseD_61;
    }
  }
  return;
}
