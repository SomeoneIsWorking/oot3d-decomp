// OoT3D decomp @ 003aea04  name=FUN_003aea04  size=520

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003aea04(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar12 = DAT_003aec10;
  uVar6 = *(ushort *)(param_1 + 0x1c) & 3;
  FUN_0036e168(DAT_003aec18,DAT_003aec14,DAT_003aec10,DAT_003aec0c,param_1 + 0x6c);
  fVar9 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x30);
  fVar11 = fVar9 - *(float *)(param_1 + 8);
  fVar10 = fVar8 - *(float *)(param_1 + 0x10);
  if (DAT_003aec1c < (int)(fVar11 * fVar11 + fVar10 * fVar10)) {
LAB_003aeaac:
    uVar3 = FUN_003758b0(*(float *)(param_1 + 0x10) - fVar8,*(float *)(param_1 + 8) - fVar9);
    FUN_00370378(param_1 + 0x36,uVar3,2000);
  }
  else {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003aec20 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 + (DAT_003aec24 / fVar10) * DAT_003aec28;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x64a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar10) << 0x1f |
            (uint)(fVar12 == fVar10) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar12) || NAN(fVar10)) << 0x1c;
    bVar2 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_003aeaac;
    iVar4 = *(int *)(param_1 + 0x128);
    if (iVar4 != 0 && iVar4 != param_1) {
      uVar3 = FUN_003758b0(*(float *)(iVar4 + 0x30) - fVar8,*(float *)(iVar4 + 0x28) - fVar9);
      FUN_00370378(param_1 + 0x36,uVar3,2000);
    }
  }
  iVar4 = DAT_003aec30;
  fVar12 = DAT_003aec2c;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  fVar12 = *(float *)(param_1 + 0x6c) * fVar12;
  fVar8 = DAT_003aec34;
  if ((iVar4 <= (int)fVar12) && (fVar8 = fVar12, DAT_003aec38 < (int)fVar12)) {
    fVar8 = DAT_003aec3c;
  }
  *(float *)(param_1 + 0x254) = fVar8;
  FUN_003731e0(param_1 + 0x214);
  if (*(short *)(param_1 + 0x64a) < 1) {
    FUN_00352b58(param_1);
  }
  uVar1 = *(ushort *)(param_1 + 0x644);
  if (((uVar1 & 4) != 0) && (*(short *)(param_1 + 0x64c) < 1)) {
LAB_003aebb0:
    FUN_00352c20(param_1);
    return;
  }
  if (uVar6 == 2 || uVar6 == 3) {
    if ((uVar1 & 1) == 0) goto LAB_003aebe0;
    uVar5 = *(ushort *)(param_1 + 0x90) & 1;
    bVar7 = (*(ushort *)(param_1 + 0x90) & 1) != 0;
    if (bVar7) {
      uVar5 = (uint)*(short *)(DAT_003aec40 + param_2);
    }
    if (bVar7 && 3 < (int)uVar5) goto LAB_003aebb0;
  }
  else if ((uVar1 & 1) == 0) goto LAB_003aebe0;
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352d9c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352d9c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8((int)(short)(int)(DAT_00352da8 + (DAT_00352da0 / fVar8) * DAT_00352dac),
                 (int)(short)(int)(DAT_00352da8 + (DAT_00352da0 / fVar12) * DAT_00352da4));
  }
LAB_003aebe0:
  if (DAT_003aec44 <= *(int *)(param_1 + 0x98)) {
    return;
  }
  FUN_00317908(param_1);
  return;
}
