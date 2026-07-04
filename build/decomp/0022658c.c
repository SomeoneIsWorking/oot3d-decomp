// OoT3D decomp @ 0022658c  name=FUN_0022658c  size=6776

/* WARNING: Removing unreachable block (ram,0x003677a0) */
/* WARNING: Removing unreachable block (ram,0x003677ac) */
/* WARNING: Removing unreachable block (ram,0x003677b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0022658c(char *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ushort uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  ushort uVar22;
  undefined4 extraout_r1;
  float fVar23;
  int iVar24;
  int iVar25;
  float extraout_r2;
  float fVar26;
  float extraout_r2_00;
  int iVar27;
  char *pcVar28;
  uint uVar29;
  int iVar30;
  float *pfVar31;
  bool bVar32;
  uint in_fpscr;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  longlong lVar46;
  undefined8 uVar48;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float *pfStack_88;
  float *pfStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  float afStack_54 [2];
  float fVar47;
  
  fVar20 = fRam002268ac;
  *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x170) = 0;
  FUN_00333294(*(undefined4 *)(param_1 + 0x270),0);
  param_1[0x280] = '\0';
  fVar38 = fRam002268b0;
  param_1[0x281] = '\0';
  if (param_1[0x25e] != '\0') {
    if (*(short *)(param_1 + 0x248) != 0) {
      if ((byte)param_1[0x261] < 2) {
        uVar15 = FUN_00333270(*(undefined4 *)(param_1 + 0x26c),extraout_r1);
        *(undefined4 *)(param_1 + 0x274) = uVar15;
        uVar15 = FUN_00333070(*(undefined4 *)(param_1 + 0x26c));
        *(undefined4 *)(param_1 + 0x27c) = uVar15;
        uVar15 = uRam00226ffc;
        if (param_1[0x282] == '\0') {
          uVar15 = FUN_003331ec(*(undefined4 *)(param_1 + 0x26c));
        }
        *(undefined4 *)(param_1 + 0x278) = uVar15;
        param_1[0x280] = '\0';
        param_1[0x281] = '\0';
        iVar30 = 0;
        fStack_78 = (float)(uint)(byte)param_1[0x268];
        fStack_7c = (float)(uint)(byte)param_1[0x267];
        fStack_80 = (float)(uint)(byte)param_1[0x266];
        fVar37 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 4),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar33 = (float)VectorUnsignedToFloat
                                  ((uint)(byte)param_1[0x25f],(byte)(in_fpscr >> 0x15) & 3);
        fVar36 = (float)VectorUnsignedToFloat
                                  ((uint)(byte)param_1[0x265],(byte)(in_fpscr >> 0x15) & 3);
        pfStack_84 = (float *)(int)(short)(int)(fVar36 * (fVar38 - fVar37 / fVar33));
        pfStack_88 = (float *)(uint)(byte)param_1[0x264];
        FUN_00332fc0(0,afStack_54,param_1[0x262],param_1[0x263]);
        uVar29 = 0;
        if (param_1[0x25e] != '\0') {
          do {
            fVar37 = (float)VectorUnsignedToFloat
                                      ((uint)(byte)param_1[0x25f],(byte)(in_fpscr >> 0x15) & 3);
            fVar33 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + uVar29 * 0x24 + 4),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if (param_1[0x261] == '\x01') {
              fStack_78 = (float)(uint)(byte)param_1[0x268];
              fStack_7c = (float)(uint)(byte)param_1[0x267];
              fStack_80 = (float)(uint)(byte)param_1[0x266];
              fVar36 = (float)VectorUnsignedToFloat
                                        ((uint)(byte)param_1[0x265],(byte)(in_fpscr >> 0x15) & 3);
              pfStack_84 = (float *)(int)(short)(int)(fVar36 * (fVar38 - fVar33 / fVar37));
              pfStack_88 = (float *)(uint)(byte)param_1[0x264];
              FUN_00332fc0(0,afStack_54 + ((iVar30 + 1) % 2) * 4,param_1[0x262],param_1[0x263]);
            }
            pfStack_84 = &fStack_74;
            pfStack_88 = &fStack_70;
            uVar16 = FUN_00332ca8(fVar33 / fVar37,param_1,uVar29,(int)&uStack_64 + 4,&fStack_6c);
            bVar32 = uVar29 != 0;
            if (bVar32) {
              uVar16 = (uint)(byte)param_1[0x25e];
            }
            iVar27 = 2;
            iVar19 = 0;
            if (bVar32) {
              uVar16 = uVar16 - 1;
            }
            if (!bVar32 || uVar16 == uVar29) {
              iVar27 = 1;
            }
            if (iVar27 != 0) {
              do {
                iVar24 = (iVar30 + iVar19) % 2;
                **(undefined4 **)(param_1 + 0x274) = uStack_64._4_4_;
                iVar17 = *(int *)(param_1 + 0x274);
                *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar17 + 4);
                *(undefined4 *)(iVar17 + 4) = (undefined4)uStack_5c;
                iVar17 = *(int *)(param_1 + 0x274);
                *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar17 + 4);
                *(undefined4 *)(iVar17 + 4) = uStack_5c._4_4_;
                iVar17 = iVar24 * 0x10;
                *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_70 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                **(float **)(param_1 + 0x278) = afStack_54[iVar24 * 4] * fVar37 * fVar20;
                iVar25 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar25 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_70 >> 8 & 0xff,(byte)(in_fpscr >> 0x15) & 3)
                ;
                *(float *)(iVar25 + 4) = afStack_54[iVar24 * 4 + 1] * fVar37 * fVar20;
                iVar25 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar25 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_70 >> 0x10 & 0xff,
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar25 + 4) = *(float *)(&stack0xffffffb4 + iVar17) * fVar37 * fVar20;
                iVar25 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar25 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_70 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar25 + 4) = *(float *)(&stack0xffffffb8 + iVar17) * fVar37 * fVar20;
                *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                **(float **)(param_1 + 0x274) = fStack_6c;
                iVar25 = *(int *)(param_1 + 0x274);
                *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar25 + 4);
                *(undefined4 *)(iVar25 + 4) = fStack_68;
                iVar25 = *(int *)(param_1 + 0x274);
                *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar25 + 4);
                iVar19 = iVar19 + 1;
                *(undefined4 *)(iVar25 + 4) = (undefined4)uStack_64;
                *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_74 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                **(float **)(param_1 + 0x278) = afStack_54[iVar24 * 4] * fVar37 * fVar20;
                iVar25 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar25 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_74 >> 8 & 0xff,(byte)(in_fpscr >> 0x15) & 3)
                ;
                *(float *)(iVar25 + 4) = afStack_54[iVar24 * 4 + 1] * fVar37 * fVar20;
                iVar24 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar24 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_74 >> 0x10 & 0xff,
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar24 + 4) = *(float *)(&stack0xffffffb4 + iVar17) * fVar37 * fVar20;
                iVar24 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar24 + 4);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_74 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar24 + 4) = *(float *)(&stack0xffffffb8 + iVar17) * fVar37 * fVar20;
                *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
              } while (iVar19 < iVar27);
            }
            uVar29 = uVar29 + 1;
            iVar30 = (iVar30 + 1) % 2;
          } while ((int)uVar29 < (int)(uint)(byte)param_1[0x25e]);
        }
        FUN_003a9658(param_2,param_1,0);
        return;
      }
      uVar15 = FUN_00333270(*(undefined4 *)(param_1 + 0x26c),param_2);
      *(undefined4 *)(param_1 + 0x274) = uVar15;
      uVar15 = FUN_003331ec(*(undefined4 *)(param_1 + 0x26c));
      *(undefined4 *)(param_1 + 0x278) = uVar15;
      param_1[0x280] = '\0';
      fVar20 = fRam0038dca8;
      param_1[0x281] = '\0';
      if (1 < (byte)param_1[0x25e]) {
        pcVar28 = param_1 + 0x24;
        *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffc | 2;
        if (pcVar28 < param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -0x24) {
          do {
            cVar5 = '\0';
            if (pcVar28[-0x24] != '\0') {
              cVar5 = pcVar28[0x24];
            }
            if (pcVar28[-0x24] != '\0' && cVar5 != '\0') {
              fStack_b0 = *(float *)(pcVar28 + 8) - *(float *)(pcVar28 + -0x1c);
              fStack_ac = *(float *)(pcVar28 + 0xc) - *(float *)(pcVar28 + -0x18);
              fStack_a8 = *(float *)(pcVar28 + 0x10) - *(float *)(pcVar28 + -0x14);
              fStack_bc = *(float *)(pcVar28 + 0x14) - *(float *)(pcVar28 + -0x10);
              fStack_b8 = *(float *)(pcVar28 + 0x18) - *(float *)(pcVar28 + -0xc);
              fStack_b4 = *(float *)(pcVar28 + 0x1c) - *(float *)(pcVar28 + -8);
              uStack_c8 = *(float *)(pcVar28 + 0x2c) - *(float *)(pcVar28 + 8);
              fStack_c4 = *(float *)(pcVar28 + 0x30) - *(float *)(pcVar28 + 0xc);
              fStack_c0 = *(float *)(pcVar28 + 0x34) - *(float *)(pcVar28 + 0x10);
              uStack_d4 = *(float *)(pcVar28 + 0x38) - *(float *)(pcVar28 + 0x14);
              uStack_d0 = *(float *)(pcVar28 + 0x3c) - *(float *)(pcVar28 + 0x18);
              uStack_cc = *(float *)(pcVar28 + 0x40) - *(float *)(pcVar28 + 0x1c);
              iVar30 = FUN_0036ab8c(&fStack_b0,&uStack_c8,&fStack_d8);
              if (((iVar30 == 0) &&
                  (iVar30 = FUN_0036ab8c(&fStack_bc,&uStack_d4,&uStack_dc), iVar30 == 0)) &&
                 (iVar30 = FUN_0036ab8c(&uStack_c8,&uStack_d4,&fStack_e0), iVar30 == 0)) {
                fVar38 = fStack_d8;
                if ((uint)fStack_d8 < 0xbf000000) {
                  fVar38 = uStack_dc;
                }
                if (((uint)fStack_d8 < 0xbf000000 && (uint)fVar38 < 0xbf000000) &&
                   (in_fpscr = in_fpscr & 0xfffffff | (uint)(fStack_e0 == fVar20) << 0x1e |
                               (uint)(fVar20 <= fStack_e0) << 0x1d, bVar6 = (byte)(in_fpscr >> 0x18)
                   , (bool)(bVar6 >> 5 & 1) && !(bool)(bVar6 >> 6))) {
                  uVar14 = *(ushort *)(pcVar28 + 0x20);
                  *(ushort *)(pcVar28 + 0x20) = uVar14 & 0xfffc;
                  uVar14 = uVar14 & 0xfffc | 1;
                  goto LAB_0038da94;
                }
              }
              uVar14 = *(ushort *)(pcVar28 + 0x20) & 0xfffc;
            }
            else {
              uVar14 = *(ushort *)(pcVar28 + 0x20);
              *(ushort *)(pcVar28 + 0x20) = uVar14 & 0xfffc;
              uVar14 = uVar14 & 0xfffc | 2;
            }
LAB_0038da94:
            *(ushort *)(pcVar28 + 0x20) = uVar14;
            pcVar28 = pcVar28 + 0x24;
          } while (pcVar28 < param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -0x24);
        }
        *(ushort *)(param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -4) =
             *(ushort *)(param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -4) & 0xfffc;
        *(ushort *)(param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -4) =
             *(ushort *)(param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -4) | 2;
        if (*(int *)(param_1 + 0x270) != 0) {
          pfVar31 = (float *)(param_1 + 0x14);
          uVar29 = 0;
          fVar20 = *pfVar31;
          uStack_a0 = *(undefined4 *)(param_1 + 0x18);
          uStack_9c = *(undefined4 *)(param_1 + 0x1c);
          iVar19 = 0;
          iVar30 = *(int *)(param_1 + 0x270);
          *(float *)(iVar30 + 0x3c) = fVar20;
          *(undefined4 *)(iVar30 + 0x40) = uStack_a0;
          *(undefined4 *)(iVar30 + 0x44) = uStack_9c;
          pcVar28 = param_1;
          fStack_a4 = fVar20;
          if (param_1 < param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -0x24) {
            do {
              fVar38 = fRam0038dcac;
              cVar5 = '\0';
              if (*pcVar28 != '\0') {
                cVar5 = pcVar28[0x24];
              }
              if (*pcVar28 != '\0' && cVar5 != '\0') {
                uVar14 = *(ushort *)(pcVar28 + 0x20);
                bVar32 = (uVar14 & 3) == 0;
                if (bVar32) {
                  uVar29 = (uint)*(ushort *)(pcVar28 + 0x44);
                }
                if (!bVar32 || (uVar29 & 3) != 0) {
                  uVar22 = uVar14 & 3;
                  if (uVar22 == 2) {
                    fVar20 = (float)(uint)*(ushort *)(pcVar28 + 0x44);
                  }
                  if (uVar22 != 2 || ((uint)fVar20 & 3) != 0) {
                    bVar32 = (uVar14 & 3) == 0;
                    if (bVar32) {
                      uVar14 = *(ushort *)(pcVar28 + 0x44) & 3;
                    }
                    if (!bVar32 || uVar14 != 2) {
                      if (uVar22 == 2) {
                        uVar14 = *(ushort *)(pcVar28 + 0x44) & 3;
                      }
                      if (uVar22 != 2 || uVar14 != 2) {
                        fVar21 = *pfVar31;
                        fVar23 = *(float *)(param_1 + 0x18);
                        fVar26 = *(float *)(param_1 + 0x1c);
                        fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + 4),
                                                            (byte)(in_fpscr >> 0x15) & 3);
                        fVar38 = (float)VectorUnsignedToFloat
                                                  ((uint)(byte)param_1[0x25f],
                                                   (byte)(in_fpscr >> 0x15) & 3);
                        FUN_00332ca8(fVar20 / fVar38,param_1,iVar19,&fStack_b0,&fStack_bc);
                        fVar12 = fStack_a8;
                        fVar10 = fStack_ac;
                        fVar8 = fStack_b0;
                        fVar47 = fStack_b4;
                        fVar33 = fStack_b8;
                        fVar38 = fStack_bc;
                        fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + 0x28),
                                                            (byte)(in_fpscr >> 0x15) & 3);
                        fVar37 = (float)VectorUnsignedToFloat
                                                  ((uint)(byte)param_1[0x25f],
                                                   (byte)(in_fpscr >> 0x15) & 3);
                        FUN_00332ca8(fVar20 / fVar37,param_1,iVar19 + 1,&fStack_b0,&fStack_bc);
                        fVar13 = fStack_a8;
                        fVar11 = fStack_ac;
                        fVar9 = fStack_b0;
                        fVar36 = fStack_b8;
                        fVar37 = fStack_bc;
                        fStack_68 = fStack_b4;
                        if ((*(ushort *)(pcVar28 + 0x20) & 3) == 2) {
                          fStack_80 = fStack_b4 - fVar47;
                          fVar20 = fVar8;
                          fVar39 = fVar12;
                          fVar41 = fVar38;
                          fVar1 = fVar33;
                          fVar2 = fVar10;
                        }
                        else {
                          fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + -0x20),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)(byte)param_1[0x25f],
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          FUN_00332ca8(fVar20 / fVar39,param_1,iVar19 + -1,&fStack_b0,&fStack_bc);
                          fStack_80 = fStack_68 - fStack_b4;
                          fVar20 = fStack_b0;
                          fVar39 = fStack_a8;
                          fVar41 = fStack_bc;
                          fVar1 = fStack_b8;
                          fVar2 = fStack_ac;
                        }
                        fVar3 = fRam0038e534;
                        fStack_6c = (fVar9 - fVar20) * fRam0038e534;
                        fStack_70 = (fVar11 - fVar2) * fRam0038e534;
                        fStack_74 = (fVar13 - fVar39) * fRam0038e534;
                        fStack_78 = (fVar37 - fVar41) * fRam0038e534;
                        fStack_7c = (fVar36 - fVar1) * fRam0038e534;
                        fStack_80 = fStack_80 * fRam0038e534;
                        fVar34 = fStack_68;
                        fVar20 = fVar37;
                        fVar39 = fVar9;
                        fVar41 = fVar36;
                        fVar1 = fVar11;
                        fVar2 = fVar13;
                        if ((*(ushort *)(pcVar28 + 0x44) & 3) != 2) {
                          fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + 0x4c),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)(byte)param_1[0x25f],
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          FUN_00332ca8(fVar20 / fVar39,param_1,iVar19 + 2,&fStack_b0,&fStack_bc);
                          fVar34 = fStack_b4;
                          fVar20 = fStack_bc;
                          fVar39 = fStack_b0;
                          fVar41 = fStack_b8;
                          fVar1 = fStack_ac;
                          fVar2 = fStack_a8;
                        }
                        pfStack_84 = (float *)((fVar39 - fVar8) * fVar3);
                        pfStack_88 = (float *)((fVar1 - fVar10) * fVar3);
                        fStack_8c = (fVar2 - fVar12) * fVar3;
                        fStack_90 = (fVar20 - fVar38) * fVar3;
                        fStack_94 = (fVar41 - fVar33) * fVar3;
                        fStack_98 = (fVar34 - fVar47) * fVar3;
                        fStack_d8 = fVar47 - fVar26;
                        FUN_00363f20(&uStack_dc,&uStack_c8);
                        FUN_00363f20(&fStack_e0,&uStack_cc);
                        if (*(short *)(param_1 + 0x280) == 0) {
                          **(float **)(param_1 + 0x274) = fVar8 - fVar21;
                          iVar30 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                          *(float *)(iVar30 + 4) = fVar10 - fVar23;
                          iVar30 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                          *(float *)(iVar30 + 4) = fVar12 - fVar26;
                          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                          fVar20 = fRam0038e538;
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc & 0xff,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          **(float **)(param_1 + 0x278) = fVar39 * fRam0038e538;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._1_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._2_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._3_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                          **(float **)(param_1 + 0x274) = fVar38 - fVar21;
                          iVar30 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                          *(float *)(iVar30 + 4) = fVar33 - fVar23;
                          iVar30 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                          *(float *)(iVar30 + 4) = fStack_d8;
                          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc & 0xff,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          **(float **)(param_1 + 0x278) = fVar39 * fVar20;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._1_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._2_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          iVar30 = *(int *)(param_1 + 0x278);
                          *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                          fVar39 = (float)VectorUnsignedToFloat
                                                    ((uint)uStack_dc._3_1_,
                                                     (byte)(in_fpscr >> 0x15) & 3);
                          *(float *)(iVar30 + 4) = fVar39 * fVar20;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                        }
                        fVar39 = fRam0038e538;
                        iVar30 = 1;
                        do {
                          fVar35 = (float)VectorSignedToFloat(iVar30,(byte)(in_fpscr >> 0x15) & 3);
                          fVar35 = fVar35 * fRam0038e53c;
                          fVar20 = fVar35 * fVar35;
                          fVar41 = fVar20 * fVar35;
                          fVar40 = fVar41 - fVar20;
                          fVar44 = fVar20 * fRam0038e544 - fVar41 * fRam0038e540;
                          fVar42 = (fVar41 - fVar20 * fRam0038e540) + fVar35;
                          fVar43 = (fVar41 * fRam0038e540 - fVar20 * fRam0038e544) + fRam0038e548;
                          fVar20 = fVar42 * fStack_78;
                          fVar41 = fVar40 * fStack_90;
                          fVar1 = fVar42 * fStack_7c;
                          fVar2 = fVar40 * fStack_94;
                          fVar3 = fVar44 * fStack_68;
                          fVar34 = fVar42 * fStack_80;
                          **(float **)(param_1 + 0x274) =
                               (fVar8 * fVar43 + fVar44 * fVar9 + fVar42 * fStack_6c +
                               fVar40 * (float)pfStack_84) - fVar21;
                          iVar27 = *(int *)(param_1 + 0x274);
                          fVar4 = fVar40 * fStack_98;
                          *(float **)(param_1 + 0x274) = (float *)(iVar27 + 4);
                          *(float *)(iVar27 + 4) =
                               (fVar10 * fVar43 + fVar44 * fVar11 + fVar42 * fStack_70 +
                               fVar40 * (float)pfStack_88) - fVar23;
                          iVar27 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar27 + 4);
                          *(float *)(iVar27 + 4) =
                               (fVar12 * fVar43 + fVar44 * fVar13 + fVar42 * fStack_74 +
                               fVar40 * fStack_8c) - fVar26;
                          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                          uVar15 = FUN_003331b0(fVar35,(undefined1)uStack_c8,(undefined1)uStack_d0);
                          fVar40 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar40 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar15 = FUN_003331b0(fVar35,uStack_c8._1_1_,uStack_d0._1_1_);
                          fVar40 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar40 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar15 = FUN_003331b0(fVar35,uStack_c8._2_1_,uStack_d0._2_1_);
                          fVar40 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar40 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar15 = FUN_003331b0(fVar35,uStack_c8._3_1_,uStack_d0._3_1_);
                          fVar40 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar40 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                          **(float **)(param_1 + 0x274) =
                               (fVar38 * fVar43 + fVar44 * fVar37 + fVar20 + fVar41) - fVar21;
                          iVar27 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar27 + 4);
                          *(float *)(iVar27 + 4) =
                               (fVar33 * fVar43 + fVar44 * fVar36 + fVar1 + fVar2) - fVar23;
                          iVar27 = *(int *)(param_1 + 0x274);
                          *(float **)(param_1 + 0x274) = (float *)(iVar27 + 4);
                          *(float *)(iVar27 + 4) =
                               (fVar47 * fVar43 + fVar3 + fVar34 + fVar4) - fVar26;
                          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                          uVar15 = FUN_003331b0(fVar35,(undefined1)uStack_cc,(undefined1)uStack_d4);
                          fVar20 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar20 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar15 = FUN_003331b0(fVar35,uStack_cc._1_1_,uStack_d4._1_1_);
                          fVar20 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar20 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar15 = FUN_003331b0(fVar35,uStack_cc._2_1_,uStack_d4._2_1_);
                          fVar20 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3)
                          ;
                          **(float **)(param_1 + 0x278) = fVar20 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          uVar48 = FUN_003331b0(fVar35,uStack_cc._3_1_,uStack_d4._3_1_);
                          uVar29 = (uint)((ulonglong)uVar48 >> 0x20);
                          iVar30 = iVar30 + 1;
                          fVar20 = (float)VectorUnsignedToFloat
                                                    ((int)uVar48,(byte)(in_fpscr >> 0x15) & 3);
                          **(float **)(param_1 + 0x278) = fVar20 * fVar39;
                          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                          *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                          fVar20 = extraout_r2_00;
                        } while (iVar30 < 5);
                        goto LAB_0038e76c;
                      }
                    }
                  }
                }
                uStack_d0 = *pfVar31;
                uStack_cc = *(float *)(param_1 + 0x18);
                uStack_c8 = *(float *)(param_1 + 0x1c);
                fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + 4),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)(byte)param_1[0x25f],(byte)(in_fpscr >> 0x15) & 3);
                FUN_00332ca8(fVar20 / fVar37,param_1,iVar19,&fStack_b0,&fStack_bc);
                if (*(short *)(param_1 + 0x280) == 0) {
                  **(float **)(param_1 + 0x274) = fStack_b0 - uStack_d0;
                  iVar30 = *(int *)(param_1 + 0x274);
                  *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                  *(float *)(iVar30 + 4) = fStack_ac - uStack_cc;
                  iVar30 = *(int *)(param_1 + 0x274);
                  *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                  *(float *)(iVar30 + 4) = fStack_a8 - uStack_c8;
                  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c4 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                  **(float **)(param_1 + 0x278) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c4 >> 8 & 0xff,
                                             (byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c4 >> 0x10 & 0xff,
                                             (byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c4 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                  *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                }
                if (*(short *)(param_1 + 0x280) == 1) {
                  **(float **)(param_1 + 0x274) = fStack_bc - uStack_d0;
                  iVar30 = *(int *)(param_1 + 0x274);
                  *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                  *(float *)(iVar30 + 4) = fStack_b8 - uStack_cc;
                  iVar30 = *(int *)(param_1 + 0x274);
                  *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                  *(float *)(iVar30 + 4) = fStack_b4 - uStack_c8;
                  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c0 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                  **(float **)(param_1 + 0x278) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c0 >> 8 & 0xff,
                                             (byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c0 >> 0x10 & 0xff,
                                             (byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  iVar30 = *(int *)(param_1 + 0x278);
                  *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                  fVar20 = (float)VectorUnsignedToFloat
                                            ((uint)fStack_c0 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
                  *(float *)(iVar30 + 4) = fVar20 * fVar38;
                  *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                  *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                }
                fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar28 + 0x28),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                fVar37 = (float)VectorUnsignedToFloat
                                          ((uint)(byte)param_1[0x25f],(byte)(in_fpscr >> 0x15) & 3);
                FUN_00332ca8(fVar20 / fVar37,param_1,iVar19 + 1,&fStack_b0,&fStack_bc);
                **(float **)(param_1 + 0x274) = fStack_b0 - uStack_d0;
                iVar30 = *(int *)(param_1 + 0x274);
                *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                *(float *)(iVar30 + 4) = fStack_ac - uStack_cc;
                iVar30 = *(int *)(param_1 + 0x274);
                *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                *(float *)(iVar30 + 4) = fStack_a8 - uStack_c8;
                *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c0 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                **(float **)(param_1 + 0x278) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c0 >> 8 & 0xff,(byte)(in_fpscr >> 0x15) & 3)
                ;
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c0 >> 0x10 & 0xff,
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c0 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                **(float **)(param_1 + 0x274) = fStack_bc - uStack_d0;
                iVar30 = *(int *)(param_1 + 0x274);
                *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                *(float *)(iVar30 + 4) = fStack_b8 - uStack_cc;
                iVar30 = *(int *)(param_1 + 0x274);
                *(float **)(param_1 + 0x274) = (float *)(iVar30 + 4);
                *(float *)(iVar30 + 4) = fStack_b4 - uStack_c8;
                *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c4 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
                **(float **)(param_1 + 0x278) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c4 >> 8 & 0xff,(byte)(in_fpscr >> 0x15) & 3)
                ;
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                fVar20 = (float)VectorUnsignedToFloat
                                          ((uint)fStack_c4 >> 0x10 & 0xff,
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                iVar30 = *(int *)(param_1 + 0x278);
                *(float **)(param_1 + 0x278) = (float *)(iVar30 + 4);
                uVar29 = (uint)fStack_c4 >> 0x18;
                fVar20 = (float)VectorUnsignedToFloat(uVar29,(byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar30 + 4) = fVar20 * fVar38;
                *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
                *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
                fVar20 = extraout_r2;
              }
LAB_0038e76c:
              pcVar28 = pcVar28 + 0x24;
              iVar19 = iVar19 + 1;
            } while (pcVar28 < param_1 + (uint)(byte)param_1[0x25e] * 0x24 + -0x24);
          }
          fVar20 = fRam0038e548;
          if (*(ushort *)(param_1 + 0x280) < 4) {
            FUN_00333294(*(undefined4 *)(param_1 + 0x270),0);
            *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x170) = 0;
            return;
          }
          if (param_1[0x282] != '\0') {
            fStack_e0 = (float)VectorSignedToFloat((int)(*(ushort *)(param_1 + 0x280) - 2) >> 1,
                                                   (byte)(in_fpscr >> 0x15) & 3);
            fStack_e0 = fRam0038e548 / fStack_e0;
            fStack_ac = fRam0038e548;
            fStack_a8 = fRam0038e548;
            uStack_d4 = 0.0;
            uStack_d0 = 0.0;
            fStack_bc = 0.0;
            uStack_dc = 0.0;
            uStack_cc = fRam0038e548;
            fStack_d8 = 0.0;
            uStack_c8 = 0.0;
            fStack_c4 = 0.0;
            fStack_c0 = 0.0;
            fStack_b4 = 0.0;
            fStack_b8 = fRam0038e548;
            iVar30 = *(int *)(param_1 + 0x270);
            *(float *)(iVar30 + 0x110) = fStack_e0;
            *(undefined4 *)(iVar30 + 0x114) = 0;
            *(undefined4 *)(iVar30 + 0x118) = 0;
            *(undefined4 *)(iVar30 + 0x11c) = 0;
            *(undefined4 *)(iVar30 + 0x120) = 0;
            *(float *)(iVar30 + 0x124) = fVar20;
            *(undefined4 *)(iVar30 + 0x128) = 0;
            *(undefined4 *)(iVar30 + 300) = 0;
            *(undefined4 *)(iVar30 + 0x130) = 0;
            *(undefined4 *)(iVar30 + 0x134) = 0;
            *(float *)(iVar30 + 0x138) = fVar20;
            *(undefined4 *)(iVar30 + 0x13c) = 0;
            fStack_b0 = fStack_e0;
            if ((uint)(byte)param_1[0x282] != (uint)(byte)param_1[0x283]) {
              uVar15 = FUN_0033aaac(*(undefined4 *)(param_1 + 0x284),(byte)param_1[0x282] + 0x18);
              FUN_00348a64(*(undefined4 *)(param_1 + 0x26c),0,uVar15,UNK_0038e8e0);
              param_1[0x283] = param_1[0x282];
            }
          }
          FUN_00333294(*(undefined4 *)(param_1 + 0x270),
                       ((int)(*(ushort *)(param_1 + 0x280) - 2) / 2) * 6 + -2);
          *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x170) = 1;
          FUN_003330d4(param_1);
        }
      }
      return;
    }
    uVar15 = FUN_00333270(*(undefined4 *)(param_1 + 0x26c));
    *(undefined4 *)(param_1 + 0x274) = uVar15;
    uVar15 = FUN_003331ec(*(undefined4 *)(param_1 + 0x26c));
    *(undefined4 *)(param_1 + 0x278) = uVar15;
    param_1[0x280] = '\0';
    fVar37 = fRam002268b8;
    param_1[0x281] = '\0';
    if (*(int *)(param_1 + 0x270) != 0) {
      iVar30 = 0;
      if (param_1[0x25e] != '\0') {
        lVar46 = (ulonglong)uRam002268b4 << 0x20;
        do {
          if (param_1[iVar30 * 0x24] == '\x01') {
            cVar5 = param_1[0x240];
            fVar33 = (float)VectorUnsignedToFloat
                                      ((uint)(byte)param_1[0x25f],(byte)(in_fpscr >> 0x15) & 3);
            fVar36 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + iVar30 * 0x24 + 4),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar47 = (float)((ulonglong)lVar46 >> 0x20);
            fVar36 = fVar36 / fVar33;
            lVar46 = CONCAT44(fVar47,fVar36);
            if (cVar5 == '\x01') {
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 8),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c);
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
            }
            else if (cVar5 == '\x02') {
              **(undefined4 **)(param_1 + 0x274) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 8);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10);
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 8),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
            }
            else if (cVar5 == '\x03') {
              fVar36 = fVar36 * fVar47;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 8),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 8),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc),fVar36);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
              uVar15 = FUN_003331e0(*(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c),
                                    *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10),fVar36);
              lVar46 = CONCAT44(fVar47,fVar36 * fVar37);
              **(undefined4 **)(param_1 + 0x274) = uVar15;
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
            }
            else {
              **(undefined4 **)(param_1 + 0x274) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 8);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0xc);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x10);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x14);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x18);
              iVar19 = *(int *)(param_1 + 0x274);
              *(undefined4 **)(param_1 + 0x274) = (undefined4 *)(iVar19 + 4);
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + iVar30 * 0x24 + 0x1c);
              *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 4;
            }
            uVar45 = (undefined4)lVar46;
            uVar15 = FUN_003331b0(uVar45,param_1[0x24e],param_1[0x256]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x24f],param_1[599]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x250],param_1[600]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x251],param_1[0x259]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
            uVar15 = FUN_003331b0(uVar45,param_1[0x252],param_1[0x25a]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x253],param_1[0x25b]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x254],param_1[0x25c]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            uVar15 = FUN_003331b0(uVar45,param_1[0x255],param_1[0x25d]);
            fVar33 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            **(float **)(param_1 + 0x278) = fVar33 * fVar20;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 4;
            *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 < (int)(uint)(byte)param_1[0x25e]);
        if (3 < *(ushort *)(param_1 + 0x280)) {
          FUN_00333294(*(undefined4 *)(param_1 + 0x270),
                       ((int)(*(ushort *)(param_1 + 0x280) - 2) / 2) * 6 + -2);
          *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x170) = 1;
          cVar5 = param_1[0x282];
          if (cVar5 != '\0') {
            fStack_70 = (float)VectorSignedToFloat((int)(*(ushort *)(param_1 + 0x280) - 2) >> 1,
                                                   (byte)(in_fpscr >> 0x15) & 3);
            fStack_70 = fVar38 / fStack_70;
            uStack_64 = 0;
            fStack_6c = 0.0;
            fStack_68 = 0.0;
            uStack_5c = (ulonglong)(uint)fVar38;
            afStack_54[0] = 0.0;
            afStack_54[1] = 0.0;
            iVar30 = *(int *)(param_1 + 0x270);
            *(float *)(iVar30 + 0x110) = fStack_70;
            *(undefined4 *)(iVar30 + 0x114) = 0;
            *(undefined4 *)(iVar30 + 0x118) = 0;
            *(undefined4 *)(iVar30 + 0x11c) = 0;
            *(undefined4 *)(iVar30 + 0x120) = 0;
            *(float *)(iVar30 + 0x124) = fVar38;
            *(undefined4 *)(iVar30 + 0x128) = 0;
            *(undefined4 *)(iVar30 + 300) = 0;
            *(undefined4 *)(iVar30 + 0x130) = 0;
            *(undefined4 *)(iVar30 + 0x134) = 0;
            *(float *)(iVar30 + 0x138) = fVar38;
            *(undefined4 *)(iVar30 + 0x13c) = 0;
          }
          puVar7 = puRam0033319c;
          if ((param_1[0x260] & 1U) != 0) {
            uVar29 = (uint)(cVar5 == '\0');
            if ((*puRam0033319c & 1) == 0) {
              uVar48 = FUN_003679b4(puRam0033319c);
              uVar29 = (uint)((ulonglong)uVar48 >> 0x20);
              if ((int)uVar48 != 0) {
                FUN_0036788c(uRam003331a0);
                uVar29 = uRam003331a8;
              }
            }
            iVar30 = iRam003331ac;
            FUN_0032d5dc(iRam003331ac,uVar29);
            FUN_00371eac(*(undefined4 *)(param_1 + 0x270),0);
            if (((*puVar7 & 1) == 0) && (iVar19 = FUN_003679b4(puRam0033319c), iVar19 != 0)) {
              FUN_0036788c(iVar30 + -0x180);
            }
            *(undefined4 *)(iVar30 + 4) = 0;
            *(int *)(iVar30 + 0x1c) = iVar30 + 0x2c;
            *(int *)(iVar30 + 0x18) = iVar30 + 8;
            *(undefined4 *)(iVar30 + 0x14) = 0x200;
            return;
          }
          piVar18 = *(int **)(param_1 + 0x270);
          if (((*puRam00371f08 & 1) == 0) && (iVar30 = FUN_003679b4(puRam00371f08), iVar30 != 0)) {
            FUN_0036788c(uRam00371f0c);
          }
          iVar30 = iRam00371f18;
          if (**(int **)(iRam00371f18 + 0x18) < *(int *)(iRam00371f18 + 0x14)) {
            FUN_002c1ae8(iRam00371f18,
                         *(int *)(iRam00371f18 + 0x1c) + **(int **)(iRam00371f18 + 0x18) * 8,piVar18
                        );
            **(int **)(iVar30 + 0x18) = **(int **)(iVar30 + 0x18) + 1;
          }
          if (((*puRam0036787c & 1) == 0) && (iVar30 = FUN_003679b4(puRam0036787c), iVar30 != 0)) {
            FUN_0036788c(iRam00367880);
          }
          iVar30 = *(int *)(iRam00367880 + 0xfc);
                    /* WARNING: Could not recover jumptable at 0x00367878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar18 + 8))(piVar18,iVar30 + 0x114,iVar30 + 0x174,iVar30 + 0x30);
          return;
        }
      }
      FUN_00333294(*(undefined4 *)(param_1 + 0x270),0);
      *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x170) = 0;
    }
  }
  return;
}

