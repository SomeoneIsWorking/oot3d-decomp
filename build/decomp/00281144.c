// OoT3D decomp @ 00281144  name=FUN_00281144  size=1584

undefined4 FUN_00281144(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;

  if (((*DAT_0028152c & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_0028152c), puVar2 = DAT_00281534, uVar1 = DAT_00281530, iVar7 != 0))
  {
    *DAT_00281534 = DAT_00281530;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  uVar3 = DAT_00281540;
  uVar1 = DAT_0028153c;
  iVar11 = *(int *)(DAT_00281538 + param_2);
  iVar7 = *(int *)(param_1 + 0x1cc);
  if ((iVar7 < 0x4c) || ((*(uint *)(param_1 + 0x1ac) & 2) != 0)) {
    if ((iVar7 < 0x79) ||
       ((*(int *)(iVar11 + 0x12b8) == 0 || ((*(uint *)(param_1 + 0x1ac) & 1) != 0)))) {
      if ((0x79 < iVar7) && ((*(uint *)(param_1 + 0x1ac) & 4) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0x1014) = 1;
        *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 4;
        FUN_0037547c(DAT_00281544,0,4,uVar3,uVar3,uVar1);
      }
    }
    else {
      *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 1;
      *(undefined4 *)(*(int *)(iVar11 + 0x12b8) + 0x1014) = 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 2;
    FUN_0035239c(0);
  }
  iVar4 = DAT_0028154c;
  iVar7 = DAT_00281548;
  iVar8 = 0;
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  do {
    iVar10 = *(int *)(iVar11 + 0x12b8);
    if ((iVar10 != 0) &&
       (pfVar9 = (float *)(iVar7 + iVar8 * 0xc), fVar14 = *(float *)(iVar10 + 0x28) - *pfVar9,
       fVar12 = *(float *)(iVar10 + 0x2c) - pfVar9[1],
       fVar13 = *(float *)(iVar10 + 0x30) - pfVar9[2],
       (int)SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) < iVar4)) {
      if ((iVar8 < 1) || (iVar10 = param_1 + iVar8 * 4, *(int *)(iVar10 + 0x1ac) != 1)) {
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + 0x1b0) = 1;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 0x1b0) = 1;
      }
    }
    pfVar9 = (float *)(iVar7 + iVar8 * 0xc);
    iVar10 = *(int *)(param_1 + 0x1c8);
    fVar14 = *(float *)(iVar10 + 0x28) - *pfVar9;
    fVar12 = *(float *)(iVar10 + 0x2c) - pfVar9[1];
    fVar13 = *(float *)(iVar10 + 0x30) - pfVar9[2];
    if ((int)SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) < iVar4) {
      if (iVar8 < 1) {
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + 0x1bc) = 1;
        }
      }
      else {
        iVar10 = param_1 + iVar8 * 4;
        if (*(int *)(iVar10 + 0x1b8) == 1) {
          *(undefined4 *)(iVar10 + 0x1bc) = 1;
        }
      }
    }
    fVar12 = DAT_0028155c;
    puVar2 = DAT_00281558;
    iVar10 = DAT_00281554;
    piVar5 = DAT_00281550;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    iVar7 = *(int *)(iVar11 + 0x12b8);
    if (((iVar7 != 0) && (*(int *)(param_1 + 0x1b8) == 1)) &&
       (iVar7 = FUN_00353964(*DAT_00281558,DAT_00281558[1],DAT_00281558[2],DAT_00281558[3],
                             *(undefined4 *)(iVar7 + 0x1088),*(undefined4 *)(iVar7 + 0x1090)),
       iVar7 != 0)) {
      iVar7 = *(int *)(param_1 + 0x1d8) + 1;
      *(int *)(param_1 + 0x1d8) = iVar7;
      if (0 < iVar7) {
        *(undefined1 *)(param_1 + 0x1d0) = 1;
        uVar1 = DAT_00281564;
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(int *)(param_1 + 0x1d4) = (int)(DAT_00281560 / fVar13 + fVar12);
        FUN_0036ec40(0,uVar1);
        FUN_0037547c(DAT_00281544,0,4,DAT_00281540,DAT_00281540,DAT_0028153c);
      }
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      *(undefined4 *)(param_1 + 0x1b8) = 0;
    }
    iVar7 = *(int *)(param_1 + 0x1c8);
    if (((iVar7 != 0) && (*(int *)(param_1 + 0x1c4) == 1)) &&
       ((iVar7 = FUN_00353964(*puVar2,puVar2[1],puVar2[2],puVar2[3],*(undefined4 *)(iVar7 + 0x1088),
                              *(undefined4 *)(iVar7 + 0x1090)), iVar7 != 0 &&
        (*(int *)(param_1 + 0x1d8) == 0)))) {
      iVar7 = *(int *)(param_1 + 0x1dc) + 1;
      *(int *)(param_1 + 0x1dc) = iVar7;
      if (0 < iVar7) {
        *(undefined1 *)(param_1 + 0x1d0) = 2;
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(int *)(param_1 + 0x1d4) = (int)(DAT_00281568 / fVar13 + fVar12);
        *(uint *)(*(int *)(param_1 + 0x1c8) + 0xe54) =
             *(uint *)(*(int *)(param_1 + 0x1c8) + 0xe54) | 0x800000;
        FUN_0036ec40(0,DAT_00281564);
        FUN_0037547c(DAT_00281544,0,4,DAT_00281540,DAT_00281540,DAT_0028153c);
      }
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    fVar13 = DAT_002817b8;
    puVar2 = DAT_002817b4;
    iVar7 = *(int *)(iVar11 + 0x12b8);
    if (((iVar7 != 0) &&
        (iVar7 = FUN_00353964(*DAT_002817b4,DAT_002817b4[1],DAT_002817b4[2],DAT_002817b4[3],
                              *(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x30)),
        iVar7 != 0)) ||
       (iVar7 = FUN_00353964(*puVar2,puVar2[1],puVar2[2],puVar2[3],*(undefined4 *)(iVar11 + 0x28),
                             *(undefined4 *)(iVar11 + 0x30)), iVar7 != 0)) {
      FUN_0036ec40(0,DAT_00281564);
      *(undefined1 *)(param_1 + 0x1d0) = 2;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(int *)(param_1 + 0x1d4) = (int)(fVar13 / fVar14 + fVar12);
    }
    if (*(short *)(iVar10 + 0x60) < 0xb4) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x1ac) & 2) == 0) {
      return 1;
    }
    FUN_0036ec40(0,DAT_00281564);
    *(undefined1 *)(param_1 + 0x1d0) = 3;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar7 = (int)(fVar13 / fVar14 + fVar12);
  }
  else {
    if (*(int *)(param_1 + 0x1d4) < 1) {
      *(undefined4 *)(DAT_002817bc + 8) = 0;
      uVar3 = DAT_002817c4;
      uVar1 = DAT_002817c0;
      if (*(char *)(param_1 + 0x1d0) == '\x01') {
        uVar6 = *(ushort *)(iVar10 + 0x8a) & 0xfff0;
        if ((*(ushort *)(iVar10 + 0x8a) & 0x40) == 0) {
          *(ushort *)(iVar10 + 0x8a) = uVar6 | 0x8004;
          FUN_00354358(uVar3);
          if (*(int *)(param_1 + 0x1a8) == 0) {
            FUN_003716f0(param_2,uVar1,0x14,0x2e);
            *(undefined4 *)(param_1 + 0x1a8) = 1;
          }
        }
        else {
          *(ushort *)(iVar10 + 0x8a) = uVar6 | 0x8006;
          if (*(int *)(param_1 + 0x1a8) == 0) {
            FUN_003716f0(param_2,uVar1,0x14,3);
            *(undefined4 *)(param_1 + 0x1a8) = 1;
          }
          FUN_00354358(uVar3);
        }
      }
      else {
        if (*(int *)(param_1 + 0x1a8) == 0) {
          FUN_003716f0(param_2,DAT_002817c8,0x14,0x20);
          *(undefined4 *)(param_1 + 0x1a8) = 1;
        }
        *(ushort *)(iVar10 + 0x8a) = *(ushort *)(iVar10 + 0x8a) & 0xfff0 | 0x8003;
      }
      *(undefined2 *)(*piVar5 + 0x586) = 0;
      *(undefined2 *)(iVar10 + 0x5e) = 0;
      return 1;
    }
    iVar7 = *(int *)(param_1 + 0x1d4) + -1;
  }
  *(int *)(param_1 + 0x1d4) = iVar7;
  return 1;
}
