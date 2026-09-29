// OoT3D decomp @ 0042b9d0  name=FUN_0042b9d0  size=1280

void FUN_0042b9d0(int param_1)

{
  char cVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  char *unaff_r7;
  bool bVar10;
  undefined8 uVar11;

  iVar4 = FUN_00441f74();
  if (iVar4 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x100);
  bVar10 = cVar1 == '\x03';
  if (bVar10) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (!bVar10 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(DAT_0042bed0 + param_1);
  if (param_1 == -0x2ba4 || iVar4 == 0) {
    return;
  }
  iVar5 = *(int *)(DAT_0042bed4 + 0x4e4);
  bVar10 = iVar5 == 0;
  if (bVar10) {
    iVar5 = *(int *)(DAT_0042bed8 + 0x58);
    unaff_r7 = DAT_0042bed8;
  }
  if (!bVar10 || iVar5 != 0) {
    return;
  }
  iVar5 = FUN_00439290();
  puVar3 = DAT_0042bedc;
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(unaff_r7 + 0x28) + 0xc))();
    return;
  }
  if (((*DAT_0042bedc & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0042bedc), iVar5 != 0)) {
    FUN_0036788c(DAT_0042bee0);
  }
  iVar5 = DAT_0042beec;
  uVar6 = *(uint *)(DAT_0042beec + 0x2d4);
  uVar9 = (uint)*(byte *)(uVar6 + 0xd);
  if (uVar9 != 0) {
    uVar6 = (uint)*(byte *)(uVar6 + 8);
  }
  if ((uVar9 != 0 && uVar6 != 0) && uVar6 != 0x11) {
    return;
  }
  if (*(int *)(unaff_r7 + 0x3c) != 0) {
    FUN_00444e04();
    uVar9 = extraout_r1;
  }
  if ((*puVar3 & 1) == 0) {
    uVar11 = FUN_003679b4(DAT_0042bedc);
    uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      FUN_0036788c(DAT_0042bee0);
      uVar9 = DAT_0042bee8;
    }
  }
  iVar8 = DAT_0042bef0;
  if ((*(char *)(DAT_0042bef0 + 0xf38) == '\0') &&
     ((uVar9 = *(uint *)(unaff_r7 + 0x40) | *(uint *)(unaff_r7 + 0x48),
      *(short *)(param_1 + 0x2e30) != 0 || uVar9 != 0 ||
      ((*(uint *)(DAT_0042bef4 + iVar4) & 0x800000) != 0)))) {
    uVar11 = FUN_002f43e8();
    uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      uVar11 = FUN_002fcdd4();
      uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) goto LAB_0042bb94;
    }
    if (*(int *)(unaff_r7 + 0x68) != 0) {
      uVar11 = FUN_002fcaec();
      uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        uVar11 = FUN_002fcad4();
        uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
        iVar4 = (int)uVar11;
        bVar10 = iVar4 == 0;
        if (bVar10) {
          iVar4 = *(int *)(unaff_r7 + 0x3c);
        }
        if (bVar10 && iVar4 == 0) {
          FUN_00441f08();
          uVar9 = extraout_r1_00;
        }
      }
    }
  }
LAB_0042bb94:
  uVar11 = FUN_0037577c(param_1,uVar9);
  iVar4 = DAT_0042bef8;
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 != 0) {
    uVar11 = FUN_002fcdd4();
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) goto LAB_0042bcf4;
  }
  if ((*puVar3 & 1) == 0) {
    uVar11 = FUN_003679b4(DAT_0042bedc);
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      FUN_0036788c(DAT_0042bee0);
      uVar6 = DAT_0042bee8;
    }
  }
  if (*(char *)(iVar8 + 0xf38) == '\0') {
    uVar11 = FUN_002fcaec(0,uVar6);
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) {
      uVar11 = FUN_002fcad4();
      uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        (**(code **)(**(int **)(unaff_r7 + 0x20) + 0xc))();
        uVar11 = FUN_002fcdd4();
        uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) {
          if (((*puVar3 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0042bedc), iVar7 != 0)) {
            FUN_0036788c(DAT_0042bee0);
          }
          uVar9 = *(uint *)(iVar5 + 0x2d4);
          uVar6 = (uint)*(byte *)(uVar9 + 0xd);
          if (uVar6 != 0) {
            uVar9 = (uint)*(byte *)(uVar9 + 8);
          }
          if ((uVar6 == 0 || uVar9 == 0) || uVar9 == 0x11) {
            if ((*(char *)(iVar4 + 0xf) == '\0') && (*unaff_r7 != '\0')) {
              (**(code **)(**(int **)(unaff_r7 + 0x78) + 0xc))();
              uVar6 = extraout_r1_01;
            }
            if ((byte)unaff_r7[1] < 0x10) {
              (**(code **)(**(int **)(unaff_r7 + 0x80) + 0xc))();
              (**(code **)(**(int **)(unaff_r7 + 0x88) + 0xc))();
              uVar6 = extraout_r1_02;
            }
          }
        }
      }
    }
  }
LAB_0042bcf4:
  if ((*puVar3 & 1) == 0) {
    uVar11 = FUN_003679b4(DAT_0042bedc);
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      FUN_0036788c(DAT_0042bee0);
      uVar6 = DAT_0042bee8;
    }
  }
  iVar5 = DAT_0042befc;
  if (*(char *)(iVar8 + 0xf38) == '\0') {
    uVar11 = FUN_002f43e8(0,uVar6);
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) {
      uVar11 = FUN_002fcdd4();
      uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        uVar11 = FUN_002fcaec();
        uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) {
          uVar11 = FUN_002fcad4();
          uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
          if ((((int)uVar11 == 0) && (*(short *)(iVar5 + 0x94) != 1)) &&
             ((sVar2 = *(short *)(iVar5 + 0x5e), (sVar2 != 0 && sVar2 != 10) && sVar2 != 1 ||
              (*(short *)(iVar5 + 0x62) != 0)))) {
            FUN_002f78a0(*(undefined4 *)(unaff_r7 + 0x2c));
            uVar6 = extraout_r1_03;
          }
        }
      }
    }
  }
  if ((*puVar3 & 1) == 0) {
    uVar11 = FUN_003679b4(DAT_0042bedc);
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      FUN_0036788c(DAT_0042bee0);
      uVar6 = DAT_0042bee8;
    }
  }
  if ((*(char *)(iVar8 + 0xf38) == '\0') && (iVar8 = FUN_0037577c(param_1,uVar6), iVar8 == 0)) {
    iVar7 = FUN_002fd25c();
    iVar8 = 0;
    if (iVar7 != 0) {
      iVar8 = *(int *)(unaff_r7 + 0x40);
    }
    if (iVar7 != 0 && iVar8 != 0) {
      FUN_002f780c();
    }
  }
  iVar8 = FUN_002f2c3c();
  if (((iVar8 != 0) && (*(char *)(iVar4 + 0xf) == '\0')) && (*unaff_r7 != '\0')) {
    (**(code **)(**(int **)(unaff_r7 + 0x78) + 0xc))();
  }
  if (*(int *)(unaff_r7 + 0x38) != 0) {
    FUN_0043fc80();
  }
  if (*(int *)(unaff_r7 + 0x44) != 6) {
    (**(code **)(**(int **)(unaff_r7 + 0x28) + 0xc))();
  }
  iVar4 = FUN_0037577c(param_1);
  if (((iVar4 == 0) && (iVar4 = FUN_002fd25c(), iVar4 != 0)) && (*(short *)(iVar5 + 0x94) == 1)) {
    FUN_002f78a0(*(undefined4 *)(unaff_r7 + 0x30));
    return;
  }
  return;
}
