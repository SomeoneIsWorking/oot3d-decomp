// OoT3D decomp @ 003084e8  name=FUN_003084e8  size=656

float FUN_003084e8(float param_1,char **param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = DAT_00308794;
  fVar17 = DAT_00308790;
  fVar11 = DAT_0030878c;
  pcVar5 = *param_2;
  iVar7 = *(int *)(pcVar5 + 4);
  if (*pcVar5 == '\x01') {
    if (iVar7 != 1) {
      return DAT_0030877c;
    }
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
    ;
    return fVar11 * DAT_00308778;
  }
  if (*pcVar5 != '\x02') {
    return DAT_0030877c;
  }
  psVar10 = (short *)(pcVar5 + 0x10);
  if (iVar7 == 1) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
    ;
    return fVar11 * DAT_00308778;
  }
  psVar8 = (short *)0x0;
  psVar9 = (short *)0x0;
  if (*(char *)(param_2 + 1) == '\0') {
LAB_003085f0:
    psVar6 = (short *)(pcVar5 + 0x10);
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        fVar15 = (float)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar15 < param_1) << 0x1f |
                (uint)(fVar15 == param_1) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar15) || NAN(param_1)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) break;
        iVar4 = iVar4 + 1;
        psVar6 = psVar6 + 4;
      } while (iVar4 < iVar7);
    }
    fVar15 = DAT_0030877c;
    fVar18 = DAT_0030877c;
    if (iVar4 != 0) {
      if (iVar4 == iVar7) {
        fVar11 = (float)VectorSignedToFloat((int)psVar10[iVar4 * 4 + -3],
                                            (byte)(in_fpscr >> 0x15) & 3);
        return fVar11 * DAT_00308778;
      }
      psVar9 = psVar10 + iVar4 * 4;
      psVar8 = psVar9 + -4;
      fVar15 = (float)VectorSignedToFloat((int)psVar9[-4],(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
    }
  }
  else {
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(DAT_0030877c <= param_1) << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      in_fpscr = uVar1 | (uint)(param_1 <= fVar15) << 0x1d;
      if (SUB41(in_fpscr >> 0x1d,0)) goto LAB_003085f0;
    }
    psVar8 = psVar10 + iVar7 * 4 + -4;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(DAT_0030877c <= param_1) << 0x1d;
    fVar15 = (float)VectorSignedToFloat((int)psVar10[iVar7 * 4 + -4],(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorSignedToFloat((int)*psVar10 + *(int *)(pcVar5 + 0xc) + 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    psVar9 = psVar10;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar16 = (float)VectorSignedToFloat(*(int *)(pcVar5 + 0xc) + 1,(byte)(in_fpscr >> 0x15) & 3);
      param_1 = fVar16 + param_1;
    }
  }
  if (psVar8 == (short *)0x0 || psVar9 == (short *)0x0) {
    return DAT_0030877c;
  }
  fVar16 = (float)VectorSignedToFloat((int)psVar8[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = fVar16 * DAT_00308778;
  fVar12 = (float)VectorSignedToFloat((int)psVar9[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * DAT_00308778;
  if ((uint)DAT_00308780 < (uint)(fVar12 - fVar16)) {
    fVar12 = fVar12 + DAT_00308784;
  }
  else if (DAT_00308788 < (int)(fVar12 - fVar16)) {
    fVar12 = fVar12 - DAT_00308784;
  }
  fVar13 = (float)VectorSignedToFloat((int)psVar8[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)FUN_003555d8(fVar13 * DAT_0030878c * DAT_00308790 * DAT_00308794);
  fVar14 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)FUN_003555d8(fVar14 * fVar11 * fVar17 * fVar3);
  fVar17 = (param_1 - fVar15) * (DAT_00308798 / (fVar18 - fVar15));
  return fVar16 + (fVar16 - fVar12) * (fVar17 * DAT_0030879c - DAT_003087a0) * fVar17 * fVar17 +
         (param_1 - fVar15) * (fVar17 - DAT_00308798) *
         ((fVar17 - DAT_00308798) * fVar13 + fVar17 * fVar11);
}

