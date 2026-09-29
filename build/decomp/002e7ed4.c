// OoT3D decomp @ 002e7ed4  name=FUN_002e7ed4  size=1240

void FUN_002e7ed4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int *piVar11;
  bool bVar12;

  uVar2 = DAT_002e81c0;
  uVar1 = DAT_002e81bc;
  iVar5 = FUN_00454acc();
  iVar4 = DAT_002e81cc;
  puVar3 = DAT_002e81c8;
  iVar6 = DAT_002e81c4;
  iVar10 = 1;
  piVar11 = (int *)(DAT_002e81c8 + 10);
  switch(iVar5) {
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
    iVar6 = DAT_002e81c4 + 3;
    if (iVar10 != 0) {
      if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
        *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      }
      if ((iVar10 == 7) && (*(int *)(puVar3 + 0x18) != 0)) {
        FUN_002e1618();
        FUN_002e1844();
        return;
      }
      *(int *)(iVar4 + 0x24) = iVar10 + -1;
      FUN_002e1618();
      FUN_002e1844();
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
      return;
    }
    break;
  case 0x3eb:
    iVar6 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar6 != 0) {
      if ((iVar6 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e1478();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar6 + -1;
      FUN_002e1478();
      FUN_002e1844();
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
      return;
    }
    goto LAB_002e8058;
  case 0x3ec:
    iVar6 = *(int *)(DAT_002e81cc + 0x24);
    if (iVar6 != 0) {
      if ((iVar6 == 7) && (*(int *)(DAT_002e81c8 + 0x18) != 0)) {
        FUN_002e12d8();
        FUN_002e1844();
        return;
      }
      *(int *)(DAT_002e81cc + 0x24) = iVar6 + -1;
      FUN_002e12d8();
      FUN_002e1844();
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
      return;
    }
LAB_002e8058:
    FUN_0037547c(DAT_002e81c4 + 3,0,4,DAT_002e81d4,DAT_002e81d4,DAT_002e81d0);
    return;
  case 0x3ed:
    FUN_002e7cf4();
    break;
  case 0x3ee:
    if (*(int *)(DAT_002e81cc + 0x4c) == 0) {
      *(undefined4 *)(DAT_002e81cc + 0x4c) = 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      if (*(int *)(puVar3 + 0xe) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar3 + 0xe) = 0;
      }
      if (*(int *)(puVar3 + 0xc) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar3 + 0xc) = 0;
      }
      if (*piVar11 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar11 = 0;
      }
      if (*(int *)(iVar4 + 0x40) != 0) {
        puVar3[3] = 0;
        if (*(int *)(puVar3 + 0x10) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(puVar3 + 0x10) = 0;
          goto LAB_002e81a0;
        }
        goto LAB_002e81d8;
      }
LAB_002e81ac:
      puVar3[*(int *)(iVar4 + 0x24)] = (short)uVar1;
    }
    else {
LAB_002e81a0:
      if (*(int *)(iVar4 + 0x40) == 0) goto LAB_002e81ac;
LAB_002e81d8:
      puVar3[*(int *)(iVar4 + 0x24)] = (short)uVar2;
    }
    FUN_002e1844();
    if (*(int *)(iVar4 + 0x24) < 7) {
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
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
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      if (*(int *)(puVar3 + 0xe) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar3 + 0xe) = 0;
        iVar10 = extraout_r1;
      }
      if (*(int *)(puVar3 + 0xc) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar3 + 0xc) = 0;
        iVar10 = extraout_r1_00;
      }
      if (*piVar11 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *piVar11 = 0;
        iVar10 = extraout_r1_01;
      }
      bVar12 = *(int *)(iVar4 + 0x40) != 0;
      iVar7 = 0;
      if (bVar12) {
        puVar3[3] = 0;
        iVar7 = *(int *)(puVar3 + 0x10);
      }
      if (bVar12 && iVar7 != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(puVar3 + 0x10) = 0;
        iVar10 = extraout_r1_02;
      }
    }
    uVar8 = *(uint *)(iVar4 + 8);
    if (uVar8 < 2) {
      iVar10 = FUN_002e11e0(0);
      uVar8 = (uint)*(ushort *)(iVar10 + iVar5 * 2);
    }
    else {
      if (uVar8 == 2) {
        iVar7 = *(int *)(iVar4 + 0x20);
        if (iVar7 == 0) {
          iVar10 = FUN_002e11e0(4);
        }
        else if (iVar7 == 1) {
          iVar10 = FUN_002e11e0(5);
        }
        else if (iVar7 == 2) {
          iVar10 = FUN_002e11e0(6);
        }
        puVar9 = (ushort *)(iVar10 + iVar5 * 2);
      }
      else {
        if (uVar8 != 3) goto LAB_002e832c;
        iVar10 = FUN_002e11e0(7);
        puVar9 = (ushort *)(iVar10 + iVar5 * 2);
      }
      uVar8 = (uint)*puVar9;
    }
LAB_002e832c:
    puVar3[*(int *)(iVar4 + 0x24)] = (short)uVar8;
    FUN_002e1844();
    uVar2 = DAT_002e81d4;
    uVar1 = DAT_002e81d0;
    if (*(int *)(iVar4 + 0x24) < 7) {
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
    }
    FUN_0037547c(iVar6,0,4,uVar2,uVar2,uVar1);
    if (*(int *)(iVar4 + 0x20) == 2) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
    }
    return;
  }
  FUN_0037547c(iVar6,0,4,DAT_002e81d4,DAT_002e81d4,DAT_002e81d0);
  return;
}
