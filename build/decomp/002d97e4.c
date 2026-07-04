// OoT3D decomp @ 002d97e4  name=FUN_002d97e4  size=1560

void FUN_002d97e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,int param_12)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [4];
  int iStack_98;
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fVar25 = fRam002d9ba4;
  fVar24 = fRam002d9ba0;
  fVar17 = fRam002d9b9c;
  uStack_44 = CONCAT44(param_2,param_1);
  uStack_3c = CONCAT44(param_4,param_3);
  iStack_34 = param_5;
  iStack_30 = param_6;
  uStack_2c = param_7;
  uStack_28 = param_8;
  iVar4 = FUN_003373b8(*(undefined4 *)(param_6 + 0x26c),2);
  iVar5 = FUN_003373b8(*(undefined4 *)(param_6 + 0x26c),0);
  iVar6 = FUN_003373b8(*(undefined4 *)(param_6 + 0x26c),1);
  iVar7 = FUN_003373b8(*(undefined4 *)(param_6 + 0x26c),3);
  iStack_94 = FUN_003373b8(*(undefined4 *)(param_6 + 0x26c),4);
  afStack_a8[0] = *pfRam002d9ba8;
  afStack_a8[1] = pfRam002d9ba8[1];
  afStack_a8[2] = pfRam002d9ba8[2];
  afStack_a8[3] = pfRam002d9ba8[3];
  *(float *)(param_6 + 100) =
       *(float *)(param_6 + 100) +
       (afStack_a8[*(byte *)(param_5 + 0x31a8)] - *(float *)(param_6 + 100)) * fRam002d9bac;
  FUN_00484d94(param_5,&uStack_44,&fStack_90);
  fVar19 = fRam002d9bc4;
  uVar3 = uRam002d9bc0;
  uVar2 = uRam002d9bbc;
  iVar8 = iRam002d9bb0;
  *(short *)(iRam002d9bb0 + 0x14) = (short)(int)fStack_90;
  *(short *)(iVar8 + 0x16) = (short)(int)fStack_8c;
  if ((uRam002d9bb4 <= *(uint *)(iVar8 + 0x24)) || (param_12 == 0)) {
    uVar16 = in_fpscr & 0xfffffff;
    in_fpscr = uVar16 | (uint)(fVar25 <= fStack_90) << 0x1d;
    bVar11 = false;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      in_fpscr = uVar16 | (uint)(fVar25 <= fStack_8c) << 0x1d;
      bVar11 = SUB41(in_fpscr >> 0x1d,0);
    }
    if (bVar11) {
      bVar11 = SBORROW4((int)fStack_90,iRam002d9bc8);
      iVar8 = (int)fStack_90 - iRam002d9bc8;
      if ((int)fStack_90 < iRam002d9bc8) {
        bVar11 = SBORROW4((int)fStack_8c,iRam002d9bc8 + -0x580000);
        iVar8 = (int)fStack_8c - (iRam002d9bc8 + -0x580000);
      }
      if (((iVar8 < 0 != bVar11) &&
          (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar25 <= fStack_88) << 0x1d,
          SUB41(in_fpscr >> 0x1d,0))) && (iVar8 = FUN_003695f8(), iVar8 == 0)) {
        iStack_98 = 0;
        FUN_0036e168(fVar19,uVar3,uVar2,param_6 + 0x68);
        goto LAB_002d9994;
      }
    }
  }
  iStack_98 = 1;
  FUN_0036e168(fVar25,uVar3,uVar2,param_6 + 0x68);
LAB_002d9994:
  fVar18 = fRam002d9bd8;
  fVar26 = fRam002d9bd4;
  fVar23 = fVar17 - fStack_90;
  fVar13 = fVar24 - fStack_8c;
  fVar27 = (fVar23 * fVar23 + fVar13 * fVar13 + fVar25 * fVar25) * fRam002d9bcc;
  fVar23 = fVar23 * fRam002d9bd0;
  fVar13 = fVar13 * fRam002d9bd0;
  uVar16 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_6 + 0x68) == fVar25) << 0x1e;
  if (0x3f800000 < (int)fVar27) {
    fVar27 = fVar19;
  }
  iStack_80 = param_5 + 0x3200;
  iStack_84 = param_5 + 0xa00;
  if (!SUB41(uVar16 >> 0x1e,0)) {
    fVar14 = (float)FUN_0033f114(fVar13,fVar23);
    *(float *)(param_6 + 0x1dc) = fVar14 * fRam002d9bdc;
    bVar11 = false;
    if (*(char *)(param_6 + 0x17) == '\0') {
      uVar16 = uVar16 & 0xfffffff | (uint)(*(float *)(param_5 + 0x3218) == fVar25) << 0x1e;
      bVar11 = SUB41(uVar16 >> 0x1e,0);
    }
    fVar14 = fVar19;
    if ((!bVar11) && (*(ushort *)(iStack_84 + 0x7c) < 800)) {
      fVar14 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iStack_84 + 0x7c),(byte)(uVar16 >> 0x15) & 3);
      if (*(char *)(param_6 + 0x17) == '\0') {
        uVar1 = *(ushort *)(iStack_80 + 0x40);
        *(float *)(param_5 + 0x3218) = fVar25;
        fVar20 = (float)VectorUnsignedToFloat((uint)uVar1,(byte)(uVar16 >> 0x15) & 3);
        fVar14 = fVar14 / fVar20;
      }
      else {
        fVar14 = (fVar26 - fVar14) * fVar18;
        if (0x3f800000 < (int)fVar14) {
          fVar14 = fVar19;
        }
        fVar14 = fVar19 - fVar14;
      }
    }
    fVar20 = fRam002d9be0;
    fVar21 = *(float *)(param_6 + 0x68);
    iVar8 = 0;
    do {
      fVar15 = *(float *)(iVar4 + iVar8 * 4);
      fStack_b4 = fStack_90 + fVar23 * fVar15;
      fStack_b0 = fStack_8c + fVar13 * fVar15;
      fStack_ac = *(float *)(iVar7 + iVar8 * 4);
      fVar15 = *(float *)(iVar5 + iVar8 * 4);
      fVar22 = (float)VectorSignedToFloat(param_10,(byte)(uVar16 >> 0x15) & 3);
      FUN_00484f3c(fVar22 * fVar20 * (fVar15 + (*(float *)(iVar6 + iVar8 * 4) - fVar15) * fVar27),
                   fVar21 * fVar14,param_6 + 0xec,&fStack_b4,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xd);
  }
  if (param_11 != 0) {
    fStack_ac = fStack_88;
    fStack_90 = fStack_90 - fVar17;
    fStack_8c = fStack_8c - fVar24;
    uVar9 = uVar16 & 0xfffffff | (uint)(fStack_8c < fVar25) << 0x1f;
    uVar12 = uVar9 | (uint)(NAN(fStack_8c) || NAN(fVar25)) << 0x1c;
    if (NAN(fStack_90) || NAN(fVar25)) {
      fStack_90 = -fStack_90;
    }
    if ((byte)(uVar9 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) {
      fStack_8c = -fStack_8c;
    }
    fStack_b4 = fStack_90 * fRam002d9be4;
    fStack_b0 = fStack_8c * fRam002d9be8;
    if (iStack_98 == 0) {
      uVar12 = uVar16 & 0xfffffff | (uint)(fStack_b0 <= fStack_b4) << 0x1d;
      fVar17 = fStack_b4;
      if (!SUB41(uVar12 >> 0x1d,0)) {
        fVar17 = fStack_b0;
      }
      uVar16 = VectorFloatToUnsigned(fVar17 * UNK_002d9e4c,3);
      fVar17 = (float)FUN_002cfca8(uVar16 & 0xffff);
      FUN_0036e168(fVar19 - fVar17,uVar3,*(undefined4 *)(iRam002d9bb0 + 0x2c),
                   *(undefined4 *)(iRam002d9bb0 + 0x30),param_6 + 0x60);
    }
    else {
      FUN_0036e168(fVar25,uVar3,*(undefined4 *)(iRam002d9bb0 + 0x2c),
                   *(undefined4 *)(iRam002d9bb0 + 0x30),param_6 + 0x60);
    }
    bVar11 = false;
    if (*(char *)(param_6 + 0x17) == '\0') {
      uVar12 = uVar12 & 0xfffffff | (uint)(*(float *)(param_5 + 0x3218) == fVar25) << 0x1e;
      bVar11 = SUB41(uVar12 >> 0x1e,0);
    }
    if ((!bVar11) && (*(ushort *)(iStack_84 + 0x7c) < 800)) {
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iStack_84 + 0x7c),(byte)(uVar12 >> 0x15) & 3);
      if (*(char *)(param_6 + 0x17) == '\0') {
        uVar1 = *(ushort *)(iStack_80 + 0x40);
        *(float *)(param_5 + 0x3218) = fVar25;
        fVar19 = (float)VectorUnsignedToFloat((uint)uVar1,(byte)(uVar12 >> 0x15) & 3);
        fVar19 = fVar17 / fVar19;
      }
      else {
        fVar18 = (fVar26 - fVar17) * fVar18;
        if (0x3f800000 < (int)fVar18) {
          fVar18 = fVar19;
        }
        fVar19 = fVar19 - fVar18;
      }
    }
    uVar16 = uVar12 & 0xfffffff | (uint)(*(float *)(param_6 + 0x60) * fVar19 == fVar25) << 0x1e;
    if (!SUB41(uVar16 >> 0x1e,0)) {
      uVar12 = *(byte *)(param_6 + 0x1e1) & 3;
      uVar9 = *(byte *)(param_6 + 0x1e0) & 3;
      uVar10 = (uint)*(byte *)(iStack_94 + uVar9 * 4);
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_6 + 0x13),(byte)(uVar16 >> 0x15) & 3);
      iVar4 = iStack_94 + uVar12 * 4;
      fVar24 = (float)VectorSignedToFloat(*(byte *)(iStack_94 + uVar12 * 4) - uVar10,
                                          (byte)(uVar16 >> 0x15) & 3);
      fVar17 = fVar17 * UNK_002d9e50;
      fVar26 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar16 >> 0x15) & 3);
      iVar8 = iStack_94 + uVar9 * 4;
      fVar18 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 1) - (uint)*(byte *)(iVar8 + 1),
                                          (byte)(uVar16 >> 0x15) & 3);
      fVar25 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar8 + 1),(byte)(uVar16 >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 2) - (uint)*(byte *)(iVar8 + 2),
                                          (byte)(uVar16 >> 0x15) & 3);
      fVar27 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar8 + 2),(byte)(uVar16 >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 3) - (uint)*(byte *)(iVar8 + 3),
                                          (byte)(uVar16 >> 0x15) & 3);
      fVar23 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar8 + 3),(byte)(uVar16 >> 0x15) & 3);
      fStack_c4 = (fVar26 + fVar24 * fVar17) * UNK_002d9e50;
      fStack_c0 = (fVar25 + fVar18 * fVar17) * UNK_002d9e50;
      fStack_bc = (fVar27 + fVar13 * fVar17) * UNK_002d9e50;
      fStack_b8 = (fVar23 + fVar14 * fVar17) * UNK_002d9e50 * *(float *)(param_6 + 0x60) *
                  *(float *)(param_6 + 100) * fVar19;
      if (((*UNK_002d9e54 & 1) == 0) && (iVar8 = FUN_003679b4(UNK_002d9e54), iVar8 != 0)) {
        FUN_0036788c(UNK_002d9e58);
      }
      FUN_003339e8(UNK_002d9e64,2,&fStack_c4,0);
    }
  }
  return;
}

