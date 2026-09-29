// OoT3D decomp @ 00179928  name=FUN_00179928  size=1336

void FUN_00179928(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined8 uVar23;

  iVar11 = *(int *)(param_2 + 0x20ac);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_00179cdc,1);
  sVar5 = *(short *)(iVar11 + 0xbe) + -0x8000;
  fVar16 = (float)FUN_002cfca0((int)(short)(sVar5 - *(short *)(param_1 + 0xbe)));
  fVar17 = DAT_00179ce4;
  fVar3 = DAT_00179ce0;
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar16 < DAT_00179ce0) << 0x1f |
          (uint)(fVar16 == DAT_00179ce0) << 0x1e;
  uVar14 = uVar8 | (uint)(NAN(fVar16) || NAN(DAT_00179ce0)) << 0x1c;
  bVar2 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) {
    fVar16 = (float)FUN_002cfca0((int)(short)(sVar5 - *(short *)(param_1 + 0xbe)));
    uVar14 = uVar14 & 0xfffffff | (uint)(fVar16 == fVar3) << 0x1e | (uint)(fVar3 <= fVar16) << 0x1d;
    bVar2 = (byte)(uVar14 >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      fVar17 = *(float *)(param_1 + 0x6c) - fVar17;
      goto LAB_001799c0;
    }
  }
  else {
    fVar17 = *(float *)(param_1 + 0x6c) + DAT_00179ce4;
LAB_001799c0:
    *(float *)(param_1 + 0x6c) = fVar17;
  }
  fVar16 = DAT_00179cec;
  fVar17 = DAT_00179ce8;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar6 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)(short)(*(short *)(param_1 + 0xbe) + 16000));
    if (iVar6 == 0) {
      if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_00179a0c;
      iVar6 = 0;
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar17;
      goto LAB_00179a48;
    }
  }
  else {
LAB_00179a0c:
    uVar8 = uVar14 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar3) << 0x1f;
    uVar14 = uVar8 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar3)) << 0x1c;
    if ((byte)(uVar8 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) {
      sVar5 = *(short *)(param_1 + 0xbe) + 16000;
    }
    else {
      sVar5 = *(short *)(param_1 + 0xbe) + -16000;
    }
    iVar6 = (int)(short)(*(short *)(param_1 + 0x82) - sVar5);
LAB_00179a48:
    if (0x8000 < iVar6 + 0x4000U) {
      fVar17 = *(float *)(param_1 + 0x6c) * fVar17;
      *(float *)(param_1 + 0x6c) = fVar17;
      uVar14 = uVar14 & 0xfffffff | (uint)(fVar3 <= fVar17) << 0x1d;
      if (SUB41(uVar14 >> 0x1d,0)) {
        fVar17 = fVar17 + fVar16;
      }
      else {
        fVar17 = fVar17 - fVar16;
      }
      *(float *)(param_1 + 0x6c) = fVar17;
    }
  }
  uVar4 = DAT_00179cf8;
  uVar9 = DAT_00179cf4;
  uVar8 = uVar14 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar3) << 0x1f;
  uVar14 = uVar8 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar3)) << 0x1c;
  if ((byte)(uVar8 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) {
    sVar5 = *(short *)(param_1 + 0xbe) + 16000;
  }
  else {
    sVar5 = *(short *)(param_1 + 0xbe) + -16000;
  }
  *(short *)(param_1 + 0x36) = sVar5;
  if (DAT_00179cf0 < *(int *)(param_1 + 0x98)) {
    if (DAT_00179d00 < *(int *)(param_1 + 0x98)) {
      FUN_0036e168(DAT_00179d04,uVar4,uVar9,fVar3,param_1 + 0xc00);
    }
    else {
      FUN_0036e168(fVar3,uVar4,DAT_00179d08,fVar3,param_1 + 0xc00);
    }
  }
  else {
    FUN_0036e168(DAT_00179cfc,uVar4,uVar9,fVar3,param_1 + 0xc00);
  }
  pfVar10 = (float *)(param_1 + 0xc00);
  uVar8 = uVar14 & 0xfffffff | (uint)(*pfVar10 == fVar3) << 0x1e;
  if (!SUB41(uVar8 >> 0x1e,0)) {
    fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar17 * *pfVar10;
    fVar17 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar17 * *pfVar10;
  }
  uVar15 = DAT_00179d14;
  uVar14 = DAT_00179d10;
  fVar17 = *pfVar10;
  fVar22 = *(float *)(param_1 + 0x6c);
  fVar16 = fVar17;
  if (NAN(fVar17) || NAN(fVar3)) {
    fVar16 = -fVar17;
  }
  fVar18 = fVar22;
  if (NAN(fVar22) || NAN(fVar3)) {
    fVar18 = -fVar22;
  }
  uVar8 = uVar8 & 0xfffffff | (uint)(fVar18 <= fVar16) << 0x1d;
  if (!SUB41(uVar8 >> 0x1d,0)) {
    fVar17 = fVar22;
  }
  *(float *)(param_1 + 0x220) = fVar17 * DAT_00179d0c;
  uVar19 = *(uint *)(param_1 + 0x220);
  uVar20 = uVar14;
  if ((uVar19 < 0xc0400001) && (uVar20 = uVar19, DAT_00179d18 < (int)uVar19)) {
    uVar20 = uVar15;
  }
  *(uint *)(param_1 + 0x220) = uVar20;
  fVar17 = *(float *)(param_1 + 0x21c);
  FUN_003731e0(param_1 + 0x1e0);
  fVar16 = *(float *)(param_1 + 0x220);
  uVar8 = uVar8 & 0xfffffff | (uint)(fVar16 < fVar3) << 0x1f;
  uVar15 = uVar8 | (uint)(NAN(fVar16) || NAN(fVar3)) << 0x1c;
  if ((byte)(uVar8 >> 0x1f) != ((byte)(uVar15 >> 0x1c) & 1)) {
    fVar16 = -fVar16;
  }
  iVar21 = (int)(*(float *)(param_1 + 0x21c) - fVar16);
  iVar12 = (int)fVar16 + (int)fVar17;
  iVar6 = FUN_00365444(param_2,param_1);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = FUN_003650d0(param_2,param_1,0);
  if (iVar6 != 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0xbfc) + -1;
  *(int *)(param_1 + 0xbfc) = iVar7;
  iVar6 = DAT_00179cf0;
  if (iVar7 == 0) {
    sVar1 = *(short *)(param_1 + 0xbe);
    sVar5 = *(short *)(iVar11 + 0xbe) - sVar1;
    if (sVar5 < 0) {
      sVar5 = -sVar5;
    }
    if (DAT_00179d1c <= sVar5) {
      FUN_0035ad18(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar5 = *(short *)(*(int *)(param_2 + 0x20ac) + 0xbe);
    *(short *)(param_1 + 0x36) = sVar1;
    if (*(int *)(param_1 + 0x98) <= iVar6) {
      uVar23 = FUN_00369608(param_2,param_1);
      if ((int)uVar23 == 0) {
        bVar13 = (*(uint *)(param_2 + 0x5bf4) & 3) != 0;
        uVar8 = 0;
        uVar20 = (uint)((ulonglong)uVar23 >> 0x20);
        if (bVar13) {
          uVar8 = (int)(short)(sVar5 - sVar1) + 0x38df;
          uVar20 = DAT_00179fb4;
        }
        if (!bVar13 || uVar8 <= uVar20) {
          FUN_00373d40(param_1 + 0x1e0,0);
          uVar9 = DAT_00179fb8;
          *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
          *(undefined4 *)(param_1 + 0xbe8) = 7;
          *(float *)(param_1 + 0x6c) = fVar3;
          *(undefined2 *)(param_1 + 0xc0e) = 0;
          FUN_003ff758(param_1 + 0x28,uVar9);
          *(undefined4 *)(param_1 + 0xbf0) = DAT_00179fbc;
          goto LAB_00179f44;
        }
      }
    }
    if (((uint)(DAT_00179fc0 + *(int *)(param_1 + 0x98)) < DAT_00179fc4) &&
       ((*(uint *)(param_2 + 0x5bf4) & 1) == 0)) {
      iVar11 = FUN_00369608(param_2,param_1);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      uVar9 = FUN_0036ae14(param_1 + 0x1e0,2);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(uVar15 >> 0x15) & 3);
      FUN_00375c08(DAT_00179fc8,uVar9,fVar3,uVar14,param_1 + 0x1e0,2);
      *(undefined4 *)(param_1 + 0xbfc) = 0;
      uVar9 = DAT_00179fcc;
      *(undefined2 *)(param_1 + 0xc14) = 1;
      *(undefined4 *)(param_1 + 0x6c) = uVar9;
      *(undefined4 *)(param_1 + 0xbe8) = 0xe;
      uVar9 = DAT_00179fd0;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      FUN_00375bcc(param_1,uVar9);
      *(undefined4 *)(param_1 + 0xbf0) = DAT_00179fd4;
    }
    else {
      FUN_0035a368(param_1,param_2);
    }
  }
LAB_00179f44:
  if (((int)*(float *)(param_1 + 0x21c) != (int)fVar17) &&
     (((iVar21 < 0 && (0 < iVar12)) || ((iVar21 < 5 && (5 < iVar12)))))) {
    FUN_00375bcc(param_1,DAT_00179fdc);
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 0x5f) != 0) {
    return;
  }
  FUN_00375bcc(param_1,DAT_00179fb8);
  return;
}
