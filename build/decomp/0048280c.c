// OoT3D decomp @ 0048280c  name=FUN_0048280c  size=4124

int FUN_0048280c(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  iVar15 = DAT_00482c64;
  fVar20 = DAT_00482c60;
  iVar3 = DAT_00482c5c;
  fVar2 = DAT_00482c58;
  iVar14 = DAT_00482c54;
  fVar1 = DAT_00482c50;
  fVar19 = DAT_00482c4c;
  fVar21 = DAT_00482c48;
  iVar10 = *DAT_00482c38;
  puVar12 = (uint *)(iVar10 + 0x670);
  iVar11 = iVar10 + 0x58 + param_2;
  iVar17 = DAT_00482c3c;
  if (param_1[0xd] != 0) {
    iVar17 = 0;
  }
  if ((*(char *)(iVar11 + 0xac) == '\0') || (iVar17 != 0)) {
    if (param_2 == 0) {
      uVar4 = *puVar12 & 0xfffffffe;
    }
    else {
      if (param_2 != 1) {
        if (param_2 != 2) {
          return DAT_00482c40;
        }
        *puVar12 = *puVar12 & 0xfffffffb;
        goto LAB_00482884;
      }
      uVar4 = *puVar12 & 0xfffffffd;
    }
    *puVar12 = uVar4;
LAB_00482884:
    iVar14 = 0;
    if (*(char *)(iVar11 + 0xac) != '\0') {
      iVar14 = iVar17;
    }
    return iVar14;
  }
  piVar13 = param_1 + 0xd;
  uVar4 = VectorFloatToUnsigned((float)param_1[6] * DAT_00482c44,3);
  iVar11 = VectorFloatToUnsigned((float)param_1[7] * DAT_00482c44,3);
  iVar18 = VectorFloatToUnsigned((float)param_1[8] * DAT_00482c44,3);
  iVar17 = VectorFloatToUnsigned((float)param_1[9] * DAT_00482c44,3);
  uVar4 = uVar4 | iVar11 << 8 | iVar18 << 0x10 | iVar17 << 0x18;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fVar21 = (float)param_1[10];
      if (fVar21 == DAT_00482c60 || (uint)((int)fVar21 << 1) >> 0x18 == 0xff) {
        uVar7 = 0;
      }
      else {
        fVar19 = (fVar21 + DAT_00482c48) * DAT_00482c4c;
        fVar21 = DAT_00482c60;
        if ((DAT_00482c60 <= fVar19) && (fVar21 = fVar19, 0x45ffffff < (int)fVar19)) {
          fVar21 = DAT_00482c50;
        }
        if ((int)fVar21 < DAT_00482c54) {
          uVar7 = VectorFloatToUnsigned(fVar21 + DAT_00482c58,3);
        }
        else {
          uVar7 = VectorFloatToUnsigned(fVar21 - DAT_00482c58,3);
        }
      }
      *(uint *)(iVar10 + 0x6c0) = *(uint *)(iVar10 + 0x6c0) & 0xffffe000 | uVar7 & 0x1fff;
      uVar7 = *(uint *)(iVar10 + 0x6bc);
      *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffffff3f;
      iVar14 = param_1[0x12];
      if (iVar14 == iVar15) {
LAB_004830b4:
        iVar14 = param_1[2];
        if (iVar14 == 0x2901) {
          *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffff8f3f | 0x2000;
        }
        else if (iVar14 == 0x812d) {
          *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffff8f3f | 0x1000;
        }
        else if (iVar14 == 0x812f) {
          *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffff8f3f;
        }
        else if (iVar14 == 0x8370) {
          *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffff8f3f | 0x3000;
        }
        iVar14 = param_1[3];
        if (iVar14 == 0x2901) {
          uVar7 = *(uint *)(iVar10 + 0x6bc) & 0xfffff8ff | 0x200;
LAB_00483138:
          *(uint *)(iVar10 + 0x6bc) = uVar7;
        }
        else {
          if (iVar14 == 0x812d) {
            uVar7 = *(uint *)(iVar10 + 0x6bc) & 0xfffff8ff | 0x100;
            goto LAB_00483138;
          }
          if (iVar14 == 0x812f) {
            uVar7 = *(uint *)(iVar10 + 0x6bc) & 0xfffff8ff;
            goto LAB_00483138;
          }
          if (iVar14 == 0x8370) {
            uVar7 = *(uint *)(iVar10 + 0x6bc) & 0xfffff8ff | 0x300;
            goto LAB_00483138;
          }
        }
        if (*param_1 == 0x2600) {
          *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfffffffd;
        }
        else if (*param_1 == 0x2601) {
          *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) | 2;
        }
        iVar14 = param_1[1];
        if (iVar14 == iVar3) {
          *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) | 4;
          uVar8 = *(uint *)(iVar10 + 0x6c0);
          uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
          *(uint *)(iVar10 + 0x6c0) = uVar8 & 0xfff0ffff | uVar9;
          uVar7 = param_1[5];
          uVar9 = uVar8 & 0xf0f0ffff | uVar9;
joined_r0x00483384:
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          *(uint *)(iVar10 + 0x6c0) = uVar9 | (uVar7 & 0xf) << 0x18;
          *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfeffffff;
        }
        else if (iVar14 < iVar3) {
          if (iVar14 == 0x2600) {
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfffffffb;
            *(uint *)(iVar10 + 0x6c0) = *(uint *)(iVar10 + 0x6c0) & 0xf0f0ffff;
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfeffffff;
          }
          else if (iVar14 == 0x2601) {
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) | 4;
            *(uint *)(iVar10 + 0x6c0) = *(uint *)(iVar10 + 0x6c0) & 0xf0f0ffff;
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfeffffff;
          }
          else if (iVar14 == 0x2700) {
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfffffffb;
            uVar8 = *(uint *)(iVar10 + 0x6c0);
            uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
            *(uint *)(iVar10 + 0x6c0) = uVar8 & 0xfff0ffff | uVar9;
            uVar7 = param_1[5];
            uVar9 = uVar8 & 0xf0f0ffff | uVar9;
            goto joined_r0x00483384;
          }
        }
        else {
          if (iVar14 == 0x2702) {
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xfffffffb;
            uVar8 = *(uint *)(iVar10 + 0x6c0);
            uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
            *(uint *)(iVar10 + 0x6c0) = uVar8 & 0xfff0ffff | uVar9;
            uVar7 = param_1[5];
            uVar9 = uVar8 & 0xf0f0ffff | uVar9;
          }
          else {
            if (iVar14 != 0x2703) goto LAB_00483348;
            *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) | 4;
            uVar8 = *(uint *)(iVar10 + 0x6c0);
            uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
            *(uint *)(iVar10 + 0x6c0) = uVar8 & 0xfff0ffff | uVar9;
            uVar7 = param_1[5];
            uVar9 = uVar8 & 0xf0f0ffff | uVar9;
          }
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          *(uint *)(iVar10 + 0x6c0) = uVar9 | (uVar7 & 0xf) << 0x18;
          *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) | 0x1000000;
        }
LAB_00483348:
        *(uint *)(iVar10 + 0x6b4) = uVar4;
      }
      else {
        if (iVar14 < iVar15) {
          if (3 < iVar14 - 0x1906U) {
            return DAT_00482c3c;
          }
          goto LAB_004830b4;
        }
        iVar15 = iVar14 + -0x6050;
        if (iVar15 != 0) {
          bVar16 = iVar15 == 0x6b0;
          if (!bVar16) {
            iVar15 = iVar14 + -0x675a;
            bVar16 = iVar15 == 0;
          }
          if (!bVar16) {
            bVar16 = iVar15 == 1;
          }
          if (!bVar16) {
            return DAT_00482c3c;
          }
          goto LAB_004830b4;
        }
        *(uint *)(iVar10 + 0x6bc) = uVar7 & 0xffffff39;
        *(uint *)(iVar10 + 0x6c0) = *(uint *)(iVar10 + 0x6c0) & 0xf0f0e000;
        *(undefined4 *)(iVar10 + 0x6b4) = 0;
        *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xffff88ff;
      }
      if (param_1[0x12] == 0x675a) {
        iVar14 = 2;
      }
      else {
        iVar14 = 0;
      }
      *(uint *)(iVar10 + 0x6bc) = *(uint *)(iVar10 + 0x6bc) & 0xffffffcf | iVar14 << 4;
      uVar4 = *(uint *)(iVar10 + 0x6b8);
      uVar7 = (param_1[0x10] & 0x7ffU) << 0x10;
      *(uint *)(iVar10 + 0x6b8) = uVar4 & 0xf800ffff | uVar7;
      *(uint *)(iVar10 + 0x6b8) = param_1[0x11] & 0x7ffU | uVar4 & 0xf800f800 | uVar7;
      uVar4 = FUN_002c83f8(*piVar13);
      iVar14 = iVar10 + 0x6b4;
      *(uint *)(iVar10 + 0x6c4) = *(uint *)(iVar10 + 0x6c4) & 0xc0000000 | uVar4 >> 3;
      *puVar12 = *puVar12 | 2;
      *(uint *)(iVar10 + 0x6c8) = param_1[0x14] & 0xfU | *(uint *)(iVar10 + 0x6c8) & 0xfffffff0;
      uVar6 = 0x91;
      goto LAB_00483848;
    }
    if (param_2 != 2) {
      return 0;
    }
    fVar21 = (float)param_1[10];
    if (fVar21 == DAT_00482c60 || (uint)((int)fVar21 << 1) >> 0x18 == 0xff) {
      uVar7 = 0;
    }
    else {
      fVar19 = (fVar21 + DAT_00482c48) * DAT_00482c4c;
      fVar21 = DAT_00482c60;
      if ((DAT_00482c60 <= fVar19) && (fVar21 = fVar19, 0x45ffffff < (int)fVar19)) {
        fVar21 = DAT_00482c50;
      }
      if ((int)fVar21 < DAT_00482c54) {
        uVar7 = VectorFloatToUnsigned(fVar21 + DAT_00482c58,3);
      }
      else {
        uVar7 = VectorFloatToUnsigned(fVar21 - DAT_00482c58,3);
      }
    }
    *(uint *)(iVar10 + 0x6e0) = *(uint *)(iVar10 + 0x6e0) & 0xffffe000 | uVar7 & 0x1fff;
    uVar7 = *(uint *)(iVar10 + 0x6dc);
    *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffffff3f;
    iVar14 = param_1[0x12];
    if (iVar14 == iVar15) {
LAB_00483490:
      iVar14 = param_1[2];
      if (iVar14 == 0x2901) {
        *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffff8f3f | 0x2000;
      }
      else if (iVar14 == 0x812d) {
        *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffff8f3f | 0x1000;
      }
      else if (iVar14 == 0x812f) {
        *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffff8f3f;
      }
      else if (iVar14 == 0x8370) {
        *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffff8f3f | 0x3000;
      }
      iVar14 = param_1[3];
      if (iVar14 == 0x2901) {
        uVar7 = *(uint *)(iVar10 + 0x6dc) & 0xfffff8ff | 0x200;
LAB_00483514:
        *(uint *)(iVar10 + 0x6dc) = uVar7;
      }
      else {
        if (iVar14 == 0x812d) {
          uVar7 = *(uint *)(iVar10 + 0x6dc) & 0xfffff8ff | 0x100;
          goto LAB_00483514;
        }
        if (iVar14 == 0x812f) {
          uVar7 = *(uint *)(iVar10 + 0x6dc) & 0xfffff8ff;
          goto LAB_00483514;
        }
        if (iVar14 == 0x8370) {
          uVar7 = *(uint *)(iVar10 + 0x6dc) & 0xfffff8ff | 0x300;
          goto LAB_00483514;
        }
      }
      if (*param_1 == 0x2600) {
        *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfffffffd;
      }
      else if (*param_1 == 0x2601) {
        *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) | 2;
      }
      iVar14 = param_1[1];
      if (iVar14 == iVar3) {
        *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) | 4;
        uVar8 = *(uint *)(iVar10 + 0x6e0);
        uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
        *(uint *)(iVar10 + 0x6e0) = uVar8 & 0xfff0ffff | uVar9;
        uVar7 = param_1[5];
        uVar9 = uVar8 & 0xf0f0ffff | uVar9;
joined_r0x00483760:
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        *(uint *)(iVar10 + 0x6e0) = uVar9 | (uVar7 & 0xf) << 0x18;
        *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfeffffff;
      }
      else if (iVar14 < iVar3) {
        if (iVar14 == 0x2600) {
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfffffffb;
          *(uint *)(iVar10 + 0x6e0) = *(uint *)(iVar10 + 0x6e0) & 0xf0f0ffff;
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfeffffff;
        }
        else if (iVar14 == 0x2601) {
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) | 4;
          *(uint *)(iVar10 + 0x6e0) = *(uint *)(iVar10 + 0x6e0) & 0xf0f0ffff;
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfeffffff;
        }
        else if (iVar14 == 0x2700) {
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfffffffb;
          uVar8 = *(uint *)(iVar10 + 0x6e0);
          uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
          *(uint *)(iVar10 + 0x6e0) = uVar8 & 0xfff0ffff | uVar9;
          uVar7 = param_1[5];
          uVar9 = uVar8 & 0xf0f0ffff | uVar9;
          goto joined_r0x00483760;
        }
      }
      else {
        if (iVar14 == 0x2702) {
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xfffffffb;
          uVar8 = *(uint *)(iVar10 + 0x6e0);
          uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
          *(uint *)(iVar10 + 0x6e0) = uVar8 & 0xfff0ffff | uVar9;
          uVar7 = param_1[5];
          uVar9 = uVar8 & 0xf0f0ffff | uVar9;
        }
        else {
          if (iVar14 != 0x2703) goto LAB_00483724;
          *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) | 4;
          uVar8 = *(uint *)(iVar10 + 0x6e0);
          uVar9 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
          *(uint *)(iVar10 + 0x6e0) = uVar8 & 0xfff0ffff | uVar9;
          uVar7 = param_1[5];
          uVar9 = uVar8 & 0xf0f0ffff | uVar9;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        *(uint *)(iVar10 + 0x6e0) = uVar9 | (uVar7 & 0xf) << 0x18;
        *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) | 0x1000000;
      }
LAB_00483724:
      *(uint *)(iVar10 + 0x6d4) = uVar4;
    }
    else {
      if (iVar14 < iVar15) {
        if (3 < iVar14 - 0x1906U) {
          return DAT_00482c3c;
        }
        goto LAB_00483490;
      }
      iVar15 = iVar14 + -0x6050;
      if (iVar15 != 0) {
        bVar16 = iVar15 == 0x6b0;
        if (!bVar16) {
          iVar15 = iVar14 + -0x675a;
          bVar16 = iVar15 == 0;
        }
        if (!bVar16) {
          bVar16 = iVar15 == 1;
        }
        if (!bVar16) {
          return DAT_00482c3c;
        }
        goto LAB_00483490;
      }
      *(uint *)(iVar10 + 0x6dc) = uVar7 & 0xffffff39;
      *(uint *)(iVar10 + 0x6e0) = *(uint *)(iVar10 + 0x6e0) & 0xf0f0e000;
      *(undefined4 *)(iVar10 + 0x6d4) = 0;
      *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xffff88ff;
    }
    if (param_1[0x12] == 0x675a) {
      iVar14 = 2;
    }
    else {
      iVar14 = 0;
    }
    *(uint *)(iVar10 + 0x6dc) = *(uint *)(iVar10 + 0x6dc) & 0xffffffcf | iVar14 << 4;
    uVar4 = *(uint *)(iVar10 + 0x6d8);
    uVar7 = (param_1[0x10] & 0x7ffU) << 0x10;
    *(uint *)(iVar10 + 0x6d8) = uVar4 & 0xf800ffff | uVar7;
    *(uint *)(iVar10 + 0x6d8) = param_1[0x11] & 0x7ffU | uVar4 & 0xf800f800 | uVar7;
    uVar4 = FUN_002c83f8(*piVar13);
    iVar14 = iVar10 + 0x6d4;
    *(uint *)(iVar10 + 0x6e4) = *(uint *)(iVar10 + 0x6e4) & 0xc0000000 | uVar4 >> 3;
    *puVar12 = *puVar12 | 4;
    *(uint *)(iVar10 + 0x6e8) = param_1[0x14] & 0xfU | *(uint *)(iVar10 + 0x6e8) & 0xfffffff0;
    uVar6 = 0x99;
LAB_00483848:
    FUN_002d1244(uVar6,6,iVar14);
    return 0;
  }
  *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xffefffff;
  *(uint *)(iVar10 + 0x674) = uVar4;
  uVar4 = *(uint *)(iVar10 + 0x678);
  uVar7 = (param_1[0x10] & 0x7ffU) << 0x10;
  *(uint *)(iVar10 + 0x678) = uVar4 & 0xf800ffff | uVar7;
  *(uint *)(iVar10 + 0x678) = uVar4 & 0xf800f800 | uVar7 | param_1[0x11] & 0x7ffU;
  fVar22 = (float)param_1[10];
  if (fVar22 == fVar20 || (uint)((int)fVar22 << 1) >> 0x18 == 0xff) {
    *(uint *)(iVar10 + 0x680) = *(uint *)(iVar10 + 0x680) & 0xffffe000;
  }
  else {
    fVar19 = (fVar22 + fVar21) * fVar19;
    if ((fVar20 <= fVar19) && (fVar20 = fVar19, 0x45ffffff < (int)fVar19)) {
      fVar20 = fVar1;
    }
    if ((int)fVar20 < iVar14) {
      uVar4 = VectorFloatToUnsigned(fVar20 + fVar2,3);
      *(uint *)(iVar10 + 0x680) = uVar4 & 0x1fff | *(uint *)(iVar10 + 0x680) & 0xffffe000;
    }
    else {
      uVar4 = VectorFloatToUnsigned(fVar20 - fVar2,3);
      *(uint *)(iVar10 + 0x680) = uVar4 & 0x1fff | *(uint *)(iVar10 + 0x680) & 0xffffe000;
    }
  }
  *(uint *)(iVar10 + 0x6a8) = *(uint *)(iVar10 + 0x6a8) & 0xfffffff0 | param_1[0x14] & 0xfU;
  iVar14 = param_1[0x12];
  iVar15 = iVar14 - DAT_00482c68;
  if (iVar14 == DAT_00482c68) {
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0x8effffff | 0x20100006;
    *(uint *)(iVar10 + 0x680) = *(uint *)(iVar10 + 0x680) & 0xf0f0e000;
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xffff88cf | 0x1100;
    goto LAB_00482f64;
  }
  if (iVar14 < DAT_00482c68) {
    if (4 < iVar14 - 0x1906U) {
      return DAT_00482c3c;
    }
  }
  else {
    if (iVar15 == 0x10) {
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0x8fffffc9;
      *(uint *)(iVar10 + 0x680) = *(uint *)(iVar10 + 0x680) & 0xf0f0e000;
      *(undefined4 *)(iVar10 + 0x674) = 0;
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xffff88ff;
      goto LAB_00482f64;
    }
    bVar16 = iVar15 == 0x6c0;
    if (!bVar16) {
      iVar14 = iVar15 + -0x71a;
      bVar16 = iVar14 == 0;
    }
    if (!bVar16) {
      bVar16 = iVar14 == 1;
    }
    if (!bVar16) {
      return DAT_00482c3c;
    }
  }
  if (*(int *)(iVar10 + 0xf8) == 0x6e00) {
    uVar4 = *(uint *)(iVar10 + 0x67c) & 0x8fffffff | 0x30000000;
  }
  else {
    uVar4 = *(uint *)(iVar10 + 0x67c) & 0x8fffffff;
  }
  *(uint *)(iVar10 + 0x67c) = uVar4;
  iVar14 = param_1[2];
  if (iVar14 == 0x2901) {
    uVar4 = *(uint *)(iVar10 + 0x67c) & 0xffff8fff | 0x2000;
LAB_00482bd4:
    *(uint *)(iVar10 + 0x67c) = uVar4;
  }
  else {
    if (iVar14 == 0x812d) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xffff8fff | 0x1000;
      goto LAB_00482bd4;
    }
    if (iVar14 == 0x812f) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xffff8fff;
      goto LAB_00482bd4;
    }
    if (iVar14 == 0x8370) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xffff8fff | 0x3000;
      goto LAB_00482bd4;
    }
  }
  iVar14 = param_1[3];
  if (iVar14 == 0x2901) {
    uVar4 = *(uint *)(iVar10 + 0x67c) & 0xfffff8ff | 0x200;
LAB_00482c18:
    *(uint *)(iVar10 + 0x67c) = uVar4;
  }
  else {
    if (iVar14 == 0x812d) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xfffff8ff | 0x100;
      goto LAB_00482c18;
    }
    if (iVar14 == 0x812f) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xfffff8ff;
      goto LAB_00482c18;
    }
    if (iVar14 == 0x8370) {
      uVar4 = *(uint *)(iVar10 + 0x67c) & 0xfffff8ff | 0x300;
      goto LAB_00482c18;
    }
  }
  if (*param_1 == 0x2600) {
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfffffffd;
  }
  else if (*param_1 == 0x2601) {
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) | 2;
  }
  iVar14 = param_1[1];
  if (iVar14 == iVar3) {
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) | 4;
    uVar9 = *(uint *)(iVar10 + 0x680);
    uVar7 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
    *(uint *)(iVar10 + 0x680) = uVar9 & 0xfff0ffff | uVar7;
    uVar4 = param_1[5];
    uVar7 = uVar9 & 0xf0f0ffff | uVar7;
joined_r0x00482ed4:
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    *(uint *)(iVar10 + 0x680) = uVar7 | (uVar4 & 0xf) << 0x18;
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfeffffff;
  }
  else if (iVar14 < iVar3) {
    if (iVar14 == 0x2600) {
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfffffffb;
      *(uint *)(iVar10 + 0x680) = *(uint *)(iVar10 + 0x680) & 0xf0f0ffff;
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfeffffff;
    }
    else if (iVar14 == 0x2601) {
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) | 4;
      *(uint *)(iVar10 + 0x680) = *(uint *)(iVar10 + 0x680) & 0xf0f0ffff;
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfeffffff;
    }
    else if (iVar14 == 0x2700) {
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfffffffb;
      uVar9 = *(uint *)(iVar10 + 0x680);
      uVar7 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      *(uint *)(iVar10 + 0x680) = uVar9 & 0xfff0ffff | uVar7;
      uVar4 = param_1[5];
      uVar7 = uVar9 & 0xf0f0ffff | uVar7;
      goto joined_r0x00482ed4;
    }
  }
  else {
    if (iVar14 == 0x2702) {
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xfffffffb;
      uVar9 = *(uint *)(iVar10 + 0x680);
      uVar7 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      *(uint *)(iVar10 + 0x680) = uVar9 & 0xfff0ffff | uVar7;
      uVar4 = param_1[5];
      uVar7 = uVar9 & 0xf0f0ffff | uVar7;
    }
    else {
      if (iVar14 != 0x2703) goto LAB_00482e78;
      *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) | 4;
      uVar9 = *(uint *)(iVar10 + 0x680);
      uVar7 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      *(uint *)(iVar10 + 0x680) = uVar9 & 0xfff0ffff | uVar7;
      uVar4 = param_1[5];
      uVar7 = uVar9 & 0xf0f0ffff | uVar7;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    *(uint *)(iVar10 + 0x680) = uVar7 | (uVar4 & 0xf) << 0x18;
    *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) | 0x1000000;
  }
LAB_00482e78:
  if (param_1[0x12] == 0x675a) {
    iVar14 = 2;
  }
  else {
    iVar14 = 0;
  }
  *(uint *)(iVar10 + 0x67c) = *(uint *)(iVar10 + 0x67c) & 0xffffffcf | iVar14 << 4;
LAB_00482f64:
  uVar4 = FUN_002c83f8(*piVar13);
  *(uint *)(iVar10 + 0x684) = *(uint *)(iVar10 + 0x684) & 0xc0000000 | uVar4 >> 3;
  *puVar12 = *puVar12 | 1;
  FUN_002d1244(0x81,10,iVar10 + 0x674);
  puVar12 = DAT_0048385c;
  puVar5 = (undefined4 *)*DAT_0048385c;
  if ((undefined4 *)*DAT_00483860 <= puVar5) {
    return 0;
  }
  *puVar5 = *(undefined4 *)(iVar10 + 0x6a8);
  puVar5[1] = DAT_00483864;
  *puVar12 = (uint)(puVar5 + 2);
  return 0;
}
