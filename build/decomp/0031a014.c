// OoT3D decomp @ 0031a014  name=FUN_0031a014  size=912

void FUN_0031a014(float param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;

  fVar8 = DAT_0031a3c0;
  fVar7 = DAT_0031a3bc;
  piVar6 = DAT_0031a3b8;
  fVar21 = DAT_0031a3b4;
  uVar5 = DAT_0031a3b0;
  fVar4 = DAT_0031a3ac;
  fVar19 = DAT_0031a3a8;
  fVar18 = DAT_0031a3a4;
  if ((*(ushort *)(param_2 + 0x90) & 1) == 0) goto LAB_0031a194;
  pfVar12 = (float *)(param_2 + 100);
  pfVar13 = (float *)(param_2 + 0x6c);
  psVar11 = (short *)FUN_00359690(param_3 + 0xa98,*(undefined1 *)(param_2 + 0x81));
  param_1 = *pfVar12;
  uVar1 = in_fpscr & 0xfffffff;
  in_fpscr = uVar1 | (uint)(param_1 == fVar8) << 0x1e | (uint)(fVar8 <= param_1) << 0x1d;
  bVar2 = (byte)(in_fpscr >> 0x18);
  if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) goto LAB_0031a194;
  if (psVar11 == (short *)0x0) {
    fVar17 = *pfVar13;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x148a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = fVar21 + fVar20 * fVar7;
    uVar16 = uVar1 | (uint)(fVar17 < fVar20) << 0x1f;
    uVar15 = uVar16 | (uint)(NAN(fVar17) || NAN(fVar20)) << 0x1c;
    if ((byte)(uVar16 >> 0x1f) == ((byte)(uVar15 >> 0x1c) & 1)) {
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147a),
                                          (byte)(uVar15 >> 0x15) & 3);
      *pfVar13 = fVar17 * (fVar18 + fVar20 * fVar7);
    }
    else {
      *pfVar13 = fVar8;
    }
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147c),(byte)(uVar15 >> 0x15) & 3
                                       );
    param_1 = *pfVar12 * (fVar19 - fVar17 * fVar7);
    *pfVar12 = param_1;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147c),(byte)(uVar15 >> 0x15) & 3
                                       );
    fVar17 = -*(float *)(param_2 + 0x70) * (fVar4 + fVar17 * fVar7);
    uVar1 = uVar1 | (uint)(fVar17 < param_1) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar17) || NAN(param_1)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_0031a15c;
  }
  else if ((*psVar11 == 10) || (*pfVar13 = fVar8, *psVar11 == 10)) {
    param_1 = -*pfVar12;
    *pfVar12 = param_1;
  }
  else {
LAB_0031a15c:
    *pfVar12 = fVar8;
    *(float *)(param_2 + 0x74) = fVar8;
    *(float *)(param_2 + 0x70) = fVar8;
  }
  if ((*(ushort *)(param_2 + 0x90) & 0x20) == 0) {
    param_1 = (float)FUN_0037547c(uVar5,param_2 + 0x28,4,DAT_0031a3c8,DAT_0031a3c8,DAT_0031a3c4);
  }
LAB_0031a194:
  if ((*(ushort *)(param_2 + 0x90) & 0x10) != 0) {
    fVar17 = *(float *)(param_2 + 0x6c);
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x148a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = fVar21 + fVar20 * fVar7;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar20) << 0x1f;
    uVar16 = uVar1 | (uint)(NAN(fVar17) || NAN(fVar20)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar16 >> 0x1c) & 1)) {
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147a),
                                          (byte)(uVar16 >> 0x15) & 3);
      *(float *)(param_2 + 0x6c) = fVar17 * (fVar18 + fVar20 * fVar7);
    }
    else {
      *(float *)(param_2 + 0x6c) = fVar8;
    }
    uVar10 = DAT_0031a3c8;
    uVar9 = DAT_0031a3c4;
    param_1 = *(float *)(param_2 + 100);
    uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 < fVar8) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(param_1) || NAN(fVar8)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 100) = param_1 * (fVar19 - fVar18 * fVar7);
      param_1 = (float)FUN_0037547c(uVar5,param_2 + 0x28,4,uVar10,uVar10,uVar9);
    }
  }
  pfVar12 = (float *)(uint)*(ushort *)(param_2 + 0x90);
  bVar14 = (*(ushort *)(param_2 + 0x90) & 8) == 0;
  if (!bVar14) {
    param_1 = *(float *)(param_2 + 0x6c);
    pfVar12 = (float *)(param_2 + 0x6c);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1 == fVar8) << 0x1e;
    bVar14 = SUB41(in_fpscr >> 0x1e,0);
  }
  if ((!bVar14) &&
     (sVar3 = (*(short *)(param_2 + 0x82) * 2 - *(short *)(param_2 + 0x36)) + -0x8000,
     (int)(short)(sVar3 - *(short *)(param_2 + 0x82)) + 0x4000U < 0x8001)) {
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x148a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar18 = fVar21 + fVar18 * fVar7;
    uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 < fVar18) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(param_1) || NAN(fVar18)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x147e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar12 = param_1 * (fVar4 + fVar18 * fVar7);
    }
    else {
      *pfVar12 = fVar8;
    }
    *(short *)(param_2 + 0x36) = sVar3;
    FUN_0037547c(uVar5,param_2 + 0x28,4,DAT_0031a3c8,DAT_0031a3c8,DAT_0031a3c4);
    FUN_0037547c(DAT_0031a3cc,param_2 + 0x28,4,DAT_0031a3c8,DAT_0031a3c8,DAT_0031a3c4);
  }
  pfVar12 = (float *)(param_2 + 0x6c);
  psVar11 = (short *)FUN_00359690(param_3 + 0xa98,*(undefined1 *)(param_2 + 0x81));
  fVar18 = *pfVar12;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x148a),(byte)(in_fpscr >> 0x15) & 3
                                     );
  fVar21 = fVar21 + fVar19 * fVar7;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar21) << 0x1f;
  if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar18) || NAN(fVar21))) {
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x1480),(byte)(uVar1 >> 0x15) & 3)
    ;
    *pfVar12 = fVar18 * (DAT_0031a3d0 + fVar19 * fVar7);
  }
  else {
    *pfVar12 = fVar8;
  }
  if ((psVar11 != (short *)0x0) && (*psVar11 == 10)) {
    fVar18 = DAT_0031a3d4;
    if (*pfVar12 != fVar8) {
      fVar18 = *pfVar12 * DAT_0031a3d8;
    }
    *pfVar12 = fVar18;
  }
  FUN_00376864(param_2);
  return;
}
