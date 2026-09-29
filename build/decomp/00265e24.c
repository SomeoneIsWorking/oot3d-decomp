// OoT3D decomp @ 00265e24  name=FUN_00265e24  size=628

void FUN_00265e24(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;

  fVar12 = DAT_0026611c;
  uVar4 = DAT_00266108;
  iVar3 = DAT_00266104;
  iVar5 = *(int *)(param_1 + 0xa48);
  if (iVar5 != DAT_00266100 && iVar5 != DAT_00266104) goto LAB_00265f5c;
  iVar6 = (int)*(short *)(param_1 + 0xa4e);
  if (iVar5 == DAT_00266100) {
    fVar13 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar6 < 1) {
      fVar13 = fVar13 * DAT_0026610c * DAT_00266110 - DAT_0026611c;
    }
    else {
      fVar13 = DAT_0026611c + fVar13 * DAT_0026610c * DAT_00266110;
    }
    iVar6 = (int)((ulonglong)((longlong)DAT_00266114 * (longlong)(int)fVar13) >> 0x20);
    iVar5 = iVar6 >> 1;
    iVar7 = iVar5 - (iVar6 >> 0x1f);
    iVar6 = iVar7 * -3;
    iVar7 = (int)fVar13 + iVar7 * -0xc;
    if (iVar7 < 8) {
      fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = DAT_00266120;
      goto LAB_00265f14;
    }
    iVar7 = 0xc - iVar7;
LAB_00265f1c:
    fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * DAT_00266118;
  }
  else {
    fVar13 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar6 < 1) {
      fVar13 = fVar13 * DAT_0026610c * DAT_00266110 - DAT_0026611c;
    }
    else {
      fVar13 = DAT_0026611c + fVar13 * DAT_0026610c * DAT_00266110;
    }
    lVar2 = (longlong)DAT_00266114 * (longlong)(int)fVar13;
    iVar5 = (int)lVar2;
    iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    iVar7 = iVar7 - (iVar7 >> 0x1f);
    iVar6 = iVar7 * -3;
    iVar7 = (int)fVar13 + iVar7 * -6;
    if (iVar7 < 4) goto LAB_00265f1c;
    iVar7 = 6 - iVar7;
    fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = DAT_00266124;
LAB_00265f14:
    fVar11 = fVar11 * fVar13;
  }
  fVar13 = (float)FUN_003727f0(fVar11,iVar7,iVar6,iVar5);
  fVar12 = fVar12 + fVar13 * fVar12;
  FUN_0033dd8c(fVar12,fVar12,fVar12,uVar4,param_1 + 0x1a4,2,4,0);
LAB_00265f5c:
  iVar5 = DAT_00266128;
  if (*(int *)(param_1 + 0xa48) == DAT_00266128) {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xa4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 * DAT_0026612c;
    FUN_0033dd8c(fVar12,fVar12,fVar12,fVar12,param_1 + 0x1a4,1,5,2);
    uVar8 = extraout_r1;
  }
  else {
    FUN_0033dd8c(uVar4,uVar4,uVar4,uVar4,param_1 + 0x1a4,1,5,2);
    uVar8 = extraout_r1_00;
  }
  iVar6 = *(int *)(param_1 + 0xa48);
  bVar9 = iVar6 == iVar5;
  if (bVar9) {
    uVar8 = (uint)*(ushort *)(param_1 + 0xa4e);
  }
  bVar10 = bVar9 && uVar8 == 0;
  if (bVar9 && uVar8 == 0) {
    bVar10 = *(short *)(param_1 + 0xa50) == 0;
  }
  if (bVar10) {
    FUN_00342be0(DAT_00266144,DAT_00266144,DAT_00266144,*(float *)(param_1 + 0x58) * DAT_00266140,
                 param_1,4,2);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0xa4e);
  if (((uVar1 & 1) != 0) &&
     (((iVar6 == iVar3 && (0xb < (short)uVar1)) || ((iVar6 == iVar5 && (0xe < (short)uVar1)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0026613c,0,param_1,0);
  return;
}
