// OoT3D decomp @ 00236420  name=FUN_00236420  size=284

undefined4 FUN_00236420(float *param_1)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  float fVar15;
  float extraout_s0;
  float fVar16;
  float fVar17;
  float extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float fVar18;
  float extraout_s2;
  float extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  float fVar19;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_d8 [20];
  undefined4 uStack_c4;
  undefined4 uStack_b0;
  float fStack_ac;
  short sStack_a8;
  short sStack_a6;
  float fStack_9c;
  short sStack_98;
  short sStack_96;
  float fStack_94;
  float fStack_90;
  short sStack_8c;
  short sStack_8a;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_5c;
  float fStack_58;
  float fStack_54;

  pfVar12 = param_1 + 0x20;
  bVar13 = false;
  uStack_c4 = 0;
  fVar15 = (float)FUN_00367ef0(param_1[0x36]);
  fVar18 = fRam002367cc;
  fVar17 = fRam002367c8;
  fVar7 = param_1[0x3c];
  iVar8 = 0;
  if (fVar7 != 0.0) {
    iVar8 = *(int *)((int)fVar7 + 0x13c);
  }
  if (fVar7 == 0.0 || iVar8 == 0) {
    param_1[0x3c] = 0.0;
    FUN_0033228c(param_1,1,0);
    return 1;
  }
  pfVar11 = param_1 + 0x40;
  psVar9 = *(short **)
            (*(int *)(iRam002367bc + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piRam002367c4 + 0x1f0),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piRam002367c4 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (fRam002367cc + fVar19 * fRam002367c8) - (fRam002367c0 / fVar15) * fVar7 * fRam002367c8;
  fVar7 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar7 * fRam002367c8 * fVar15 * fVar19;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[7] = fVar7 * fVar17;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0x10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[8] = fVar7;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0x12],(byte)(in_fpscr >> 0x15) & 3);
  param_1[9] = fVar7 * fVar17;
  *(short *)(param_1 + 0xc) = psVar9[0x14];
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0x16],(byte)(in_fpscr >> 0x15) & 3);
  param_1[10] = fVar7 * fVar17 * fVar15 * fVar19;
  fVar7 = (float)VectorSignedToFloat((int)psVar9[0x18],(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xb] = fVar7 * fVar17;
  fVar15 = *param_1 + fVar15;
  FUN_00372474(&fStack_90,pfVar12,param_1 + 0x23);
  FUN_00372474(&sStack_98,pfVar12,param_1 + 0x29);
  fVar7 = fRam002367d4;
  iVar8 = iRam002367d0;
  *(int *)(iRam002367d0 + 0x14) = (int)*(short *)(param_1 + 0xc);
  sVar2 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar2 == 0 || sVar2 == 10) || sVar2 == 0x14) {
    *(short *)((int)param_1 + 0x1a6) = sVar2 + 1;
    param_1[0xe] = fVar7;
    *(undefined2 *)(param_1 + 0x11) = 0;
    piVar5 = piRam002367c4;
    param_1[0x10] = param_1[0x3c];
    *(short *)((int)param_1 + 0x4a) = *(short *)(*piVar5 + 0x1c4) + *(short *)(*piVar5 + 0x1c2);
    *(short *)((int)param_1 + 0x46) = sStack_8a;
    *(short *)(param_1 + 0x12) = sStack_8c;
    param_1[0xd] = fStack_90;
    param_1[0xf] = param_1[0x38] - param_1[0x4f];
  }
  if (*(short *)(param_1 + 0x62) == 7) {
    *(undefined4 *)(iVar8 + 0x24) = 1;
    *(short *)(param_1 + 0x5f) = -sStack_8c;
    *(short *)((int)param_1 + 0x17e) = sStack_8a + -0x7fff;
    *(undefined2 *)(param_1 + 0x60) = 0;
  }
  uVar6 = uRam002367d8;
  fVar19 = param_1[1];
  if ((*(ushort *)(param_1 + 0x69) & 0x18) == 8) {
    if ((*(char *)((int)param_1[0x36] + 2) == '\x02') &&
       (*(float *)(iRam00236bc4 + (int)param_1[0x36]) == param_1[0x3c])) {
      FUN_00338790(&uStack_ec);
      fStack_88 = fRam00236bc8;
      uStack_84 = CONCAT22(*(undefined2 *)((int)param_1 + 0xea),(short)uRam00236bcc);
      FUN_00372448(&uStack_ec,&fStack_88);
      param_1[0x3d] = extraout_s0;
      param_1[0x3e] = extraout_s1;
      param_1[0x3f] = extraout_s2;
    }
    else {
      FUN_00338790(&uStack_ec,param_1[0x3c]);
      FUN_00371738(param_1 + 0x3d,&uStack_ec,0x12);
    }
    FUN_00338790(auStack_d8,param_1[0x3c]);
    FUN_00371738(param_1 + 0x3d,auStack_d8,0x12);
    piVar5 = piRam002367c4;
    if (param_1[0x10] != param_1[0x3c]) {
      param_1[0x10] = param_1[0x3c];
      param_1[0x52] = fVar7;
    }
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar7 = (float)FUN_00355780(fVar18,param_1[0x45],param_1[0x4a] * fVar7 * fVar17,uVar6);
    param_1[0x45] = fVar7;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar7 = (float)FUN_00355780(fVar18,param_1[0x46],param_1[0x4a] * fVar7 * fVar17,uVar6);
    param_1[0x46] = fVar7;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x19c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar7 = (float)FUN_00355780(fVar7 * fVar17,param_1[0x47],param_1[0x4a] * fRam00236bd0,uVar6);
    param_1[0x47] = fVar7;
code_r0x002366f0:
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1[0x53] == param_1[0x38]) << 0x1e;
    if (((SUB41(in_fpscr >> 0x1e,0)) || (*(uint *)((int)param_1[0x36] + 0x70) < uRam002367dc)) ||
       (bVar13 = (*(uint *)((int)param_1[0x36] + 0x1710) & 0x200000) == 0, !bVar13)) {
      param_1[0xf] = param_1[0x38];
    }
    if (bVar13) {
      uStack_ec = 0x80;
    }
    else {
      uStack_ec = 0;
    }
    uStack_ec = (int)*(short *)(param_1 + 0xc) | uStack_ec;
    if (bVar13) {
      fVar7 = param_1[10];
    }
    else {
      fVar7 = *param_1;
    }
    FUN_00331e10(fVar7,fVar19,param_1,&sStack_98,param_1 + 0x3d,param_1 + 0xf);
    fStack_5c = param_1[0x37];
    fStack_54 = param_1[0x39];
    fStack_58 = param_1[0x38] + fVar15;
    FUN_00372474(&fStack_88,&fStack_5c,param_1 + 0x3d);
    in_fpscr = in_fpscr & 0xfffffff;
  }
  else {
    if ((*(ushort *)(param_1 + 0x69) & 0x18) == 0x10) {
      param_1[0x10] = 0.0;
      goto code_r0x002366f0;
    }
    *pfVar12 = param_1[0x37];
    param_1[0x21] = param_1[0x38];
    param_1[0x22] = param_1[0x39];
    param_1[0x21] = param_1[0x21] + fVar15;
    param_1[0x10] = 0.0;
  }
  FUN_00372474(&fStack_78,pfVar12,param_1 + 0x29);
  fVar7 = param_1[1];
  uVar14 = in_fpscr & 0xfffffff | (uint)(fVar7 <= fStack_78) << 0x1d;
  if (SUB41(uVar14 >> 0x1d,0)) {
    fVar7 = param_1[2];
    uVar1 = in_fpscr & 0xfffffff | (uint)(fStack_78 < fVar7) << 0x1f |
            (uint)(fStack_78 == fVar7) << 0x1e;
    uVar14 = uVar1 | (uint)(NAN(fStack_78) || NAN(fVar7)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    fVar16 = fVar18;
    fVar4 = fStack_78;
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) goto code_r0x002369a4;
  }
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piRam002367c4 + 0x1a0),
                                      (byte)(uVar14 >> 0x15) & 3);
  fVar4 = fVar7;
code_r0x002369a4:
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piRam002367c4 + 0x1c6),
                                     (byte)(uVar14 >> 0x15) & 3);
  fVar17 = (float)FUN_00355780(fVar16,param_1[0x42],fVar7 * fVar17,uVar6);
  param_1[0x42] = fVar17;
  fStack_78 = (float)FUN_00355780(fVar4,param_1[0x49],fVar18 / fVar17,uRam00236bd4);
  param_1[0x49] = fStack_78;
  fVar17 = param_1[0x3f];
  coprocessor_function(10,8,2,in_cr0,in_cr0,in_cr1);
  coprocessor_function(10,8,3,in_cr0,in_cr0,in_cr8);
  coprocessor_function(10,0xf,1,in_cr0,in_cr0,in_cr10);
  coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
  fStack_94 = (float)coprocessor_movefromRt(0,0,3,in_cr0,in_cr0);
  coprocessor_function(10,0xb,4,in_cr0,in_cr8,in_cr1);
  coprocessor_function(10,0xf,4,in_cr1,in_cr8,in_cr10);
  coprocessor_moveto(10,1,0,fStack_94,in_cr0,in_cr8);
  coprocessor_store(6,in_cr0,&stack0x00000308);
  *pfVar11 = *pfVar12;
  param_1[0x41] = param_1[0x21];
  param_1[0x42] = param_1[0x22];
  fStack_74 = fStack_74 + fVar15;
  FUN_00372448(pfVar11,&fStack_94);
  param_1[4] = extraout_s0_00;
  param_1[5] = extraout_s1_00;
  param_1[6] = extraout_s2_00;
  iVar8 = 0;
  fStack_9c = ((param_1[0x41] + fVar19 * fVar4) - fStack_ac) + fStack_ac;
  fStack_94 = fVar19;
  FUN_00372448(param_1 + 4,&fStack_9c);
  uStack_84 = extraout_s0_01;
  uStack_80 = extraout_s1_01;
  uStack_7c = extraout_s2_01;
  if ((*(ushort *)((int)param_1 + 0x12e) & 0x80) == 0) {
    do {
      uStack_ec = 2;
      iVar10 = FUN_003317ac(param_1[0x75],(int)param_1[0x75] + 0x5c78,param_1 + 4,&uStack_84);
      if (iVar10 == 0) {
        uStack_ec = uStack_84;
        uStack_e8 = uStack_80;
        uStack_e4 = uStack_7c;
        iVar10 = FUN_003553fc(pfVar11,param_1 + 4,&uStack_ec);
        uStack_84 = uStack_ec;
        uStack_80 = uStack_e8;
        uStack_7c = uStack_e4;
        if (iVar10 == 0) break;
      }
      sStack_96 = *(short *)(DAT_00237870 + iVar8 * 2) + (short)param_1;
      sStack_98 = *(short *)(DAT_00237874 + iVar8 * 2) + (short)uStack_b0;
      FUN_00372448(param_1 + 4,&fStack_9c);
      iVar8 = iVar8 + 1;
      uStack_84 = extraout_s0_02;
      uStack_80 = extraout_s1_02;
      uStack_7c = extraout_s2_02;
    } while (iVar8 < 0xe);
  }
  *(ushort *)((int)fVar17 + 0x94) = *(ushort *)((int)fVar17 + 0x94) & 0xfff3;
  iVar8 = (*(short *)(param_1 + 7) + 1) * (int)*(short *)(param_1 + 7) >> 1;
  fVar17 = (float)VectorSignedToFloat((int)(short)(sStack_96 - sStack_a6),(byte)(uVar14 >> 0x15) & 3
                                     );
  fVar18 = (float)VectorSignedToFloat(iVar8,(byte)(uVar14 >> 0x15) & 3);
  param_1[1] = fVar17 / fVar18;
  fVar18 = (float)VectorSignedToFloat(iVar8,(byte)(uVar14 >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat((int)(short)(sStack_98 - sStack_a8),(byte)(uVar14 >> 0x15) & 3
                                     );
  param_1[2] = fVar17 / fVar18;
  fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(uVar14 >> 0x15) & 3);
  *param_1 = (fStack_9c - fStack_ac) / fVar17;
  return 1;
}
