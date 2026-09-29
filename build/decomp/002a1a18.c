// OoT3D decomp @ 002a1a18  name=FUN_002a1a18  size=2520

/* WARNING: Removing unreachable block (ram,0x002a22a0) */
/* WARNING: Removing unreachable block (ram,0x002a20f0) */
/* WARNING: Removing unreachable block (ram,0x002a2104) */
/* WARNING: Removing unreachable block (ram,0x002a22b4) */

void FUN_002a1a18(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_144 [48];
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;

  fVar1 = DAT_002a1e0c;
  if (param_1 != 0) {
    fVar13 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x1b0),(byte)(in_fpscr >> 0x15) & 3);
    iVar14 = (int)(fVar13 * DAT_002a1e0c);
    if (iVar14 == 0) {
      uVar12 = *(uint *)(param_1 + 0x188);
      uVar9 = (uint)*(uint3 *)(param_1 + 0x18c);
    }
    else {
      uVar12 = (uint)*(byte *)(param_1 + 0x1b1);
      if ((int)uVar12 < iVar14) {
        fVar13 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 / fVar16;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 400) -
                                            (uint)*(byte *)(param_1 + 0x188),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x188),(byte)(in_fpscr >> 0x15) & 3);
        uVar12 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x191) -
                                            (uint)*(byte *)(param_1 + 0x189),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x189),(byte)(in_fpscr >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x192) -
                                            (uint)*(byte *)(param_1 + 0x18a),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x18a),(byte)(in_fpscr >> 0x15) & 3);
        uVar18 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x193) -
                                            (uint)*(byte *)(param_1 + 0x18b),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x18b),(byte)(in_fpscr >> 0x15) & 3);
        iVar14 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        uVar12 = uVar12 & 0xff | (uVar9 & 0xff) << 8 | (uVar18 & 0xff) << 0x10 | iVar14 << 0x18;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x194) -
                                            (uint)*(byte *)(param_1 + 0x18c),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x18c),(byte)(in_fpscr >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x195) -
                                            (uint)*(byte *)(param_1 + 0x18d),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x18d),(byte)(in_fpscr >> 0x15) & 3);
        uVar18 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x196) -
                                            (uint)*(byte *)(param_1 + 0x18e),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x18e),(byte)(in_fpscr >> 0x15) & 3);
        uVar19 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        uVar9 = uVar9 & 0xff | (uVar18 & 0xff) << 8 | (uVar19 & 0xff) << 0x10;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x197) -
                                            (uint)*(byte *)(param_1 + 399),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 399),(byte)(in_fpscr >> 0x15) & 3);
        VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
      }
      else {
        fVar13 = (float)VectorSignedToFloat(uVar12 - iVar14,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 / fVar16;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x198) -
                                            (uint)*(byte *)(param_1 + 400),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 400),(byte)(in_fpscr >> 0x15) & 3);
        uVar12 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x199) -
                                            (uint)*(byte *)(param_1 + 0x191),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x191),(byte)(in_fpscr >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19a) -
                                            (uint)*(byte *)(param_1 + 0x192),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x192),(byte)(in_fpscr >> 0x15) & 3);
        uVar18 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19b) -
                                            (uint)*(byte *)(param_1 + 0x193),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x193),(byte)(in_fpscr >> 0x15) & 3);
        iVar14 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        uVar12 = uVar12 & 0xff | (uVar9 & 0xff) << 8 | (uVar18 & 0xff) << 0x10 | iVar14 << 0x18;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19c) -
                                            (uint)*(byte *)(param_1 + 0x194),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x194),(byte)(in_fpscr >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19d) -
                                            (uint)*(byte *)(param_1 + 0x195),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x195),(byte)(in_fpscr >> 0x15) & 3);
        uVar18 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19e) -
                                            (uint)*(byte *)(param_1 + 0x196),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x196),(byte)(in_fpscr >> 0x15) & 3);
        uVar19 = VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
        uVar9 = uVar9 & 0xff | (uVar18 & 0xff) << 8 | (uVar19 & 0xff) << 0x10;
        fVar17 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x19f) -
                                            (uint)*(byte *)(param_1 + 0x197),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x197),(byte)(in_fpscr >> 0x15) & 3);
        VectorFloatToUnsigned(fVar16 + fVar17 * fVar13,3);
      }
    }
    uVar18 = (uVar9 << 8) >> 0x18;
    uVar19 = (uVar9 << 0x10) >> 0x18;
    FUN_00332fc0(0,&local_5c,uVar12 & 0xff,(uVar12 << 0x10) >> 0x18,(uVar12 << 8) >> 0x18,
                 uVar12 >> 0x18,uVar9 & 0xff,uVar19,uVar18);
    iVar14 = *(int *)(param_1 + 0x1d8);
    local_6c = (float)VectorUnsignedToFloat(uVar9 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(iVar14 + 0xf0) = local_5c;
    *(undefined4 *)(iVar14 + 0xf4) = uStack_58;
    *(undefined4 *)(iVar14 + 0xf8) = uStack_54;
    *(undefined4 *)(iVar14 + 0xfc) = uStack_50;
    fVar13 = DAT_002a22c0;
    local_68 = (float)VectorUnsignedToFloat(uVar19,(byte)(in_fpscr >> 0x15) & 3);
    local_64 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
    local_6c = local_6c * DAT_002a22bc;
    local_68 = local_68 * DAT_002a22bc;
    local_64 = local_64 * DAT_002a22bc;
    local_60 = DAT_002a22c0;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x1d8),1,&local_6c);
    fVar8 = DAT_002a22e8;
    iVar7 = DAT_002a22e4;
    fVar6 = DAT_002a22e0;
    iVar14 = DAT_002a22dc;
    fVar5 = DAT_002a22d8;
    uVar4 = DAT_002a22d4;
    fVar3 = DAT_002a22d0;
    fVar2 = DAT_002a22cc;
    fVar17 = DAT_002a22c8;
    fVar16 = DAT_002a22c4;
    uVar12 = param_1;
    if (param_1 < param_1 + (uint)*(byte *)(param_1 + 0x180) * 0x18) {
      do {
        local_a8 = VectorSignedToFloat((int)(short)(int)((*(float *)(uVar12 + 8) +
                                                         *(float *)(uVar12 + 0x10)) * fVar1),
                                       (byte)(in_fpscr >> 0x15) & 3);
        fVar15 = (float)VectorSignedToFloat((int)(short)(int)((*(float *)(uVar12 + 8) -
                                                              *(float *)(uVar12 + 0x10)) * fVar16 *
                                                             fVar17),(byte)(in_fpscr >> 0x15) & 3);
        if ((int)fVar15 < 0x3f800000) {
          fVar15 = fVar13;
        }
        local_78 = VectorSignedToFloat((int)*(short *)(param_1 + 0x182),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_74 = VectorSignedToFloat((int)*(short *)(param_1 + 0x184),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_70 = VectorSignedToFloat((int)*(short *)(param_1 + 0x186),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_84 = fVar15 * fVar2 * fVar3;
        local_80 = uVar4;
        local_7c = uVar4;
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(uVar12 + 0x16),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar15 = fVar15 * fVar5;
        uVar9 = in_fpscr & 0xfffffff | (uint)(fVar8 <= fVar15) << 0x1d;
        for (fVar15 = ABS(fVar15); iVar14 <= (int)fVar15; fVar15 = fVar15 - fVar6) {
        }
        uVar18 = VectorFloatToUnsigned(fVar8,3);
        uVar19 = VectorFloatToUnsigned(fVar8,3);
        uVar20 = VectorFloatToUnsigned(fVar15,3);
        fVar25 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(uVar9 >> 0x15) & 3);
        fVar22 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(uVar9 >> 0x15) & 3);
        pfVar10 = (float *)(iVar7 + (uVar18 & 0xff) * 0x10);
        fVar21 = (float)VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(uVar9 >> 0x15) & 3);
        fVar23 = pfVar10[1] + (fVar8 - fVar25) * pfVar10[3];
        pfVar11 = (float *)(iVar7 + (uVar19 & 0xff) * 0x10);
        fVar25 = *pfVar10 + (fVar8 - fVar25) * pfVar10[2];
        pfVar10 = (float *)(iVar7 + (uVar20 & 0xff) * 0x10);
        local_f4 = *pfVar11 + (fVar8 - fVar22) * pfVar11[2];
        local_ec = pfVar11[1] + (fVar8 - fVar22) * pfVar11[3];
        fVar22 = *pfVar10 + (fVar15 - fVar21) * pfVar10[2];
        fVar15 = pfVar10[1] + (fVar15 - fVar21) * pfVar10[3];
        local_f0 = fVar25 * local_ec;
        if (!SUB41(uVar9 >> 0x1d,0)) {
          fVar22 = -fVar22;
        }
        local_104 = fVar22 * local_ec;
        local_114 = fVar15 * local_ec;
        local_ec = fVar23 * local_ec;
        local_110 = fVar25 * fVar15 * local_f4 - fVar23 * fVar22;
        local_fc = fVar23 * fVar22 * local_f4 - fVar25 * fVar15;
        local_10c = fVar25 * fVar22 + fVar23 * fVar15 * local_f4;
        local_100 = fVar23 * fVar15 + fVar25 * fVar22 * local_f4;
        local_f4 = -local_f4;
        local_108 = 0;
        local_f8 = 0;
        local_e8 = 0;
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(uVar12 + 0x14),(byte)(uVar9 >> 0x15) & 3
                                           );
        fVar15 = fVar15 * fVar5;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 <= fVar15) << 0x1d;
        for (fVar15 = ABS(fVar15); fVar21 = fVar8, iVar14 <= (int)fVar15; fVar15 = fVar15 - fVar6) {
        }
        for (; iVar14 <= (int)fVar21; fVar21 = fVar21 - fVar6) {
        }
        uVar9 = VectorFloatToUnsigned(fVar8,3);
        uVar18 = VectorFloatToUnsigned(fVar15,3);
        uVar19 = VectorFloatToUnsigned(fVar21,3);
        pfVar11 = (float *)(iVar7 + (uVar9 & 0xff) * 0x10);
        fVar22 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar10 = (float *)(iVar7 + (uVar18 & 0xff) * 0x10);
        fVar23 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar25 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar24 = pfVar11[1] + (fVar8 - fVar22) * pfVar11[3];
        fVar22 = *pfVar11 + (fVar8 - fVar22) * pfVar11[2];
        pfVar11 = (float *)(iVar7 + (uVar19 & 0xff) * 0x10);
        local_c4 = *pfVar10 + (fVar15 - fVar23) * pfVar10[2];
        local_bc = pfVar10[1] + (fVar15 - fVar23) * pfVar10[3];
        fVar23 = *pfVar11 + (fVar21 - fVar25) * pfVar11[2];
        fVar15 = pfVar11[1] + (fVar21 - fVar25) * pfVar11[3];
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          local_c4 = -local_c4;
        }
        local_d4 = fVar23 * local_bc;
        local_e4 = fVar15 * local_bc;
        local_c0 = fVar22 * local_bc;
        local_bc = fVar24 * local_bc;
        local_e0 = fVar22 * fVar15 * local_c4 - fVar24 * fVar23;
        local_cc = fVar24 * fVar23 * local_c4 - fVar22 * fVar15;
        local_dc = fVar22 * fVar23 + fVar24 * fVar15 * local_c4;
        local_d0 = fVar24 * fVar15 + fVar22 * fVar23 * local_c4;
        local_c4 = -local_c4;
        local_d8 = 0;
        local_c8 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_b4 = 0x3f800000;
        local_a0 = 0x3f800000;
        uStack_9c = 0;
        local_ac = 0;
        local_94 = 0;
        local_8c = 0x3f800000;
        local_a4 = 0;
        local_98 = fVar8;
        local_90 = 0;
        local_88 = fVar8;
        FUN_0036c174(auStack_144,&local_114,&local_b4);
        FUN_0036c174(auStack_144,&local_e4,auStack_144);
        FUN_00371f1c(*(undefined4 *)(param_1 + 0x1d8),&local_78,auStack_144,&local_84,0,0);
        uVar12 = uVar12 + 0x18;
      } while (uVar12 < param_1 + (uint)*(byte *)(param_1 + 0x180) * 0x18);
    }
    if (*(char *)(param_1 + 0x180) != '\0') {
      FUN_00371eac(*(undefined4 *)(param_1 + 0x1d8),0);
    }
  }
  return;
}
