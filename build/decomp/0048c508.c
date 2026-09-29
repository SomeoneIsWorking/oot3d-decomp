// OoT3D decomp @ 0048c508  name=FUN_0048c508  size=17076

void FUN_0048c508(uint param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  uint *puVar19;
  int iVar20;
  byte bVar21;
  uint in_r12;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  float fVar30;

  puVar2 = DAT_0048d408;
  puVar1 = DAT_0048d404;
  if (param_1 == 0xffffffff || param_4 == 0) {
    return;
  }
  piVar18 = *(int **)(DAT_0048d400 + 8);
  iVar16 = *piVar18;
  *DAT_0048d404 = param_1;
  uVar22 = DAT_0049064c;
  puVar19 = (uint *)*puVar2;
  uVar15 = param_1 << 0xe;
  if ((param_1 & 0x40000) == 0) {
    puVar7 = (uint *)(*(int *)(iVar16 + 0x1c) + (uVar15 >> 0x15) * 0xc);
    uVar15 = puVar7[1];
    uVar22 = puVar7[2];
    *puVar1 = *puVar7;
    puVar1[1] = uVar15;
    puVar1[2] = uVar22;
    uVar15 = puVar1[2];
    if ((uVar15 & 0x6000) == 0) {
      if ((uVar15 & 0x400) == 0) {
        iVar20 = 9;
      }
      else {
        iVar20 = 1;
      }
      iVar8 = 0;
      if (0 < param_4) {
        iVar10 = iVar16 + iVar20 * 4;
        do {
          uVar22 = *(uint *)(iVar10 + 0x4b4);
          uVar15 = 1 << ((param_1 & 0x7f) + (puVar1[2] >> 0x18) + iVar8 & 0xff);
          if (param_2[iVar8] == 0) {
            uVar22 = uVar22 & ~uVar15;
          }
          else {
            uVar22 = uVar22 | uVar15;
          }
          iVar8 = iVar8 + 1;
          *(uint *)(iVar10 + 0x4b4) = uVar22;
        } while (iVar8 < param_4);
      }
      if ((char)puVar19[3] != '\0') {
        piVar18[iVar20 + 0x403] = ~*(uint *)(iVar16 + iVar20 * 4 + 0x4b4);
      }
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << iVar20;
    }
    else {
      if ((uVar15 << 0x11) >> 0x1e != 2) {
        return;
      }
      iVar20 = 0;
      if (0 < param_4) {
        do {
          if ((puVar1[2] & 0x400) == 0) {
            iVar8 = 10;
          }
          else {
            iVar8 = 2;
          }
          uVar15 = iVar8 + (puVar1[2] >> 0x18) + (param_1 & 0x7f) + iVar20;
          iVar8 = iVar16 + uVar15 * 4;
          *(uint *)(iVar8 + 0x4b4) =
               param_2[iVar20 * 3] & 0xff | (param_2[iVar20 * 3 + 1] & 0xff) << 8 |
               (param_2[iVar20 * 3 + 2] & 0xff) << 0x10;
          iVar10 = iVar16 + ((int)uVar15 >> 5) * 4;
          *(uint *)(iVar10 + 0x7a8) = *(uint *)(iVar10 + 0x7a8) | 1 << (uVar15 & 0x1f);
          if ((char)puVar19[3] != '\0') {
            piVar18[uVar15 + 0x403] = ~*(uint *)(iVar8 + 0x4b4);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < param_4);
      }
    }
    uVar15 = *puVar19 | 0x10000;
    goto LAB_0048d740;
  }
  uVar9 = uVar15 >> 0x10;
  iVar20 = *(int *)(DAT_0048d400 + 8);
  if (uVar9 == 0xb1) {
switchD_0048c96c_caseD_b2:
    uVar15 = 1 << ((uVar15 >> 0x10) - 0x99 & 0xff);
    bVar12 = (byte)uVar15;
    if ((uVar15 & 0xff) != 0) {
      bVar12 = 1;
    }
    bVar21 = 0;
    if ((uVar15 & 0xff00) != 0) {
      bVar21 = 2;
    }
    bVar13 = 0;
    if ((uVar15 & 0xff0000) != 0) {
      bVar13 = 4;
    }
    bVar14 = 0;
    if ((uVar15 & 0xff000000) != 0) {
      bVar14 = 8;
    }
    *(byte *)(iVar16 + 0x4ad) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x4ad);
    if ((char)puVar19[3] != '\0') {
      uVar9 = *param_2;
      uVar22 = *(uint *)(iVar16 + 0x790) & ~uVar15;
joined_r0x0048e86c:
      uVar23 = uVar15;
      if (uVar9 != 0) {
        uVar23 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 & uVar23 | uVar22;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      *puVar19 = *puVar19 | 0x80008;
      *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
      return;
    }
    uVar22 = uVar15;
    if (*param_2 != 0) {
      uVar22 = 0;
    }
    if ((*(uint *)(iVar16 + 0x790) & uVar15) == (uVar22 & uVar15)) {
      return;
    }
    uVar22 = uVar15;
    if (*param_2 != 0) {
      uVar22 = 0;
    }
    *(uint *)(iVar16 + 0x790) = uVar15 & uVar22 | *(uint *)(iVar16 + 0x790) & ~uVar15;
    *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
    uVar15 = *puVar19 | 0x80008;
    goto LAB_0048d740;
  }
  if (0xb1 < uVar9) {
    switch(uVar9) {
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
      goto switchD_0048c96c_caseD_b2;
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
      iVar20 = (uVar15 >> 0x10) - 0xb9;
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + iVar20 * 0x70 + 0xa0c) = *param_2;
        *puVar19 = *puVar19 | 8;
        puVar19[(uVar15 >> 0x10) - 0x68] = 0;
        return;
      }
      iVar16 = iVar16 + iVar20 * 0x70;
      if (*(uint *)(iVar16 + 0xa0c) == *param_2) {
        return;
      }
      *(uint *)(iVar16 + 0xa0c) = *param_2;
      goto LAB_0048eb58;
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
      uVar15 = 1 << ((param_1 & 0xfc) + 0xfd & 0xff);
      bVar12 = (byte)uVar15;
      if ((uVar15 & 0xff) != 0) {
        bVar12 = 1;
      }
      bVar21 = 0;
      if ((uVar15 & 0xff00) != 0) {
        bVar21 = 2;
      }
      bVar13 = 0;
      if ((uVar15 & 0xff0000) != 0) {
        bVar13 = 4;
      }
      bVar14 = 0;
      if ((uVar15 & 0xff000000) != 0) {
        bVar14 = 8;
      }
      *(byte *)(iVar16 + 0x4af) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x4af);
      uVar22 = *param_2;
      uVar9 = *(uint *)(iVar16 + 0x798);
      if ((char)puVar19[3] != '\0') {
        uVar23 = uVar15;
        if (uVar22 != 0) {
          uVar23 = 0;
        }
        *(uint *)(iVar16 + 0x798) = uVar15 & uVar23 | uVar9 & ~uVar15;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x2000000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12f0) = ~*(uint *)(iVar16 + 0x798);
        return;
      }
      uVar23 = uVar15;
      if (uVar22 != 0) {
        uVar23 = 0;
      }
      if ((uVar9 & uVar15) == (uVar23 & uVar15)) {
        return;
      }
      uVar23 = uVar15;
      if (uVar22 != 0) {
        uVar23 = 0;
      }
      *(uint *)(iVar16 + 0x798) = uVar15 & uVar23 | uVar9 & ~uVar15;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x2000000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
      uVar22 = uVar9 * 4 - 800;
      uVar15 = 7 << (uVar22 & 0xff);
      bVar12 = (byte)uVar15;
      if ((uVar15 & 0xff) != 0) {
        bVar12 = 1;
      }
      bVar21 = 0;
      if ((uVar15 & 0xff00) != 0) {
        bVar21 = 2;
      }
      bVar13 = 0;
      if ((uVar15 & 0xff0000) != 0) {
        bVar13 = 4;
      }
      bVar14 = 0;
      if ((uVar15 & 0xff000000) != 0) {
        bVar14 = 8;
      }
      *(byte *)(iVar16 + 0x4b0) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x4b0);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x79c) =
             *(uint *)(iVar16 + 0x79c) & ~uVar15 | (*param_2 & 7) << (uVar22 & 0xff);
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x4000000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12f4) = ~*(uint *)(iVar16 + 0x79c);
        return;
      }
      uVar22 = (*param_2 & 7) << (uVar22 & 0xff);
      if ((*(uint *)(iVar16 + 0x79c) & uVar15) == uVar22) {
        return;
      }
      *(uint *)(iVar16 + 0x79c) = *(uint *)(iVar16 + 0x79c) & ~uVar15 | uVar22;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x4000000;
      uVar15 = *puVar19 | 0x80000;
      break;
    default:
      return;
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
      if ((char)puVar19[3] != '\0') {
        *(uint *)((param_1 & 0x3fffc) + iVar16 + 0x61c) = *param_2;
        *puVar19 = *puVar19 | 8;
        *(undefined4 *)((int)puVar19 + ((*puVar1 & 0x3fffc) - 0x24c)) = 0;
        return;
      }
      iVar16 = (param_1 & 0x3fffc) + iVar16;
      if (*(uint *)(iVar16 + 0x61c) == *param_2) {
        return;
      }
      *(uint *)(iVar16 + 0x61c) = *param_2;
LAB_0048eb58:
      uVar15 = *puVar19;
      goto LAB_0048fc5c;
    case 0xdc:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 8;
      uVar15 = *(uint *)(iVar16 + 0x78c);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x78c) = uVar15 & 0xfcffffff | (*param_2 + 0x40) * 0x1000000 & 0x3000000;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      uVar22 = (*param_2 + 0x40) * 0x1000000 & 0x3000000;
      if ((uVar15 & 0x3000000) == uVar22) {
        return;
      }
      *(uint *)(iVar16 + 0x78c) = uVar15 & 0xfcffffff | uVar22;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xdd:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 4;
      uVar22 = *(uint *)(iVar16 + 0x78c);
      uVar15 = *param_2 * 0x400000 + 0xd0000000 & 0xc00000;
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x78c) = uVar15 | uVar22 & 0xff3fffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      if (uVar15 == (uVar22 & 0xc00000)) {
        return;
      }
      *(uint *)(iVar16 + 0x78c) = uVar15 | uVar22 & 0xff3fffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xde:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 8;
      uVar15 = *param_2;
      if ((char)puVar19[3] != '\0') {
        if ((uVar15 == 0x62c8) || (*(char *)(iVar16 + 0x970) != '\0')) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0x40000000;
        }
        *(uint *)(iVar16 + 0x78c) =
             uVar15 * 0x10000000 + 0x80000000 & 0x70000000 | uVar22 |
             *(uint *)(iVar16 + 0x78c) & 0x8fffffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      if ((uVar15 == DAT_00490630) || (*(char *)(iVar16 + 0x970) != '\0')) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0x40000000;
      }
      uVar9 = uVar15 * 0x10000000 + 0x80000000;
      if ((uVar22 | uVar9 & 0x70000000) == (*(uint *)(iVar16 + 0x78c) & 0x70000000)) {
        return;
      }
      if ((uVar15 == DAT_00490630) || (*(char *)(iVar16 + 0x970) != '\0')) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0x40000000;
      }
      *(uint *)(iVar16 + 0x78c) =
           uVar15 | uVar9 & 0x70000000 | *(uint *)(iVar16 + 0x78c) & 0x8fffffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xdf:
      uVar22 = *(uint *)(iVar16 + 0x78c);
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 8;
      uVar9 = *param_2;
      uVar15 = (uVar22 << 2) >> 0x1e;
      if ((char)puVar19[3] == '\0') {
        if ((uVar9 == 0) && (uVar15 != 0)) {
          uVar23 = 0x40000000;
        }
        else {
          uVar23 = 0;
        }
        if (uVar23 != (uVar22 & 0x40000000)) {
          if ((uVar9 == 0) && (uVar15 != 0)) {
            uVar15 = 0x40000000;
          }
          else {
            uVar15 = 0;
          }
          *(uint *)(iVar16 + 0x78c) = uVar15 | uVar22 & 0xbfffffff;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        if ((uVar9 == 0) && (uVar15 != 0)) {
          uVar15 = 0x40000000;
        }
        else {
          uVar15 = 0;
        }
        *(uint *)(iVar16 + 0x78c) = uVar15 | uVar22 & 0xbfffffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
      *(bool *)(iVar16 + 0x970) = *param_2 != 0;
      return;
    case 0xe0:
      switch(*param_2) {
      case 0x62b0:
        iVar8 = 0;
        break;
      case 0x62b1:
        iVar8 = 1;
        break;
      case 0x62b2:
        iVar8 = 2;
        break;
      case 0x62b3:
        iVar8 = 3;
        break;
      case 0x62b4:
        iVar8 = 4;
        break;
      case 0x62b5:
        iVar8 = 5;
        break;
      case 0x62b6:
        iVar8 = 6;
        break;
      case 0x62b7:
        iVar8 = 8;
        break;
      default:
        return;
      }
      *(undefined4 *)(iVar16 + 0x98c) = *(undefined4 *)(DAT_00490634 + *param_2 * 4 + -0x18ac0);
      if ((*(uint *)(iVar16 + 0x560) & 1) == 0) {
        return;
      }
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      uVar15 = *(uint *)(iVar16 + 0x78c);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x78c) = iVar8 << 4 | uVar15 & 0xffffff0f;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      if ((uVar15 & 0xf0) == iVar8 << 4) {
        return;
      }
      *(uint *)(iVar16 + 0x78c) = iVar8 << 4 | uVar15 & 0xffffff0f;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xe1:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 4;
      if ((char)puVar19[3] != '\0') {
        if (*param_2 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x40000;
        }
        *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffbffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 0x40000;
      }
      if ((*(uint *)(iVar16 + 0x78c) & 0x40000) == uVar15) {
        return;
      }
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 0x40000;
      }
      *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffbffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xe2:
      *(bool *)(iVar16 + 0x96d) = *param_2 != 0;
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 4;
      if ((char)puVar19[3] == '\0') {
        uVar15 = 0;
        if (*param_2 != 0) {
          uVar15 = 0x10000;
        }
        if ((*(uint *)(iVar16 + 0x78c) & 0x10000) != uVar15) {
          uVar15 = 0;
          if (*param_2 != 0) {
            uVar15 = 0x10000;
          }
          *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffeffff;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        if (*param_2 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x10000;
        }
        *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffeffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      if ((char)puVar19[3] == '\0') {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96d);
        bVar24 = uVar15 == 0;
        cVar6 = '\0';
        if (bVar24) {
          cVar6 = *(char *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && cVar6 == '\0';
        if (bVar24 && cVar6 == '\0') {
          bVar25 = *(char *)(iVar16 + 0x96f) == '\0';
        }
        uVar22 = *(uint *)(iVar16 + 0x78c);
        if ((uint)!bVar25 == (uVar22 & 1)) {
          return;
        }
        bVar24 = uVar15 == 0;
        if (bVar24) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && uVar15 == 0;
        if (bVar24 && uVar15 == 0) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
          bVar25 = uVar15 == 0;
        }
joined_r0x0048f4d8:
        if (!bVar25) {
          uVar15 = 1;
        }
        *(uint *)(iVar16 + 0x78c) = uVar22 & 0xfffffffe | uVar15;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        uVar15 = *puVar19 | 0x80000;
        break;
      }
      uVar15 = (uint)*(byte *)(iVar16 + 0x96d);
      bVar24 = uVar15 == 0;
      if (bVar24) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
      }
      bVar25 = bVar24 && uVar15 == 0;
      if (bVar24 && uVar15 == 0) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
        bVar25 = uVar15 == 0;
      }
      if (bVar25) goto LAB_0048f5d0;
      goto LAB_0048f338;
    case 0xe3:
      *(bool *)(iVar16 + 0x96e) = *param_2 != 0;
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 4;
      if ((char)puVar19[3] == '\0') {
        uVar15 = 0;
        if (*param_2 != 0) {
          uVar15 = 0x20000;
        }
        if ((*(uint *)(iVar16 + 0x78c) & 0x20000) != uVar15) {
          uVar15 = 0;
          if (*param_2 != 0) {
            uVar15 = 0x20000;
          }
          *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffdffff;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        if (*param_2 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x20000;
        }
        *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffdffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      if ((char)puVar19[3] == '\0') {
        bVar24 = *(char *)(iVar16 + 0x96d) == '\0';
        cVar6 = '\0';
        if (bVar24) {
          cVar6 = *(char *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && cVar6 == '\0';
        if (bVar24 && cVar6 == '\0') {
          bVar25 = *(char *)(iVar16 + 0x96f) == '\0';
        }
        uVar15 = (uint)!bVar25;
        uVar22 = *(uint *)(iVar16 + 0x78c);
        if (uVar15 == (uVar22 & 1)) {
          return;
        }
        bVar24 = *(char *)(iVar16 + 0x96d) == '\0';
        if (bVar24) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && uVar15 == 0;
        if (bVar24 && uVar15 == 0) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
          bVar25 = uVar15 == 0;
        }
        goto joined_r0x0048f4d8;
      }
      uVar15 = (uint)*(byte *)(iVar16 + 0x96d);
      bVar24 = uVar15 == 0;
      if (bVar24) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
      }
      bVar25 = bVar24 && uVar15 == 0;
      if (bVar24 && uVar15 == 0) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
        bVar25 = uVar15 == 0;
      }
      if (bVar25) goto LAB_0048f5d0;
      goto LAB_0048f338;
    case 0xe4:
      *(bool *)(iVar16 + 0x96f) = *param_2 != 0;
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 4;
      uVar22 = *param_2;
      uVar15 = *(uint *)(iVar16 + 0x78c);
      if ((char)puVar19[3] == '\0') {
        uVar9 = 0;
        if (uVar22 != 0) {
          uVar9 = 0x80000;
        }
        if ((uVar15 & 0x80000) != uVar9) {
          uVar9 = 0;
          if (uVar22 != 0) {
            uVar9 = 0x80000;
          }
          *(uint *)(iVar16 + 0x78c) = uVar9 | uVar15 & 0xfff7ffff;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        if (uVar22 == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0x80000;
        }
        *(uint *)(iVar16 + 0x78c) = uVar22 | uVar15 & 0xfff7ffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      if ((char)puVar19[3] == '\0') {
        bVar24 = *(char *)(iVar16 + 0x96d) == '\0';
        cVar6 = '\0';
        if (bVar24) {
          cVar6 = *(char *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && cVar6 == '\0';
        if (bVar24 && cVar6 == '\0') {
          bVar25 = *(char *)(iVar16 + 0x96f) == '\0';
        }
        uVar15 = (uint)!bVar25;
        uVar22 = *(uint *)(iVar16 + 0x78c);
        if (uVar15 == (uVar22 & 1)) {
          return;
        }
        bVar24 = *(char *)(iVar16 + 0x96d) == '\0';
        if (bVar24) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
        }
        bVar25 = bVar24 && uVar15 == 0;
        if (bVar24 && uVar15 == 0) {
          uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
          bVar25 = uVar15 == 0;
        }
        goto joined_r0x0048f4d8;
      }
      uVar15 = (uint)*(byte *)(iVar16 + 0x96d);
      bVar24 = uVar15 == 0;
      if (bVar24) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96e);
      }
      bVar25 = bVar24 && uVar15 == 0;
      if (bVar24 && uVar15 == 0) {
        uVar15 = (uint)*(byte *)(iVar16 + 0x96f);
        bVar25 = uVar15 == 0;
      }
      if (bVar25) goto LAB_0048f5d0;
LAB_0048f338:
      uVar15 = 1;
LAB_0048f5d0:
      *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xfffffffe;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      return;
    case 0xe5:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      if ((char)puVar19[3] == '\0') {
        uVar15 = *param_2 << 2 & 0xc;
        if (uVar15 != (*(uint *)(iVar16 + 0x78c) & 0xc)) {
          *(uint *)(iVar16 + 0x78c) = *(uint *)(iVar16 + 0x78c) & 0xfffffff3 | uVar15;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar16 + 0x78c) = *param_2 << 2 & 0xc | *(uint *)(iVar16 + 0x78c) & 0xfffffff3;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
      uVar15 = DAT_00490638;
      *(byte *)(iVar16 + 0x4ad) = *(byte *)(iVar16 + 0x4ad) | 4;
      uVar9 = *param_2;
      uVar22 = *(uint *)(iVar16 + 0x790);
      if ((char)puVar19[3] != '\0') {
        if (uVar9 == uVar15) {
          uVar15 = 0x80000;
        }
        else {
          uVar15 = 0;
        }
        *(uint *)(iVar16 + 0x790) = uVar15 | uVar22 & 0xfff7ffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
        *puVar19 = *puVar19 | 0x80008;
        *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
        return;
      }
      if (uVar9 == uVar15) {
        uVar23 = 0x80000;
      }
      else {
        uVar23 = 0;
      }
      if ((uVar22 & 0x80000) == uVar23) {
        return;
      }
      if (uVar9 == uVar15) {
        uVar15 = 0x80000;
      }
      else {
        uVar15 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 | uVar22 & 0xfff7ffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048fc5c;
    case 0xe6:
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 8;
      if ((char)puVar19[3] != '\0') {
        if (*param_2 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x8000000;
        }
        *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xf7ffffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        return;
      }
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 0x8000000;
      }
      if ((*(uint *)(iVar16 + 0x78c) & 0x8000000) == uVar15) {
        return;
      }
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 0x8000000;
      }
      *(uint *)(iVar16 + 0x78c) = uVar15 | *(uint *)(iVar16 + 0x78c) & 0xf7ffffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xe7:
      *(byte *)(iVar16 + 0x4ad) = *(byte *)(iVar16 + 0x4ad) | 4;
      if ((char)puVar19[3] != '\0') {
        if (*param_2 == 0) {
          uVar15 = 0x10000;
        }
        else {
          uVar15 = 0;
        }
        *(uint *)(iVar16 + 0x790) = uVar15 | *(uint *)(iVar16 + 0x790) & 0xfffeffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
        *puVar19 = *puVar19 | 0x80008;
        *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
        return;
      }
      if (*param_2 == 0) {
        uVar15 = 0x10000;
      }
      else {
        uVar15 = 0;
      }
      if ((*(uint *)(iVar16 + 0x790) & 0x10000) == uVar15) {
        return;
      }
      if (*param_2 == 0) {
        uVar15 = 0x10000;
      }
      else {
        uVar15 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 | *(uint *)(iVar16 + 0x790) & 0xfffeffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048fc5c;
    case 0xe8:
      *(byte *)(iVar16 + 0x4ad) = *(byte *)(iVar16 + 0x4ad) | 4;
      if ((char)puVar19[3] != '\0') {
        if (*param_2 == 0) {
          uVar15 = 0x20000;
        }
        else {
          uVar15 = 0;
        }
        *(uint *)(iVar16 + 0x790) = uVar15 | *(uint *)(iVar16 + 0x790) & 0xfffdffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
        *puVar19 = *puVar19 | 0x80008;
        *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
        return;
      }
      if (*param_2 == 0) {
        uVar15 = 0x20000;
      }
      else {
        uVar15 = 0;
      }
      if ((*(uint *)(iVar16 + 0x790) & 0x20000) == uVar15) {
        return;
      }
      if (*param_2 == 0) {
        uVar15 = 0x20000;
      }
      else {
        uVar15 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 | *(uint *)(iVar16 + 0x790) & 0xfffdffff;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      uVar15 = *puVar19 | 0x80000;
LAB_0048fc5c:
      uVar15 = uVar15 | 8;
      break;
    case 0xe9:
      uVar15 = 1 - *param_2;
      if (1 < *param_2) {
        uVar15 = 0;
      }
      if (*(byte *)(iVar16 + 0x96c) == uVar15) {
        return;
      }
      *(byte *)(iVar16 + 0x4ad) = *(byte *)(iVar16 + 0x4ad) | 4;
      uVar15 = *(uint *)(iVar16 + 0x790);
      if ((char)puVar19[3] == '\0') {
        if (*param_2 == 0) {
          uVar22 = 0x700000;
        }
        else {
          uVar22 = 0;
        }
        if ((uVar15 & 0x700000) != uVar22) {
          if (*param_2 == 0) {
            uVar22 = 0x700000;
          }
          else {
            uVar22 = 0;
          }
          *(uint *)(iVar16 + 0x790) = uVar22 | uVar15 & 0xff8fffff;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
          *puVar19 = *puVar19 | 0x80008;
        }
      }
      else {
        if (*param_2 == 0) {
          uVar22 = 0x700000;
        }
        else {
          uVar22 = 0;
        }
        *(uint *)(iVar16 + 0x790) = uVar22 | uVar15 & 0xff8fffff;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
        *puVar19 = *puVar19 | 0x80008;
        *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
      }
      fVar5 = DAT_0048ef44;
      fVar4 = DAT_0048ef40;
      fVar3 = DAT_0048ef3c;
      cVar6 = '\x01' - (char)*param_2;
      if (1 < *param_2) {
        cVar6 = '\0';
      }
      *(char *)(iVar16 + 0x96c) = cVar6;
      iVar20 = 0;
      do {
        uVar15 = *param_2;
        iVar8 = iVar20 * 0xb;
        *(byte *)(iVar8 + iVar16 + 0x453) = *(byte *)(iVar8 + iVar16 + 0x453) | 0xf;
        if (uVar15 == 0) {
          iVar10 = iVar16 + iVar20 * 0x70;
          fVar26 = *(float *)(iVar10 + 0x9dc) * *(float *)(iVar16 + 0xd58);
          if ((char)puVar19[3] == '\0') {
            fVar27 = fVar26;
            if (0x3f800000 < (int)fVar26) {
              fVar27 = fVar3;
            }
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar27 * fVar4,3);
            fVar27 = *(float *)(iVar10 + 0x9d8) * *(float *)(iVar16 + 0xd54);
            fVar29 = fVar27;
            if (0x3f800000 < (int)fVar27) {
              fVar29 = fVar3;
            }
            iVar28 = VectorFloatToUnsigned(fVar5 + fVar29 * fVar4,3);
            iVar11 = iVar16 + iVar20 * 0x2c;
            fVar29 = *(float *)(iVar10 + 0x9d4) * *(float *)(iVar16 + 0xd50);
            fVar30 = fVar29;
            if (0x3f800000 < (int)fVar29) {
              fVar30 = fVar3;
            }
            iVar10 = VectorFloatToUnsigned(fVar5 + fVar30 * fVar4,3);
            if ((uVar15 | iVar28 << 10 | iVar10 << 0x14) != *(uint *)(iVar11 + 0x628)) {
              if (0x3f800000 < (int)fVar26) {
                fVar26 = fVar3;
              }
              if (0x3f800000 < (int)fVar27) {
                fVar27 = fVar3;
              }
              uVar15 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
              iVar10 = VectorFloatToUnsigned(fVar5 + fVar27 * fVar4,3);
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar3;
              }
              iVar28 = VectorFloatToUnsigned(fVar5 + fVar29 * fVar4,3);
              *(uint *)(iVar11 + 0x628) = uVar15 | iVar10 << 10 | iVar28 << 0x14;
              iVar10 = iVar16 + ((int)(iVar8 + 0x5dU) >> 5) * 4;
              *(uint *)(iVar10 + 0x7a8) = *(uint *)(iVar10 + 0x7a8) | 1 << (iVar8 + 0x5dU & 0x1f);
              *puVar19 = *puVar19 | 0x80000;
            }
          }
          else {
            if (0x3f800000 < (int)fVar26) {
              fVar26 = fVar3;
            }
            fVar27 = *(float *)(iVar10 + 0x9d8) * *(float *)(iVar16 + 0xd54);
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            if (0x3f800000 < (int)fVar27) {
              fVar27 = fVar3;
            }
            iVar11 = VectorFloatToUnsigned(fVar5 + fVar27 * fVar4,3);
            fVar26 = *(float *)(iVar10 + 0x9d4) * *(float *)(iVar16 + 0xd50);
            if (0x3f800000 < (int)fVar26) {
              fVar26 = fVar3;
            }
            iVar28 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            iVar10 = iVar16 + iVar20 * 0x2c;
            *(uint *)(iVar10 + 0x628) = uVar15 | iVar11 << 10 | iVar28 << 0x14;
            iVar11 = iVar16 + ((int)(iVar8 + 0x5dU) >> 5) * 4;
            *(uint *)(iVar11 + 0x7a8) = *(uint *)(iVar11 + 0x7a8) | 1 << (iVar8 + 0x5dU & 0x1f);
            *puVar19 = *puVar19 | 0x80000;
            piVar18[iVar20 * 0xb + 0x460] = ~*(uint *)(iVar10 + 0x628);
          }
        }
        else {
          iVar10 = iVar16 + iVar20 * 0x70;
          if ((char)puVar19[3] == '\0') {
            fVar27 = *(float *)(iVar10 + 0x9dc);
            fVar26 = fVar27;
            if (0x3f800000 < (int)fVar27) {
              fVar26 = fVar3;
            }
            fVar29 = *(float *)(iVar10 + 0x9d8);
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            fVar26 = fVar29;
            if (0x3f800000 < (int)fVar29) {
              fVar26 = fVar3;
            }
            iVar11 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            fVar26 = *(float *)(iVar10 + 0x9d4);
            iVar10 = iVar16 + iVar20 * 0x2c;
            fVar30 = fVar26;
            if (0x3f800000 < (int)fVar26) {
              fVar30 = fVar3;
            }
            iVar28 = VectorFloatToUnsigned(fVar5 + fVar30 * fVar4,3);
            if ((uVar15 | iVar11 << 10 | iVar28 << 0x14) != *(uint *)(iVar10 + 0x628)) {
              if (0x3f800000 < (int)fVar27) {
                fVar27 = fVar3;
              }
              if (0x3f800000 < (int)fVar29) {
                fVar29 = fVar3;
              }
              uVar15 = VectorFloatToUnsigned(fVar5 + fVar27 * fVar4,3);
              iVar11 = VectorFloatToUnsigned(fVar5 + fVar29 * fVar4,3);
              if (0x3f800000 < (int)fVar26) {
                fVar26 = fVar3;
              }
              iVar28 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
              *(uint *)(iVar10 + 0x628) = uVar15 | iVar11 << 10 | iVar28 << 0x14;
              iVar10 = iVar16 + ((int)(iVar8 + 0x5dU) >> 5) * 4;
              *(uint *)(iVar10 + 0x7a8) = *(uint *)(iVar10 + 0x7a8) | 1 << (iVar8 + 0x5dU & 0x1f);
              *puVar19 = *puVar19 | 0x80000;
            }
          }
          else {
            fVar26 = *(float *)(iVar10 + 0x9dc);
            if (0x3f800000 < (int)*(float *)(iVar10 + 0x9dc)) {
              fVar26 = fVar3;
            }
            fVar27 = *(float *)(iVar10 + 0x9d8);
            if (0x3f800000 < (int)*(float *)(iVar10 + 0x9d8)) {
              fVar27 = fVar3;
            }
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            iVar28 = VectorFloatToUnsigned(fVar5 + fVar27 * fVar4,3);
            iVar11 = iVar16 + iVar20 * 0x2c;
            fVar26 = *(float *)(iVar10 + 0x9d4);
            if (0x3f800000 < (int)*(float *)(iVar10 + 0x9d4)) {
              fVar26 = fVar3;
            }
            iVar10 = VectorFloatToUnsigned(fVar5 + fVar26 * fVar4,3);
            *(uint *)(iVar11 + 0x628) = uVar15 | iVar28 << 10 | iVar10 << 0x14;
            iVar10 = iVar16 + ((int)(iVar8 + 0x5dU) >> 5) * 4;
            *(uint *)(iVar10 + 0x7a8) = *(uint *)(iVar10 + 0x7a8) | 1 << (iVar8 + 0x5dU & 0x1f);
            *puVar19 = *puVar19 | 0x80000;
            piVar18[iVar20 * 0xb + 0x460] = ~*(uint *)(iVar11 + 0x628);
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < 8);
      return;
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      iVar8 = (uVar15 >> 0x10) - 0xea;
      uVar15 = *param_2;
      iVar20 = uVar15 - DAT_0049063c;
      if (uVar15 == DAT_0049063c) {
        uVar15 = 5;
      }
      else if ((int)DAT_0049063c < (int)uVar15) {
        if (iVar20 == 0x8d) {
          uVar15 = 3;
        }
        else if (iVar20 == 0x8e) {
          uVar15 = 4;
        }
        else if (iVar20 == 0x1c7) {
          uVar15 = 6;
        }
        else {
          if (iVar20 != 0x1c8) {
            return;
          }
          uVar15 = 7;
        }
      }
      else if (uVar15 == 0x2100) {
        uVar15 = 1;
      }
      else if ((int)uVar15 < 0x2101) {
        if (uVar15 == 0x104) {
          uVar15 = 2;
        }
        else {
          if (uVar15 != 0x1e01) {
            return;
          }
          uVar15 = 0;
        }
      }
      else if (uVar15 == 0x6401) {
        uVar15 = 8;
      }
      else {
        if (uVar15 != 0x6402) {
          return;
        }
        uVar15 = 9;
      }
      iVar20 = iVar8 * 5;
      *(byte *)(iVar20 + iVar16 + 0x42a) = *(byte *)(iVar20 + iVar16 + 0x42a) | 1;
      iVar10 = iVar16 + iVar8 * 0x14;
      uVar22 = *(uint *)(iVar10 + 0x584);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar10 + 0x584) = uVar15 | uVar22 & 0xfffffff0;
        iVar16 = iVar16 + ((int)(iVar20 + 0x34U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 0x34U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar8 * 5 + 0x437] = ~*(uint *)(iVar10 + 0x584);
        return;
      }
      if ((uVar22 & 0xf) == uVar15) {
        return;
      }
      *(uint *)(iVar10 + 0x584) = uVar15 | uVar22 & 0xfffffff0;
      iVar16 = iVar16 + ((int)(iVar20 + 0x34U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 0x34U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
      iVar8 = (uVar15 >> 0x10) - 0xf0;
      uVar15 = *param_2;
      iVar20 = uVar15 - DAT_00490640;
      if (uVar15 == DAT_00490640) {
        iVar20 = 9;
      }
      else if ((int)DAT_00490640 < (int)uVar15) {
        if (iVar20 == 0x20e5) {
          iVar20 = 5;
        }
        else if (iVar20 == 0x2172) {
          iVar20 = 3;
        }
        else if (iVar20 == 0x2173) {
          iVar20 = 4;
        }
        else {
          if (iVar20 != 0x22ad) {
            return;
          }
          iVar20 = 7;
        }
      }
      else if (uVar15 == 0x104) {
        iVar20 = 2;
      }
      else {
        iVar20 = 0;
        if (uVar15 != 0x1e01) {
          if (uVar15 == 0x2100) {
            iVar20 = 1;
          }
          else {
            if (uVar15 != 0x6401) {
              return;
            }
            iVar20 = 8;
          }
        }
      }
      iVar10 = iVar8 * 5;
      *(byte *)(iVar10 + iVar16 + 0x42a) = *(byte *)(iVar10 + iVar16 + 0x42a) | 4;
      if ((char)puVar19[3] != '\0') {
        iVar11 = iVar16 + iVar8 * 0x14;
        *(uint *)(iVar11 + 0x584) = iVar20 << 0x10 | *(uint *)(iVar11 + 0x584) & 0xfff0ffff;
        iVar16 = iVar16 + ((int)(iVar10 + 0x34U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar10 + 0x34U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar8 * 5 + 0x437] = ~*(uint *)(iVar11 + 0x584);
        return;
      }
      iVar8 = iVar16 + iVar8 * 0x14;
      uVar15 = *(uint *)(iVar8 + 0x584);
      if ((uVar15 & 0xf0000) == iVar20 * 0x10000) {
        return;
      }
      *(uint *)(iVar8 + 0x584) = iVar20 * 0x10000 | uVar15 & 0xfff0ffff;
      iVar16 = iVar16 + ((int)(iVar10 + 0x34U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar10 + 0x34U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
      iVar20 = (uVar15 >> 0x10) - 0xf6;
      uVar15 = 0;
      uVar22 = 0;
      do {
        uVar9 = param_2[uVar22];
        iVar8 = uVar9 - DAT_00490644;
        if (uVar9 == DAT_00490644) {
          uVar9 = 6 << ((uVar22 & 0x3f) << 2);
LAB_0049009c:
          uVar15 = uVar15 | uVar9;
        }
        else {
          if ((int)uVar9 <= (int)DAT_00490644) {
            if (uVar9 == DAT_00490648) {
              uVar9 = 3 << ((uVar22 & 0x3f) << 2);
            }
            else if ((int)DAT_00490648 < (int)uVar9) {
              if (uVar9 - DAT_00490648 == 1) {
                uVar9 = 4 << ((uVar22 & 0x3f) << 2);
              }
              else {
                if (uVar9 - DAT_00490648 != 2) {
                  return;
                }
                uVar9 = 5 << ((uVar22 & 0x3f) << 2);
              }
            }
            else if (uVar9 == 0x6210) {
              uVar9 = 1 << ((uVar22 & 0x3f) << 2);
            }
            else {
              if (uVar9 != 0x6211) {
                return;
              }
              uVar9 = 2 << ((uVar22 & 0x3f) << 2);
            }
            goto LAB_0049009c;
          }
          if (iVar8 == 0xb3) {
            uVar15 = uVar15 | 0xe << ((uVar22 & 0x3f) << 2);
          }
          else if (iVar8 != 0xb4) {
            if (iVar8 == 0xb5) {
              uVar15 = uVar15 | 0xf << ((uVar22 & 0x3f) << 2);
            }
            else {
              if (iVar8 != 0xb6) {
                return;
              }
              uVar15 = uVar15 | 0xd << ((uVar22 & 0x3f) << 2);
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < 3);
      iVar8 = iVar20 * 5;
      *(byte *)(iVar8 + iVar16 + 0x428) = *(byte *)(iVar8 + iVar16 + 0x428) | 3;
      if ((char)puVar19[3] != '\0') {
        iVar10 = iVar16 + iVar20 * 0x14;
        *(uint *)(iVar10 + 0x57c) = uVar15 & 0xfff | *(uint *)(iVar10 + 0x57c) & 0xfffff000;
        iVar16 = iVar16 + ((int)(iVar8 + 0x32U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x32U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar20 * 5 + 0x435] = ~*(uint *)(iVar10 + 0x57c);
        return;
      }
      iVar20 = iVar16 + iVar20 * 0x14;
      uVar22 = *(uint *)(iVar20 + 0x57c);
      if ((uVar22 & 0xfff) == (uVar15 & 0xfff)) {
        return;
      }
      *(uint *)(iVar20 + 0x57c) = uVar15 & 0xfff | uVar22 & 0xfffff000;
      iVar16 = iVar16 + ((int)(iVar8 + 0x32U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x32U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
      iVar20 = (uVar15 >> 0x10) - 0xfc;
      uVar15 = 0;
      iVar8 = 0;
      do {
        uVar9 = param_2[iVar8];
        iVar10 = uVar9 - DAT_00490644;
        if (uVar9 == DAT_00490644) {
          uVar9 = 6 << (iVar8 * 4 + 0x10U & 0xff);
LAB_00490288:
          uVar15 = uVar15 | uVar9;
        }
        else {
          if ((int)uVar9 <= (int)DAT_00490644) {
            if (uVar9 == DAT_00490648) {
              uVar9 = 3 << (iVar8 * 4 + 0x10U & 0xff);
            }
            else if ((int)DAT_00490648 < (int)uVar9) {
              if (uVar9 - DAT_00490648 == 1) {
                iVar10 = 4;
              }
              else {
                if (uVar9 - DAT_00490648 != 2) {
                  return;
                }
                iVar10 = 5;
              }
              uVar9 = iVar10 << (iVar8 * 4 + 0x10U & 0xff);
            }
            else if (uVar9 == 0x6210) {
              uVar9 = 1 << (iVar8 * 4 + 0x10U & 0xff);
            }
            else {
              if (uVar9 != 0x6211) {
                return;
              }
              uVar9 = 2 << (iVar8 * 4 + 0x10U & 0xff);
            }
            goto LAB_00490288;
          }
          if (iVar10 == 0xb3) {
            uVar15 = uVar15 | 0xe << (iVar8 * 4 + 0x10U & 0xff);
          }
          else if (iVar10 != 0xb4) {
            if (iVar10 == 0xb5) {
              uVar15 = uVar15 | 0xf << (iVar8 * 4 + 0x10U & 0xff);
            }
            else {
              if (iVar10 != 0xb6) {
                return;
              }
              uVar15 = uVar15 | 0xd << (iVar8 * 4 + 0x10U & 0xff);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      iVar8 = iVar20 * 5;
      uVar15 = uVar15 & DAT_0049064c;
      *(byte *)(iVar8 + iVar16 + 0x428) = *(byte *)(iVar8 + iVar16 + 0x428) | 0xc;
      iVar10 = iVar16 + iVar20 * 0x14;
      uVar9 = *(uint *)(iVar10 + 0x57c);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar10 + 0x57c) = uVar15 | uVar9 & ~uVar22;
        iVar16 = iVar16 + ((int)(iVar8 + 0x32U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x32U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar20 * 5 + 0x435] = ~*(uint *)(iVar10 + 0x57c);
        return;
      }
      if ((uVar22 & uVar9) == uVar15) {
        return;
      }
      *(uint *)(iVar10 + 0x57c) = uVar15 | uVar9 & 0xf000ffff;
      iVar16 = iVar16 + ((int)(iVar8 + 0x32U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x32U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
      iVar20 = DAT_00490650 + (uVar15 >> 0x10);
      uVar15 = 0;
      uVar22 = 0;
      do {
        uVar9 = param_2[uVar22];
        iVar8 = uVar9 - DAT_00490654;
        if (uVar9 == DAT_00490654) {
          uVar9 = 8 << ((uVar22 & 0x3f) << 2);
LAB_00490530:
          uVar15 = uVar15 | uVar9;
        }
        else {
          if ((int)uVar9 <= (int)DAT_00490654) {
            if (uVar9 == DAT_00490658) {
              uVar9 = 2 << ((uVar22 & 0x3f) << 2);
            }
            else if ((int)DAT_00490658 < (int)uVar9) {
              if (uVar9 - DAT_00490658 == 1) {
                uVar9 = 3 << ((uVar22 & 0x3f) << 2);
              }
              else {
                if (uVar9 - DAT_00490658 != 0x827e) {
                  return;
                }
                uVar9 = 4 << ((uVar22 & 0x3f) << 2);
              }
            }
            else {
              if (uVar9 == 0x300) goto LAB_00490488;
              if (uVar9 != 0x301) {
                return;
              }
              uVar9 = 1 << ((uVar22 & 0x3f) << 2);
            }
            goto LAB_00490530;
          }
          if (iVar8 == 1) {
            uVar15 = uVar15 | 0xc << ((uVar22 & 0x3f) << 2);
          }
          else {
            if (iVar8 == 2) {
              uVar9 = 5 << ((uVar22 & 0x3f) << 2);
              goto LAB_00490530;
            }
            if (iVar8 == 3) {
              uVar15 = uVar15 | 9 << ((uVar22 & 0x3f) << 2);
            }
            else {
              if (iVar8 != 4) {
                return;
              }
              uVar15 = uVar15 | 0xd << ((uVar22 & 0x3f) << 2);
            }
          }
        }
LAB_00490488:
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < 3);
      iVar8 = iVar20 * 5;
      *(byte *)(iVar8 + iVar16 + 0x429) = *(byte *)(iVar8 + iVar16 + 0x429) | 3;
      if ((char)puVar19[3] != '\0') {
        iVar10 = iVar16 + iVar20 * 0x14;
        *(uint *)(iVar10 + 0x580) = uVar15 & 0xfff | *(uint *)(iVar10 + 0x580) & 0xfffff000;
        iVar16 = iVar16 + ((int)(iVar8 + 0x33U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x33U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar20 * 5 + 0x436] = ~*(uint *)(iVar10 + 0x580);
        return;
      }
      iVar20 = iVar16 + iVar20 * 0x14;
      uVar22 = *(uint *)(iVar20 + 0x580);
      if ((uVar22 & 0xfff) == (uVar15 & 0xfff)) {
        return;
      }
      *(uint *)(iVar20 + 0x580) = uVar15 & 0xfff | uVar22 & 0xfffff000;
      iVar16 = iVar16 + ((int)(iVar8 + 0x33U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x33U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
      iVar20 = DAT_0049065c + (uVar15 >> 0x10);
      uVar15 = 0;
      iVar8 = 0;
      do {
        uVar22 = param_2[iVar8];
        if (uVar22 == DAT_00490660) {
          uVar22 = 6 << (iVar8 * 4 + 0xcU & 0xff);
LAB_00490628:
          uVar15 = uVar15 | uVar22;
        }
        else if ((int)DAT_00490660 < (int)uVar22) {
          if (uVar22 == 0x8583) {
            uVar15 = uVar15 | 3 << (iVar8 * 4 + 0xcU & 0xff);
          }
          else if (uVar22 == 0x8584) {
            uVar15 = uVar15 | 5 << (iVar8 * 4 + 0xcU & 0xff);
          }
          else {
            if (uVar22 != 0x8585) {
              return;
            }
            uVar15 = uVar15 | 7 << (iVar8 * 4 + 0xcU & 0xff);
          }
        }
        else if (uVar22 != 0x302) {
          if (uVar22 == 0x303) {
            uVar22 = 1 << (iVar8 * 4 + 0xcU & 0xff);
          }
          else if (uVar22 == 0x8580) {
            uVar22 = 2 << (iVar8 * 4 + 0xcU & 0xff);
          }
          else {
            if (uVar22 != 0x8581) {
              return;
            }
            uVar22 = 4 << (iVar8 * 4 + 0xcU & 0xff);
          }
          goto LAB_00490628;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      iVar8 = iVar20 * 5;
      *(byte *)(iVar8 + iVar16 + 0x429) = *(byte *)(iVar8 + iVar16 + 0x429) | 6;
      if ((char)puVar19[3] != '\0') {
        iVar10 = iVar16 + iVar20 * 0x14;
        *(uint *)(iVar10 + 0x580) =
             uVar15 & DAT_00490d3c | *(uint *)(iVar10 + 0x580) & ~DAT_00490d3c;
        iVar16 = iVar16 + ((int)(iVar8 + 0x33U) >> 5) * 4;
        *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x33U & 0x1f);
        *puVar19 = *puVar19 | 0x80000;
        piVar18[iVar20 * 5 + 0x436] = ~*(uint *)(iVar10 + 0x580);
        return;
      }
      iVar20 = iVar16 + iVar20 * 0x14;
      uVar22 = *(uint *)(iVar20 + 0x580);
      if ((DAT_00490d3c & uVar22) == (uVar15 & DAT_00490d3c)) {
        return;
      }
      *(uint *)(iVar20 + 0x580) = uVar15 & DAT_00490d3c | uVar22 & 0xff888fff;
      iVar16 = iVar16 + ((int)(iVar8 + 0x33U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar8 + 0x33U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
      uVar15 = uVar15 >> 0x10;
      if (*param_2 == 0x8578) {
        uVar22 = 1 << (uVar15 - 0x119 & 0xff);
      }
      else {
        if (*param_2 != 0x8579) {
          return;
        }
        uVar22 = 0;
      }
      if (param_2[1] == 0x8578) {
        uVar22 = uVar22 | 1 << (uVar15 - 0x115 & 0xff);
      }
      else if (param_2[1] != 0x8579) {
        return;
      }
      uVar15 = 0x1100 << (uVar15 - 0x121 & 0xff);
      bVar12 = (byte)uVar15;
      if ((uVar15 & 0xff) != 0) {
        bVar12 = 1;
      }
      bVar21 = 0;
      if ((uVar15 & 0xff00) != 0) {
        bVar21 = 2;
      }
      bVar13 = 0;
      if ((uVar15 & 0xff0000) != 0) {
        bVar13 = 4;
      }
      bVar14 = 0;
      if ((uVar15 & 0xff000000) != 0) {
        bVar14 = 8;
      }
      *(byte *)(iVar16 + 0x446) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x446);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x5f4) = uVar15 & uVar22 | *(uint *)(iVar16 + 0x5f4) & ~uVar15;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
        return;
      }
      if ((*(uint *)(iVar16 + 0x5f4) & uVar15) == (uVar15 & uVar22)) {
        return;
      }
      *(uint *)(iVar16 + 0x5f4) = *(uint *)(iVar16 + 0x5f4) & ~uVar15 | uVar15 & uVar22;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0x125:
      uVar15 = *param_2;
      if (uVar15 == 0) {
        *(byte *)(iVar16 + 0x446) = *(byte *)(iVar16 + 0x446) | 1;
        uVar15 = *(uint *)(iVar16 + 0x5f4);
        if ((char)puVar19[3] != '\0') {
          *(uint *)(iVar16 + 0x5f4) = uVar15 & 0xfffffff8;
          *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
          *puVar19 = *puVar19 | 0x80000;
          *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
          return;
        }
        if ((uVar15 & 7) == 0) {
          return;
        }
        *(uint *)(iVar16 + 0x5f4) = uVar15 & 0xfffffff8;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
        uVar15 = *puVar19 | 0x80000;
        break;
      }
      if (uVar15 == 0xb60) {
        *(byte *)(iVar16 + 0x446) = *(byte *)(iVar16 + 0x446) | 1;
        uVar15 = *(uint *)(iVar16 + 0x5f4);
        if ((char)puVar19[3] != '\0') {
          *(uint *)(iVar16 + 0x5f4) = uVar15 & 0xfffffff8 | 5;
          *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
          *puVar19 = *puVar19 | 0x80010;
          *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
          return;
        }
        if ((uVar15 & 7) == 5) {
          return;
        }
        *(uint *)(iVar16 + 0x5f4) = uVar15 & 0xfffffff8 | 5;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
        uVar15 = *puVar19 | 0x80010;
        break;
      }
      if (uVar15 != 0x6050) {
        return;
      }
      *(byte *)(iVar16 + 0x446) = *(byte *)(iVar16 + 0x446) | 1;
      uVar15 = *(uint *)(iVar16 + 0x5f4);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x5f4) = uVar15 | 7;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
        *puVar19 = *puVar19 | 0x2080010;
        *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
        return;
      }
      if ((~uVar15 & 7) == 0) {
        return;
      }
      *(uint *)(iVar16 + 0x5f4) = uVar15 | 7;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
      uVar15 = *puVar19 | 0x2080000;
      goto LAB_00490b1c;
    case 0x127:
      *(byte *)(iVar16 + 0x446) = *(byte *)(iVar16 + 0x446) | 4;
      uVar22 = *param_2;
      uVar15 = *(uint *)(iVar16 + 0x5f4);
      if ((char)puVar19[3] != '\0') {
        if (uVar22 == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0x10000;
        }
        *(uint *)(iVar16 + 0x5f4) = uVar22 | uVar15 & 0xfffeffff;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
        return;
      }
      uVar9 = 0;
      if (uVar22 != 0) {
        uVar9 = 0x10000;
      }
      if ((uVar15 & 0x10000) == uVar9) {
        return;
      }
      uVar9 = 0;
      if (uVar22 != 0) {
        uVar9 = 0x10000;
      }
      *(uint *)(iVar16 + 0x5f4) = uVar9 | uVar15 & 0xfffeffff;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
      uVar15 = *puVar19 | 0x80000;
      break;
    case 0x128:
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0xde4) = *param_2;
        *puVar19 = *puVar19 | 0x10;
        puVar19[0x60] = 0;
        return;
      }
      if (*(uint *)(iVar16 + 0xde4) == *param_2) {
        return;
      }
      *(uint *)(iVar16 + 0xde4) = *param_2;
      uVar15 = *puVar19;
LAB_00490b1c:
      uVar15 = uVar15 | 0x10;
    }
    goto LAB_0048d740;
  }
  switch(uVar9) {
  case 0:
    *(byte *)(iVar16 + 0x420) = *(byte *)(iVar16 + 0x420) | 1;
    uVar22 = *param_2;
    uVar15 = *(uint *)(iVar16 + 0x55c);
    if ((char)puVar19[3] == '\0') {
      uVar9 = 1 - uVar22;
      if (1 < uVar22) {
        uVar9 = 0;
      }
      if ((uVar15 & 1) != uVar9) {
        uVar9 = 1 - uVar22;
        if (1 < uVar22) {
          uVar9 = 0;
        }
        *(uint *)(iVar16 + 0x55c) = uVar9 | uVar15 & 0xfffffffe;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x400;
        *puVar19 = *puVar19 | 0x80000;
        return;
      }
    }
    else {
      *(uint *)(iVar16 + 0x55c) = (uint)(uVar22 == 0) | uVar15 & 0xfffffffe;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x400;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10b4) = ~*(uint *)(iVar16 + 0x55c);
    }
    break;
  case 3:
    uVar15 = *param_2;
    iVar20 = uVar15 - DAT_0048d40c;
    if (uVar15 == DAT_0048d40c) {
LAB_0048cc2c:
      if ((char)puVar19[0x41] != '\x01') {
        *(undefined1 *)(puVar19 + 0x41) = 1;
        *puVar19 = *puVar19 | 0x400;
      }
      if (*(char *)((int)puVar19 + 0x107) != '\0') {
LAB_0048cc54:
        *(undefined1 *)((int)puVar19 + 0x107) = 0;
        *puVar19 = *puVar19 | 0x400;
      }
    }
    else {
      if ((int)uVar15 < (int)DAT_0048d40c) {
        if (uVar15 != 0) {
          iVar20 = 0;
          if (uVar15 != 0xde1) {
            iVar20 = uVar15 - 0x6de1;
          }
          if (uVar15 != 0xde1 && iVar20 != 0x1f) {
            return;
          }
          goto LAB_0048cc2c;
        }
        if ((char)puVar19[0x41] != '\0') {
          *(undefined1 *)(puVar19 + 0x41) = 0;
          *puVar19 = *puVar19 | 0x400;
        }
        if (*(char *)((int)puVar19 + 0x107) == '\0') goto LAB_0048ccb8;
        goto LAB_0048cc54;
      }
      if (iVar20 != 1) {
        uVar15 = iVar20 - 0x1700;
      }
      if (iVar20 != 1 && uVar15 != 0x12) {
        return;
      }
      if ((char)puVar19[0x41] != '\0') {
        *(undefined1 *)(puVar19 + 0x41) = 0;
        *puVar19 = *puVar19 | 0x400;
      }
      if (*(char *)((int)puVar19 + 0x107) != '\x01') {
        *(undefined1 *)((int)puVar19 + 0x107) = 1;
        *puVar19 = *puVar19 | 0x400;
      }
    }
LAB_0048ccb8:
    *(uint *)(iVar16 + 0xdac) = *param_2;
    if (puVar19[0x3e] != *param_2) {
      puVar19[0x3e] = *param_2;
      uVar15 = *puVar19 | 0x400;
      goto LAB_0048d740;
    }
    break;
  case 4:
    if (*param_2 == 0) {
      if (*(char *)((int)puVar19 + 0x105) != '\0') {
        *(undefined1 *)((int)puVar19 + 0x105) = 0;
        *puVar19 = *puVar19 | 0x800;
      }
    }
    else {
      if (*param_2 != 0xde1) {
        return;
      }
      if (*(char *)((int)puVar19 + 0x105) != '\x01') {
        *(undefined1 *)((int)puVar19 + 0x105) = 1;
        *puVar19 = *puVar19 | 0x800;
      }
    }
    *(uint *)(iVar16 + 0xdb0) = *param_2;
    if (puVar19[0x3f] != *param_2) {
      puVar19[0x3f] = *param_2;
      uVar15 = *puVar19 | 0x800;
      goto LAB_0048d740;
    }
    break;
  case 5:
    if (*param_2 == 0) {
      if (*(char *)((int)puVar19 + 0x106) != '\0') {
        *(undefined1 *)((int)puVar19 + 0x106) = 0;
        *puVar19 = *puVar19 | 0x1000;
      }
    }
    else {
      if (*param_2 != 0xde1) {
        return;
      }
      if (*(char *)((int)puVar19 + 0x106) != '\x01') {
        *(undefined1 *)((int)puVar19 + 0x106) = 1;
        *puVar19 = *puVar19 | 0x1000;
      }
    }
    *(uint *)(iVar16 + 0xdb4) = *param_2;
    if (puVar19[0x40] != *param_2) {
      puVar19[0x40] = *param_2;
      uVar15 = *puVar19 | 0x1000;
      goto LAB_0048d740;
    }
    break;
  case 6:
    uVar15 = 0;
    if (*param_2 != 0) {
      if (*param_2 != 0x6e03) {
        return;
      }
      uVar15 = 0x400;
    }
    *(byte *)(iVar16 + 0x41f) = *(byte *)(iVar16 + 0x41f) | 2;
    if ((char)puVar19[3] == '\0') {
      if ((*(uint *)(iVar16 + 0x558) & 0x400) != uVar15) {
        *(uint *)(iVar16 + 0x558) = uVar15 | *(uint *)(iVar16 + 0x558) & 0xfffffbff;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
        *puVar19 = *puVar19 | 0x80020;
      }
    }
    else {
      *(uint *)(iVar16 + 0x558) = uVar15 | *(uint *)(iVar16 + 0x558) & 0xfffffbff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
      *puVar19 = *puVar19 | 0x80020;
      *(uint *)(iVar20 + 0x10b0) = ~*(uint *)(iVar16 + 0x558);
    }
    *(uint *)(iVar16 + 0xd8c) = *param_2;
    return;
  case 7:
    if (*param_2 == 0x84c1) {
      uVar15 = 0x2000;
    }
    else {
      if (*param_2 != 0x84c2) {
        return;
      }
      uVar15 = 0;
    }
    *(byte *)(iVar16 + 0x41f) = *(byte *)(iVar16 + 0x41f) | 2;
    uVar22 = *(uint *)(iVar16 + 0x558);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x558) = uVar15 | uVar22 & 0xffffdfff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10b0) = ~*(uint *)(iVar16 + 0x558);
      return;
    }
    if ((uVar22 & 0x2000) != uVar15) {
      *(uint *)(iVar16 + 0x558) = uVar15 | uVar22 & 0xffffdfff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 8:
    uVar22 = *param_2;
    uVar15 = 0;
    if (uVar22 != 0x84c0) {
      if (uVar22 == 0x84c1) {
        uVar15 = 0x100;
      }
      else {
        if (uVar22 != 0x84c2) {
          return;
        }
        uVar15 = 0x200;
      }
    }
    *(byte *)(iVar16 + 0x41f) = *(byte *)(iVar16 + 0x41f) | 2;
    uVar22 = *(uint *)(iVar16 + 0x558);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x558) = uVar15 | uVar22 & 0xfffffcff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10b0) = ~*(uint *)(iVar16 + 0x558);
      return;
    }
    if ((uVar22 & 0x300) != uVar15) {
      *(uint *)(iVar16 + 0x558) = uVar15 | uVar22 & 0xfffffcff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x200;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 9:
    switch(*param_2) {
    case 0x609a:
      iVar8 = 0;
      break;
    case 0x609b:
      iVar8 = 2;
      break;
    case 0x609c:
      iVar8 = 1;
      break;
    case 0x609d:
      iVar8 = 3;
      break;
    case 0x609e:
      iVar8 = 4;
      break;
    case 0x609f:
      iVar8 = 5;
      break;
    case 0x60a0:
      goto switchD_0048c6d8_caseD_1;
    case 0x60a1:
      iVar8 = 6;
      break;
    case 0x60a2:
      iVar8 = 7;
      break;
    case 0x60a3:
      iVar8 = 8;
      break;
    case 0x60a4:
      iVar8 = 9;
      break;
    default:
      return;
    }
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 3;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x564) = iVar8 << 6 | uVar15 & 0xfffffc3f;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    if ((uVar15 & 0x3c0) != iVar8 << 6) {
      *(uint *)(iVar16 + 0x564) = iVar8 << 6 | uVar15 & 0xfffffc3f;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 10:
    switch(*param_2) {
    case 0x609a:
      iVar8 = 0;
      break;
    case 0x609b:
      iVar8 = 2;
      break;
    case 0x609c:
      iVar8 = 1;
      break;
    case 0x609d:
      iVar8 = 3;
      break;
    case 0x609e:
      iVar8 = 4;
      break;
    case 0x609f:
      iVar8 = 5;
      break;
    case 0x60a0:
      goto switchD_0048c6d8_caseD_1;
    case 0x60a1:
      iVar8 = 6;
      break;
    case 0x60a2:
      iVar8 = 7;
      break;
    case 0x60a3:
      iVar8 = 8;
      break;
    case 0x60a4:
      iVar8 = 9;
      break;
    default:
      return;
    }
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 2;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x564) = iVar8 << 10 | uVar15 & 0xffffc3ff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    if ((uVar15 & 0x3c00) != iVar8 << 10) {
      *(uint *)(iVar16 + 0x564) = iVar8 << 10 | uVar15 & 0xffffc3ff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 0xb:
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 2;
    uVar22 = *param_2;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      if (uVar22 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0x4000;
      }
      *(uint *)(iVar16 + 0x564) = uVar22 | uVar15 & 0xffffbfff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80020;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    uVar9 = 0;
    if (uVar22 != 0) {
      uVar9 = 0x4000;
    }
    if ((uVar15 & 0x4000) == uVar9) {
      return;
    }
    uVar9 = 0;
    if (uVar22 != 0) {
      uVar9 = 0x4000;
    }
    *(uint *)(iVar16 + 0x564) = uVar9 | uVar15 & 0xffffbfff;
    *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
    uVar15 = *puVar19 | 0x80000;
    goto LAB_0048d9f4;
  case 0xc:
    uVar15 = *param_2;
    if (uVar15 == DAT_0048d410) {
      uVar22 = 4;
    }
    else if ((int)DAT_0048d410 < (int)uVar15) {
      if (uVar15 - DAT_0048d410 == 0x206d) {
        uVar22 = 1;
      }
      else {
        if (uVar15 - DAT_0048d410 != 0x22ae) {
          return;
        }
        uVar22 = 3;
      }
    }
    else {
      uVar22 = 0;
      if (uVar15 != 0x60c0) {
        if (uVar15 != 0x60c1) {
          return;
        }
        uVar22 = 2;
      }
    }
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 1;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x564) = uVar22 | uVar15 & 0xfffffff8;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    if ((uVar15 & 7) != uVar22) {
      *(uint *)(iVar16 + 0x564) = uVar22 | uVar15 & 0xfffffff8;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 0xd:
    uVar15 = *param_2;
    if (uVar15 == DAT_0048d410) {
      iVar8 = 4;
    }
    else if ((int)DAT_0048d410 < (int)uVar15) {
      if (uVar15 - DAT_0048d410 == 0x206d) {
        iVar8 = 1;
      }
      else {
        if (uVar15 - DAT_0048d410 != 0x22ae) {
          return;
        }
        iVar8 = 3;
      }
    }
    else {
      iVar8 = 0;
      if (uVar15 != 0x60c0) {
        if (uVar15 != 0x60c1) {
          return;
        }
        iVar8 = 2;
      }
    }
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 1;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x564) = iVar8 << 3 | uVar15 & 0xffffffc7;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    if ((uVar15 & 0x38) != iVar8 * 8) {
      *(uint *)(iVar16 + 0x564) = iVar8 * 8 | uVar15 & 0xffffffc7;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80000;
      return;
    }
    break;
  case 0xe:
    uVar15 = *param_2 - 0x60d0;
    if (uVar15 < 3) {
      *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 4;
      uVar22 = *(uint *)(iVar16 + 0x564);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x564) = uVar15 * 0x10000 & 0x30000 | uVar22 & 0xfffcffff;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
        return;
      }
      uVar15 = uVar15 * 0x10000 & 0x30000;
      if ((uVar22 & 0x30000) != uVar15) {
        *(uint *)(iVar16 + 0x564) = uVar15 | uVar22 & 0xfffcffff;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
        *puVar19 = *puVar19 | 0x80000;
        return;
      }
    }
    break;
  case 0xf:
    uVar15 = *param_2 - 0x60d0;
    if (uVar15 < 3) {
      *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 4;
      uVar22 = *(uint *)(iVar16 + 0x564);
      if ((char)puVar19[3] != '\0') {
        *(uint *)(iVar16 + 0x564) = uVar15 * 0x40000 & 0xc0000 | uVar22 & 0xfff3ffff;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
        return;
      }
      uVar15 = uVar15 * 0x40000 & 0xc0000;
      if ((uVar22 & 0xc0000) != uVar15) {
        *(uint *)(iVar16 + 0x564) = uVar15 | uVar22 & 0xfff3ffff;
        *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
        *puVar19 = *puVar19 | 0x80000;
        return;
      }
    }
    break;
  case 0x10:
    uVar15 = *param_2;
    if (uVar15 == DAT_0048e598) {
      uVar15 = 3;
    }
    else if ((int)DAT_0048e598 < (int)uVar15) {
      if (uVar15 - DAT_0048e598 == 1) {
        uVar15 = 4;
      }
      else {
        if (uVar15 - DAT_0048e598 != 2) {
          return;
        }
        uVar15 = 5;
      }
    }
    else if (uVar15 == 0x2600) {
      uVar15 = 0;
    }
    else if (uVar15 == 0x2601) {
      uVar15 = 1;
    }
    else {
      if (uVar15 != 0x2700) {
        return;
      }
      uVar15 = 2;
    }
    *(byte *)(iVar16 + 0x426) = *(byte *)(iVar16 + 0x426) | 1;
    uVar22 = *(uint *)(iVar16 + 0x574);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x574) = uVar15 | uVar22 & 0xfffffff8;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x10000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10cc) = ~*(uint *)(iVar16 + 0x574);
      return;
    }
    if ((uVar22 & 7) != uVar15) {
      *(uint *)(iVar16 + 0x574) = uVar15 | uVar22 & 0xfffffff8;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x10000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x11:
    *(byte *)(iVar16 + 0x426) = *(byte *)(iVar16 + 0x426) | 6;
    uVar15 = *(uint *)(iVar16 + 0x574);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x574) = uVar15 & 0xfff807ff | (*param_2 & 0xff) << 0xb;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x10000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10cc) = ~*(uint *)(iVar16 + 0x574);
      return;
    }
    if ((DAT_0048e59c & uVar15) != (*param_2 & 0xff) * 0x800) {
      *(uint *)(iVar16 + 0x574) = uVar15 & 0xfff807ff | (*param_2 & 0xff) << 0xb;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x10000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x12:
    *(byte *)(iVar16 + 0x427) = *(byte *)(iVar16 + 0x427) | 1;
    uVar15 = *(uint *)(iVar16 + 0x578);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x578) = uVar15 & 0xffffff00 | *param_2 & 0xff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x20000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x10d0) = ~*(uint *)(iVar16 + 0x578);
      return;
    }
    uVar22 = *param_2 & 0xff;
    if ((uVar15 & 0xff) != uVar22) {
      *(uint *)(iVar16 + 0x578) = uVar15 & 0xffffff00 | uVar22;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x20000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x14:
    *(byte *)(iVar16 + 0x422) = *(byte *)(iVar16 + 0x422) | 2;
    uVar22 = *param_2;
    uVar15 = *(uint *)(iVar16 + 0x564);
    if ((char)puVar19[3] != '\0') {
      if (uVar22 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0x8000;
      }
      *(uint *)(iVar16 + 0x564) = uVar22 | uVar15 & 0xffff7fff;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
      *puVar19 = *puVar19 | 0x80020;
      *(uint *)(iVar20 + 0x10bc) = ~*(uint *)(iVar16 + 0x564);
      return;
    }
    uVar9 = 0;
    if (uVar22 != 0) {
      uVar9 = 0x8000;
    }
    if ((uVar15 & 0x8000) == uVar9) {
      return;
    }
    uVar9 = 0;
    if (uVar22 != 0) {
      uVar9 = 0x8000;
    }
    *(uint *)(iVar16 + 0x564) = uVar9 | uVar15 & 0xffff7fff;
    *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x1000;
    uVar15 = *puVar19 | 0x80000;
    goto LAB_0048d9f4;
  case 0x17:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd70) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x59] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd70) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd70) = *param_2;
    goto LAB_0048d9f0;
  case 0x18:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd74) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5a] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd74) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd74) = *param_2;
    uVar15 = *puVar19 | 0x20;
    goto LAB_0048d740;
  case 0x19:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd78) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5b] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd78) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd78) = *param_2;
LAB_0048d9f0:
    uVar15 = *puVar19;
LAB_0048d9f4:
    uVar15 = uVar15 | 0x20;
    goto LAB_0048d740;
  case 0x1a:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd7c) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5c] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd7c) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd7c) = *param_2;
    uVar15 = *puVar19 | 0x20;
    goto LAB_0048d740;
  case 0x1b:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd80) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5d] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd80) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd80) = *param_2;
    uVar15 = *puVar19 | 0x20;
    goto LAB_0048d740;
  case 0x1c:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd84) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5e] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd84) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd84) = *param_2;
    uVar15 = *puVar19 | 0x20;
    goto LAB_0048d740;
  case 0x1d:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xd88) = *param_2;
      *puVar19 = *puVar19 | 0x20;
      puVar19[0x5f] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xd88) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xd88) = *param_2;
    uVar15 = *puVar19 | 0x20;
    goto LAB_0048d740;
  case 0x1e:
    uVar15 = *param_2;
    if (uVar15 == 0x6030) {
      uVar22 = 0xe40000;
    }
    else {
      uVar22 = DAT_0048e5a0;
      if ((uVar15 != 0x6048) && (uVar22 = DAT_0048e5a4, uVar15 != 0x6051)) {
        return;
      }
    }
    *(uint *)(iVar16 + 0xdb8) = uVar15;
    uVar22 = uVar22 & 0xffff00ff;
    *(byte *)(iVar16 + 0x44f) = *(byte *)(iVar16 + 0x44f) | 0xd;
    uVar15 = *(uint *)(iVar16 + 0x618);
    if ((char)puVar19[3] == '\0') {
      if ((uVar15 & 0xffff00ff) != uVar22) {
        *(uint *)(iVar16 + 0x618) = uVar22 | uVar15 & 0xff00;
        *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x2000000;
        *puVar19 = *puVar19 | 0x80000;
      }
    }
    else {
      *(uint *)(iVar16 + 0x618) = uVar22 | uVar15 & 0xff00;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x2000000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x1170) = ~*(uint *)(iVar16 + 0x618);
    }
    uVar15 = *puVar19 | 0x100;
    goto LAB_0048d740;
  case 0x22:
    *(byte *)(iVar16 + 0x417) = *(byte *)(iVar16 + 0x417) | 1;
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x538) = (uint)(*param_2 != 0) | *(uint *)(iVar16 + 0x538) & 0xfffffffe;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 2;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x1090) = ~*(uint *)(iVar16 + 0x538);
      return;
    }
    if ((*(uint *)(iVar16 + 0x538) & 1) != (uint)(*param_2 != 0)) {
      *(uint *)(iVar16 + 0x538) = (uint)(*param_2 != 0) | *(uint *)(iVar16 + 0x538) & 0xfffffffe;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 2;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x24:
    *(byte *)(iVar16 + 0x450) = *(byte *)(iVar16 + 0x450) | 1;
    uVar22 = *param_2;
    uVar15 = *(uint *)(iVar16 + 0x61c);
    if ((char)puVar19[3] != '\0') {
      uVar15 = uVar15 & 0xfffffffe;
      if (uVar22 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
LAB_00490bfc:
      *(uint *)(iVar16 + 0x61c) = uVar22 | uVar15;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x4000000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x1174) = ~*(uint *)(iVar16 + 0x61c);
      return;
    }
    if ((uVar15 & 1) != (uint)(uVar22 != 0)) {
      *(uint *)(iVar16 + 0x61c) = (uint)(uVar22 != 0) | uVar15 & 0xfffffffe;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x4000000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x25:
    switch(*param_2) {
    case 0x200:
      iVar8 = 0;
      break;
    case 0x201:
      iVar8 = 4;
      break;
    case 0x202:
      iVar8 = 2;
      break;
    case 0x203:
      iVar8 = 5;
      break;
    case 0x204:
      iVar8 = 6;
      break;
    case 0x205:
      iVar8 = 3;
      break;
    case 0x206:
      iVar8 = 7;
      break;
    case 0x207:
      iVar8 = 1;
      break;
    default:
      return;
    }
    *(byte *)(iVar16 + 0x450) = *(byte *)(iVar16 + 0x450) | 1;
    uVar15 = *(uint *)(iVar16 + 0x61c);
    if ((char)puVar19[3] != '\0') {
      uVar22 = iVar8 << 4;
      uVar15 = uVar15 & 0xffffff8f;
      goto LAB_00490bfc;
    }
    if ((uVar15 & 0x70) != iVar8 * 0x10) {
      *(uint *)(iVar16 + 0x61c) = iVar8 * 0x10 | uVar15 & 0xffffff8f;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x4000000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x2b:
    *(bool *)(iVar16 + 0xdf4) = *param_2 != 0;
    return;
  case 0x2d:
    uVar15 = 0;
    if (*param_2 != 0x6060) {
      if (*param_2 != 0x6061) {
        return;
      }
      uVar15 = 0x100;
    }
    *(byte *)(iVar16 + 0x44d) = *(byte *)(iVar16 + 0x44d) | 2;
    uVar22 = *(uint *)(iVar16 + 0x610);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x610) = uVar15 | uVar22 & 0xfffffeff;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x800000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x1168) = ~*(uint *)(iVar16 + 0x610);
      return;
    }
    if ((uVar22 & 0x100) != uVar15) {
      *(uint *)(iVar16 + 0x610) = uVar15 | uVar22 & 0xfffffeff;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x800000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x2e:
    uVar15 = 0;
    if (*param_2 != 0x605e) {
      if (*param_2 != 0x605f) {
        return;
      }
      uVar15 = 8;
    }
    *(byte *)(iVar16 + 0x446) = *(byte *)(iVar16 + 0x446) | 1;
    uVar22 = *(uint *)(iVar16 + 0x5f4);
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x5f4) = uVar15 | uVar22 & 0xfffffff7;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x114c) = ~*(uint *)(iVar16 + 0x5f4);
      return;
    }
    if ((uVar22 & 8) != uVar15) {
      *(uint *)(iVar16 + 0x5f4) = uVar15 | uVar22 & 0xfffffff7;
      *(uint *)(iVar16 + 0x7b0) = *(uint *)(iVar16 + 0x7b0) | 0x10000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x2f:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xdf8) = *param_2;
      *puVar19 = *puVar19 | 0x2000000;
      puVar19[0x61] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xdf8) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xdf8) = *param_2;
    uVar15 = *puVar19 | 0x2000000;
    goto LAB_0048d740;
  case 0x30:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xdfc) = *param_2;
      *puVar19 = *puVar19 | 0x2000000;
      puVar19[0x62] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xdfc) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xdfc) = *param_2;
    uVar15 = *puVar19 | 0x2000000;
    goto LAB_0048d740;
  case 0x31:
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0xe00) = *param_2;
      *puVar19 = *puVar19 | 0x2000000;
      puVar19[99] = 0;
      return;
    }
    if (*(uint *)(iVar16 + 0xe00) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xe00) = *param_2;
    uVar15 = *puVar19 | 0x2000000;
LAB_0048d740:
    *puVar19 = uVar15;
    return;
  case 0x32:
    if ((*(uint *)(iVar16 + 0x560) & 1) == 0) {
      if (*param_2 != 0) {
        iVar8 = 0;
        do {
          if (*(int *)(DAT_0048e5a8 + iVar8 * 4) == *(int *)(iVar16 + 0x98c)) {
            switch(iVar8) {
            case 0:
              in_r12 = 0;
              break;
            case 1:
              in_r12 = 1;
              break;
            case 2:
              in_r12 = 2;
              break;
            case 3:
              in_r12 = 3;
              break;
            case 4:
              in_r12 = 4;
              break;
            case 5:
              in_r12 = 5;
              break;
            case 6:
              in_r12 = 6;
              break;
            case 7:
              in_r12 = 8;
            }
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 8);
        uVar22 = (in_r12 & 0xf) * 0x10;
        *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
        uVar15 = *(uint *)(iVar16 + 0x78c);
        if ((char)puVar19[3] == '\0') {
          if ((uVar15 & 0xf0) != uVar22) {
            *(uint *)(iVar16 + 0x78c) = uVar15 & 0xffffff0f | uVar22;
            *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
            *puVar19 = *puVar19 | 0x80000;
          }
        }
        else {
          *(uint *)(iVar16 + 0x78c) = uVar15 & 0xffffff0f | uVar22;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
          *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
        }
      }
    }
    else if (*param_2 == 0) {
      *(byte *)(iVar16 + 0x4ac) = *(byte *)(iVar16 + 0x4ac) | 1;
      uVar15 = *(uint *)(iVar16 + 0x78c);
      if ((char)puVar19[3] == '\0') {
        if ((uVar15 & 0xf0) != 0) {
          *(uint *)(iVar16 + 0x78c) = uVar15 & 0xffffff0f;
          *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
          *puVar19 = *puVar19 | 0x80000;
        }
      }
      else {
        *(uint *)(iVar16 + 0x78c) = uVar15 & 0xffffff0f;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x400000;
        *puVar19 = *puVar19 | 0x80000;
        *(uint *)(iVar20 + 0x12e4) = ~*(uint *)(iVar16 + 0x78c);
      }
    }
    *(byte *)(iVar16 + 0x4ae) = *(byte *)(iVar16 + 0x4ae) | 0xf;
    if ((char)puVar19[3] == '\0') {
      uVar15 = *param_2;
      iVar8 = 1 - uVar15;
      if (1 < uVar15) {
        iVar8 = 0;
      }
      if (*(int *)(iVar16 + 0x794) != iVar8) {
        iVar8 = 1 - uVar15;
        if (1 < uVar15) {
          iVar8 = 0;
        }
        *(int *)(iVar16 + 0x794) = iVar8;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x1000000;
        *puVar19 = *puVar19 | 0x80000;
      }
    }
    else {
      iVar8 = 1 - *param_2;
      if (1 < *param_2) {
        iVar8 = 0;
      }
      *(int *)(iVar16 + 0x794) = iVar8;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x1000000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x12ec) = ~*(uint *)(iVar16 + 0x794);
    }
    *(byte *)(iVar16 + 0x421) = *(byte *)(iVar16 + 0x421) | 1;
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + 0x560) = (uint)(*param_2 != 0) | *(uint *)(iVar16 + 0x560) & 0xfffffffe;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x800;
      *puVar19 = *puVar19 | 0x80008;
      *(uint *)(iVar20 + 0x10b8) = ~*(uint *)(iVar16 + 0x560);
      return;
    }
    if ((*(uint *)(iVar16 + 0x560) & 1) != (uint)(*param_2 != 0)) {
      *(uint *)(iVar16 + 0x560) = (uint)(*param_2 != 0) | *(uint *)(iVar16 + 0x560) & 0xfffffffe;
      *(uint *)(iVar16 + 0x7ac) = *(uint *)(iVar16 + 0x7ac) | 0x800;
      uVar15 = *puVar19 | 0x80008;
      goto LAB_0048d740;
    }
    break;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar15 = uVar15 >> 0x10;
    iVar8 = iVar16 + (uVar15 - 0x39) * 0x70;
    if ((uint)*(byte *)(iVar8 + 0x9a0) == *param_2) {
      return;
    }
    *(bool *)(iVar8 + 0x9a0) = *param_2 != 0;
    uVar22 = 0;
    cVar6 = *(char *)(iVar16 + 0x9a0);
    uVar9 = 0;
    iVar10 = 0;
    iVar8 = 4;
    pcVar17 = (char *)(iVar16 + 0x930);
    do {
      if (cVar6 != '\0') {
        uVar9 = uVar9 | iVar10 << ((uVar22 & 0x3f) << 2);
        uVar22 = uVar22 + 1;
      }
      cVar6 = pcVar17[0x150];
      if (pcVar17[0xe0] != '\0') {
        uVar9 = uVar9 | iVar10 + 1 << ((uVar22 & 0x3f) << 2);
        uVar22 = uVar22 + 1;
      }
      iVar8 = iVar8 + -1;
      iVar10 = iVar10 + 2;
      pcVar17 = pcVar17 + 0xe0;
    } while (iVar8 != 0);
    *(byte *)(iVar16 + 0x4ab) = *(byte *)(iVar16 + 0x4ab) | 0xf;
    if ((char)puVar19[3] == '\0') {
      uVar23 = uVar22;
      if (uVar22 != 0) {
        uVar23 = uVar22 - 1;
      }
      if (*(uint *)(iVar16 + 0x788) != uVar23) {
        if (uVar22 != 0) {
          uVar22 = uVar22 - 1;
        }
        *(uint *)(iVar16 + 0x788) = uVar22;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x200000;
        *puVar19 = *puVar19 | 0x80000;
      }
    }
    else {
      if (uVar22 != 0) {
        uVar22 = uVar22 - 1;
      }
      *(uint *)(iVar16 + 0x788) = uVar22;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x200000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x12e0) = ~*(uint *)(iVar16 + 0x788);
    }
    *(byte *)(iVar16 + 0x4b2) = *(byte *)(iVar16 + 0x4b2) | 0xf;
    if ((char)puVar19[3] == '\0') {
      if (*(uint *)(iVar16 + 0x7a4) != uVar9) {
        *(uint *)(iVar16 + 0x7a4) = uVar9;
        *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x10000000;
        *puVar19 = *puVar19 | 0x80000;
      }
    }
    else {
      *(uint *)(iVar16 + 0x7a4) = uVar9;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x10000000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x12fc) = ~*(uint *)(iVar16 + 0x7a4);
    }
    if (*param_2 == 0) {
      return;
    }
    if (((*(uint *)(iVar16 + 0x790) & 1 << (uVar15 - 0x31 & 0xff)) != 0) &&
       ((*(uint *)(iVar16 + 0x790) & 1 << (uVar15 - 0x21 & 0xff)) != 0)) {
      return;
    }
    goto LAB_0048eb58;
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
    uVar15 = 1 << ((uVar15 >> 0x10) - 0x71 & 0xff);
    bVar12 = (byte)uVar15;
    if ((uVar15 & 0xff) != 0) {
      bVar12 = 1;
    }
    bVar21 = 0;
    if ((uVar15 & 0xff00) != 0) {
      bVar21 = 2;
    }
    bVar13 = 0;
    if ((uVar15 & 0xff0000) != 0) {
      bVar13 = 4;
    }
    bVar14 = 0;
    if ((uVar15 & 0xff000000) != 0) {
      bVar14 = 8;
    }
    *(byte *)(iVar16 + 0x4ad) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x4ad);
    if ((char)puVar19[3] != '\0') {
      uVar22 = uVar15;
      if (*param_2 != 0) {
        uVar22 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 & uVar22 | *(uint *)(iVar16 + 0x790) & ~uVar15;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      *puVar19 = *puVar19 | 0x80000;
      *(uint *)(iVar20 + 0x12e8) = ~*(uint *)(iVar16 + 0x790);
      return;
    }
    uVar22 = uVar15;
    if (*param_2 != 0) {
      uVar22 = 0;
    }
    if ((*(uint *)(iVar16 + 0x790) & uVar15) != (uVar22 & uVar15)) {
      uVar22 = uVar15;
      if (*param_2 != 0) {
        uVar22 = 0;
      }
      *(uint *)(iVar16 + 0x790) = uVar15 & uVar22 | *(uint *)(iVar16 + 0x790) & ~uVar15;
      *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    iVar8 = (uVar15 >> 0x10) - 0x79;
    iVar20 = iVar8 * 0xb;
    *(byte *)(iVar20 + iVar16 + 0x45a) = *(byte *)(iVar20 + iVar16 + 0x45a) | 1;
    uVar15 = *param_2;
    iVar10 = iVar16 + iVar8 * 0x2c;
    uVar22 = *(uint *)(iVar10 + 0x644);
    if ((char)puVar19[3] != '\0') {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = 4;
      }
      *(uint *)(iVar10 + 0x644) = uVar9 | uVar22 & 0xfffffffb;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      *puVar19 = *puVar19 | 0x80000;
      piVar18[iVar8 * 0xb + 0x467] = ~*(uint *)(iVar10 + 0x644);
      return;
    }
    uVar9 = 0;
    if (uVar15 != 0) {
      uVar9 = 4;
    }
    if ((uVar22 & 4) != uVar9) {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = 4;
      }
      *(uint *)(iVar10 + 0x644) = uVar9 | uVar22 & 0xfffffffb;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
    iVar8 = (uVar15 >> 0x10) - 0x81;
    iVar20 = iVar8 * 0xb;
    *(byte *)(iVar20 + iVar16 + 0x45a) = *(byte *)(iVar20 + iVar16 + 0x45a) | 1;
    if ((char)puVar19[3] != '\0') {
      iVar10 = iVar16 + iVar8 * 0x2c;
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 8;
      }
      *(uint *)(iVar10 + 0x644) = uVar15 | *(uint *)(iVar10 + 0x644) & 0xfffffff7;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      *puVar19 = *puVar19 | 0x80000;
      piVar18[iVar8 * 0xb + 0x467] = ~*(uint *)(iVar10 + 0x644);
      return;
    }
    iVar8 = iVar16 + iVar8 * 0x2c;
    uVar22 = *(uint *)(iVar8 + 0x644);
    uVar15 = 0;
    if (*param_2 != 0) {
      uVar15 = 8;
    }
    if ((uVar22 & 8) != uVar15) {
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 8;
      }
      *(uint *)(iVar8 + 0x644) = uVar15 | uVar22 & 0xfffffff7;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
    iVar8 = (uVar15 >> 0x10) - 0x89;
    iVar20 = iVar8 * 0xb;
    *(byte *)(iVar20 + iVar16 + 0x45a) = *(byte *)(iVar20 + iVar16 + 0x45a) | 1;
    if ((char)puVar19[3] != '\0') {
      iVar10 = iVar16 + iVar8 * 0x2c;
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 2;
      }
      *(uint *)(iVar10 + 0x644) = uVar15 | *(uint *)(iVar10 + 0x644) & 0xfffffffd;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      *puVar19 = *puVar19 | 0x80000;
      piVar18[iVar8 * 0xb + 0x467] = ~*(uint *)(iVar10 + 0x644);
      return;
    }
    iVar8 = iVar16 + iVar8 * 0x2c;
    uVar22 = *(uint *)(iVar8 + 0x644);
    uVar15 = 0;
    if (*param_2 != 0) {
      uVar15 = 2;
    }
    if ((uVar22 & 2) != uVar15) {
      uVar15 = 0;
      if (*param_2 != 0) {
        uVar15 = 2;
      }
      *(uint *)(iVar8 + 0x644) = uVar15 | uVar22 & 0xfffffffd;
      iVar16 = iVar16 + ((int)(iVar20 + 100U) >> 5) * 4;
      *(uint *)(iVar16 + 0x7a8) = *(uint *)(iVar16 + 0x7a8) | 1 << (iVar20 + 100U & 0x1f);
      uVar15 = *puVar19 | 0x80000;
      goto LAB_0048d740;
    }
    break;
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
    iVar20 = (uVar15 >> 0x10) - 0x91;
    if ((char)puVar19[3] != '\0') {
      *(uint *)(iVar16 + iVar20 * 0x70 + 0xa00) = *param_2;
      *puVar19 = *puVar19 | 8;
      puVar19[(uVar15 >> 0x10) - 0x48] = 0;
      return;
    }
    iVar16 = iVar16 + iVar20 * 0x70;
    if (*(uint *)(iVar16 + 0xa00) == *param_2) {
      return;
    }
    *(uint *)(iVar16 + 0xa00) = *param_2;
    uVar15 = *puVar19;
    goto LAB_0048fc5c;
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
    uVar15 = 1 << ((uVar15 >> 0x10) - 0x91 & 0xff);
    bVar12 = (byte)uVar15;
    if ((uVar15 & 0xff) != 0) {
      bVar12 = 1;
    }
    bVar21 = 0;
    if ((uVar15 & 0xff00) != 0) {
      bVar21 = 2;
    }
    bVar13 = 0;
    if ((uVar15 & 0xff0000) != 0) {
      bVar13 = 4;
    }
    bVar14 = 0;
    if ((uVar15 & 0xff000000) != 0) {
      bVar14 = 8;
    }
    *(byte *)(iVar16 + 0x4ad) = bVar14 | bVar21 | bVar12 | bVar13 | *(byte *)(iVar16 + 0x4ad);
    if ((char)puVar19[3] != '\0') {
      uVar9 = *param_2;
      uVar22 = *(uint *)(iVar16 + 0x790) & ~uVar15;
      goto joined_r0x0048e86c;
    }
    uVar22 = uVar15;
    if (*param_2 != 0) {
      uVar22 = 0;
    }
    if ((*(uint *)(iVar16 + 0x790) & uVar15) == (uVar22 & uVar15)) {
      return;
    }
    uVar22 = uVar15;
    if (*param_2 != 0) {
      uVar22 = 0;
    }
    *(uint *)(iVar16 + 0x790) = uVar15 & uVar22 | *(uint *)(iVar16 + 0x790) & ~uVar15;
    *(uint *)(iVar16 + 0x7bc) = *(uint *)(iVar16 + 0x7bc) | 0x800000;
    uVar15 = *puVar19 | 0x80000;
    goto LAB_0048fc5c;
  }
switchD_0048c6d8_caseD_1:
  return;
}
