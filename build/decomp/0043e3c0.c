// OoT3D decomp @ 0043e3c0  name=FUN_0043e3c0  size=1452

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0043e3c0(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;

  FUN_002e83ec();
  uVar6 = FUN_0033b5ec();
  iVar9 = DAT_0043e96c;
  if ((((uVar6 & 0x200) != 0) || (uVar6 = FUN_0033b5ec(), (uVar6 & 0x100) != 0)) ||
     (*(int *)(iVar9 + 0x30) == -0x14)) {
    *(undefined4 *)(iVar9 + 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x30) = 0xffffffff;
    uVar8 = DAT_0043e974;
    *(undefined4 *)(iVar9 + 0x10) = 0;
    *(undefined4 *)(iVar9 + 8) = 2;
    *(undefined4 *)(iVar9 + 0x20) = 0;
    FUN_0037547c(DAT_0043e978,0,4,uVar8);
    return;
  }
  uVar6 = FUN_0033b5ec();
  iVar7 = DAT_0043e97c;
  if (((uVar6 & 1) == 0) && (*(int *)(iVar9 + 0x30) != 1 && *(int *)(iVar9 + 0x30) != -0x10)) {
    uVar6 = FUN_0033b5ec();
    iVar3 = DAT_002e7d78;
    iVar11 = DAT_002e7d74;
    if ((uVar6 & 2) != 0) {
      if (*(int *)(iVar9 + 0x24) != 0) {
        iVar9 = *(int *)(DAT_002e7d74 + 0x24);
        if ((iVar9 == 7) && (*(undefined2 *)(DAT_002e7d78 + -6) = 0, *(int *)(iVar3 + 0x1c) != 0)) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        else {
          *(undefined2 *)(DAT_002e7d7c + iVar9 * 2) = 0;
          *(int *)(iVar11 + 0x24) = iVar9 + -1;
          if (iVar9 + -1 < 0) {
            *(undefined4 *)(iVar11 + 0x24) = 0;
          }
          iVar9 = *(int *)(iVar11 + 0x24);
          if (*(int *)(iVar3 + iVar9 * 4) != 0) {
            FUN_002f6944();
            FUN_003525d4();
            *(undefined4 *)(iVar3 + iVar9 * 4) = 0;
            return;
          }
        }
        return;
      }
      FUN_0037547c(DAT_0043e988,0,4,DAT_0043e974);
      FUN_002e7d80();
      iVar11 = 0;
      do {
        if (*(int *)(iVar7 + iVar11 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar7 + iVar11 * 4) = 0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
LAB_0043e60c:
      *(undefined4 *)(iVar9 + 4) = 3;
      *(undefined4 *)(iVar9 + 0x44) = 0;
      return;
    }
    uVar6 = FUN_0033b5ec();
    if ((uVar6 & 8) != 0) {
      FUN_0037547c(DAT_0043e98c,0,4,DAT_0043e974);
      *(undefined4 *)(iVar9 + 0x28) = 1;
      *(undefined4 *)(iVar9 + 0x14) = 5;
    }
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x10) != 0) && (-1 < *(int *)(iVar9 + 0x14))) {
      FUN_0037547c(DAT_0043e990,0,4,DAT_0043e974);
      iVar7 = *(int *)(iVar9 + 0x10) + 1;
      *(int *)(iVar9 + 0x10) = iVar7;
      if (iVar7 < 0xb) {
        if (iVar7 == 10) {
          if (*(int *)(iVar9 + 0x14) == 0) {
            *(undefined4 *)(iVar9 + 0x10) = 0xffffffff;
          }
          else {
LAB_0043e6f4:
            if (*(int *)(iVar9 + 0x14) == 2) {
              *(undefined4 *)(iVar9 + 0x14) = 1;
            }
            else {
              if (*(int *)(iVar9 + 0x14) != 4) goto LAB_0043e710;
              *(undefined4 *)(iVar9 + 0x14) = 3;
            }
          }
          goto code_r0x0043e728;
        }
        if (iVar7 == 9) {
          if (*(int *)(iVar9 + 0x14) == 4) {
            *(undefined4 *)(iVar9 + 0x14) = 3;
            *(undefined4 *)(iVar9 + 0x10) = 10;
            goto code_r0x0043e728;
          }
        }
        else if (iVar7 == 10) goto LAB_0043e6f4;
      }
      else {
        *(undefined4 *)(iVar9 + 0x10) = 0xffffffff;
      }
LAB_0043e710:
      if (*(int *)(iVar9 + 0x14) == 5) {
        *(uint *)(iVar9 + 0x28) = *(uint *)(iVar9 + 0x28) ^ 1;
      }
    }
code_r0x0043e728:
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x20) != 0) && (-1 < *(int *)(iVar9 + 0x14))) {
      FUN_0037547c(DAT_0043e990,0,4,DAT_0043e974);
      iVar7 = *(int *)(iVar9 + 0x10) + -1;
      *(int *)(iVar9 + 0x10) = iVar7;
      if (iVar7 < -1) {
        *(undefined4 *)(iVar9 + 0x10) = 10;
        if (*(int *)(iVar9 + 0x14) != 0) {
LAB_0043e7ac:
          if (*(int *)(iVar9 + 0x14) == 5) {
            *(uint *)(iVar9 + 0x28) = *(uint *)(iVar9 + 0x28) ^ 1;
          }
          goto code_r0x0043e7c4;
        }
        uVar8 = 9;
      }
      else {
        bVar13 = iVar7 != 9;
        if (!bVar13) {
          iVar7 = *(int *)(iVar9 + 0x14);
        }
        if (bVar13 || iVar7 != 4) goto LAB_0043e7ac;
        uVar8 = 8;
      }
      *(undefined4 *)(iVar9 + 0x10) = uVar8;
    }
code_r0x0043e7c4:
    uVar6 = FUN_0033b5d0();
    if ((uVar6 & 0x40) != 0) {
      FUN_0037547c(DAT_0043e990,0,4,DAT_0043e974);
      if (*(int *)(iVar9 + 0x14) == -1) {
        if (*(int *)(iVar9 + 0x10) < 5) {
          *(undefined4 *)(iVar9 + 0x28) = 0;
        }
        else {
          *(undefined4 *)(iVar9 + 0x28) = 1;
        }
        *(undefined4 *)(iVar9 + 0x14) = 5;
        return;
      }
      iVar7 = *(int *)(iVar9 + 0x14) + -1;
      *(int *)(iVar9 + 0x14) = iVar7;
      if (*(int *)(iVar9 + 0x10) == 10) {
        if ((iVar7 < 3) && (-1 < iVar7)) {
          *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
          return;
        }
        if (iVar7 == 3) goto LAB_0043e8c0;
      }
      if (iVar7 < -1) {
        iVar7 = 4;
        *(undefined4 *)(iVar9 + 0x14) = 4;
      }
      if (*(int *)(iVar9 + 0x10) == 10 && iVar7 == 0) {
        *(undefined4 *)(iVar9 + 0x14) = 3;
      }
    }
    uVar6 = FUN_0033b5d0();
    if ((uVar6 & 0x80) == 0) {
      return;
    }
    FUN_0037547c(DAT_0043e990,0,4,DAT_0043e974);
    iVar7 = *(int *)(iVar9 + 0x14) + 1;
    *(int *)(iVar9 + 0x14) = iVar7;
    iVar11 = *(int *)(iVar9 + 0x10);
    if (iVar11 == 10) {
      if (iVar7 == 1) {
LAB_0043e8c0:
        *(undefined4 *)(iVar9 + 0x14) = 2;
        return;
      }
      if (iVar7 == 2) {
        *(undefined4 *)(iVar9 + 0x14) = 3;
        return;
      }
      if (2 < iVar7) {
        if (iVar7 < 5) {
          *(undefined4 *)(iVar9 + 0x14) = 5;
          *(undefined4 *)(iVar9 + 0x28) = 1;
          return;
        }
        goto LAB_0043e8f8;
      }
    }
    else {
LAB_0043e8f8:
      if (iVar7 == 5) {
        if (iVar11 < 5) {
          *(undefined4 *)(iVar9 + 0x28) = 0;
          return;
        }
        *(undefined4 *)(iVar9 + 0x28) = 1;
        goto LAB_0043e924;
      }
    }
    if (iVar7 == 6) {
      *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
    }
LAB_0043e924:
    if (iVar11 == 10) {
      if (*(int *)(iVar9 + 0x14) == 0) {
        *(undefined4 *)(iVar9 + 0x10) = 9;
      }
      return;
    }
    if (iVar11 == 9) {
      iVar7 = *(int *)(iVar9 + 0x14);
    }
    if (iVar11 != 9 || iVar7 != 4) {
      return;
    }
    *(undefined4 *)(iVar9 + 0x10) = 8;
    *(undefined4 *)(iVar9 + 0x14) = 5;
    *(undefined4 *)(iVar9 + 0x28) = 1;
    return;
  }
  *(undefined4 *)(iVar9 + 0x30) = 0xffffffff;
  uVar10 = DAT_0043e974;
  uVar1 = DAT_002e81c0;
  uVar8 = DAT_002e81bc;
  if (*(int *)(iVar9 + 0x14) == 5) {
    if (*(int *)(iVar9 + 0x28) == 0) {
      FUN_0037547c(DAT_0043e988,0,4,DAT_0043e974);
      FUN_002e7d80();
      iVar11 = 0;
      do {
        if (*(int *)(iVar7 + iVar11 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar7 + iVar11 * 4) = 0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
      goto LAB_0043e60c;
    }
    if (*(int *)(iVar9 + 0x24) == 0) {
      return;
    }
    iVar7 = FUN_002e7dc4();
    uVar8 = DAT_0043e980;
    uVar10 = DAT_0043e974;
    if (iVar7 != 0) {
      FUN_0037547c(DAT_0043e984,0,4,DAT_0043e974);
      *(undefined4 *)(iVar9 + 0x2c) = 1;
      *(undefined4 *)(iVar9 + 4) = 5;
      *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar9 + 8);
      *(undefined4 *)(iVar9 + 0x44) = 0;
      return;
    }
LAB_0043e57c:
    FUN_0037547c(uVar8,0,4,uVar10);
    return;
  }
  if (*(int *)(iVar9 + 0x14) == -1) {
    *(undefined4 *)(iVar9 + 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10) = 0;
    *(undefined4 *)(iVar9 + 8) = 2;
    *(undefined4 *)(iVar9 + 0x20) = 0;
    uVar8 = DAT_0043e978;
    goto LAB_0043e57c;
  }
  iVar3 = FUN_00454acc();
  iVar7 = DAT_002e81cc;
  puVar2 = DAT_002e81c8;
  iVar9 = DAT_002e81c4;
  iVar11 = 1;
  piVar12 = (int *)(DAT_002e81c8 + 10);
  switch(iVar3) {
  case 1000:
    if (*(int *)(DAT_002e81cc + 8) == 0) {
      return;
    }
    *(undefined4 *)(DAT_002e81cc + 8) = 0;
    goto LAB_002e7f6c;
  case 0x3e9:
    if (*(int *)(DAT_002e81cc + 8) == 1) {
      return;
    }
    *(undefined4 *)(DAT_002e81cc + 8) = 1;
LAB_002e7f6c:
    FUN_002f43f8();
    break;
  case 0x3ea:
    iVar11 = *(int *)(DAT_002e81cc + 0x24);
    iVar9 = DAT_002e81c4 + 3;
    if (iVar11 != 0) {
      if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
        *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      }
      if ((iVar11 == 7) && (*(int *)(puVar2 + 0x18) != 0)) {
        FUN_002e1618();
        FUN_002e1844();
        return;
      }
      *(int *)(iVar7 + 0x24) = iVar11 + -1;
      FUN_002e1618();
      FUN_002e1844();
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
      return;
    }
    break;
  case 0x3eb:
    iVar9 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar9 != 0) {
      if ((iVar9 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e1478();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar9 + -1;
      FUN_002e1478();
      FUN_002e1844();
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
      return;
    }
    goto LAB_002e8058;
  case 0x3ec:
    iVar9 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar9 != 0) {
      if ((iVar9 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e12d8();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar9 + -1;
      FUN_002e12d8();
      FUN_002e1844();
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
      return;
    }
LAB_002e8058:
    FUN_0037547c(DAT_002e81c4 + 3,0,4,DAT_002e81d4);
    return;
  case 0x3ed:
    FUN_002e7cf4();
    break;
  case 0x3ee:
    if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
      *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(iVar7 + 0x24) = 0;
      if (*(int *)(puVar2 + 0xe) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xe) = 0;
      }
      if (*(int *)(puVar2 + 0xc) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xc) = 0;
      }
      if (*piVar12 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar12 = 0;
      }
      if (*(int *)(iVar7 + 0x40) != 0) {
        puVar2[3] = 0;
        if (*(int *)(puVar2 + 0x10) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(puVar2 + 0x10) = 0;
          goto LAB_002e81a0;
        }
        goto LAB_002e81d8;
      }
LAB_002e81ac:
      puVar2[*(int *)(iVar7 + 0x24)] = (short)uVar8;
    }
    else {
LAB_002e81a0:
      if (*(int *)(iVar7 + 0x40) == 0) goto LAB_002e81ac;
LAB_002e81d8:
      puVar2[*(int *)(iVar7 + 0x24)] = (short)uVar1;
    }
    FUN_002e1844();
    if (*(int *)(iVar7 + 0x24) < 7) {
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
    }
    break;
  case 0x3ef:
    if (*(int *)(DAT_002e81cc + 0x20) != 1) {
      *(undefined4 *)(DAT_002e81cc + 0x20) = 1;
      break;
    }
    goto LAB_002e8210;
  case 0x3f0:
    if (*(int *)(DAT_002e81cc + 0x20) != 2) {
      *(undefined4 *)(DAT_002e81cc + 0x20) = 2;
      break;
    }
LAB_002e8210:
    *(undefined4 *)(DAT_002e81cc + 0x20) = 0;
    break;
  default:
    if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
      *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(iVar7 + 0x24) = 0;
      if (*(int *)(puVar2 + 0xe) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xe) = 0;
        iVar11 = extraout_r1;
      }
      if (*(int *)(puVar2 + 0xc) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xc) = 0;
        iVar11 = extraout_r1_00;
      }
      if (*piVar12 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar12 = 0;
        iVar11 = extraout_r1_01;
      }
      bVar13 = *(int *)(iVar7 + 0x40) != 0;
      iVar4 = 0;
      if (bVar13) {
        puVar2[3] = 0;
        iVar4 = *(int *)(puVar2 + 0x10);
      }
      if (bVar13 && iVar4 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0x10) = 0;
        iVar11 = extraout_r1_02;
      }
    }
    uVar6 = *(uint *)(iVar7 + 8);
    if (uVar6 < 2) {
      iVar11 = FUN_002e11e0(0);
      uVar6 = (uint)*(ushort *)(iVar11 + iVar3 * 2);
    }
    else {
      if (uVar6 == 2) {
        iVar4 = *(int *)(iVar7 + 0x20);
        if (iVar4 == 0) {
          iVar11 = FUN_002e11e0(4);
        }
        else if (iVar4 == 1) {
          iVar11 = FUN_002e11e0(5);
        }
        else if (iVar4 == 2) {
          iVar11 = FUN_002e11e0(6);
        }
        puVar5 = (ushort *)(iVar11 + iVar3 * 2);
      }
      else {
        if (uVar6 != 3) goto LAB_002e832c;
        iVar11 = FUN_002e11e0(7);
        puVar5 = (ushort *)(iVar11 + iVar3 * 2);
      }
      uVar6 = (uint)*puVar5;
    }
LAB_002e832c:
    puVar2[*(int *)(iVar7 + 0x24)] = (short)uVar6;
    FUN_002e1844();
    uVar8 = DAT_002e81d4;
    if (*(int *)(iVar7 + 0x24) < 7) {
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
    }
    FUN_0037547c(iVar9,0,4,uVar8);
    if (*(int *)(iVar7 + 0x20) == 2) {
      *(undefined4 *)(iVar7 + 0x20) = 0;
    }
    return;
  }
  FUN_0037547c(iVar9,0,4,DAT_002e81d4);
  return;
}
