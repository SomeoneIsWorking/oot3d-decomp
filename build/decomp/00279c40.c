// OoT3D decomp @ 00279c40  name=FUN_00279c40  size=1288

void FUN_00279c40(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_58 [48];
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;

  iVar11 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  local_1c = 0;
  FUN_003510b0(param_1,DAT_0027a114);
  iVar9 = DAT_0027a118;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1e4,
                       *(undefined4 *)(iVar9 + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4),
                       param_1 + 0x1e8,*(undefined4 *)(iVar9 + 0x24),0);
  if (*(ushort *)(param_1 + 0x1c) >> 0xc == 8) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfff | 0x7000;
  }
  if (-1 < *(int *)(DAT_0027a11c + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4)) {
    uVar5 = FUN_00372f0c(uVar5);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0xc),uVar5);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1e4) + 0xc) + 0x10) = 1;
  }
  FUN_003532e8(param_1,1);
  local_1c = FUN_00353fd4(param_1,param_2,
                          *(undefined4 *)
                           (DAT_0027a120 + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4));
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_1c);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  pfVar3 = DAT_0027a134;
  uVar5 = DAT_0027a124;
  switch(*(ushort *)(param_1 + 0x1c) >> 0xc) {
  case 0:
    iVar9 = (int)*(short *)(iVar11 + 0x22);
    fVar16 = *(float *)(param_1 + 0x1c0) - DAT_0027a12c;
    fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar17 + DAT_0027a128) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    break;
  case 1:
    iVar9 = (int)*(short *)(iVar11 + 0x22);
    fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = *(float *)(param_1 + 0x1c0) - DAT_0027a130;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar17 + DAT_0027a128) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    break;
  case 2:
    iVar9 = (int)*(short *)(iVar11 + 0x22);
    fVar16 = *(float *)(param_1 + 0x1c0) - DAT_0027a12c;
    fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar17 + DAT_0027a128) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    fVar16 = *(float *)(param_1 + 0xc);
    uVar7 = in_fpscr & 0xfffffff;
    in_fpscr = uVar7 | (uint)(*pfVar3 == fVar16) << 0x1e;
    pfVar6 = pfVar3;
    if (SUB41(in_fpscr >> 0x1e,0)) {
LAB_00279eac:
      fVar16 = pfVar6[1];
    }
    else {
      pfVar6 = pfVar3 + 2;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279eac;
      pfVar6 = pfVar3 + 4;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279eac;
      pfVar6 = pfVar3 + 6;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279eac;
      pfVar6 = pfVar3 + 8;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279eac;
    }
    *(float *)(param_1 + 0x1e0) = fVar16;
    iVar9 = FUN_0036e864(param_2,0x1c);
    if (iVar9 == 0) {
      iVar9 = FUN_0036e864(param_2,0x1d);
      if (iVar9 == 0) {
        iVar9 = FUN_0036e864(param_2,0x1e);
        if (iVar9 == 0) goto LAB_00279efc;
        iVar9 = 3;
      }
      else {
        iVar9 = 2;
      }
    }
    else {
LAB_00279efc:
      iVar9 = 1;
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1c0) + *(float *)(DAT_0027a138 + iVar9 * 4);
    goto LAB_00279f1c;
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    fVar16 = *(float *)(param_1 + 0xc);
    uVar7 = in_fpscr & 0xfffffff;
    in_fpscr = uVar7 | (uint)(*pfVar3 == fVar16) << 0x1e;
    pfVar6 = pfVar3;
    if (SUB41(in_fpscr >> 0x1e,0)) {
LAB_00279fa0:
      fVar16 = pfVar6[1];
    }
    else {
      pfVar6 = pfVar3 + 2;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279fa0;
      pfVar6 = pfVar3 + 4;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279fa0;
      pfVar6 = pfVar3 + 6;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279fa0;
      pfVar6 = pfVar3 + 8;
      in_fpscr = uVar7 | (uint)(*pfVar6 == fVar16) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00279fa0;
    }
    *(float *)(param_1 + 0x1e0) = fVar16;
    iVar9 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    if (iVar9 == 0) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1c0);
    }
    else {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1c0) + DAT_0027a13c;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    goto switchD_00279d74_default;
  case 7:
    *(undefined4 *)(param_1 + 0x1c4) = 0xa0;
    *(undefined4 *)(param_1 + 0x1c8) = 0xa0;
    *(undefined4 *)(param_1 + 0x1cc) = 0xa0;
    *(undefined4 *)(param_1 + 0x1d0) = 0xa0;
    iVar9 = DAT_0027a140;
    uVar7 = *(ushort *)(param_1 + 0x1c) & 0xf;
    *(uint *)(param_1 + 0x1d8) = uVar7;
    psVar8 = (short *)(*(int *)(*(int *)(iVar9 + param_2) +
                                ((*(ushort *)(param_1 + 0x1c) & 0xf00) >> 5) + 4) + uVar7 * 6);
    uVar5 = VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    uVar5 = VectorSignedToFloat((int)psVar8[1],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar5 = DAT_0027a144;
    uVar15 = VectorSignedToFloat((int)psVar8[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar15;
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  default:
    goto switchD_00279d74_default;
  }
  if ((bool)(bVar2 >> 5)) {
    fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 + DAT_0027a128;
  }
  *(float *)(param_1 + 0x2c) = fVar16;
LAB_00279f1c:
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
switchD_00279d74_default:
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar10 = 3;
  bVar12 = uVar1 >> 0xc == 3;
  if (!bVar12) {
    uVar10 = 4;
  }
  bVar13 = uVar10 == uVar1 >> 0xc;
  if (!bVar12 && !bVar13) {
    uVar10 = 5;
  }
  bVar14 = uVar10 != uVar1 >> 0xc;
  if ((!bVar12 && !bVar13) && bVar14) {
    uVar10 = 6;
  }
  if (((bVar12 || bVar13) || !bVar14) || uVar10 == uVar1 >> 0xc) {
    if (((*(uint *)(DAT_0027a148 + 4) & 1) == 0) &&
       (iVar9 = FUN_003679b4(DAT_0027a14c), puVar4 = DAT_0027a15c, uVar15 = DAT_0027a158,
       uVar5 = DAT_0027a154, iVar9 != 0)) {
      *DAT_0027a15c = DAT_0027a150;
      puVar4[1] = uVar5;
      puVar4[2] = uVar15;
    }
    FUN_00372224(auStack_58,param_1 + 0x148);
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    FUN_003735e8(fVar16 * DAT_0027a160,auStack_58,0);
    FUN_003735ac(&local_28,auStack_58,DAT_0027a15c);
    iVar9 = FUN_0036aa20(*(float *)(param_1 + 0x28) + local_28,*(float *)(param_1 + 0x2c) + local_24
                         ,*(float *)(param_1 + 0x30) + local_20,param_2 + 0x208c,param_1,param_2,
                         DAT_0027a1b8,(int)*(short *)(param_1 + 0x34),
                         (int)*(short *)(param_1 + 0x36),(int)*(short *)(param_1 + 0x38),2);
    if (iVar9 == 0) {
      FUN_00374428(param_1);
    }
  }
  return;
}
