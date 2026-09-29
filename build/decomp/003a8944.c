// OoT3D decomp @ 003a8944  name=FUN_003a8944  size=1312

void FUN_003a8944(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;

  fVar3 = DAT_003a8d14;
  iVar15 = *(int *)(DAT_003a8d0c + param_2);
  if ((*(short *)(*DAT_003a8d10 + 0x5be) != 0) || (*(char *)(param_1 + 0x1b0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xe74) = 4;
    FUN_0033d520(param_1);
    uVar13 = DAT_003a8d1c;
    uVar4 = DAT_003a8d18;
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
    FUN_0037547c(DAT_003a8d20,param_1 + 0x28,4,uVar13,uVar13,uVar4);
  }
  fVar6 = DAT_003a8d2c;
  iVar5 = DAT_003a8d24;
  fVar24 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8);
  fVar17 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
  fVar20 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10);
  fVar25 = *(float *)(param_1 + 8) - *(float *)(iVar15 + 0x28);
  fVar23 = *(float *)(param_1 + 0x28) - *(float *)(iVar15 + 0x28);
  fVar18 = *(float *)(param_1 + 0xc) - *(float *)(iVar15 + 0x2c);
  fVar21 = *(float *)(param_1 + 0x10) - *(float *)(iVar15 + 0x30);
  fVar19 = *(float *)(param_1 + 0x2c) - *(float *)(iVar15 + 0x2c);
  fVar22 = *(float *)(param_1 + 0x30) - *(float *)(iVar15 + 0x30);
  fVar18 = SQRT(fVar25 * fVar25 + fVar18 * fVar18 + fVar21 * fVar21);
  if (DAT_003a8d24 < (int)fVar18) {
    if (DAT_003a8d24 + -0x800000 < (int)SQRT(fVar24 * fVar24 + fVar17 * fVar17 + fVar20 * fVar20)) {
      fVar17 = *(float *)(param_1 + 0x6c) + DAT_003a8d28;
      *(float *)(param_1 + 0x6c) = fVar17;
joined_r0x003a8ad0:
      if (0x41000000 < (int)fVar17) {
        fVar17 = fVar6;
      }
    }
    else {
      fVar17 = *(float *)(param_1 + 0x6c) - DAT_003a8d30;
      *(float *)(param_1 + 0x6c) = fVar17;
      uVar14 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar3) << 0x1f |
               (uint)(fVar17 == fVar3) << 0x1e;
      in_fpscr = uVar14 | (uint)(NAN(fVar17) || NAN(fVar3)) << 0x1c;
      bVar2 = (byte)(uVar14 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_003a8aa8:
        fVar17 = fVar3;
      }
    }
  }
  else {
    if ((int)SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar22 * fVar22) < DAT_003a8d24) {
      fVar17 = *(float *)(param_1 + 0x6c) + DAT_003a8d28;
      *(float *)(param_1 + 0x6c) = fVar17;
      goto joined_r0x003a8ad0;
    }
    fVar17 = *(float *)(param_1 + 0x6c) - DAT_003a8d30;
    *(float *)(param_1 + 0x6c) = fVar17;
    uVar14 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar3) << 0x1f | (uint)(fVar17 == fVar3) << 0x1e
    ;
    in_fpscr = uVar14 | (uint)(NAN(fVar17) || NAN(fVar3)) << 0x1c;
    bVar2 = (byte)(uVar14 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_003a8aa8;
  }
  uVar4 = DAT_003a8d38;
  iVar7 = DAT_003a8d34;
  *(float *)(param_1 + 0x6c) = fVar17;
  if ((int)fVar17 < iVar7) {
    if ((int)fVar17 < DAT_003a8d40) {
      if ((int)fVar17 <= DAT_003a8d48) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      uVar14 = 4;
      FUN_003731e8(fVar17 * DAT_003a8d4c,param_1 + 0x1c4);
      FUN_0031d314(param_1);
    }
    else {
      uVar14 = 5;
      FUN_003731e8(fVar17 * DAT_003a8d44,param_1 + 0x1c4);
    }
  }
  else {
    uVar14 = 7;
    FUN_003731e8(fVar17 * DAT_003a8d3c,param_1 + 0x1c4);
  }
  if ((int)fVar18 < iVar5) {
    sVar9 = *(short *)(iVar15 + 0xbe);
    iVar15 = FUN_0036e800(param_1,iVar15);
    if (iVar15 < 1) {
      sVar8 = -1;
    }
    else {
      sVar8 = 1;
    }
    sVar9 = sVar8 * 0x3fff + sVar9;
  }
  else {
    sVar9 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                         *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
    sVar9 = sVar9 - *(short *)(param_1 + 0x36);
  }
  if (sVar9 < 0x10c) {
    if (sVar9 < -0x10b) {
      sVar9 = *(short *)(param_1 + 0x36) + -0x10b;
    }
    else {
      sVar9 = sVar9 + *(short *)(param_1 + 0x36);
    }
    *(short *)(param_1 + 0x36) = sVar9;
  }
  else {
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x10b;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  uVar10 = FUN_003731e0(param_1 + 0x1c4);
  uVar12 = DAT_003a8d58;
  uVar13 = DAT_003a8d54;
  iVar15 = DAT_003a8d50;
  if ((*(byte *)(param_1 + 0xe74) < 2) && ((uVar14 == 7 || uVar14 == 5) || uVar14 == 4)) {
    *(char *)(param_1 + 0xe74) = (char)uVar14;
    uVar11 = FUN_0036ae14(param_1 + 0x1c4,
                          *(undefined4 *)
                           (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + uVar14 * 4));
    uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar4,fVar3,uVar11,uVar13,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    cVar1 = *(char *)(param_1 + 0xe74);
    if (cVar1 == '\a') {
      if (*(char *)(param_1 + 0x1094) != '\0') {
        return;
      }
    }
    else {
      bVar16 = cVar1 == '\x05';
      if (bVar16) {
        cVar1 = *(char *)(param_1 + 0x1094);
      }
      if (!bVar16 || cVar1 != '\0') {
        return;
      }
    }
    FUN_0037547c(uVar12,param_1 + 0x28,4,DAT_003a8d1c,DAT_003a8d1c,DAT_003a8d18);
    return;
  }
  if (uVar10 == 0) {
    if (*(byte *)(param_1 + 0xe74) != 4) {
      return;
    }
    if (1 < uVar14) {
      return;
    }
    goto LAB_003a8e10;
  }
  if (uVar14 == 7) {
    if (*(char *)(param_1 + 0x1094) == '\0') {
LAB_003a8dd8:
      FUN_0037547c(DAT_003a8d58,param_1 + 0x28,4,DAT_003a8d1c,DAT_003a8d1c,DAT_003a8d18);
    }
  }
  else {
    if (uVar14 == 5) {
      uVar10 = (uint)*(byte *)(param_1 + 0x1094);
    }
    if (uVar14 == 5 && uVar10 == 0) goto LAB_003a8dd8;
  }
  uVar10 = (uint)*(byte *)(param_1 + 0xe74);
  if (uVar10 < 2) {
    if (uVar10 == uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else if (uVar10 == uVar14) {
    uVar13 = FUN_0036ae14(param_1 + 0x1c4,
                          *(undefined4 *)
                           (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + uVar10 * 4));
    uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar4,fVar3,uVar13,fVar3,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    return;
  }
LAB_003a8e10:
  *(char *)(param_1 + 0xe74) = (char)uVar14;
  uVar12 = FUN_0036ae14(param_1 + 0x1c4,
                        *(undefined4 *)
                         (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                         (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar4,fVar3,uVar12,uVar13,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar15 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  return;
}
