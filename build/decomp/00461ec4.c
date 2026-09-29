// OoT3D decomp @ 00461ec4  name=FUN_00461ec4  size=540

void FUN_00461ec4(undefined4 param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  iVar5 = DAT_004620e0;
  iVar10 = DAT_004620e0 + 0x198;
  if (*(int *)(DAT_004620e0 + 0x80) != iVar10) {
    iVar9 = DAT_004620e0 + -0x88;
    iVar7 = *(int *)(DAT_004620e0 + 0x80);
    do {
      iVar8 = *(int *)(iVar7 + 0x80);
      if (*(int **)(iVar7 + 0x6c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x6c) + 4))();
        *(undefined4 *)(iVar7 + 0x6c) = 0;
      }
      if (*(int *)(iVar7 + 0x70) != 0) {
        FUN_002d5ac4();
        FUN_0034fc6c(*(undefined4 *)(iVar7 + 0x70));
        *(undefined4 *)(iVar7 + 0x70) = 0;
      }
      if (*(int *)(iVar7 + 0x80) != 0) {
        *(undefined4 *)(*(int *)(iVar7 + 0x80) + 0x7c) = *(undefined4 *)(iVar7 + 0x7c);
      }
      if (*(int *)(iVar7 + 0x7c) != 0) {
        *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x80) = *(undefined4 *)(iVar7 + 0x80);
      }
      *(undefined4 *)(iVar7 + 0x80) = 0;
      *(undefined4 *)(iVar7 + 0x7c) = 0;
      FUN_002d5a28(iVar7);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x80) = *(undefined4 *)(iVar5 + -8);
        *(int *)(iVar7 + 0x7c) = iVar9;
      }
      if (*(int *)(iVar5 + -8) != 0) {
        *(int *)(*(int *)(iVar5 + -8) + 0x7c) = iVar7;
      }
      *(int *)(iVar5 + -8) = iVar7;
      iVar7 = iVar8;
    } while (iVar8 != iVar10);
  }
  fVar4 = DAT_004620f4;
  piVar3 = DAT_004620f0;
  piVar2 = DAT_004620ec;
  iVar10 = DAT_004620e8;
  iVar5 = *(int *)(DAT_004620e4 + 0x80);
  while (iVar5 != iVar10) {
    iVar7 = *(int *)(iVar5 + 0x80);
    sVar1 = *(short *)(iVar5 + 0x60) + -1;
    *(short *)(iVar5 + 0x60) = sVar1;
    if (sVar1 < 0) {
      FUN_002d6a50(iVar5,0);
      iVar5 = iVar7;
    }
    else {
      pfVar6 = (float *)(*piVar2 + *(int *)(iVar5 + 0x84) * 0x88);
      iVar5 = iVar7;
      if (pfVar6[9] != 0.0) {
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar12 = pfVar6[3] + pfVar6[6] * fVar11 * fVar4;
        pfVar6[3] = fVar12;
        iVar5 = *piVar3;
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = pfVar6[4] + pfVar6[7] * fVar11 * fVar4;
        pfVar6[4] = fVar11;
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar13 = pfVar6[5] + pfVar6[8] * fVar13 * fVar4;
        pfVar6[5] = fVar13;
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *pfVar6 = *pfVar6 + fVar12 * fVar14 * fVar4;
        iVar5 = *piVar3;
        fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        pfVar6[1] = pfVar6[1] + fVar11 * fVar12 * fVar4;
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        pfVar6[2] = pfVar6[2] + fVar13 * fVar11 * fVar4;
        (*(code *)pfVar6[9])(param_1);
        iVar5 = iVar7;
      }
    }
  }
  return;
}
