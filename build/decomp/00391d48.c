// OoT3D decomp @ 00391d48  name=FUN_00391d48  size=580

void FUN_00391d48(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  float *pfVar9;
  ushort *puVar10;
  short *psVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  fVar3 = DAT_00391f9c;
  fVar2 = DAT_00391f98;
  fVar14 = DAT_00391f94;
  piVar1 = DAT_00391f8c;
  pfVar5 = (float *)(param_1 + 0xbc4);
  pfVar9 = (float *)(param_1 + 0x6c);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00391f8c + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar15 = DAT_00391f90 / fVar15;
  uVar13 = in_fpscr & 0xfffffff | (uint)(fVar15 <= *pfVar5) << 0x1d;
  if (SUB41(uVar13 >> 0x1d,0)) {
    *pfVar9 = DAT_00391f98;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x145c),(byte)(uVar13 >> 0x15) & 3
                                       );
    fVar14 = DAT_00391fa4 - fVar15 * fVar14;
  }
  else {
    fVar16 = *pfVar5 + DAT_00391f9c;
    *pfVar5 = fVar16;
    fVar4 = DAT_00391fa0;
    *pfVar9 = ((fVar15 - fVar16) / fVar15) * *pfVar9;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x145c),(byte)(uVar13 >> 0x15) & 3
                                       );
    fVar14 = ((fVar4 + fVar16 * fVar14) / fVar15) * -*pfVar5;
  }
  *(float *)(param_1 + 100) = fVar14;
  FUN_00376864(param_1);
  puVar10 = (ushort *)0x0;
  iVar6 = FUN_0037571c(param_2);
  if (iVar6 != 0) {
    puVar10 = *(ushort **)(param_2 + 0x22e8);
  }
  if (puVar10 != (ushort *)0x0) {
    uVar7 = (uint)*puVar10;
    bVar12 = uVar7 == 4;
    if (bVar12) {
      uVar7 = *(uint *)(param_1 + 0xbd8);
    }
    if (bVar12 && uVar7 == 0) {
      uVar8 = FUN_0036ae14(param_1 + 0x1a4,8);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar13 >> 0x15) & 3);
      FUN_00353020(fVar3,fVar2,uVar8,DAT_00391fa8,param_1 + 0x1a4,DAT_00391fac,2);
      *(undefined4 *)(param_1 + 0xbd8) = 1;
    }
  }
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar8 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_00391fb0;
  FUN_00376340(DAT_00391fbc,DAT_00391fb8,DAT_00391fb4,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar8;
  if (*(int *)(param_1 + 0xbd8) == 0) {
    iVar6 = FUN_0036e5e0(DAT_00391fc0,fVar3,param_1 + 0x1a4);
    if ((iVar6 != 0) || (iVar6 = FUN_0036e5e0(DAT_00391fc4,fVar3,param_1 + 0x1a4), iVar6 != 0)) {
      FUN_0037547c(0x1000004,param_1 + 0x28,4,DAT_00391fcc,DAT_00391fcc,DAT_00391fc8);
    }
  }
  psVar11 = (short *)0x0;
  iVar6 = FUN_0037571c(param_2);
  if (iVar6 != 0) {
    psVar11 = *(short **)(param_2 + 0x22e8);
  }
  if ((psVar11 != (short *)0x0) && (*psVar11 == 5)) {
    *(ushort *)(DAT_00391fd0 + 0x38) = *(ushort *)(DAT_00391fd0 + 0x38) | 2;
    *(undefined4 *)(param_1 + 0xbbc) = 0xe;
  }
  return;
}
