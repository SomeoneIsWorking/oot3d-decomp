// OoT3D decomp @ 00392c30  name=FUN_00392c30  size=576

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00392c30(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;

  fVar4 = DAT_00392ed4;
  uVar1 = *(ushort *)(param_1 + 0x90);
  if (((uVar1 & 3) != 0) || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar1 & 0x20) != 0)))) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 100) == DAT_00392ed4) << 0x1e |
               (uint)(DAT_00392ed4 <= *(float *)(param_1 + 100)) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
      *(float *)(param_1 + 0x70) = DAT_00392ed4;
      *(float *)(param_1 + 100) = fVar4;
      *(float *)(param_1 + 0x6c) = fVar4;
    }
    if ((*(short *)(param_1 + 0x1c) == -2) && ((uVar1 & 0x20) != 0)) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
    }
  }
  sVar6 = FUN_0036e800(param_1,*(undefined4 *)(DAT_00392ed8 + param_2));
  fVar4 = DAT_00392ee0;
  sVar2 = *(short *)(param_1 + 0x36);
  fVar15 = (float)VectorSignedToFloat((int)(short)(sVar6 - sVar2),(byte)(in_fpscr >> 0x15) & 3);
  if ((short)(sVar6 - sVar2) < 1) {
    sVar6 = (short)(int)(fVar15 * DAT_00392edc - DAT_00392ee0);
    *(short *)(param_1 + 0x36) = sVar2 + sVar6 * 2;
  }
  else {
    sVar6 = (short)(int)(DAT_00392ee0 + fVar15 * DAT_00392edc);
    *(short *)(param_1 + 0x36) = sVar2 + sVar6 * 2;
  }
  fVar11 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = *DAT_00392ee8;
  fVar15 = fVar11 * DAT_00392ee4;
  if (fVar14 < fVar11 * DAT_00392ee4) {
    fVar15 = fVar14;
  }
  if (fVar15 < -fVar14) {
    fVar15 = -fVar14;
  }
  *(float *)(param_1 + 0x1e4) = fVar15;
  FUN_00370734(param_1 + 0x1a4);
  if (((int)*(float *)(param_1 + 0x1e0) & 7U) == 0) {
    if ((*(short *)(param_1 + 0x1c) == -2) && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)) {
      FUN_00375bcc(param_1,DAT_00392eec);
    }
    else {
      FUN_00375bcc(param_1,DAT_00392ef0);
    }
  }
  iVar13 = DAT_00392ef4;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  iVar12 = *(int *)(param_1 + 0x98);
  iVar8 = iVar13 + -0xf60000;
  bVar10 = SBORROW4(iVar12,iVar13);
  iVar7 = iVar12 - iVar13;
  bVar9 = iVar12 == iVar13;
  if (iVar13 < iVar12) {
    iVar13 = *(int *)(param_1 + 0x9c);
    bVar10 = SBORROW4(iVar13,iVar8);
    iVar7 = iVar13 - iVar8;
    bVar9 = iVar13 == iVar8;
  }
  if (!bVar9 && iVar7 < 0 == bVar10) {
    FUN_00370350(DAT_003264b8,param_1 + 0x1a4,0);
    *(undefined1 *)(param_1 + 0x638) = 6;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0xf,0x1e);
  }
  iVar7 = FUN_0036f18c(param_1,DAT_00392ef8);
  if (iVar7 == 0) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x98);
  bVar10 = SBORROW4(iVar13,DAT_00392efc);
  iVar7 = iVar13 - DAT_00392efc;
  bVar9 = iVar13 == DAT_00392efc;
  if (iVar13 <= DAT_00392efc) {
    iVar13 = *(int *)(param_1 + 0x9c);
    bVar10 = SBORROW4(iVar13,iVar8);
    iVar7 = iVar13 - iVar8;
    bVar9 = iVar13 == iVar8;
  }
  if (!bVar9 && iVar7 < 0 == bVar10) {
    FUN_0036e734(param_1 + 0x1a4,2);
    uVar5 = DAT_00392f08;
    *(undefined1 *)(param_1 + 0x638) = 0xc;
    *(float *)(param_1 + 100) = fVar4;
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00392f0c;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(1,3);
  }
  FUN_00373d40(param_1 + 0x1a4,4);
  iVar7 = DAT_00392f00;
  *(undefined1 *)(param_1 + 0x638) = 9;
  *(undefined2 *)(iVar7 + param_1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(1,3);
}
