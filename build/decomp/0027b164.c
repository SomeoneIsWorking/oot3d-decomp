// OoT3D decomp @ 0027b164  name=FUN_0027b164  size=688

void FUN_0027b164(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;

  iVar15 = *(int *)(param_2 + 0x20ac);
  iVar13 = *(int *)(param_1 + 0x1c8);
  iVar9 = FUN_0032d8d8();
  if ((iVar9 == 0) || (DAT_0027b404 <= *(int *)(param_1 + 0x9c))) {
    uVar10 = *(undefined4 *)(param_2 + 0xa54);
    uVar12 = 3;
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0xa54);
    uVar12 = 0xc;
  }
  FUN_0033885c(uVar10,uVar12);
  iVar9 = FUN_0036adf4(param_1);
  bVar16 = iVar9 != 0;
  iVar9 = 0;
  iVar11 = 0;
  if (bVar16) {
    iVar11 = (int)*(short *)(DAT_0027b408 + iVar15);
    iVar9 = iVar11 + -1000;
  }
  if ((bVar16 && iVar11 != 1000) && iVar9 < 0 == (bVar16 && SBORROW4(iVar11,1000))) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
    FUN_00375bcc(param_1,DAT_0027b40c);
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    psVar14 = *(short **)(param_2 + 0x20dc);
    *(undefined2 *)(param_1 + 0x1be) = 0x50;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined2 *)(param_1 + 0x1bc) = 0x2a;
    iVar11 = FUN_0036adf4(param_1);
    fVar7 = DAT_0027b424;
    fVar6 = DAT_0027b420;
    fVar5 = DAT_0027b41c;
    iVar9 = DAT_0027b418;
    fVar18 = DAT_0027b414;
    fVar19 = DAT_0027b410;
    if ((iVar11 != 0) && ((*(uint *)(DAT_0027b428 + iVar15) & 0x6000) == 0)) {
      fVar17 = DAT_0027b410 - *(float *)(param_1 + 0x98);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < DAT_0027b414) << 0x1f |
              (uint)(fVar17 == DAT_0027b414) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar17) || NAN(DAT_0027b414)) << 0x1c;
      bVar4 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        if (DAT_0027b418 < (int)fVar17) {
          fVar17 = DAT_0027b41c;
        }
        *(ushort *)(iVar15 + 0x90) = *(ushort *)(iVar15 + 0x90) & 0xfffe;
        *(float *)(iVar15 + 100) = fVar17 * fVar6 * fVar7;
      }
    }
    for (; psVar14 != (short *)0x0; psVar14 = *(short **)(psVar14 + 0x98)) {
      bVar16 = false;
      if (*psVar14 == 0x15) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(psVar14 + 0x16) == fVar18) << 0x1e;
        bVar16 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (bVar16) {
        fVar17 = (float)FUN_00357eac(param_1,psVar14);
        fVar17 = fVar19 - fVar17;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar18) << 0x1f |
                (uint)(fVar17 == fVar18) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar17) || NAN(fVar18)) << 0x1c;
        bVar4 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          if (iVar9 < (int)fVar17) {
            fVar17 = fVar5;
          }
          psVar14[0x48] = psVar14[0x48] & 0xfffc;
          *(float *)(psVar14 + 0x32) = fVar17 * fVar6 * fVar7;
        }
      }
    }
  }
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (*(short *)(param_1 + 0x1bc) < 1) {
    fVar19 = fVar19 * DAT_0027b42c * DAT_0027b430 - DAT_0027b434;
  }
  else {
    fVar19 = DAT_0027b434 + fVar19 * DAT_0027b42c * DAT_0027b430;
  }
  fVar19 = (float)VectorSignedToFloat((int)fVar19,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)FUN_003727f0(fVar19 * DAT_0027b438);
  sVar2 = *(short *)(param_1 + 0x1be);
  fVar18 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x1c0) = (short)(int)-(fVar18 * fVar19);
  sVar8 = 5;
  if (0 < sVar2) {
    sVar8 = -5;
  }
  *(short *)(param_1 + 0x1be) = sVar2 + sVar8;
  if (-1 < (int)(short)(sVar2 + sVar8) * (int)sVar8) {
    *(short *)(param_1 + 0x1be) = 0;
  }
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar3 = (undefined2)(int)(*(float *)(param_1 + 0xc) + fVar19);
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x50) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x44) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x38) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x2c) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x1a) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0x14) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 0xe) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 2) = uVar3;
  *(undefined2 *)(*(int *)(iVar13 + 0x18) + 8) = uVar3;
  if (*(short *)(param_1 + 0x1bc) != 0) {
    *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + -1;
  }
  *(byte *)(param_2 + 0xae8) = *(byte *)(param_2 + 0xae8) | 1;
  return;
}
