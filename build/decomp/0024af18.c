// OoT3D decomp @ 0024af18  name=FUN_0024af18  size=1368

undefined4 FUN_0024af18(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *extraout_r1;
  int iVar11;
  int extraout_r2;
  int iVar12;
  float *pfVar13;
  int iVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float *pfVar17;
  float fVar18;

  iVar14 = *(int *)(DAT_0024b3b0 + param_2);
  if ((*(uint *)(param_1 + 0x1b0) & 0x40) == 0) {
    iVar7 = FUN_00353964(*DAT_0024b3b8,DAT_0024b3b8[1],DAT_0024b3b8[2],DAT_0024b3b8[3],
                         *(undefined4 *)(*(int *)(DAT_0024b3b4 + iVar14) + 0x28),
                         *(undefined4 *)(*(int *)(DAT_0024b3b4 + iVar14) + 0x30));
    if (iVar7 == 0) {
      if ((*(uint *)(param_1 + 0x1b0) & 0x40) != 0) goto LAB_0024af90;
    }
    else {
      *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 0x40;
    }
  }
  else {
LAB_0024af90:
    if (((*(uint *)(param_1 + 0x1b0) & 0x20) == 0) &&
       (iVar7 = FUN_00353964(*DAT_0024b3b8,DAT_0024b3b8[1],DAT_0024b3b8[2],DAT_0024b3b8[3],
                             *(undefined4 *)(*(int *)(DAT_0024b3b4 + iVar14) + 0x28),
                             *(undefined4 *)(*(int *)(DAT_0024b3b4 + iVar14) + 0x30)), iVar7 == 0))
    {
      *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 0x20;
    }
  }
  uVar3 = DAT_0024b3c0;
  uVar2 = DAT_0024b3bc;
  iVar7 = *(int *)(param_1 + 0x1ac);
  if ((iVar7 < 0x4c) || ((*(uint *)(param_1 + 0x1b0) & 2) != 0)) {
    if ((iVar7 < 0x79) ||
       ((*(int *)(iVar14 + 0x12b8) == 0 || ((*(uint *)(param_1 + 0x1b0) & 1) != 0)))) {
      if ((0x79 < iVar7) && ((*(uint *)(param_1 + 0x1b0) & 0x10) == 0)) {
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 0x10;
        FUN_0037547c(DAT_0024b3c4,0,4,uVar3,uVar3,uVar2);
      }
    }
    else {
      *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1;
      *(undefined4 *)(*(int *)(iVar14 + 0x12b8) + 0x1014) = 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 2;
    FUN_0035239c(0);
  }
  iVar7 = DAT_0024b3c8;
  pfVar10 = (float *)(*(int *)(param_1 + 0x1ac) + 1);
  *(float **)(param_1 + 0x1ac) = pfVar10;
  uVar2 = DAT_0024b4bc;
  iVar12 = DAT_0024b4b8;
  fVar6 = DAT_0024b3d8;
  fVar5 = DAT_0024b3d4;
  piVar4 = DAT_0024b3d0;
  iVar9 = DAT_0024b3cc;
  iVar11 = *(int *)(param_1 + 0x1f8);
  if (iVar11 != 0) {
    if (0 < *(int *)(param_1 + 500)) {
      *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1;
      return 1;
    }
    if (iVar11 == 1 || iVar11 == 2) {
      *(undefined4 *)(DAT_0024b4b8 + 8) = 0;
      iVar14 = *(int *)(param_1 + 0x1a8);
    }
    else {
      if (iVar11 != 4) {
        *(undefined4 *)(DAT_0024b4b8 + 8) = 0;
        if (*(int *)(param_1 + 0x1a8) != 0) {
          return 1;
        }
        FUN_003716f0(param_2,DAT_0024b4c0,0x14,0x2e);
        *(undefined4 *)(param_1 + 0x1a8) = 1;
        return 1;
      }
      *(undefined2 *)(iVar7 + 0x60) = 0xf0;
      *(undefined2 *)(iVar7 + 0x5e) = 0xf;
      *(undefined4 *)(iVar12 + 8) = 0;
      iVar14 = *(int *)(param_1 + 0x1a8);
    }
    if (iVar14 != 0) {
      return 1;
    }
    FUN_003716f0(param_2,uVar2,0x14,0x2e);
    *(undefined4 *)(param_1 + 0x1a8) = 1;
    return 1;
  }
  pfVar13 = (float *)0x0;
  iVar12 = 0;
  do {
    if ((*(int *)(param_1 + 0x1fc) == 0) && (7 < (int)pfVar13)) break;
    pfVar10 = (float *)(iVar9 + ((int)pfVar13 % 8) * 0xc);
    iVar11 = *(int *)(iVar14 + 0x12b8);
    bVar15 = iVar11 != 0;
    if (bVar15) {
      iVar12 = DAT_0024b3dc;
    }
    fVar18 = *(float *)(iVar11 + 0x28) - *pfVar10;
    fVar16 = *(float *)(iVar11 + 0x30) - pfVar10[2];
    pfVar17 = (float *)SQRT(fVar18 * fVar18 + fVar16 * fVar16);
    iVar1 = 0;
    if (bVar15) {
      iVar1 = (int)pfVar17 - iVar12;
      pfVar10 = pfVar17;
    }
    if ((iVar1 < 0 != (bVar15 && SBORROW4((int)pfVar10,iVar12))) &&
       (uVar8 = *(uint *)(iVar11 + 0xe54), (uVar8 & 4) != 0)) {
      pfVar17 = pfVar13;
      if (0 < (int)pfVar13) {
        uVar8 = param_1 + (int)pfVar13 * 4;
        pfVar17 = *(float **)(uVar8 + 0x1b0);
        pfVar10 = pfVar17;
      }
      if (pfVar17 == (float *)0x1) {
        *(undefined4 *)(uVar8 + 0x1b4) = 1;
      }
      else {
        if (pfVar13 == (float *)0x0) {
          *(undefined4 *)(param_1 + 0x1b4) = 1;
        }
        uVar8 = *(uint *)(param_1 + (int)pfVar13 * 4 + 0x1b0);
        bVar15 = uVar8 == 0;
        if (bVar15) {
          uVar8 = *(uint *)(param_1 + 0x1b0);
        }
        if (bVar15 && (uVar8 & 8) == 0) {
          *(uint *)(param_1 + 0x1b0) = uVar8 | 8;
          FUN_00367c7c(param_2,DAT_0024b3e0,0);
          *(undefined4 *)(param_1 + 0x1f8) = 4;
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(int *)(param_1 + 500) = (int)(fVar5 / fVar16 + fVar6);
          pfVar10 = extraout_r1;
          iVar12 = extraout_r2;
        }
      }
    }
    pfVar13 = (float *)((int)pfVar13 + 1);
  } while ((int)pfVar13 < 0x10);
  iVar9 = *(int *)(iVar14 + 0x12b8);
  if (iVar9 != 0) {
    pfVar10 = *(float **)(param_1 + 0x1b0);
  }
  if ((iVar9 == 0 || ((uint)pfVar10 & 0x20) == 0) ||
     (iVar9 = FUN_00353964(*DAT_0024b3b8,DAT_0024b3b8[1],DAT_0024b3b8[2],DAT_0024b3b8[3],
                           *(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x30)),
     uVar3 = DAT_0024b3e8, uVar2 = DAT_0024b3e0, iVar9 == 0)) goto LAB_0024b358;
  iVar9 = *(int *)(param_1 + 0x1fc);
  bVar15 = iVar9 != 1;
  if (!bVar15) {
    iVar9 = *(int *)(param_1 + 0x1f0);
  }
  if (bVar15 || iVar9 != 0) {
    if (*(int *)(param_1 + 0x1f0) == 1) {
      *(undefined4 *)(param_1 + 0x1fc) = 2;
      FUN_0036ec40(0,uVar3);
      FUN_0037547c(DAT_0024b3c4,0,4,DAT_0024b3c0,DAT_0024b3c0,DAT_0024b3bc);
      *(undefined4 *)(param_1 + 0x1f8) = 1;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(int *)(param_1 + 500) = (int)(DAT_0024b3ec / fVar16 + fVar6);
      *(undefined2 *)(iVar7 + 0x5e) = 0xf;
      goto LAB_0024b358;
    }
LAB_0024b2b0:
    if (*(int *)(param_1 + 0x1d0) == 1) {
      if ((*(uint *)(param_1 + 0x1b0) & 4) == 0) {
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 4;
        *(undefined4 *)(param_1 + 0x1fc) = 1;
        FUN_00367c7c(param_2,DAT_0024b3f0,0);
        goto LAB_0024b358;
      }
    }
    else if (*(int *)(param_1 + 0x1d0) == 0) goto LAB_0024b310;
    if (*(int *)(*(int *)(iVar14 + 0x12b8) + 0x108) <= DAT_0024b3f4) goto LAB_0024b358;
  }
  else if (*(uint *)(*(int *)(iVar14 + 0x12b8) + 0x108) <= DAT_0024b3e4) goto LAB_0024b2b0;
LAB_0024b310:
  *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 8;
  FUN_00367c7c(param_2,uVar2,0);
  *(undefined4 *)(param_1 + 0x1f8) = 4;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  *(int *)(param_1 + 500) = (int)(fVar5 / fVar16 + fVar6);
LAB_0024b358:
  if ((0xb3 < *(short *)(iVar7 + 0x60)) && ((*(uint *)(param_1 + 0x1b0) & 2) != 0)) {
    *(undefined2 *)(iVar7 + 0x60) = 0xf0;
    *(undefined4 *)(param_1 + 0x1f8) = 2;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(int *)(param_1 + 500) = (int)(fVar5 / fVar16 + fVar6);
    *(undefined2 *)(iVar7 + 0x5e) = 0;
  }
  return 1;
}
