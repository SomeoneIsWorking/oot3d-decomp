// OoT3D decomp @ 0044bb48  name=FUN_0044bb48  size=464

/* WARNING: Type propagation algorithm not settling */

void FUN_0044bb48(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 **ppuVar15;
  undefined4 ****local_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  iVar3 = DAT_0044bd1c;
  local_4c[0] = (undefined4 ****)&ppuStack_34;
  ppuStack_34 = (undefined4 **)*DAT_0044bd18;
  uStack_30 = DAT_0044bd18[1];
  uStack_2c = DAT_0044bd18[2];
  uStack_28 = DAT_0044bd18[3];
  local_4c[1] = local_4c + 2;
  local_4c[2] = (undefined4 ****)DAT_0044bd18[4];
  local_4c[3] = (undefined4 ****)DAT_0044bd18[5];
  uStack_3c = DAT_0044bd18[6];
  uStack_38 = DAT_0044bd18[7];
  uVar10 = (uint)(*(int *)(DAT_0044bd1c + 8) == 1);
  iVar5 = FUN_00454c98();
  uVar4 = DAT_0044bd28;
  uVar6 = DAT_0044bd20;
  if (iVar5 != -1) {
    if (iVar5 == 0) {
      uVar10 = 0;
    }
    else if (iVar5 == 1) {
      uVar10 = 1;
    }
    iVar12 = *(int *)(iVar3 + 0x24);
    sVar1 = *(short *)(DAT_0044bd24 + 0xe);
    iVar8 = 0;
    iVar11 = DAT_0044bd24 + iVar12 * 2;
    iVar5 = -1;
    iVar13 = 0;
    do {
      ppuVar15 = local_4c[uVar10][iVar8];
      iVar7 = 0;
      do {
        iVar9 = iVar7;
        iVar14 = iVar8;
        if ((iVar12 == 7) && (sVar1 != 0)) {
          if (*(short *)((int)ppuVar15 + iVar7 * 2) == sVar1) break;
        }
        else if (*(short *)((int)ppuVar15 + iVar7 * 2) == *(short *)(iVar11 + -2)) break;
        iVar7 = iVar7 + 1;
        iVar9 = iVar5;
        iVar14 = iVar13;
      } while (iVar7 < 0x33);
      do {
        iVar8 = iVar8 + 1;
        if (3 < iVar8) {
          iVar5 = 0;
          goto LAB_0044bc50;
        }
        iVar5 = iVar9;
        iVar13 = iVar14;
      } while (iVar9 != -1);
    } while( true );
  }
  goto LAB_0044bc98;
LAB_0044bc50:
  do {
    iVar14 = iVar14 + 1;
    if (3 < iVar14) {
      iVar14 = 0;
    }
    sVar2 = *(short *)((int)local_4c[uVar10][iVar14] + iVar9 * 2);
    if ((iVar12 == 7) && (sVar1 != 0)) {
      if (sVar1 != sVar2) {
        *(short *)(DAT_0044bd24 + 0xe) = sVar2;
        FUN_002e1844();
        uVar6 = uVar4;
        break;
      }
    }
    else if (*(short *)(iVar11 + -2) != sVar2) {
      *(short *)(iVar11 + -2) = sVar2;
      *(int *)(iVar3 + 0x24) = iVar12 + -1;
      FUN_002e1844();
      uVar6 = uVar4;
      if (*(int *)(iVar3 + 0x24) < 7) {
        *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
      }
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
LAB_0044bc98:
  FUN_0037547c(uVar6,0,4,DAT_0044bd30,DAT_0044bd30,DAT_0044bd2c);
  return;
}
