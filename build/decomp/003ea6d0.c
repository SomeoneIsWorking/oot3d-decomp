// OoT3D decomp @ 003ea6d0  name=FUN_003ea6d0  size=804

void FUN_003ea6d0(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;

  FUN_003731e0(param_1 + 0x1a4);
  uVar14 = DAT_003ea9e0;
  iVar5 = FUN_003736fc(DAT_003ea9e4,DAT_003ea9e0,param_1 + 0x1a4);
  iVar6 = FUN_003736fc(DAT_003ea9e8,uVar14,param_1 + 0x1a4);
  uVar10 = DAT_003ea9ec;
  if (iVar5 + iVar6 != 0) {
    if (*(int *)(param_1 + 0x8fc) == 0) {
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x8fc) = 1;
        FUN_00375bcc(param_1,uVar10);
      }
    }
    else if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x8fc) = 0;
      FUN_00375bcc(param_1,uVar10);
    }
  }
  if (*(int *)(DAT_003ea9f0 + param_2) == 0) {
    psVar7 = (short *)(*(int *)(*(int *)(DAT_003ea9f4 + param_2) + *(short *)(param_1 + 0x8b8) * 8 +
                               4) + *(short *)(param_1 + 0x8f6) * 6);
    uVar10 = VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(uVar10,uVar14,*(undefined4 *)(param_1 + 0x8c0),param_1 + 0x28);
    uVar10 = VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(uVar10,uVar14,*(undefined4 *)(param_1 + 0x8c0),param_1 + 0x30);
    FUN_00373500(*(undefined4 *)(param_1 + 0x8d8),uVar14,*(undefined4 *)(param_1 + 0x8dc),
                 param_1 + 0x8c0);
    fVar11 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 - *(float *)(param_1 + 0x28);
    fVar12 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 - *(float *)(param_1 + 0x30);
    fVar13 = (float)FUN_003696ec(fVar11,fVar12);
    FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar13 * DAT_003ea9f8),3,
                 (int)(short)(int)*(float *)(param_1 + 0x8c4),0);
    FUN_00373500(*(undefined4 *)(param_1 + 0x8e0),uVar14,*(undefined4 *)(param_1 + 0x8e4),
                 param_1 + 0x8c4);
    uVar10 = DAT_003eaa04;
    uVar14 = DAT_003ea9fc;
    if (*(short *)(param_1 + 0x8f0) == 0) {
      *(undefined4 *)(param_1 + 0x8cc) = DAT_003ea9fc;
      uVar3 = *(short *)(param_1 + 0x8ae) + 1;
      bVar8 = (uVar3 & 1) != 0;
      if (bVar8) {
        uVar14 = DAT_003eaa00;
      }
      *(ushort *)(param_1 + 0x8ae) = uVar3;
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x8cc) = uVar14;
      }
      fVar15 = (float)FUN_00371e50(uVar10);
      fVar2 = DAT_003eaa10;
      fVar13 = DAT_003eaa0c;
      iVar5 = DAT_003eaa08;
      if ((int)*(short *)(DAT_003eaa08 + *(short *)(param_1 + 0x8b6) * 2) + (int)(short)(int)fVar15
          < 1) {
        fVar15 = (float)FUN_00371e50(uVar10);
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + *(short *)(param_1 + 0x8b6) * 2)
                                            + (int)(short)(int)fVar15,(byte)(in_fpscr >> 0x15) & 3);
        uVar4 = (undefined2)(int)(fVar15 * fVar13 * fVar2 - fVar2);
      }
      else {
        fVar15 = (float)FUN_00371e50(uVar10);
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + *(short *)(param_1 + 0x8b6) * 2)
                                            + (int)(short)(int)fVar15,(byte)(in_fpscr >> 0x15) & 3);
        uVar4 = (undefined2)(int)(fVar2 + fVar15 * fVar13 * fVar2);
      }
      *(undefined2 *)(param_1 + 0x8f0) = uVar4;
    }
    FUN_00373500(*(undefined4 *)(param_1 + 0x8cc),*(undefined4 *)(param_1 + 0x8e8),
                 *(undefined4 *)(param_1 + 0x8ec),param_1 + 0x8c8);
    fVar11 = ABS(fVar11);
    iVar5 = (int)fVar11 - DAT_003eaa14;
    if ((int)fVar11 < DAT_003eaa14) {
      fVar11 = ABS(fVar12);
      iVar5 = (int)fVar11 - DAT_003eaa14;
    }
    if ((iVar5 < 0 != SBORROW4((int)fVar11,DAT_003eaa14)) && (*(short *)(param_1 + 0x8bc) == 0)) {
      iVar6 = (int)*(short *)(param_1 + 0x8b6);
      bVar9 = SBORROW4(iVar6,2);
      iVar5 = iVar6 + -2;
      bVar8 = iVar6 == 2;
      if (1 < iVar6) {
        iVar6 = (int)*(short *)(param_1 + 0x8f6);
        bVar9 = SBORROW4(iVar6,3);
        iVar5 = iVar6 + -3;
        bVar8 = iVar6 == 3;
      }
      if ((bVar8 || iVar5 < 0 != bVar9) || (iVar5 = FUN_00371e50(DAT_003eaa18), iVar5 < 0x3f800001))
      {
        *(undefined4 *)(param_1 + 0x8a8) = DAT_003eaa30;
        return;
      }
      sVar1 = *(short *)(param_1 + 0x8f6);
      if (sVar1 == 7) {
        *(undefined2 *)(param_1 + 0x8f6) = 0;
      }
      else if (3 < sVar1) {
        *(short *)(param_1 + 0x8f6) = sVar1 + -3;
      }
      *(undefined2 *)(param_1 + 0x8bc) = 8;
    }
  }
  return;
}
