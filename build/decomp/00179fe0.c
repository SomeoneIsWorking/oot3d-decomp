// OoT3D decomp @ 00179fe0  name=FUN_00179fe0  size=434

void FUN_00179fe0(int param_1,int param_2)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;

  fVar14 = DAT_0017a2e0;
  iVar9 = *(int *)(param_2 + 0x20ac);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + *(short *)(param_1 + 0xce2))
               ,1,DAT_0017a2e4,1);
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar5 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)*(short *)(param_1 + 0xbe));
    if (iVar5 == 0) {
      uVar6 = *(ushort *)(param_1 + 0x90) & 8;
      if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_0017a064;
      goto LAB_0017a07c;
    }
  }
  else {
LAB_0017a064:
    uVar6 = (uint)(short)(*(short *)(param_1 + 0x82) -
                         (*(short *)(param_1 + 0x92) + *(short *)(param_1 + 0xce2)));
LAB_0017a07c:
    if (DAT_0017a2e8 < uVar6 + 12000) {
      *(short *)(param_1 + 0xce2) = -*(short *)(param_1 + 0xce2);
    }
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  iVar5 = FUN_00369608(param_2,param_1);
  fVar16 = DAT_0017a2f8;
  fVar12 = fVar14;
  if (iVar5 != 0) {
    fVar12 = DAT_0017a2ec;
  }
  if (fVar12 + DAT_0017a2f0 < *(float *)(param_1 + 0x98)) {
    if (*(float *)(param_1 + 0x98) <= fVar12 + DAT_0017a2f8) {
      FUN_0036e168(fVar14,DAT_0017a2fc,DAT_0017a308,fVar14,param_1 + 0xcd0);
    }
    else {
      FUN_0036e168(DAT_0017a304,DAT_0017a2fc,DAT_0017a2f4,fVar14,param_1 + 0xcd0);
    }
  }
  else {
    FUN_0036e168(DAT_0017a300,DAT_0017a2fc,DAT_0017a2f4,fVar14,param_1 + 0xcd0);
  }
  if (*(float *)(param_1 + 0xcd0) != fVar14) {
    fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar12 = DAT_0017a30c;
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + fVar11 * *(float *)(param_1 + 0xcd0) * DAT_0017a30c;
    fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x30) + fVar11 * *(float *)(param_1 + 0xcd0) * fVar12;
  }
  fVar12 = *(float *)(param_1 + 0xcd0);
  fVar11 = *(float *)(param_1 + 0x6c);
  if (fVar12 < fVar14) {
    fVar12 = -fVar12;
  }
  if (fVar11 < fVar14) {
    fVar11 = -fVar11;
  }
  if (fVar11 <= fVar12) {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0xcd0) * fRam0017a310;
  }
  else {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x6c) * fRam0017a310;
  }
  uVar3 = uRam0017a314;
  uVar15 = uRam0017a318;
  if ((*(uint *)(param_1 + 0x220) < 0xc0400001) &&
     (uVar15 = uRam0017a314, *(int *)(param_1 + 0x220) <= iRam0017a31c)) {
    uVar15 = *(undefined4 *)(param_1 + 0x220);
  }
  *(undefined4 *)(param_1 + 0x220) = uVar15;
  iVar5 = (int)*(float *)(param_1 + 0x21c);
  FUN_00370734(param_1 + 0x1e0);
  if (*(float *)(param_1 + 0x220) < fVar14) {
    fVar12 = -*(float *)(param_1 + 0x220);
  }
  else {
    fVar12 = *(float *)(param_1 + 0x220);
  }
  iVar13 = (int)(*(float *)(param_1 + 0x21c) - fVar12);
  if (*(float *)(param_1 + 0x220) < fVar14) {
    fVar14 = -*(float *)(param_1 + 0x220);
  }
  else {
    fVar14 = *(float *)(param_1 + 0x220);
  }
  iVar7 = FUN_00364c18(param_2,param_1,0);
  if (iVar7 != 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0xccc) + -1;
  *(int *)(param_1 + 0xccc) = iVar7;
  if (iVar7 == 0) {
    sVar1 = *(short *)(param_1 + 0x92);
    sVar4 = *(short *)(iVar9 + 0xbe) - sVar1;
    if (sVar4 < 0) {
      sVar4 = -sVar4;
    }
    if (iRam0017a558 <= sVar4) {
      FUN_00364938(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar4 = *(short *)(*(int *)(param_2 + 0x20ac) + 0xbe);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    if (*(short *)(param_1 + 0x1c) == 0) {
      fVar16 = fRam0017a560;
    }
    if ((*(float *)(param_1 + 0x98) <= fVar16) &&
       (iVar9 = FUN_00369608(param_2,param_1), iVar9 == 0)) {
      lVar2 = (ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)uRam0017a564;
      uVar6 = (uint)((ulonglong)lVar2 >> 0x22);
      bVar10 = *(uint *)(param_2 + 0x5bf4) + uVar6 * -6 != 0;
      uVar8 = 0;
      uVar6 = uVar6 * -3;
      if (bVar10) {
        uVar8 = (int)(short)(sVar4 - sVar1) + 0x38df;
        uVar6 = uRam0017a568;
      }
      if (!bVar10 || uVar8 <= uVar6) {
        FUN_00364aa4(param_1,uVar6,(int)lVar2);
        goto code_r0x0017a4c8;
      }
    }
    FUN_0034c440(param_1,param_2);
  }
code_r0x0017a4c8:
  iVar7 = (int)*(float *)(param_1 + 0x21c);
  bVar10 = SBORROW4(iVar7,iVar5);
  iVar9 = iVar7 - iVar5;
  if (iVar7 != iVar5) {
    bVar10 = SBORROW4(iVar13,1);
    iVar9 = iVar13 + -1;
  }
  if ((iVar9 < 0 != bVar10) && (0 < (int)fVar14 + iVar5)) {
    FUN_00375bcc(param_1,uRam0017a56c);
    FUN_0036f00c(uRam0017a570,uVar3,param_2,param_1,param_1 + 0x28,3,0x32,0x32,1);
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 0x5f) != 0) {
    return;
  }
  FUN_0037547c(uRam0017a574,param_1 + 0x28,4,DAT_00375c04,DAT_00375c04,DAT_00375c00);
  return;
}
