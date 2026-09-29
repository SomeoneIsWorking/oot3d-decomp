// OoT3D decomp @ 00159184  name=FUN_00159184  size=100

void FUN_00159184(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;

  iVar6 = *(int *)(DAT_00159560 + param_2);
  if (*(short *)(param_1 + 0x25e) != 0) {
    *(short *)(param_1 + 0x25e) = *(short *)(param_1 + 0x25e) + -1;
  }
  FUN_003731e0(param_1 + 0x1d4);
  fVar16 = DAT_00159570;
  fVar17 = DAT_0015956c;
  fVar10 = DAT_00159568;
  fVar11 = DAT_00159564;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x25e),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x25e) < 1) {
    fVar9 = fVar9 * DAT_00159564 * DAT_00159568 - DAT_0015956c;
  }
  else {
    fVar9 = DAT_0015956c + fVar9 * DAT_00159564 * DAT_00159568;
  }
  fVar9 = (float)VectorSignedToFloat(0xf - (int)fVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = *(float *)(param_1 + 0x3a0) *
          (DAT_0015956c + fVar9 * DAT_0015956c * DAT_00159570) * fRam00159574;
  *(float *)(param_1 + 0x5c) = fVar9;
  *(float *)(param_1 + 0x58) = fVar9;
  *(float *)(param_1 + 0x54) = fVar9;
  FUN_00370378(param_1 + 0xbc,0x1800,0x800);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x25e),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x25e) < 1) {
    fVar17 = fVar9 * fVar11 * fVar10 - fVar17;
  }
  else {
    fVar17 = fVar17 + fVar9 * fVar11 * fVar10;
  }
  fVar10 = (float)VectorSignedToFloat(0xf - (int)fVar17,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = fVar10 * fVar16;
  if (iRam00159578 < (int)(fVar10 * fVar16)) {
    fVar11 = fRam0015957c;
  }
  fVar17 = (float)FUN_003727f0(fVar11 * fRam00159580);
  uVar2 = uRam001595a8;
  fVar10 = fRam001595a0;
  uVar1 = uRam0015959c;
  uVar4 = uRam00159598;
  fVar11 = fRam00159590;
  iVar3 = (int)*(short *)(param_1 + 0xbc);
  fVar16 = fRam00159588 + fVar17 * fRam00159584;
  fVar17 = fRam00159590;
  if (iRam0015958c <= iVar3) {
    iVar7 = param_1 + 0x262;
    if (iVar3 < iRam00159594) {
      FUN_00370378(iVar7,uRam0015959c,uRam00159598);
      fVar17 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x262));
      fVar17 = fVar17 * fVar10;
    }
    else {
      iVar5 = iRam001595a4 - (iRam001595a4 >> 2);
      if (iVar3 < iRam001595a4) {
        FUN_00370378(iVar7,iVar5,uRam00159598);
        FUN_00370378(param_1 + 0x264,uVar1,uVar4);
        FUN_00370378(param_1 + 0x266,uVar1,uVar2);
        fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x262));
        fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x264));
        fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x266));
        fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x266));
        fVar13 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x262));
        fVar14 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x264));
        fVar17 = (fVar13 + fVar14) * fVar10 -
                 ((fVar16 - (-fVar17 - fVar9) * fVar10) * fVar15) / fVar12;
      }
      else {
        FUN_00370378(iVar7,iVar5,uRam00159598);
        FUN_00370378(param_1 + 0x264,uRam001595ac,uVar2);
        FUN_00370378(param_1 + 0x266,uVar1,uVar2);
        fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x262));
        fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x264));
        fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x266));
        fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x266));
        fVar13 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x262));
        fVar14 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x264));
        fVar17 = (fVar13 + fVar14) * fVar10 -
                 ((fVar16 - (-fVar17 - fVar9) * fVar10) * fVar15) / fVar12;
      }
    }
  }
  if (*(short *)(param_1 + 0x25e) < 0xf) {
    uVar4 = FUN_003758b0(*(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x10),
                         *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 8));
    FUN_00370084(param_1 + 0xbe,uVar4,2,uRam001595b0);
  }
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar16 * *(float *)(param_1 + 0x3a0);
  fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar9 = *(float *)(param_1 + 0x3a0);
  fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar15 = *(float *)(param_1 + 0x3a0);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar10 * fVar17 * fVar9;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar16 * fVar17 * fVar15;
  FUN_0036f9d0(fVar15 * fRam001595bc,param_2,param_1 + 8,0,(int)(short)(int)(fVar15 * fRam001595b8),
               (int)(short)(int)(fVar15 * fRam001595b4),1,0xffffffff,10,0);
  if (*(short *)(param_1 + 0x25e) == 0) {
    fVar17 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 8);
    fVar10 = *(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x10);
    uVar8 = in_fpscr & 0xfffffff |
            (uint)(*(float *)(param_1 + 0x3a0) * fRam001595c0 <=
                  SQRT(fVar17 * fVar17 + fVar10 * fVar10)) << 0x1d;
    if (SUB41(uVar8 >> 0x1d,0)) {
      uVar4 = FUN_0036ae14(param_1 + 0x1d4,0);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
      FUN_00375c08(uRam00159668,uVar4,fVar11,uRam00159664,param_1 + 0x1d4,0,2);
      *(undefined2 *)(param_1 + 0x25e) = 0x17;
      *(byte *)(*(int *)(param_1 + 0x3c4) + 0xb7) =
           *(byte *)(*(int *)(param_1 + 0x3c4) + 0xb7) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x3c4) + 0x107) =
           *(byte *)(*(int *)(param_1 + 0x3c4) + 0x107) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x3c4) + 0x157) =
           *(byte *)(*(int *)(param_1 + 0x3c4) + 0x157) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1a7) =
           *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1a7) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1f7) =
           *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1f7) & 0xfe;
      uVar4 = uRam0015966c;
    }
    else {
      *(undefined2 *)(param_1 + 0x25e) = 0xc;
      FUN_003731e8(fVar11,param_1 + 0x1d4);
      uVar4 = uRam001595c4;
    }
    *(undefined4 *)(param_1 + 600) = uVar4;
  }
  return;
}
