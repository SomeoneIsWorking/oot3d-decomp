// OoT3D decomp @ 003a9efc  name=FUN_003a9efc  size=1256

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003a9efc(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;

  fVar19 = DAT_003aa2f4;
  iVar10 = *(int *)(DAT_003aa2f0 + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
  iVar5 = FUN_0032fdf8(param_2,param_1);
  if (iVar5 != 0) {
    return;
  }
  if ((*(short *)(param_1 + 0x1c) == -2) && (iVar5 = FUN_0032fbc0(param_2,param_1), iVar5 != 0)) {
    return;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 15000;
  sVar7 = *(short *)(iVar10 + 0xbe) + -0x8000;
  fVar14 = (float)FUN_002cfca0((int)(short)(sVar7 - *(short *)(param_1 + 0xbe)));
  fVar15 = DAT_003aa2f8;
  uVar17 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar19) << 0x1f;
  uVar12 = uVar17 | (uint)(NAN(fVar14) || NAN(fVar19)) << 0x1c;
  if ((byte)(uVar17 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
    fVar15 = *(float *)(param_1 + 0x6c) - DAT_003aa2f8;
    *(float *)(param_1 + 0x6c) = fVar15;
    if (0xc0ffffff < (uint)fVar15) {
      fVar15 = DAT_003aa2fc;
    }
LAB_003a9ff8:
    *(float *)(param_1 + 0x6c) = fVar15;
  }
  else {
    fVar14 = (float)FUN_002cfca0((int)(short)(sVar7 - *(short *)(param_1 + 0xbe)));
    uVar12 = uVar12 & 0xfffffff | (uint)(fVar19 <= fVar14) << 0x1d;
    if (!SUB41(uVar12 >> 0x1d,0)) {
      fVar15 = *(float *)(param_1 + 0x6c) + fVar15;
      *(float *)(param_1 + 0x6c) = fVar15;
      if (0x41000000 < (int)fVar15) {
        fVar15 = DAT_003aa300;
      }
      goto LAB_003a9ff8;
    }
  }
  fVar15 = DAT_003aa308;
  if (-1 < *(short *)(param_1 + 0x1c)) {
    if (*(short *)(DAT_003aa304 + param_1) != 0) {
      *(float *)(param_1 + 0x6c) = -*(float *)(param_1 + 0x6c);
    }
    goto LAB_003aa0e0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar5 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff));
    if (iVar5 != 0) goto LAB_003aa0e0;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_003aa06c;
    iVar5 = 0;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar15;
  }
  else {
LAB_003aa06c:
    uVar17 = uVar12 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar19) << 0x1f;
    uVar12 = uVar17 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar19)) << 0x1c;
    if ((byte)(uVar17 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
      sVar4 = *(short *)(param_1 + 0xbe) + 0x3fff;
    }
    else {
      sVar4 = *(short *)(param_1 + 0xbe) + -0x3fff;
    }
    iVar5 = (int)(short)(*(short *)(param_1 + 0x82) - sVar4);
  }
  fVar14 = DAT_003aa30c;
  if (0x8000 < iVar5 + 0x4000U) {
    fVar15 = *(float *)(param_1 + 0x6c) * fVar15;
    *(float *)(param_1 + 0x6c) = fVar15;
    uVar12 = uVar12 & 0xfffffff | (uint)(fVar19 <= fVar15) << 0x1d;
    if (SUB41(uVar12 >> 0x1d,0)) {
      fVar15 = fVar15 + fVar14;
    }
    else {
      fVar15 = fVar15 - fVar14;
    }
    *(float *)(param_1 + 0x6c) = fVar15;
  }
LAB_003aa0e0:
  iVar5 = FUN_00369608(param_2,param_1);
  fVar15 = fVar19;
  if (iVar5 != 0) {
    fVar15 = DAT_003aa310;
  }
  fVar14 = *(float *)(param_1 + 0x98);
  uVar17 = uVar12 & 0xfffffff | (uint)(fVar14 == fVar19 + DAT_003aa314) << 0x1e |
           (uint)(fVar19 + DAT_003aa314 <= fVar14) << 0x1d;
  bVar3 = (byte)(uVar17 >> 0x18);
  if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
    fVar19 = fVar19 + DAT_003aa324;
    uVar12 = uVar12 & 0xfffffff | (uint)(fVar14 < fVar19) << 0x1f | (uint)(fVar14 == fVar19) << 0x1e
    ;
    uVar17 = uVar12 | (uint)(NAN(fVar14) || NAN(fVar19)) << 0x1c;
    bVar3 = (byte)(uVar12 >> 0x18);
    fVar19 = fVar15;
    uVar6 = DAT_003aa328;
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar17 >> 0x1c) & 1)) {
      fVar19 = DAT_003aa32c;
      uVar6 = DAT_003aa318;
    }
    FUN_0036e168(fVar19,DAT_003aa31c,uVar6,fVar15,param_1 + 0xa74);
  }
  else {
    FUN_0036e168(DAT_003aa320,DAT_003aa31c,DAT_003aa318,fVar15,param_1 + 0xa74);
  }
  fVar19 = *(float *)(param_1 + 0xa74);
  uVar12 = uVar17 & 0xfffffff | (uint)(fVar19 == fVar15) << 0x1e;
  if ((!SUB41(uVar12 >> 0x1e,0)) &&
     ((uVar12 = uVar17 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar15) << 0x1e,
      SUB41(uVar12 >> 0x1e,0) || (iVar5 = FUN_003740fc(param_1,param_2), iVar5 == 0)))) {
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar8 = *(undefined4 *)(param_1 + 0x2c);
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    uVar1 = *(undefined2 *)(param_1 + 0x90);
    fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar14 * fVar19;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar16 * fVar19;
    FUN_00376340(fVar15,fVar15,fVar15,param_2,param_1,0x1c);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 0x30) = uVar9;
    uVar2 = *(ushort *)(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x90) = uVar1;
    if ((~uVar2 & 1) == 0) {
      fVar19 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar19 * *(float *)(param_1 + 0xa74)
      ;
      fVar19 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar19 * *(float *)(param_1 + 0xa74)
      ;
    }
  }
  fVar16 = *(float *)(param_1 + 0x6c);
  fVar14 = *(float *)(param_1 + 0xa74);
  fVar19 = fVar16;
  if (NAN(fVar16) || NAN(fVar15)) {
    fVar19 = -fVar16;
  }
  fVar18 = fVar14;
  if (NAN(fVar14) || NAN(fVar15)) {
    fVar18 = -fVar14;
  }
  uVar17 = uVar12 & 0xfffffff | (uint)(fVar19 < fVar18) << 0x1f;
  uVar13 = uVar17 | (uint)(NAN(fVar19) || NAN(fVar18)) << 0x1c;
  if ((byte)(uVar17 >> 0x1f) == ((byte)(uVar13 >> 0x1c) & 1)) {
    *(float *)(param_1 + 0x1e4) = fVar16 * DAT_003aa330;
  }
  else {
    uVar13 = uVar12 & 0xfffffff | (uint)(fVar15 <= *(float *)(param_1 + 0x1e4)) << 0x1d;
    fVar19 = DAT_003aa330;
    if (!SUB41(uVar13 >> 0x1d,0)) {
      fVar19 = DAT_003aa334;
    }
    *(float *)(param_1 + 0x1e4) = fVar14 * fVar19;
  }
  fVar19 = *(float *)(param_1 + 0x1e0);
  FUN_003731e0(param_1 + 0x1a4);
  fVar14 = *(float *)(param_1 + 0x1e4);
  uVar17 = uVar13 & 0xfffffff | (uint)(fVar14 < fVar15) << 0x1f;
  uVar12 = uVar17 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
  if ((byte)(uVar17 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) {
    fVar14 = -fVar14;
  }
  iVar10 = (int)(*(float *)(param_1 + 0x1e0) - fVar14);
  iVar5 = (int)fVar14 + (int)fVar19;
  if (((int)*(float *)(param_1 + 0x1e0) != (int)fVar19) &&
     (((iVar10 < 0xe && (0xf < iVar5)) || ((iVar10 < 0x1b && (0x1c < iVar5)))))) {
    FUN_00375bcc(param_1,DAT_003aa42c);
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_003aa430);
  }
  uVar17 = FUN_00338f60((int)(short)(sVar7 - *(short *)(param_1 + 0xbe)));
  iVar5 = DAT_003aa438;
  if ((uVar17 <= DAT_003aa434) && (*(int *)(param_1 + 0xa5c) != 0)) {
    *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + -1;
    return;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  bVar11 = *(int *)(param_1 + 0x98) == iVar5;
  if (*(int *)(param_1 + 0x98) <= iVar5) {
    bVar11 = (*(uint *)(param_2 + 0x5bf4) & 3) == 0;
  }
  if ((bVar11) && (iVar5 = FUN_00328cac(param_2,param_1), iVar5 != 0)) {
    uVar8 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar6 = DAT_00330240;
    uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar12 >> 0x15) & 3);
    FUN_00375c08(DAT_00330244,DAT_00330240,uVar8,DAT_0033023c,param_1 + 0x1a4,3,2);
    uVar8 = DAT_0033024c;
    if (*(short *)(param_1 + 0x1c) == -2) {
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00330248;
    }
    *(byte *)(param_1 + 0xaec) = *(byte *)(param_1 + 0xaec) & 0xfb;
    *(undefined4 *)(param_1 + 0xa48) = 9;
    FUN_00375bcc(param_1,uVar8);
    uVar8 = DAT_00330250;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(undefined4 *)(param_1 + 0xa54) = uVar8;
    return;
  }
  FUN_0034eb00(param_1);
  return;
}
