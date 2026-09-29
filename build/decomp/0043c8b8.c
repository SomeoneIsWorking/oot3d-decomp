// OoT3D decomp @ 0043c8b8  name=FUN_0043c8b8  size=2912

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0043c8b8(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar11;
  int *piVar12;
  bool bVar13;

  FUN_002e83ec();
  uVar6 = DAT_0043d438;
  iVar4 = DAT_0043d434;
  if (*(int *)(DAT_0043d434 + 0x40) == 0) {
    uVar8 = FUN_0033b5ec();
    if ((((uVar8 & 0x200) != 0) || (uVar8 = FUN_0033b5ec(), (uVar8 & 0x100) != 0)) ||
       (*(int *)(iVar4 + 0x30) == -0x14)) {
      *(undefined4 *)(iVar4 + 0x14) = 0;
      uVar10 = DAT_0043d440;
      *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      FUN_0037547c(uVar6,0,4,uVar10);
      return;
    }
  }
  else {
    uVar8 = FUN_0033b5ec();
    if ((((uVar8 & 0x200) != 0) || (uVar8 = FUN_0033b5ec(), (uVar8 & 0x100) != 0)) ||
       (*(int *)(iVar4 + 0x30) == -0x14)) {
      *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar4 + 8) = 3;
      uVar10 = DAT_0043d440;
      *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      FUN_0037547c(uVar6,0,4,uVar10);
      return;
    }
  }
  uVar8 = FUN_0033b5ec();
  iVar9 = DAT_0043d444;
  if (((uVar8 & 1) == 0) && (*(int *)(iVar4 + 0x30) != 1 && *(int *)(iVar4 + 0x30) != -0x10)) {
    uVar6 = FUN_0033b5ec();
    uVar8 = DAT_0043d450;
    if ((uVar6 & 2) != 0) {
      if (*(int *)(iVar4 + 0x24) == 0) {
        FUN_002e7d80();
        iVar11 = 0;
        do {
          if (*(int *)(iVar9 + iVar11 * 4) != 0) {
            FUN_002f6944();
            FUN_003525d4();
            *(undefined4 *)(iVar9 + iVar11 * 4) = 0;
          }
          uVar10 = DAT_0043d440;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 8);
        *(undefined4 *)(iVar4 + 4) = 3;
        uVar8 = DAT_0043d44c;
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      else {
        FUN_002e7cf4();
        uVar10 = DAT_0043d440;
      }
      goto LAB_0043cabc;
    }
    uVar6 = FUN_0033b5ec();
    if ((uVar6 & 0x400) == 0) {
      uVar6 = FUN_0033b5ec();
      if ((uVar6 & 0x800) != 0) {
        if (*(int *)(iVar4 + 0x20) == 2) goto LAB_0043cbe8;
        *(undefined4 *)(iVar4 + 0x20) = 2;
        goto LAB_0043cc14;
      }
      uVar6 = FUN_0033b5ec();
      if ((uVar6 & 8) != 0) {
        FUN_0037547c(uVar8,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x28) = 1;
        *(undefined4 *)(iVar4 + 0x14) = 5;
      }
    }
    else {
      if (*(int *)(iVar4 + 0x20) == 1) {
LAB_0043cbe8:
        *(undefined4 *)(iVar4 + 0x20) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x20) = 1;
      }
LAB_0043cc14:
      FUN_0037547c(uVar8,0,4,DAT_0043d440);
    }
    switch(*(undefined4 *)(iVar4 + 0x14)) {
    case 0:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x10) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + 1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (0xb < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + -1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (iVar9 < 0) {
          *(undefined4 *)(iVar4 + 0x10) = 0xb;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 1;
        if (9 < *(int *)(iVar4 + 0x10)) {
          *(undefined4 *)(iVar4 + 0x10) = 10;
        }
        return;
      }
      break;
    case 1:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x10) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + 1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (10 < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + -1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (iVar9 < 0) {
          *(undefined4 *)(iVar4 + 0x10) = 10;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 0;
        if (*(int *)(iVar4 + 0x10) == 10) {
          *(undefined4 *)(iVar4 + 0x10) = 0xb;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 2;
        if (*(int *)(iVar4 + 0x10) == 10) {
          *(undefined4 *)(iVar4 + 0x10) = 9;
          goto LAB_0043d08c;
        }
      }
      break;
    case 2:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x10) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + 1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (9 < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + -1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (iVar9 < -1) {
          *(undefined4 *)(iVar4 + 0x10) = 9;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 1;
        if (*(int *)(iVar4 + 0x10) == -1) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
        else if (*(int *)(iVar4 + 0x10) == 9) {
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x10) = 0xb;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
LAB_0043d08c:
        *(undefined4 *)(iVar4 + 0x14) = 3;
        return;
      }
      break;
    case 3:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x10) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + 1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (9 < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + -1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (iVar9 < -1) {
          *(undefined4 *)(iVar4 + 0x10) = 9;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 2;
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 4;
        if (*(int *)(iVar4 + 0x10) < 0) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
        iVar9 = *(int *)(iVar4 + 0x10);
        if (iVar9 - 2U < 5) {
          *(undefined4 *)(iVar4 + 0x10) = 2;
          return;
        }
        if (iVar9 == 7) {
          *(undefined4 *)(iVar4 + 0x10) = 3;
          return;
        }
        if (7 < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 4;
        }
        return;
      }
      break;
    case 4:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x10) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + 1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (4 < iVar9) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        iVar9 = *(int *)(iVar4 + 0x10) + -1;
        *(int *)(iVar4 + 0x10) = iVar9;
        if (iVar9 < 0) {
          *(undefined4 *)(iVar4 + 0x10) = 4;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 3;
        if (*(int *)(iVar4 + 0x10) == 3) {
          uVar10 = 7;
        }
        else {
          if (*(int *)(iVar4 + 0x10) != 4) goto code_r0x0043d2d8;
          uVar10 = 8;
        }
        *(undefined4 *)(iVar4 + 0x10) = uVar10;
      }
code_r0x0043d2d8:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 5;
        if (*(int *)(iVar4 + 0x10) < 2) {
          *(undefined4 *)(iVar4 + 0x28) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x28) = 1;
        }
        return;
      }
      break;
    case 5:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x20) == 0) {
        uVar6 = FUN_0033b5d0();
        if (((uVar6 & 0x10) != 0) && (*(int *)(iVar4 + 0x28) == 0)) {
          FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
          *(undefined4 *)(iVar4 + 0x28) = 1;
        }
      }
      else if (*(int *)(iVar4 + 0x28) == 1) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x28) = 0;
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x10) = 4;
        *(undefined4 *)(iVar4 + 0x14) = 4;
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
        return;
      }
      break;
    case 0xffffffff:
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x40) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 5;
        if (*(int *)(iVar4 + 0x10) < 6) {
          *(undefined4 *)(iVar4 + 0x28) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x28) = 1;
        }
      }
      uVar6 = FUN_0033b5d0();
      if ((uVar6 & 0x80) != 0) {
        FUN_0037547c(DAT_0043d454,0,4,DAT_0043d440);
        *(undefined4 *)(iVar4 + 0x14) = 0;
        return;
      }
    }
    return;
  }
  *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
  uVar8 = DAT_0043d448;
  uVar1 = DAT_002e81c0;
  uVar10 = DAT_002e81bc;
  if (*(int *)(iVar4 + 0x14) == -1) {
    uVar8 = uVar6;
    if (*(int *)(iVar4 + 0x40) == 0) {
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      uVar10 = DAT_0043d440;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = 3;
      *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      uVar10 = DAT_0043d440;
    }
LAB_0043cabc:
    FUN_0037547c(uVar8,0,4,uVar10);
    return;
  }
  if (*(int *)(iVar4 + 0x14) == 5) {
    if (*(int *)(iVar4 + 0x28) == 0) {
      FUN_0037547c(DAT_0043d44c,0,4,DAT_0043d440);
      FUN_002e7d80();
      iVar11 = 0;
      do {
        if (*(int *)(iVar9 + iVar11 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar9 + iVar11 * 4) = 0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
      *(undefined4 *)(iVar4 + 4) = 3;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      return;
    }
    uVar10 = DAT_0043d440;
    if ((*(int *)(iVar4 + 0x24) != 0) && (iVar9 = FUN_002e7dc4(), uVar10 = DAT_0043d440, iVar9 != 0)
       ) {
      FUN_0037547c(uVar8 & 0xfffffffd,0,4,DAT_0043d440);
      *(undefined4 *)(iVar4 + 0x2c) = 1;
      *(undefined4 *)(iVar4 + 4) = 5;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 0x44) = 0;
      return;
    }
    goto LAB_0043cabc;
  }
  iVar3 = FUN_00454acc();
  iVar9 = DAT_002e81cc;
  puVar2 = DAT_002e81c8;
  iVar4 = DAT_002e81c4;
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
    iVar4 = DAT_002e81c4 + 3;
    if (iVar11 != 0) {
      if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
        *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      }
      if ((iVar11 == 7) && (*(int *)(puVar2 + 0x18) != 0)) {
        FUN_002e1618();
        FUN_002e1844();
        return;
      }
      *(int *)(iVar9 + 0x24) = iVar11 + -1;
      FUN_002e1618();
      FUN_002e1844();
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
      return;
    }
    break;
  case 0x3eb:
    iVar4 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar4 != 0) {
      if ((iVar4 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e1478();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar4 + -1;
      FUN_002e1478();
      FUN_002e1844();
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
      return;
    }
    goto LAB_002e8058;
  case 0x3ec:
    iVar4 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar4 != 0) {
      if ((iVar4 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e12d8();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar4 + -1;
      FUN_002e12d8();
      FUN_002e1844();
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
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
      *(undefined4 *)(iVar9 + 0x24) = 0;
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
      if (*(int *)(iVar9 + 0x40) != 0) {
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
      puVar2[*(int *)(iVar9 + 0x24)] = (short)uVar10;
    }
    else {
LAB_002e81a0:
      if (*(int *)(iVar9 + 0x40) == 0) goto LAB_002e81ac;
LAB_002e81d8:
      puVar2[*(int *)(iVar9 + 0x24)] = (short)uVar1;
    }
    FUN_002e1844();
    if (*(int *)(iVar9 + 0x24) < 7) {
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
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
      *(undefined4 *)(iVar9 + 0x24) = 0;
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
      bVar13 = *(int *)(iVar9 + 0x40) != 0;
      iVar5 = 0;
      if (bVar13) {
        puVar2[3] = 0;
        iVar5 = *(int *)(puVar2 + 0x10);
      }
      if (bVar13 && iVar5 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0x10) = 0;
        iVar11 = extraout_r1_02;
      }
    }
    uVar6 = *(uint *)(iVar9 + 8);
    if (uVar6 < 2) {
      iVar11 = FUN_002e11e0(0);
      uVar6 = (uint)*(ushort *)(iVar11 + iVar3 * 2);
    }
    else {
      if (uVar6 == 2) {
        iVar5 = *(int *)(iVar9 + 0x20);
        if (iVar5 == 0) {
          iVar11 = FUN_002e11e0(4);
        }
        else if (iVar5 == 1) {
          iVar11 = FUN_002e11e0(5);
        }
        else if (iVar5 == 2) {
          iVar11 = FUN_002e11e0(6);
        }
        puVar7 = (ushort *)(iVar11 + iVar3 * 2);
      }
      else {
        if (uVar6 != 3) goto LAB_002e832c;
        iVar11 = FUN_002e11e0(7);
        puVar7 = (ushort *)(iVar11 + iVar3 * 2);
      }
      uVar6 = (uint)*puVar7;
    }
LAB_002e832c:
    puVar2[*(int *)(iVar9 + 0x24)] = (short)uVar6;
    FUN_002e1844();
    uVar10 = DAT_002e81d4;
    if (*(int *)(iVar9 + 0x24) < 7) {
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
    }
    FUN_0037547c(iVar4,0,4,uVar10);
    if (*(int *)(iVar9 + 0x20) == 2) {
      *(undefined4 *)(iVar9 + 0x20) = 0;
    }
    return;
  }
  FUN_0037547c(iVar4,0,4,DAT_002e81d4);
  return;
}
