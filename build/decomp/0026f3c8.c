// OoT3D decomp @ 0026f3c8  name=FUN_0026f3c8  size=980

void FUN_0026f3c8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  iVar2 = DAT_0026f7a0;
  iVar12 = *(int *)(DAT_0026f79c + param_2);
  sVar1 = *(short *)(DAT_0026f7a0 + 0x52);
  uVar11 = (uint)sVar1;
  iVar7 = FUN_00357378(param_2);
  fVar14 = DAT_0026f7bc;
  fVar15 = DAT_0026f7b8;
  fVar4 = DAT_0026f7ac;
  piVar3 = DAT_0026f7a4;
  if (iVar7 == 0xd || iVar7 == 0x11) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  iVar7 = *DAT_0026f7a4;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)uVar11 < (int)(DAT_0026f7a8 / fVar16 + DAT_0026f7ac)) {
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(char *)(DAT_0026f7b0 + iVar12) =
         (char)(int)(fVar16 * DAT_0026f7b4 * DAT_0026f7b8 - DAT_0026f7ac);
    fVar13 = *(float *)(param_1 + 0x1b4);
    *(float *)(param_1 + 0x5c) = fVar13;
    *(float *)(param_1 + 0x54) = fVar13;
    fVar16 = DAT_0026f7c8;
    iVar12 = (int)*(short *)(param_1 + 0x1a4);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if (iVar12 < (int)(fVar14 / fVar17 + fVar4)) {
      fVar17 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (iVar12 < 1) {
        fVar17 = fVar17 * fVar18 * fVar15 - fVar4;
      }
      else {
        fVar17 = fVar4 + fVar17 * fVar18 * fVar15;
      }
      fVar17 = (float)VectorSignedToFloat((int)fVar17,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (DAT_0026f7c4 - fVar17 * DAT_0026f7c0) * fVar13;
      *(float *)(param_1 + 0x5c) = fVar17;
      *(float *)(param_1 + 0x54) = fVar17;
      fVar17 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (iVar12 < 1) {
        fVar17 = fVar17 * fVar18 * fVar15 - fVar4;
      }
      else {
        fVar17 = fVar4 + fVar17 * fVar18 * fVar15;
      }
      fVar17 = (float)VectorSignedToFloat((int)fVar17,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x58) = (DAT_0026f7cc + fVar17 * fVar16) * fVar13;
    }
    else {
      *(float *)(param_1 + 0x58) = fVar13;
    }
    fVar16 = DAT_0026f7d0;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * fVar13 * DAT_0026f7d0;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar13 * fVar16;
    fVar16 = DAT_0026f7d8;
    iVar8 = (int)*(short *)(iVar7 + 0x110);
    fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar12 < (int)(fVar14 / fVar13 + fVar4)) {
      fVar14 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar12 < 1) {
        fVar14 = fVar14 * fVar13 * fVar15 - fVar4;
      }
      else {
        fVar14 = fVar4 + fVar14 * fVar13 * fVar15;
      }
      uVar10 = (uint)((int)fVar14 * 0xc000000) >> 0x18;
    }
    else {
      uVar10 = 0xff;
    }
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar11 < (int)(DAT_0026f7d4 / fVar14 + fVar4)) {
      fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)uVar11 < (int)(DAT_0026f7d8 / fVar14 + fVar4)) {
        *(undefined1 *)(param_1 + 0x1a6) = 0xff;
      }
      else {
        fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)uVar11 < 1) {
          fVar14 = fVar14 * fVar13 * fVar15 - fVar4;
        }
        else {
          fVar14 = fVar4 + fVar14 * fVar13 * fVar15;
        }
        *(char *)(param_1 + 0x1a6) = (char)(int)fVar14 * -0x80 + '\x7f';
      }
    }
    else {
      fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)uVar11 < 1) {
        fVar14 = fVar14 * fVar13 * fVar15 - fVar4;
      }
      else {
        fVar14 = fVar4 + fVar14 * fVar13 * fVar15;
      }
      uVar9 = (0x9c - (int)fVar14) * 0xd + 0xff;
      *(char *)(param_1 + 0x1a6) = (char)uVar9;
      if ((uVar11 & 1) != 0) {
        *(char *)(param_1 + 0x1a6) = (char)((uVar9 & 0xff) >> 1);
      }
    }
    fVar14 = DAT_0026f7dc;
    if (uVar10 < *(byte *)(param_1 + 0x1a6)) {
      *(char *)(param_1 + 0x1a6) = (char)uVar10;
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x36) =
         *(short *)(param_1 + 0x36) + (short)(int)(fVar4 + fVar13 * fVar14 * fVar15);
    sVar6 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_0026f7e0 + param_2) * 4 + 0xa54));
    *(short *)(param_1 + 0xbe) = sVar6 + *(short *)(param_1 + 0x36);
    *(short *)(param_1 + 0x1a4) = *(short *)(param_1 + 0x1a4) + 1;
    *(short *)(iVar2 + 0x52) = sVar1 + 1;
    uVar5 = DAT_0026f7e4;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar16 / fVar15 + fVar4) <= (int)uVar11) {
      FUN_00373264(param_1,DAT_0026f7e8);
      return;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    return;
  }
  *(undefined1 *)(DAT_0026f7b0 + iVar12) = 0;
  *(undefined2 *)(iVar2 + 0x52) = 0;
  FUN_00374428(param_1);
  return;
}
