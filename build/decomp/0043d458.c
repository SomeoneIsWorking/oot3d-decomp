// OoT3D decomp @ 0043d458  name=FUN_0043d458  size=1432

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0043d458(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;

  FUN_002e83ec();
  uVar7 = FUN_0033b5ec();
  iVar4 = DAT_0043d9f0;
  if ((((uVar7 & 0x200) != 0) || (uVar7 = FUN_0033b5ec(), (uVar7 & 0x100) != 0)) ||
     (*(int *)(iVar4 + 0x30) == -0x14)) {
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
    uVar9 = DAT_0043d9f8;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 8) = 2;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    FUN_0037547c(DAT_0043d9fc,0,4,uVar9);
    return;
  }
  uVar7 = FUN_0033b5ec();
  iVar8 = DAT_0043da00;
  if (((uVar7 & 1) == 0) && (*(int *)(iVar4 + 0x30) != 1 && *(int *)(iVar4 + 0x30) != -0x10)) {
    uVar7 = FUN_0033b5ec();
    if ((uVar7 & 2) == 0) {
      uVar7 = FUN_0033b5ec();
      if ((uVar7 & 0x400) == 0) {
        uVar7 = FUN_0033b5ec();
        if ((uVar7 & 0x800) == 0) {
          uVar7 = FUN_0033b5ec();
          if ((uVar7 & 8) != 0) {
            FUN_0037547c(DAT_0043da0c,0,4,DAT_0043d9f8);
            *(undefined4 *)(iVar4 + 0x28) = 1;
            *(undefined4 *)(iVar4 + 0x14) = 5;
          }
        }
        else {
          if (*(int *)(iVar4 + 8) == 0) {
            *(undefined4 *)(iVar4 + 8) = 1;
          }
          else {
            *(undefined4 *)(iVar4 + 8) = 0;
          }
          FUN_002f43f8();
          FUN_0037547c(DAT_0043da0c,0,4,DAT_0043d9f8);
        }
      }
      else {
        FUN_0044bb48();
      }
      uVar7 = FUN_0033b5d0();
      uVar9 = DAT_0043da10;
      if ((uVar7 & 0x10) != 0) {
        if (*(int *)(iVar4 + 0x14) == 5) {
          if (*(int *)(iVar4 + 0x28) == 0) {
            FUN_0037547c(DAT_0043da10,0,4,DAT_0043d9f8);
            *(undefined4 *)(iVar4 + 0x28) = 1;
          }
        }
        else if (-1 < *(int *)(iVar4 + 0x14)) {
          FUN_0037547c(DAT_0043da10,0,4,DAT_0043d9f8);
          iVar8 = *(int *)(iVar4 + 0x10) + 1;
          *(int *)(iVar4 + 0x10) = iVar8;
          if (iVar8 < 0xb) {
            if (iVar8 == 10) {
              if (*(int *)(iVar4 + 0x14) == 2) {
                *(undefined4 *)(iVar4 + 0x14) = 1;
              }
              else if (*(int *)(iVar4 + 0x14) == 4) {
                *(undefined4 *)(iVar4 + 0x14) = 3;
              }
            }
          }
          else {
            *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
          }
        }
      }
      uVar7 = FUN_0033b5d0();
      if ((uVar7 & 0x20) != 0) {
        if (*(int *)(iVar4 + 0x14) == 5) {
          if (*(int *)(iVar4 + 0x28) == 1) {
            FUN_0037547c(uVar9,0,4,DAT_0043d9f8);
            *(undefined4 *)(iVar4 + 0x28) = 0;
          }
        }
        else if (-1 < *(int *)(iVar4 + 0x14)) {
          FUN_0037547c(uVar9,0,4,DAT_0043d9f8);
          iVar8 = *(int *)(iVar4 + 0x10) + -1;
          *(int *)(iVar4 + 0x10) = iVar8;
          if (iVar8 < -1) {
            *(undefined4 *)(iVar4 + 0x10) = 10;
          }
        }
      }
      uVar7 = FUN_0033b5d0();
      if ((uVar7 & 0x40) != 0) {
        FUN_0037547c(uVar9,0,4,DAT_0043d9f8);
        if ((*(int *)(iVar4 + 0x10) == 10) &&
           (iVar8 = *(int *)(iVar4 + 0x14), iVar8 == 2 || iVar8 == 4)) {
          *(int *)(iVar4 + 0x14) = iVar8 + -1;
        }
        iVar8 = *(int *)(iVar4 + 0x14) + -1;
        *(int *)(iVar4 + 0x14) = iVar8;
        if (iVar8 < -1) {
          *(undefined4 *)(iVar4 + 0x14) = 5;
        }
      }
      uVar7 = FUN_0033b5d0();
      if ((uVar7 & 0x80) == 0) {
        return;
      }
      FUN_0037547c(uVar9,0,4,DAT_0043d9f8);
      if ((*(int *)(iVar4 + 0x10) == 10) &&
         (iVar8 = *(int *)(iVar4 + 0x14), iVar8 == 1 || iVar8 == 3)) {
        *(int *)(iVar4 + 0x14) = iVar8 + 1;
      }
      iVar8 = *(int *)(iVar4 + 0x14) + 1;
      *(int *)(iVar4 + 0x14) = iVar8;
      if (iVar8 == 5) {
        if (*(int *)(iVar4 + 0x10) < 5) {
          *(undefined4 *)(iVar4 + 0x28) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x28) = 1;
        }
        return;
      }
      if (iVar8 == 6) {
        *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
      }
      return;
    }
    if (*(int *)(iVar4 + 0x24) == 0) {
      FUN_0037547c(DAT_0043da08,0,4,DAT_0043d9f8);
      FUN_002e7d80();
      iVar10 = 0;
      do {
        if (*(int *)(iVar8 + iVar10 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar8 + iVar10 * 4) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
LAB_0043d6e4:
      *(undefined4 *)(iVar4 + 4) = 3;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      return;
    }
    FUN_002e7cf4();
    iVar10 = DAT_0043da0c;
    uVar9 = DAT_0043d9f8;
LAB_0043d638:
    FUN_0037547c(iVar10,0,4,uVar9);
    return;
  }
  *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
  iVar10 = DAT_0043da04;
  uVar1 = DAT_002e81c0;
  uVar9 = DAT_002e81bc;
  if (*(int *)(iVar4 + 0x14) == 5) {
    if (*(int *)(iVar4 + 0x28) == 0) {
      FUN_0037547c(DAT_0043da08,0,4,DAT_0043d9f8);
      FUN_002e7d80();
      iVar10 = 0;
      do {
        if (*(int *)(iVar8 + iVar10 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar8 + iVar10 * 4) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      goto LAB_0043d6e4;
    }
    uVar9 = DAT_0043d9f8;
    if ((*(int *)(iVar4 + 0x24) != 0) && (iVar8 = FUN_002e7dc4(), uVar9 = DAT_0043d9f8, iVar8 != 0))
    {
      FUN_0037547c(iVar10 + -3,0,4,DAT_0043d9f8);
      *(undefined4 *)(iVar4 + 0x2c) = 1;
      *(undefined4 *)(iVar4 + 4) = 5;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 0x44) = 0;
      return;
    }
    goto LAB_0043d638;
  }
  if (*(int *)(iVar4 + 0x14) == -1) {
    *(undefined4 *)(iVar4 + 0x14) = 0;
    uVar9 = DAT_0043d9f8;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 8) = 2;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    iVar10 = DAT_0043d9fc;
    goto LAB_0043d638;
  }
  iVar3 = FUN_00454acc();
  iVar8 = DAT_002e81cc;
  puVar2 = DAT_002e81c8;
  iVar4 = DAT_002e81c4;
  iVar10 = 1;
  piVar11 = (int *)(DAT_002e81c8 + 10);
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
    iVar10 = *(int *)(DAT_002e81cc + 0x24);
    iVar4 = DAT_002e81c4 + 3;
    if (iVar10 != 0) {
      if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
        *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      }
      if ((iVar10 == 7) && (*(int *)(puVar2 + 0x18) != 0)) {
        FUN_002e1618();
        FUN_002e1844();
        return;
      }
      *(int *)(iVar8 + 0x24) = iVar10 + -1;
      FUN_002e1618();
      FUN_002e1844();
      *(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1;
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
      *(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1;
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
      *(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1;
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
      *(undefined4 *)(iVar8 + 0x24) = 0;
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
      if (*piVar11 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar11 = 0;
      }
      if (*(int *)(iVar8 + 0x40) != 0) {
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
      puVar2[*(int *)(iVar8 + 0x24)] = (short)uVar9;
    }
    else {
LAB_002e81a0:
      if (*(int *)(iVar8 + 0x40) == 0) goto LAB_002e81ac;
LAB_002e81d8:
      puVar2[*(int *)(iVar8 + 0x24)] = (short)uVar1;
    }
    FUN_002e1844();
    if (*(int *)(iVar8 + 0x24) < 7) {
      *(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1;
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
      *(undefined4 *)(iVar8 + 0x24) = 0;
      if (*(int *)(puVar2 + 0xe) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xe) = 0;
        iVar10 = extraout_r1;
      }
      if (*(int *)(puVar2 + 0xc) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0xc) = 0;
        iVar10 = extraout_r1_00;
      }
      if (*piVar11 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar11 = 0;
        iVar10 = extraout_r1_01;
      }
      bVar12 = *(int *)(iVar8 + 0x40) != 0;
      iVar5 = 0;
      if (bVar12) {
        puVar2[3] = 0;
        iVar5 = *(int *)(puVar2 + 0x10);
      }
      if (bVar12 && iVar5 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar2 + 0x10) = 0;
        iVar10 = extraout_r1_02;
      }
    }
    uVar7 = *(uint *)(iVar8 + 8);
    if (uVar7 < 2) {
      iVar10 = FUN_002e11e0(0);
      uVar7 = (uint)*(ushort *)(iVar10 + iVar3 * 2);
    }
    else {
      if (uVar7 == 2) {
        iVar5 = *(int *)(iVar8 + 0x20);
        if (iVar5 == 0) {
          iVar10 = FUN_002e11e0(4);
        }
        else if (iVar5 == 1) {
          iVar10 = FUN_002e11e0(5);
        }
        else if (iVar5 == 2) {
          iVar10 = FUN_002e11e0(6);
        }
        puVar6 = (ushort *)(iVar10 + iVar3 * 2);
      }
      else {
        if (uVar7 != 3) goto LAB_002e832c;
        iVar10 = FUN_002e11e0(7);
        puVar6 = (ushort *)(iVar10 + iVar3 * 2);
      }
      uVar7 = (uint)*puVar6;
    }
LAB_002e832c:
    puVar2[*(int *)(iVar8 + 0x24)] = (short)uVar7;
    FUN_002e1844();
    uVar9 = DAT_002e81d4;
    if (*(int *)(iVar8 + 0x24) < 7) {
      *(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1;
    }
    FUN_0037547c(iVar4,0,4,uVar9);
    if (*(int *)(iVar8 + 0x20) == 2) {
      *(undefined4 *)(iVar8 + 0x20) = 0;
    }
    return;
  }
  FUN_0037547c(iVar4,0,4,DAT_002e81d4);
  return;
}
