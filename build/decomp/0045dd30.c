// OoT3D decomp @ 0045dd30  name=FUN_0045dd30  size=4828

void FUN_0045dd30(int param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar3 = fRam0045e124;
  iVar18 = *(int *)(param_1 + 0x3230);
  iVar8 = FUN_003695f8();
  if (iVar8 != 0) {
    return;
  }
  FUN_003695f8();
  bVar5 = *(byte *)(param_1 + 0x326e);
  if (*(byte *)(param_1 + 0x326e) <= *(byte *)(param_1 + 0x3272)) {
    bVar5 = *(byte *)(param_1 + 0x3272);
  }
  bVar1 = *(byte *)(param_1 + 0x326f);
  if ((bVar1 != bVar5) && ((*(uint *)(param_1 + 0xf8) & 7) == 0)) {
    if (bVar1 < bVar5) {
      cVar6 = bVar1 + 2;
    }
    else {
      cVar6 = bVar1 - 2;
    }
    *(char *)(param_1 + 0x326f) = cVar6;
  }
  FUN_00470b08(param_1);
  uVar21 = uRam0045e12c;
  iVar8 = iRam0045e128;
  uVar9 = (uint)*(ushort *)(iRam0045e128 + 0xa4);
  if ((0xfeff < uVar9) && (uVar9 != uRam0045e12c)) {
    uVar10 = uVar9 - 0x10 & 0xffff;
    *(short *)(iRam0045e128 + 0xa4) = (short)(uVar9 - 0x10);
    if (uVar10 == 0xff0e) {
      FUN_0037547c(uRam0045e138,0,4,uRam0045e134,uRam0045e134,uRam0045e130);
      *(short *)(iVar8 + 0xa4) = (short)uVar21;
    }
    else if (uVar10 == 0xff0d) {
      FUN_0037547c(uRam0045e13c,0,4,uRam0045e134,uRam0045e134,uRam0045e130);
      *(short *)(iVar8 + 0xa4) = (short)uVar21;
    }
  }
  uVar9 = FUN_003695f8();
  iVar17 = iRam0045e140;
  bVar19 = uVar9 == 0;
  if (bVar19) {
    uVar9 = (uint)*param_5;
  }
  if (bVar19 && uVar9 == 0) {
    iVar11 = FUN_00366748(param_1);
    iVar4 = iRam0045e144;
    iVar12 = 0;
    if (iVar11 != 0) {
      iVar12 = *(int *)(iRam0045e144 + 0x4e4);
    }
    if ((((iVar11 == 0 || iVar12 == 3) && (*(short *)(param_2 + 0x1c) == 0)) &&
        (iVar12 = FUN_00366738(param_1), iVar12 == 0)) &&
       ((iVar12 = FUN_00374be8(param_1,4), iVar12 == 0 &&
        ((*(char *)(iRam0045e148 + param_1) == '\0' || (*(int *)(iVar4 + 0x4e4) != 0)))))) {
      bVar19 = *(int *)(iVar17 + 0x10) != 0;
      uVar9 = 0;
      if (bVar19) {
        uVar9 = (uint)*(ushort *)(iRam0045e158 + 10);
      }
      if (bVar19 && uVar9 < 400) {
        if (uVar9 == 0) {
          fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piRam0045e14c + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar7 = (short)(int)(fVar26 * fVar3 * fRam0045e150 - fRam0045e154);
        }
        else {
          fVar26 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar28 = (float)VectorSignedToFloat((int)*(short *)(*piRam0045e14c + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar7 = (short)(int)(fRam0045e154 + fVar28 * fVar26 * fRam0045e150);
        }
        sVar7 = *(short *)(iVar17 + 0xc) + sVar7 * 2;
      }
      else {
        if (*(ushort *)(iRam0045e158 + 10) == 0) {
          fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piRam0045e14c + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar7 = (short)(int)(fVar26 * fVar3 * fRam0045e150 - fRam0045e154);
        }
        else {
          fVar26 = (float)VectorUnsignedToFloat
                                    ((uint)*(ushort *)(iRam0045e158 + 10),
                                     (byte)(in_fpscr >> 0x15) & 3);
          fVar28 = (float)VectorSignedToFloat((int)*(short *)(*piRam0045e14c + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar7 = (short)(int)(fRam0045e154 + fVar28 * fVar26 * fRam0045e150);
        }
        sVar7 = sVar7 + *(short *)(iVar17 + 0xc);
      }
      *(short *)(iVar17 + 0xc) = sVar7;
    }
  }
  uVar9 = (uint)*(ushort *)(iVar17 + 0xc);
  if ((*(ushort *)(iVar8 + 0xa8) < uVar9) || (uVar9 < uRam0045e15c)) {
    *(ushort *)(iVar8 + 0xa8) = *(ushort *)(iVar17 + 0xc);
  }
  *(uint *)(iVar17 + 0x10) = (uint)(uRam0045e160 <= uVar9 - 0x4555);
  bVar5 = *(byte *)(param_2 + 0xa7);
  if (bVar5 != 0xff) {
    bVar1 = *(byte *)(param_2 + 0xcc);
    bVar19 = bVar1 != 2;
    if (bVar19) {
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    if (((bVar19 && bVar1 != bVar5) && (0x3f7fffff < *(int *)(param_2 + 200))) && (bVar5 < 0x20)) {
      *(float *)(param_2 + 200) = fVar3;
      *(byte *)(param_2 + 0xa6) = bVar1;
      *(byte *)(param_2 + 0xa5) = bVar5;
    }
    if (bVar5 == 0xfe) goto LAB_0045eeb8;
  }
  iVar4 = iRam0045e168;
  fVar26 = fRam0045e164;
  iVar12 = iRam0045e158;
  if (*(char *)(param_2 + 0x20) == '\0' && bVar5 == 0xff) {
    uVar10 = (uint)*(ushort *)(iVar8 + 0xa8);
    uVar9 = 0;
    iVar8 = iRam0045e168 + (uint)*(byte *)(param_2 + 0x21) * 0x36;
    do {
      puVar16 = (ushort *)(iVar8 + uVar9 * 6);
      if ((*puVar16 <= uVar10) && ((uVar10 < puVar16[1] || (puVar16[1] == uVar21)))) {
        uVar13 = (uint)*(ushort *)(iVar8 + uVar9 * 6 + 2);
        fVar28 = (float)VectorSignedToFloat(uVar13 - *puVar16,(byte)(in_fpscr >> 0x15) & 3);
        uVar21 = in_fpscr & 0xfffffff | (uint)(fVar28 == fVar3) << 0x1e;
        if (!SUB41(uVar21 >> 0x1e,0)) {
          fVar24 = (float)VectorSignedToFloat(uVar13 - uVar10,(byte)(uVar21 >> 0x15) & 3);
          fVar28 = fRam0045e164 - fVar24 / fVar28;
          if ((int)fVar28 < 0x3f800000) {
            fVar26 = fVar28;
          }
        }
        *(float *)(iRam0045e158 + 0x3c) = fVar26;
        uVar2 = puVar16[2];
        *(byte *)(iVar12 + 7) = (byte)uVar2;
        bVar5 = *(byte *)((int)puVar16 + 5);
        *(byte *)(iVar12 + 8) = bVar5;
        *(byte *)(iVar12 + 4) = (byte)uVar2 & 3;
        *(byte *)(iVar12 + 5) = bVar5 & 3;
        *(float *)(iVar12 + 0x28) = fVar26;
        fVar28 = fVar3;
        if (*(char *)(param_2 + 0x23) != '\0') {
          fVar25 = (float)VectorUnsignedToFloat
                                    ((uint)*(ushort *)(param_2 + 0x26),(byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat
                                    ((uint)*(ushort *)(param_2 + 0x24),(byte)(uVar21 >> 0x15) & 3);
          uVar10 = *(ushort *)(param_2 + 0x24) - 1;
          fVar28 = (float)VectorUnsignedToFloat
                                    ((uint)*(ushort *)(param_2 + 0x26),(byte)(uVar21 >> 0x15) & 3);
          *(short *)(param_2 + 0x24) = (short)(uVar10 * 0x10000 >> 0x10);
          fVar28 = (fVar25 - fVar24) / fVar28;
          if ((uVar10 & 0xffff) == 0) {
            *(undefined1 *)(param_2 + 0x23) = 0;
            *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_2 + 0x22);
          }
        }
        iVar8 = iVar4 + (uint)*(byte *)(param_2 + 0x21) * 0x36 + uVar9 * 6;
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 10);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     10) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar13 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        iVar12 = iVar4 + (uint)*(byte *)(param_2 + 0x22) * 0x36 + uVar9 * 6;
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 4) * 0x1c + 10);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 5) * 0x1c +
                                                     10) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar10 & 0xff) - (uVar13 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar13 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xb2) = (char)uVar22;
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 0xb);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     0xb) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar13 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 4) * 0x1c + 0xb);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 5) * 0x1c +
                                                     0xb) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar10 & 0xff) - (uVar13 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar13 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xb3) = (char)uVar22;
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 0xc);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     0xc) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar13 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 4) * 0x1c + 0xc);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 5) * 0x1c +
                                                     0xc) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar10 & 0xff) - (uVar13 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar13 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xb4) = (char)uVar22;
        fVar24 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));
        *(char *)(param_2 + 0xb5) = (char)(int)(fVar24 * fRam0045e804);
        fVar24 = (float)FUN_00338f60((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));
        *(char *)(param_2 + 0xb6) = (char)(int)(fVar24 * fRam0045e808);
        fVar24 = (float)FUN_00338f60((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));
        cVar6 = (char)(int)(fVar24 * fRam0045e80c);
        *(char *)(param_2 + 0xb7) = cVar6;
        *(char *)(param_2 + 0xbb) = -*(char *)(param_2 + 0xb5);
        *(char *)(param_2 + 0xbc) = -*(char *)(param_2 + 0xb6);
        *(char *)(param_2 + 0xbd) = -cVar6;
        uVar10 = 0;
        do {
          iVar8 = iVar4 + (uint)*(byte *)(param_2 + 0x21) * 0x36 + uVar9 * 6;
          uVar13 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + uVar10 + 0x10);
          fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                        uVar10 + 0x10) - uVar13,
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar21 >> 0x15) & 3);
          uVar23 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
          iVar8 = iVar4 + (uint)*(byte *)(param_2 + 0x22) * 0x36 + uVar9 * 6;
          uVar13 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + uVar10 + 0x10);
          fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                        uVar10 + 0x10) - uVar13,
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar21 >> 0x15) & 3);
          uVar13 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
          iVar17 = param_2 + uVar10;
          fVar25 = (float)VectorSignedToFloat((uVar13 & 0xff) - (uVar23 & 0xff),
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar23 & 0xff,(byte)(uVar21 >> 0x15) & 3);
          uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
          *(char *)(iVar17 + 0xb8) = (char)uVar22;
          iVar8 = iVar4 + (uint)*(byte *)(param_2 + 0x21) * 0x36 + uVar9 * 6;
          uVar13 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + uVar10 + 0x16);
          fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                        uVar10 + 0x16) - uVar13,
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar21 >> 0x15) & 3);
          uVar23 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
          iVar12 = iVar4 + (uint)*(byte *)(param_2 + 0x22) * 0x36 + uVar9 * 6;
          iVar8 = iVar18 + (uint)*(byte *)(iVar12 + 5) * 0x1c + uVar10;
          uVar13 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar12 + 4) * 0x1c + uVar10 + 0x16);
          uVar10 = uVar10 + 1 & 0xffff;
          fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar8 + 0x16) - uVar13,
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar21 >> 0x15) & 3);
          uVar13 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
          fVar25 = (float)VectorSignedToFloat((uVar13 & 0xff) - (uVar23 & 0xff),
                                              (byte)(uVar21 >> 0x15) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar23 & 0xff,(byte)(uVar21 >> 0x15) & 3);
          uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
          *(char *)(iVar17 + 0xbe) = (char)uVar22;
        } while (uVar10 < 3);
        iVar8 = iVar4 + (uint)*(byte *)(param_2 + 0x21) * 0x36 + uVar9 * 6;
        uVar10 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 0x19);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     0x19) - uVar10,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        iVar17 = iVar4 + (uint)*(byte *)(param_2 + 0x22) * 0x36 + uVar9 * 6;
        uVar9 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 4) * 0x1c + 0x19);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 5) * 0x1c +
                                                     0x19) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar9 & 0xff) - (uVar10 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xc1) = (char)uVar22;
        uVar9 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 0x1a);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     0x1a) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        uVar9 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 4) * 0x1c + 0x1a);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 5) * 0x1c +
                                                     0x1a) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar9 & 0xff) - (uVar10 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xc2) = (char)uVar22;
        uVar9 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 0x1b);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c +
                                                     0x1b) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar10 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        uVar9 = (uint)*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 4) * 0x1c + 0x1b);
        fVar25 = (float)VectorSignedToFloat(*(byte *)(iVar18 + (uint)*(byte *)(iVar17 + 5) * 0x1c +
                                                     0x1b) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar26,3);
        fVar25 = (float)VectorSignedToFloat((uVar9 & 0xff) - (uVar10 & 0xff),
                                            (byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar10 & 0xff,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + fVar25 * fVar28,3);
        *(char *)(param_2 + 0xc3) = (char)uVar22;
        uVar9 = *(ushort *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 8) & 0xffff03ff;
        fVar25 = (float)VectorSignedToFloat((*(ushort *)
                                              (iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c + 8) &
                                            0xffff03ff) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar24 = fVar24 + fVar25 * fVar26;
        uVar9 = *(ushort *)(iVar18 + (uint)*(byte *)(iVar17 + 4) * 0x1c + 8) & 0xffff03ff;
        fVar27 = (float)VectorSignedToFloat((*(ushort *)
                                              (iVar18 + (uint)*(byte *)(iVar17 + 5) * 0x1c + 8) &
                                            0xffff03ff) - uVar9,(byte)(uVar21 >> 0x15) & 3);
        fVar25 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar21 >> 0x15) & 3);
        uVar22 = VectorFloatToUnsigned(fVar24 + ((fVar25 + fVar27 * fVar26) - fVar24) * fVar28,3);
        *(short *)(param_2 + 0xb0) = (short)uVar22;
        fVar24 = *(float *)(iVar18 + (uint)*(byte *)(iVar8 + 4) * 0x1c + 4);
        fVar24 = fVar24 + (*(float *)(iVar18 + (uint)*(byte *)(iVar8 + 5) * 0x1c + 4) - fVar24) *
                          fVar26;
        fVar25 = *(float *)(iVar18 + (uint)*(byte *)(iVar17 + 4) * 0x1c + 4);
        *(float *)(param_2 + 0xac) =
             fVar24 + ((fVar25 + (*(float *)(iVar18 + (uint)*(byte *)(iVar17 + 5) * 0x1c + 4) -
                                 fVar25) * fVar26) - fVar24) * fVar28;
        *(undefined4 *)(param_2 + 0xa8) =
             *(undefined4 *)(iVar18 + (uint)*(byte *)(param_2 + 0xa5) * 0x1c);
        break;
      }
      uVar9 = uVar9 + 1 & 0xffff;
    } while (uVar9 < 9);
  }
  else {
    pfVar14 = (float *)(iVar18 + (uint)*(byte *)(param_2 + 0xa5) * 0x1c);
    if (*(char *)(param_2 + 0xa4) == '\0') {
      *(undefined1 *)(param_2 + 0xb2) = *(undefined1 *)((int)pfVar14 + 10);
      *(undefined1 *)(param_2 + 0xb5) = *(undefined1 *)((int)pfVar14 + 0xd);
      *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(pfVar14 + 4);
      *(undefined1 *)(param_2 + 0xbb) = *(undefined1 *)((int)pfVar14 + 0x13);
      *(undefined1 *)(param_2 + 0xbe) = *(undefined1 *)((int)pfVar14 + 0x16);
      *(undefined1 *)(param_2 + 0xc1) = *(undefined1 *)((int)pfVar14 + 0x19);
      *(undefined1 *)(param_2 + 0xb3) = *(undefined1 *)((int)pfVar14 + 0xb);
      *(undefined1 *)(param_2 + 0xb6) = *(undefined1 *)((int)pfVar14 + 0xe);
      *(undefined1 *)(param_2 + 0xb9) = *(undefined1 *)((int)pfVar14 + 0x11);
      *(undefined1 *)(param_2 + 0xbc) = *(undefined1 *)(pfVar14 + 5);
      *(undefined1 *)(param_2 + 0xbf) = *(undefined1 *)((int)pfVar14 + 0x17);
      *(undefined1 *)(param_2 + 0xc2) = *(undefined1 *)((int)pfVar14 + 0x1a);
      *(undefined1 *)(param_2 + 0xb4) = *(undefined1 *)(pfVar14 + 3);
      *(undefined1 *)(param_2 + 0xb7) = *(undefined1 *)((int)pfVar14 + 0xf);
      *(undefined1 *)(param_2 + 0xba) = *(undefined1 *)((int)pfVar14 + 0x12);
      *(undefined1 *)(param_2 + 0xbd) = *(undefined1 *)((int)pfVar14 + 0x15);
      *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(pfVar14 + 6);
      *(undefined1 *)(param_2 + 0xc3) = *(undefined1 *)((int)pfVar14 + 0x1b);
      *(ushort *)(param_2 + 0xb0) = *(ushort *)(pfVar14 + 2) & 0x3ff;
      *(float *)(param_2 + 0xac) = pfVar14[1];
      *(float *)(param_2 + 0xa8) = *pfVar14;
      *(float *)(param_2 + 200) = fVar26;
    }
    else {
      fVar28 = *(float *)(param_2 + 200);
      uVar9 = (uint)(*(ushort *)(pfVar14 + 2) >> 10) << 2;
      if (*(ushort *)(pfVar14 + 2) >> 10 == 0) {
        uVar9 = 1;
      }
      if (*(ushort *)(param_2 + 0xc4) != uVar21) {
        uVar9 = *(ushort *)(param_2 + 0xc4) & 0xff;
      }
      if (*(char *)(param_2 + 0xcc) == '\0') {
        fVar24 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
        fVar28 = fVar28 + fVar24 * fRam0045ef14;
        *(float *)(param_2 + 200) = fVar28;
      }
      if ((int)fVar28 < 0x3f800001) {
        fVar26 = fVar28;
      }
      *(float *)(param_2 + 200) = fVar26;
      pfVar15 = (float *)(iVar18 + (uint)*(byte *)(param_2 + 0xa6) * 0x1c);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 10) -
                                          (uint)*(byte *)((int)pfVar15 + 10),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xb2) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)((int)pfVar14 + 0xd) -
                                          (int)*(char *)((int)pfVar15 + 0xd),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xb5) = *(char *)((int)pfVar15 + 0xd) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)(pfVar14 + 4) -
                                          (uint)*(byte *)(pfVar15 + 4),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(pfVar15 + 4),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xb8) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)((int)pfVar14 + 0x13) -
                                          (int)*(char *)((int)pfVar15 + 0x13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xbb) = *(char *)((int)pfVar15 + 0x13) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x16) -
                                          (uint)*(byte *)((int)pfVar15 + 0x16),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x16),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xbe) = (char)uVar22;
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x19) -
                                          (uint)*(byte *)((int)pfVar15 + 0x19),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x19),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xc1) = (char)uVar22;
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0xb) -
                                          (uint)*(byte *)((int)pfVar15 + 0xb),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0xb),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xb3) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)((int)pfVar14 + 0xe) -
                                          (int)*(char *)((int)pfVar15 + 0xe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xb6) = *(char *)((int)pfVar15 + 0xe) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x11) -
                                          (uint)*(byte *)((int)pfVar15 + 0x11),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xb9) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)(pfVar14 + 5) - (int)*(char *)(pfVar15 + 5),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xbc) = *(char *)(pfVar15 + 5) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x17) -
                                          (uint)*(byte *)((int)pfVar15 + 0x17),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x17),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xbf) = (char)uVar22;
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x1a) -
                                          (uint)*(byte *)((int)pfVar15 + 0x1a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x1a),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xc2) = (char)uVar22;
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)(pfVar14 + 3) -
                                          (uint)*(byte *)(pfVar15 + 3),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(pfVar15 + 3),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xb4) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)((int)pfVar14 + 0xf) -
                                          (int)*(char *)((int)pfVar15 + 0xf),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xb7) = *(char *)((int)pfVar15 + 0xf) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x12) -
                                          (uint)*(byte *)((int)pfVar15 + 0x12),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xba) = (char)uVar22;
      fVar28 = (float)VectorSignedToFloat((int)*(char *)((int)pfVar14 + 0x15) -
                                          (int)*(char *)((int)pfVar15 + 0x15),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0xbd) = *(char *)((int)pfVar15 + 0x15) + (char)(int)(fVar28 * fVar26);
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)(pfVar14 + 6) -
                                          (uint)*(byte *)(pfVar15 + 6),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(pfVar15 + 6),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xc0) = (char)uVar22;
      fVar24 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar14 + 0x1b) -
                                          (uint)*(byte *)((int)pfVar15 + 0x1b),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)pfVar15 + 0x1b),(byte)(in_fpscr >> 0x15) & 3);
      uVar22 = VectorFloatToUnsigned(fVar28 + fVar24 * fVar26,3);
      *(char *)(param_2 + 0xc3) = (char)uVar22;
      *(float *)(param_2 + 0xa8) = *pfVar15 + (*pfVar14 - *pfVar15) * fVar26;
      *(float *)(param_2 + 0xac) = pfVar15[1] + (pfVar14[1] - pfVar15[1]) * fVar26;
      fVar28 = (float)VectorSignedToFloat((*(ushort *)(pfVar14 + 2) & 0xffff03ff) -
                                          (*(ushort *)(pfVar15 + 2) & 0xffff03ff),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_2 + 0xb0) =
           (short)(*(ushort *)(pfVar15 + 2) & 0xffff03ff) + (short)(int)(fVar28 * fVar26);
    }
  }
LAB_0045eeb8:
  iVar8 = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  do {
    iVar18 = param_2 + iVar8;
    iVar17 = param_2 + iVar8 * 2;
    sVar7 = (ushort)*(byte *)(iVar18 + 0xb2) + *(short *)(iVar17 + 0x6c);
    if (sVar7 < 0x100) {
      if (sVar7 < 0) {
        *(undefined1 *)(param_3 + iVar8 + 0xe) = 0;
      }
      else {
        *(char *)(param_3 + iVar8 + 0xe) = (char)sVar7;
      }
    }
    else {
      *(undefined1 *)(param_3 + iVar8 + 0xe) = 0xff;
    }
    sVar7 = (ushort)*(byte *)(iVar18 + 0xb8) + *(short *)(iVar17 + 0x72);
    if (sVar7 < 0x100) {
      if (sVar7 < 0) {
        *(undefined1 *)(iVar18 + 0x33) = 0;
      }
      else {
        *(char *)(iVar18 + 0x33) = (char)sVar7;
      }
    }
    else {
      *(undefined1 *)(iVar18 + 0x33) = 0xff;
    }
    sVar7 = (ushort)*(byte *)(iVar18 + 0xbe) + *(short *)(iVar17 + 0x72);
    if (sVar7 < 0x100) {
      if (sVar7 < 0) {
        *(undefined1 *)(iVar18 + 0x4b) = 0;
      }
      else {
        *(char *)(iVar18 + 0x4b) = (char)sVar7;
      }
    }
    else {
      *(undefined1 *)(iVar18 + 0x4b) = 0xff;
    }
    sVar7 = (ushort)*(byte *)(iVar18 + 0xc1) + *(short *)(iVar17 + 0x78);
    if (sVar7 < 0x100) {
      if (sVar7 < 0) {
        *(undefined1 *)(param_3 + iVar8 + 0x12) = 0;
      }
      else {
        *(char *)(param_3 + iVar8 + 0x12) = (char)sVar7;
      }
    }
    else {
      *(undefined1 *)(param_3 + iVar8 + 0x12) = 0xff;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_2 + 0xb5);
  *(undefined1 *)(param_2 + 0x31) = *(undefined1 *)(param_2 + 0xb6);
  *(undefined1 *)(param_2 + 0x32) = *(undefined1 *)(param_2 + 0xb7);
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_2 + 0xbb);
  *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_2 + 0xbc);
  *(undefined1 *)(param_2 + 0x4a) = *(undefined1 *)(param_2 + 0xbd);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0xa8);
  if ((int)*(short *)(param_2 + 0xb0) + (int)*(short *)(param_2 + 0x7e) < 0) {
    *(undefined2 *)(param_3 + 0xc) = 0;
  }
  else {
    *(short *)(param_3 + 0xc) = *(short *)(param_2 + 0x7e) + *(short *)(param_2 + 0xb0);
  }
  fVar26 = *(float *)(param_2 + 0xac) + *(float *)(param_2 + 0x84);
  *(float *)(param_3 + 8) = fVar26;
  if (fVar26 <= fVar3) {
    fVar26 = fVar3;
  }
  *(float *)(param_3 + 8) = fVar26;
  cVar6 = *(char *)(param_2 + 0x30);
  bVar19 = cVar6 == '\0';
  if (bVar19) {
    cVar6 = *(char *)(param_2 + 0x31);
  }
  bVar20 = bVar19 && cVar6 == '\0';
  if (bVar19 && cVar6 == '\0') {
    bVar20 = *(char *)(param_2 + 0x32) == '\0';
  }
  if (bVar20) {
    *(undefined1 *)(param_2 + 0x30) = 1;
  }
  cVar6 = *(char *)(param_2 + 0x48);
  bVar19 = cVar6 == '\0';
  if (bVar19) {
    cVar6 = *(char *)(param_2 + 0x49);
  }
  bVar20 = bVar19 && cVar6 == '\0';
  if (bVar19 && cVar6 == '\0') {
    bVar20 = *(char *)(param_2 + 0x4a) == '\0';
  }
  if (bVar20) {
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
  return;
}

