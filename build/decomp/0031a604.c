// OoT3D decomp @ 0031a604  name=FUN_0031a604  size=1776

void FUN_0031a604(int param_1,int *param_2,uint *param_3,int *param_4,int param_5,undefined4 param_6
                 )

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int unaff_r10;
  uint uVar12;
  bool bVar13;

  if ((*(byte *)(param_5 + 0x16) & 0x40) != 0) {
    return;
  }
  if (((*(byte *)((int)param_3 + 0x15) & 0x20) == 0) &&
     ((*(byte *)((int)param_3 + 0x15) & 0x40) != 0)) {
    return;
  }
  iVar9 = param_1 + 0x5c78;
  uVar12 = *(uint *)(param_1 + 0x5f14);
  if (uVar12 == 0) {
LAB_0031a6e4:
    *(int *)(iVar9 + uVar12 * 8 + 0x2a0) = param_2[1];
    *(int *)(iVar9 + *(int *)(param_1 + 0x5f14) * 8 + 0x2a4) = param_2[2];
    *(int *)(param_1 + 0x5f14) = *(int *)(param_1 + 0x5f14) + 1;
  }
  else {
    uVar2 = uVar12 & 1;
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        iVar8 = iVar9 + uVar5 * 8;
        unaff_r10 = *(int *)(iVar8 + 0x2a0);
        bVar13 = param_2[1] == unaff_r10;
        if (bVar13) {
          unaff_r10 = param_2[2];
          iVar8 = *(int *)(iVar8 + 0x2a4);
        }
        if (bVar13 && unaff_r10 == iVar8) {
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    if (uVar2 < uVar12) {
      iVar8 = param_2[1];
      do {
        iVar6 = iVar9 + uVar2 * 8;
        iVar11 = *(int *)(iVar6 + 0x2a0);
        bVar13 = iVar8 == iVar11;
        if (bVar13) {
          iVar11 = param_2[2];
          unaff_r10 = *(int *)(iVar6 + 0x2a4);
        }
        if (bVar13 && iVar11 == unaff_r10) {
          return;
        }
        iVar11 = *(int *)(iVar6 + 0x2a8);
        bVar13 = iVar8 == iVar11;
        if (bVar13) {
          iVar11 = param_2[2];
          iVar6 = *(int *)(iVar6 + 0x2ac);
        }
        if (bVar13 && iVar11 == iVar6) {
          return;
        }
        uVar2 = uVar2 + 2;
      } while (uVar2 < uVar12);
    }
    if (uVar12 < 0x10) goto LAB_0031a6e4;
  }
  iVar9 = DAT_0031acf4;
  if (*param_4 != 0) {
    (**(code **)(DAT_0031acf4 + -0x18 +
                (uint)*(byte *)(DAT_0031acf4 + (uint)*(byte *)(param_4 + 5) * 2) * 4))
              (param_1,param_4,param_6);
  }
  psVar10 = (short *)*param_4;
  uVar12 = 0;
  if (psVar10 == (short *)0x0) {
    FUN_0033cefc(param_1,0,0,param_6);
    iVar9 = *param_4;
    uVar3 = DAT_0031ad08;
joined_r0x0031acd0:
    DAT_0031ad08 = uVar3;
    if (iVar9 == 0) {
      iVar9 = 0;
      goto LAB_0031ab1c;
    }
  }
  else {
    uVar2 = 0;
    if (*(int *)(psVar10 + 0x50) == 0) {
      uVar5 = (uint)*(byte *)((int)psVar10 + 0x19b);
      if (uVar5 != 0) {
        if (uVar5 == 4) goto LAB_0031a7a8;
        uVar2 = uVar5 - 1;
      }
    }
    else {
      uVar5 = (uint)*(byte *)((int)psVar10 + 0x19b);
      if (uVar5 == 4) {
LAB_0031a7a8:
        uVar2 = 0xffffffff;
      }
      else {
        uVar7 = *param_3;
        iVar8 = 0;
        do {
          bVar13 = SBORROW4(uVar7,1);
          iVar11 = uVar7 - 1;
          if (uVar7 != 1) {
            uVar7 = uVar7 >> 1;
            bVar13 = SBORROW4(iVar8 + 1,0x20);
            iVar11 = iVar8 + -0x1f;
            iVar8 = iVar8 + 1;
          }
        } while (iVar11 < 0 != bVar13);
        if (((*(byte *)(*(int *)(psVar10 + 0x50) + iVar8) & 0xf) == 0) &&
           (uVar2 = (uint)(uVar5 == 0), uVar5 != 0)) {
          if (uVar5 == 4) goto LAB_0031a7a8;
          uVar2 = uVar5 - 1;
        }
      }
    }
    if (*psVar10 == 0) {
      if ((char)psVar10[0x1244] < '\x01') {
        if (-1 < (char)psVar10[0x1244]) goto LAB_0031a824;
        if ((*(byte *)(param_2 + 4) & 0x80) != 0) {
          iVar8 = FUN_00374be8(param_1,0xe);
          bVar13 = iVar8 != 0;
          iVar8 = 0;
          iVar11 = 0;
          if (bVar13) {
            iVar11 = (int)(char)psVar10[0x1244];
            iVar8 = iVar11 + 0x28;
          }
          if ((bVar13 && iVar11 != -0x28) && iVar8 < 0 == (bVar13 && SCARRY4(iVar11,0x28))) {
            uVar2 = 0;
            goto LAB_0031a824;
          }
        }
      }
      uVar2 = 1;
    }
    else {
      uVar12 = *param_3;
    }
LAB_0031a824:
    uVar3 = DAT_0031acf8;
    cVar1 = *(char *)(iVar9 + (uint)*(byte *)(param_4 + 5) * 2 + 1);
    if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        if (*param_2 != 0) {
          FUN_00323d90(param_1,param_6,*param_2 + 0x28,2);
          return;
        }
        FUN_003661a8(param_1,param_6,8);
LAB_0031ab00:
        iVar9 = 0;
        goto LAB_0031ab1c;
      }
      if (cVar1 == '\x05') {
        return;
      }
      if (-1 < (int)uVar2) {
        if (*(short *)*param_4 == 0) {
          if ((uVar12 & 5) == 0) {
            FUN_0033cefc(param_1,cVar1,uVar2,param_6);
          }
          else {
LAB_0031ac0c:
            FUN_003620b8(param_1,param_6,0,uVar2);
          }
        }
        else {
          if ((uVar12 & 5) != 0) goto LAB_0031ac0c;
          FUN_0033cefc(param_1,0,uVar2,param_6);
        }
      }
      if ((*(byte *)(param_5 + 0x16) & 0x20) != 0) {
        return;
      }
      iVar9 = *param_2;
      if (iVar9 == 0) {
        return;
      }
      if (*(char *)(iVar9 + 2) != '\x02') {
        return;
      }
      if (*(char *)(param_5 + 0x14) == '\0') {
        iVar9 = iVar9 + 0x28;
        uVar3 = DAT_0031ad0c;
      }
      else {
        if (*(char *)(param_5 + 0x14) != '\x01') {
          return;
        }
        iVar9 = iVar9 + 0x28;
        uVar3 = DAT_0031ad10;
      }
      goto LAB_0031ab1c;
    }
    psVar10 = (short *)*param_4;
    uVar12 = 0;
    iVar8 = 1;
    bVar4 = *(byte *)((int)param_3 + 0x15) & 0x18;
    if (psVar10 != (short *)0x0) {
      uVar2 = (uint)*(byte *)((int)psVar10 + 0x19b);
      if (uVar2 != 0) {
        if (uVar2 == 4) {
          iVar8 = -1;
        }
        else {
          iVar8 = uVar2 - 1;
        }
      }
      if (*psVar10 != 0) {
        uVar12 = *param_3;
      }
    }
    if ((*(byte *)((int)param_3 + 0x15) & 0x18) == 0) {
      if (*(byte *)(param_4 + 5) == 9) {
        if (-1 < iVar8) {
          if ((uVar12 & 5) == 0) {
            FUN_0033cefc(param_1,0,iVar8,param_6);
          }
          else {
            FUN_003620b8(param_1,param_6,0,iVar8);
          }
        }
        uVar3 = DAT_0031acfc;
        iVar9 = *param_4;
        if (iVar9 == 0) {
          FUN_0034e568(param_1,param_6,8);
          iVar9 = 0;
        }
        else if (iVar8 == 0) {
          iVar9 = iVar9 + 0x28;
          FUN_003757a8(param_1,param_6,8);
        }
        else if (iVar8 == 1) {
          iVar9 = iVar9 + 0x28;
          FUN_0034e568(param_1,param_6,8);
        }
        else {
          if (iVar8 != 2) {
            return;
          }
          iVar9 = iVar9 + 0x28;
          FUN_003661a8(param_1,param_6,8);
        }
        goto LAB_0031ab1c;
      }
      if (-1 < iVar8) {
        if ((uVar12 & 5) == 0) {
          FUN_0033cefc(param_1,0,iVar8,param_6);
        }
        else {
          FUN_003620b8(param_1,param_6,0,iVar8);
        }
      }
      iVar9 = *param_4;
      uVar3 = DAT_0031ad08;
      goto joined_r0x0031acd0;
    }
    if (bVar4 != 8) {
      if (bVar4 != 0x10) {
        if ((uVar12 & 5) != 0) {
          FUN_003620b8(param_1,param_6,0,iVar8);
          return;
        }
        return;
      }
      if (-1 < iVar8) {
        if ((uVar12 & 5) == 0) {
          FUN_0033cefc(param_1,0,iVar8,param_6);
        }
        else {
          FUN_003620b8(param_1,param_6,0,iVar8);
        }
      }
      if (*param_4 != 0) {
        FUN_0037547c(uVar3,*param_4 + 0x28,4,DAT_0031ad04,DAT_0031ad04,DAT_0031ad00);
        return;
      }
      goto LAB_0031ab00;
    }
    if (-1 < iVar8) {
      if ((uVar12 & 5) == 0) {
        FUN_0033cefc(param_1,0,iVar8,param_6);
      }
      else {
        FUN_003620b8(param_1,param_6,0,iVar8);
      }
    }
    iVar9 = *param_4;
    if (iVar9 == 0) {
      iVar9 = 0;
      uVar3 = DAT_0031ad08;
      goto LAB_0031ab1c;
    }
  }
  iVar9 = iVar9 + 0x28;
  uVar3 = DAT_0031ad08;
LAB_0031ab1c:
  FUN_0037547c(uVar3,iVar9,4,DAT_0031ad04,DAT_0031ad04,DAT_0031ad00);
  return;
}
