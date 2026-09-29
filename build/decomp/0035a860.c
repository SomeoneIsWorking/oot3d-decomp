// OoT3D decomp @ 0035a860  name=FUN_0035a860  size=1088

void FUN_0035a860(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  float fVar14;

  iVar6 = *(int *)(iRam0035ac60 + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000,1);
  iVar4 = FUN_00365444(param_2,param_1);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_003650d0(param_2,param_1,0);
  if (iVar4 != 0) {
    return;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 15000;
  sVar5 = *(short *)(iVar6 + 0xbe) + -0x8000;
  fVar8 = (float)FUN_002cfca0((int)(short)(sVar5 - *(short *)(param_1 + 0xbe)));
  fVar9 = fRam0035ac68;
  fVar1 = fRam0035ac64;
  if (fVar8 < fRam0035ac64) {
    fVar8 = (float)FUN_002cfca0((int)(short)(sVar5 - *(short *)(param_1 + 0xbe)));
    if (fVar8 < fVar1) {
      fVar9 = *(float *)(param_1 + 0x6c) + fVar9;
      *(float *)(param_1 + 0x6c) = fVar9;
      if (0x41000000 < (int)fVar9) {
        fVar9 = fRam0035ac70;
      }
      goto LAB_0035a950;
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0x6c) - fRam0035ac68;
    *(float *)(param_1 + 0x6c) = fVar9;
    if (0xc0ffffff < (uint)fVar9) {
      fVar9 = fRam0035ac6c;
    }
LAB_0035a950:
    *(float *)(param_1 + 0x6c) = fVar9;
  }
  fVar9 = fRam0035ac74;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar4 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)(short)(*(short *)(param_1 + 0xbe) + 16000));
    if (iVar4 != 0) goto LAB_0035aa04;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_0035a998;
    iVar4 = 0;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar9;
  }
  else {
LAB_0035a998:
    if (*(float *)(param_1 + 0x6c) < fVar1) {
      sVar3 = *(short *)(param_1 + 0xbe) + -16000;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xbe) + 16000;
    }
    iVar4 = (int)(short)(*(short *)(param_1 + 0x82) - sVar3);
  }
  fVar8 = fRam0035ac78;
  if (0x8000 < iVar4 + 0x4000U) {
    fVar9 = *(float *)(param_1 + 0x6c) * fVar9;
    *(float *)(param_1 + 0x6c) = fVar9;
    if (fVar1 <= fVar9) {
      fVar9 = fVar9 + fVar8;
    }
    else {
      fVar9 = fVar9 - fVar8;
    }
    *(float *)(param_1 + 0x6c) = fVar9;
  }
LAB_0035aa04:
  iVar4 = iRam0035ac7c;
  if (iRam0035ac7c < *(int *)(param_1 + 0x98)) {
    if (iRam0035ac8c < *(int *)(param_1 + 0x98)) {
      FUN_0036e168(uRam0035ac90,uRam0035ac84,uRam0035ac80,fVar1,param_1 + 0xc00);
    }
    else {
      FUN_0036e168(fVar1,uRam0035ac84,uRam0035ac94,fVar1,param_1 + 0xc00);
    }
  }
  else {
    FUN_0036e168(uRam0035ac88,uRam0035ac84,uRam0035ac80,fVar1,param_1 + 0xc00);
  }
  pfVar7 = (float *)(param_1 + 0xc00);
  if (*pfVar7 != fVar1) {
    fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar9 * *pfVar7;
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar9 * *pfVar7;
  }
  fVar9 = *pfVar7;
  fVar12 = *(float *)(param_1 + 0x6c);
  fVar8 = fVar9;
  if (fVar9 < fVar1) {
    fVar8 = -fVar9;
  }
  fVar14 = fVar12;
  if (fVar12 < fVar1) {
    fVar14 = -fVar12;
  }
  if (fVar8 < fVar14) {
    fVar9 = fVar12;
  }
  *(float *)(param_1 + 0x220) = fVar9 * fRam0035ac98;
  uVar10 = *(uint *)(param_1 + 0x220);
  uVar11 = uRam0035ac9c;
  if ((uVar10 < 0xc0400001) && (uVar11 = uVar10, iRam0035aca0 < (int)uVar10)) {
    uVar11 = uRam0035aca4;
  }
  *(uint *)(param_1 + 0x220) = uVar11;
  fVar9 = *(float *)(param_1 + 0x21c);
  FUN_003731e0(param_1 + 0x1e0);
  fVar8 = *(float *)(param_1 + 0x220);
  if (fVar8 < fVar1) {
    fVar8 = -fVar8;
  }
  iVar13 = (int)(*(float *)(param_1 + 0x21c) - fVar8);
  iVar6 = (int)fVar8 + (int)fVar9;
  if (((int)*(float *)(param_1 + 0x21c) != (int)fVar9) &&
     (((iVar13 < 0 && (0 < iVar6)) || ((iVar13 < 5 && (5 < iVar6)))))) {
    FUN_00375bcc(param_1,uRam0035aca8);
  }
  uVar2 = uRam0035acb0;
  if ((*(uint *)(iRam0035acac + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,uRam0035acb0);
  }
  uVar11 = FUN_00338f60((int)(short)(sVar5 - *(short *)(param_1 + 0xbe)));
  if (((uRam0035acb4 < uVar11) && (iVar6 = FUN_00369608(param_2,param_1), iVar6 == 0)) &&
     (*(int *)(param_1 + 0x98) <= iVar4)) {
    FUN_00373d40(param_1 + 0x1e0,0);
    *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
    *(undefined4 *)(param_1 + 0xbe8) = 7;
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined2 *)(param_1 + 0xc0e) = 0;
    FUN_003ff758(param_1 + 0x28,uVar2);
    *(undefined4 *)(param_1 + 0xbf0) = uRam0035acb8;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xbfc) + -1;
    *(int *)(param_1 + 0xbfc) = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_00369608(param_2,param_1);
      if (iVar4 == 0) {
        FUN_00370350(DAT_0035adec,param_1 + 0x1e0,10);
        *(undefined4 *)(param_1 + 0xbe8) = 5;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
