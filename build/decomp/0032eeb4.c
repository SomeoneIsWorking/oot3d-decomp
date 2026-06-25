// OoT3D decomp @ 0032eeb4  name=FUN_0032eeb4  size=2800

void FUN_0032eeb4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  float *pfVar3;
  int iVar4;
  undefined uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  undefined2 uVar9;
  short sVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined auStack_6c [4];
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined local_50 [4];
  int local_4c;
  int local_48;
  
  fVar20 = DAT_0032f1f4;
  psVar2 = DAT_0032f1ec;
  cVar7 = '\0';
  *(uint *)(DAT_0032f1ec + 0x20) = (uint)*(byte *)(param_2 + 0x248a);
  uVar11 = *(uint *)(param_2 + 0x1710);
  if ((*(uint *)(param_2 + 0x1714) & 0x40000) == 0) {
    fVar27 = (*(float **)(param_2 + 0x170c))[0xe];
    fVar21 = **(float **)(param_2 + 0x170c);
    uVar15 = *(ushort *)(param_1 + 0x104);
    fVar24 = DAT_0032f208;
    if (uVar15 == 0x57) {
      bVar17 = (uVar11 & 0x8000000) != 0;
      cVar6 = 'W';
      if (bVar17) {
        cVar6 = *(char *)(param_2 + 0x1a7);
      }
      if ((bVar17 && cVar6 != '\x01') && (*(int *)(DAT_0032f20c + 4) == 0)) {
        fVar24 = DAT_0032f208 + *(float *)(psVar2 + 0x70);
        fVar21 = fVar21 + *(float *)(psVar2 + 0x70);
      }
    }
    else {
      bVar17 = uVar15 == 0xb;
      if (bVar17) {
        uVar15 = (ushort)*(byte *)(DAT_0032f210 + param_1);
      }
      if (bVar17 && uVar15 == 5) {
        fVar21 = fVar21 + *(float *)(psVar2 + 0x72);
        fVar24 = DAT_0032f208 + *(float *)(psVar2 + 0x72);
      }
    }
    if ((*(short *)(*DAT_0032f1f0 + 0x110) < 3) &&
       (DAT_0032f214 < (int)ABS(*(float *)(param_2 + 0x70)))) {
      fVar24 = fVar24 - *(float *)(psVar2 + 0x74);
      fVar21 = fVar21 - *(float *)(psVar2 + 0x74);
    }
    param_3 = DAT_0032f218;
    if (*(uint *)(param_2 + 0x1708) == DAT_0032f218) {
      fVar24 = fVar24 - *(float *)(psVar2 + 0x6e);
    }
  }
  else {
    fVar24 = DAT_0032f1f8;
    fVar21 = DAT_0032f1fc;
    fVar27 = fVar20;
    if (*(short *)(*DAT_0032f1f0 + 0x110) < 3) {
      fVar24 = DAT_0032f200;
      fVar21 = DAT_0032f204;
    }
  }
  if ((uVar11 & 0xa0000000) == 0) {
    if ((*(uint *)(param_2 + 0x29b8) & 0x800000) == 0) goto LAB_0032f054;
    param_3 = 0x3e;
  }
  else {
    bVar17 = (uVar11 & 0x80000000) != 0;
    if (bVar17) {
      param_3 = 0;
      uVar11 = *(ushort *)(param_2 + 0x90) & 0xfffffffe;
    }
    uVar15 = (ushort)uVar11;
    if (bVar17) {
LAB_0032f03c:
      *(ushort *)(param_2 + 0x90) = uVar15;
    }
    else {
      if ((uVar11 & 1) == 0) {
        iVar13 = *(int *)(param_2 + 0x1708);
        iVar16 = DAT_0032f220;
        if (iVar13 != DAT_0032f220) {
          iVar16 = DAT_0032f224;
        }
        if (iVar13 == DAT_0032f220 || iVar13 == iVar16) {
          param_3 = 0x3c;
          uVar15 = *(ushort *)(param_2 + 0x90) & 0xfdf7;
          goto LAB_0032f03c;
        }
      }
      else if (99 < (int)*(short *)(DAT_0032f21c + param_2) - (int)*(float *)(param_2 + 0x2c)) {
        param_3 = 0;
        goto LAB_0032f058;
      }
LAB_0032f054:
      param_3 = 0x3f;
    }
  }
LAB_0032f058:
  if ((*(byte *)(param_2 + 0x172a) & 1) != 0) {
    param_3 = 0;
  }
  if ((param_3 & 4) != 0) {
    *(byte *)(param_2 + 0x172a) = *(byte *)(param_2 + 0x172a) | 0x10;
  }
  FUN_00376340(fVar24,fVar27,fVar21,param_1,param_2);
  fVar24 = DAT_0032f228;
  if ((*(ushort *)(param_2 + 0x90) & 0x10) != 0) {
    *(float *)(param_2 + 100) = DAT_0032f228;
  }
  psVar2 = DAT_0032f1ec;
  *(float *)(DAT_0032f1ec + 0x1e) = *(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x84);
  *(undefined4 *)(psVar2 + 0x1c) = 0;
  iVar16 = *(int *)(param_2 + 0x7c);
  local_48 = param_1 + 0xa98;
  if (iVar16 != 0) {
    uVar5 = FUN_0035ea4c(local_48,iVar16,*(undefined *)(param_2 + 0x81));
    *(undefined *)(param_2 + 0x248a) = uVar5;
    *(undefined4 *)(param_2 + 0x2494) = *(undefined4 *)(param_2 + 0x228c);
    if ((*(ushort *)(param_2 + 0x90) & 0x20) == 0) {
      if ((*(uint *)(param_2 + 0x1714) & 0x200) == 0) {
        uVar12 = FUN_00341df0(local_48,iVar16,*(undefined *)(param_2 + 0x81));
      }
      else {
        uVar12 = 1;
      }
    }
    else if (*(int *)(param_2 + 0x88) < DAT_0032f22c) {
      uVar12 = 4;
    }
    else {
      uVar12 = 5;
    }
    *(undefined4 *)(param_2 + 0x228c) = uVar12;
    if (*(char *)(param_2 + 2) == '\x02') {
      cVar6 = FUN_004968f4(local_48,iVar16,*(undefined *)(param_2 + 0x81));
      FUN_00495b34((int)cVar6);
      if (*(char *)(param_2 + 0x81) == '2') {
        uVar12 = FUN_002c1e10(local_48,iVar16,0x32);
        FUN_0032b13c(param_1,uVar12);
      }
      else {
        FUN_00496c24(local_48);
      }
    }
    iVar13 = FUN_003232a4(local_48,iVar16,*(undefined *)(param_2 + 0x81));
    psVar2 = DAT_0032f1ec;
    *(int *)(DAT_0032f1ec + 0x1c) = iVar13;
    if (iVar13 != 0) {
      sVar8 = FUN_00496754(local_48,iVar16,*(undefined *)(param_2 + 0x81));
      *psVar2 = sVar8;
      if (sVar8 == 0) {
        if ((*(int *)(param_2 + 0x88) <= DAT_0032f22c) || (*(char *)(param_2 + 0x1a7) == '\x01')) {
LAB_0032f258:
          *(undefined4 *)(psVar2 + 0x1c) = 0;
          goto LAB_0032f260;
        }
      }
      else if ((*(ushort *)(param_2 + 0x90) & 1) == 0) goto LAB_0032f258;
      iVar13 = FUN_00357d54(local_48,iVar16,*(undefined *)(param_2 + 0x81));
      psVar2[1] = (short)(iVar13 << 10);
    }
  }
LAB_0032f260:
  FUN_003365b0(param_1,param_2,iVar16,*(undefined *)(param_2 + 0x81));
  fVar27 = DAT_0032f62c;
  fVar21 = DAT_0032f628;
  uVar15 = *(ushort *)(param_2 + 0x90);
  *(ushort *)(param_2 + 0x90) = uVar15 & 0xfdff;
  pfVar3 = DAT_0032f634;
  fVar19 = DAT_0032f630;
  if ((uVar15 & 8) == 0) {
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032f1f0 + 0x6e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_2 + 0x226c) = fVar20 * fVar21;
    *(float *)(param_2 + 0x2270) = fVar24;
    *(undefined *)(param_2 + 0x2279) = 0;
  }
  else {
    if (((*(uint *)(DAT_0032f1ec + 0x76) & 1) == 0) &&
       (iVar13 = FUN_003679b4(DAT_0032f638), iVar13 != 0)) {
      *pfVar3 = fVar24;
      pfVar3[1] = fVar19;
      pfVar3[2] = fVar24;
    }
    pfVar3 = DAT_0032f634;
    DAT_0032f634[1] = fVar19;
    pfVar3[2] = *(float *)(*(int *)(param_2 + 0x170c) + 0x38) + fVar20;
    if ((((*(uint *)(param_2 + 0x1714) & 0x40000) == 0) &&
        (iVar13 = FUN_002c1d18(param_1,param_2,DAT_0032f634,&local_4c,local_50,DAT_0032f63c),
        iVar13 != 0)) &&
       (*(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) | 0x200,
       *(int *)(param_2 + 0x78) != local_4c)) {
      *(int *)(param_2 + 0x78) = local_4c;
      *(undefined *)(param_2 + 0x80) = local_50[0];
      uVar25 = VectorSignedToFloat((int)*(short *)(local_4c + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar12 = VectorSignedToFloat((int)*(short *)(local_4c + 0xe),(byte)(in_fpscr >> 0x15) & 3);
      uVar9 = FUN_003758b0(uVar12,uVar25);
      *(undefined2 *)(param_2 + 0x82) = uVar9;
    }
    iVar13 = (int)(short)(*(short *)(param_2 + 0xbe) - (*(short *)(param_2 + 0x82) + -0x8000));
    uVar12 = FUN_0035fee8(local_48,*(undefined4 *)(param_2 + 0x78),*(undefined *)(param_2 + 0x80));
    fVar20 = DAT_0032f640;
    psVar2 = DAT_0032f1ec;
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    *(undefined4 *)(DAT_0032f1ec + 0x1a) = uVar12;
    *(int *)(psVar2 + 0x22) = iVar13;
    iVar14 = (int)(short)(*(short *)(param_2 + 0x2220) - (*(short *)(param_2 + 0x82) + -0x8000));
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    *(int *)(psVar2 + 0x24) = iVar14;
    iVar4 = DAT_0032f644;
    uVar15 = *(ushort *)(param_2 + 0x90);
    fVar19 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
    bVar17 = false;
    bVar18 = (uVar15 & 1) != 0;
    fVar19 = fVar19 * fVar20;
    fVar20 = (float)(uVar15 & 1);
    if (bVar18) {
      bVar17 = (int)fVar19 + -0x3f800000 < 0;
      fVar20 = fVar19;
    }
    if (bVar17 == (bVar18 && SBORROW4((int)fVar20,0x3f800000))) {
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032f1f0 + 0x6e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar20 = fVar20 * fVar21;
LAB_0032f43c:
      *(float *)(param_2 + 0x226c) = fVar20;
    }
    else {
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032f1f0 + 0x6e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar19 = fVar20 * fVar21 * fVar19;
      *(float *)(param_2 + 0x226c) = fVar19;
      fVar20 = DAT_0032f648;
      if ((int)fVar19 < iVar4) goto LAB_0032f43c;
    }
    bVar17 = false;
    bVar18 = (uVar15 & 0x200) != 0;
    if (bVar18) {
      bVar17 = iVar13 + -0x3000 < 0;
    }
    if (bVar17 != (bVar18 && SBORROW4(iVar13,0x3000))) {
      iVar13 = *(int *)(param_2 + 0x78);
      if ((uint)((int)*(short *)(iVar13 + 0xc) + ((int)DAT_0032f64c >> 1)) <= DAT_0032f64c) {
        fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xc),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar21 = (float)FUN_0033ee60(fVar20 * fVar27,fVar21 * fVar27,fVar19 * fVar27,
                                     *(undefined4 *)(iVar13 + 0x10),param_2 + 0x28);
        psVar2 = DAT_0032f1ec;
        *(float *)(param_2 + 0x2274) = fVar21;
        local_68 = *(float *)(param_2 + 0x28) -
                   (fVar21 + *(float *)(psVar2 + 0x78)) * fVar20 * fVar27;
        local_60 = *(float *)(param_2 + 0x30) -
                   (fVar21 + *(float *)(psVar2 + 0x78)) * fVar19 * fVar27;
        local_64 = *(float *)(param_2 + 0x2c) + *(float *)(*(int *)(param_2 + 0x170c) + 0xc);
        fVar20 = (float)FUN_003586a4(local_48,&local_54,&local_68);
        uVar12 = DAT_0032f654;
        iVar14 = DAT_0032f650;
        fVar21 = fVar20 - *(float *)(param_2 + 0x2c);
        *(float *)(param_2 + 0x2270) = fVar21;
        if (((int)fVar21 < iVar14) ||
           (iVar14 = FUN_002c1ce4(fVar21 + DAT_0032f658,local_48,auStack_6c,param_2 + 0x28,&local_58
                                  ,&local_5c,param_2), uVar25 = DAT_0032f63c, pfVar3 = DAT_0032f634,
           iVar14 != 0)) {
LAB_0032f54c:
          *(undefined4 *)(param_2 + 0x2270) = uVar12;
        }
        else {
          DAT_0032f634[1] = (fVar20 + DAT_0032f65c) - *(float *)(param_2 + 0x2c);
          iVar14 = FUN_002c1d18(param_1,param_2,pfVar3,&local_58,&local_5c,uVar25);
          if (iVar14 != 0) {
            uVar26 = VectorSignedToFloat((int)*(short *)(local_58 + 10),(byte)(in_fpscr >> 0x15) & 3
                                        );
            uVar25 = VectorSignedToFloat((int)*(short *)(local_58 + 0xe),
                                         (byte)(in_fpscr >> 0x15) & 3);
            iVar14 = FUN_003758b0(uVar25,uVar26);
            iVar14 = *(short *)(param_2 + 0x82) - iVar14;
            if (iVar14 < 0) {
              iVar14 = -iVar14;
            }
            if ((iVar14 < 0x4000) &&
               (iVar14 = FUN_00496a7c(local_48,local_58,local_5c), iVar14 == 0)) goto LAB_0032f54c;
          }
          iVar13 = FUN_00496aa8(local_48,iVar13,*(undefined *)(param_2 + 0x80));
          if (iVar13 == 0) {
            iVar13 = *(int *)(param_2 + 0x170c);
            fVar20 = *(float *)(param_2 + 0x2270);
            uVar11 = in_fpscr & 0xfffffff;
            uVar1 = uVar11 | (uint)(fVar20 < *(float *)(iVar13 + 0x1c)) << 0x1f;
            in_fpscr = uVar1 | (uint)(NAN(fVar20) || NAN(*(float *)(iVar13 + 0x1c))) << 0x1c;
            cVar7 = (byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1);
            if ((!(bool)cVar7) &&
               (DAT_0032fa20 < (uint)((int)*(short *)(local_54 + 0xc) + ((int)DAT_0032fa20 >> 1))))
            {
              uVar1 = uVar11 | (uint)(fVar20 < *(float *)(iVar13 + 0x14)) << 0x1f;
              in_fpscr = uVar1 | (uint)(NAN(fVar20) || NAN(*(float *)(iVar13 + 0x14))) << 0x1c;
              if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                cVar7 = '\x04';
              }
              else {
                uVar11 = uVar11 | (uint)(fVar20 < *(float *)(iVar13 + 0x18)) << 0x1f;
                in_fpscr = uVar11 | (uint)(NAN(fVar20) || NAN(*(float *)(iVar13 + 0x18))) << 0x1c;
                if ((byte)(uVar11 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  cVar7 = '\x03';
                }
                else {
                  cVar7 = '\x02';
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x2278) == cVar7) {
    if (((*(char *)(param_2 + 0x80) != '2') && ((*(uint *)(DAT_0032f1ec + 0x1a) & 0x40) != 0)) &&
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x221c) == fVar24) << 0x1e,
       SUB41(in_fpscr >> 0x1e,0))) {
      *(undefined *)(param_2 + 0x2279) = 0;
    }
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x221c) == fVar24) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_0032f764;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032f1f0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_0032fa24 / fVar20 + DAT_0032fa28) <= (int)(uint)*(byte *)(param_2 + 0x2279))
    goto LAB_0032f764;
    cVar6 = *(byte *)(param_2 + 0x2279) + 1;
  }
  else {
    cVar6 = '\0';
    *(char *)(param_2 + 0x2278) = cVar7;
  }
  *(char *)(param_2 + 0x2279) = cVar6;
LAB_0032f764:
  if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
    FUN_002c1ba4(param_2);
  }
  else {
    uVar12 = FUN_0035ea34(local_48,iVar16,*(undefined *)(param_2 + 0x81));
    psVar2 = DAT_0032f1ec;
    *(undefined4 *)(DAT_0032f1ec + 0x14) = uVar12;
    iVar13 = FUN_002c1ba4(param_2);
    if (iVar13 == 0) {
      if (*(char *)(param_2 + 0x81) != '2') {
        FUN_00496c40(local_48);
      }
      fVar20 = DAT_0032fa2c;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 10),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar21 = fVar21 * fVar27;
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar28 = DAT_0032fa2c / (fVar19 * fVar27);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar19 = fVar19 * fVar27;
      fVar22 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x2220));
      fVar23 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x2220));
      uVar9 = FUN_003758b0(fVar20,(-(fVar21 * fVar22) - fVar19 * fVar23) * fVar28);
      *(undefined2 *)(param_2 + 0x2284) = uVar9;
      uVar9 = FUN_003758b0(fVar20,(-(fVar21 * fVar23) - fVar19 * fVar22) * fVar28);
      *(undefined2 *)(param_2 + 0x2286) = uVar9;
      fVar22 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0xbe));
      fVar23 = (float)FUN_00338f60((int)*(short *)(param_2 + 0xbe));
      sVar8 = FUN_003758b0(fVar20,(-(fVar21 * fVar22) - fVar19 * fVar23) * fVar28);
      psVar2[2] = sVar8;
      iVar13 = FUN_0035db20(param_1,param_2);
      if (((iVar13 == 0) && (*(int *)(param_2 + 0x1708) != DAT_0032fa30)) &&
         (iVar13 = FUN_00331030(local_48,iVar16,*(undefined *)(param_2 + 0x81)), iVar13 == 1)) {
        sVar8 = FUN_003758b0(*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x60));
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xc),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        sVar10 = FUN_003758b0(fVar22 * fVar27,fVar21 * fVar27);
        iVar13 = DAT_0032fa3c;
        iVar16 = (int)(short)(sVar10 - sVar8);
        if (iVar16 < 0) {
          iVar16 = -iVar16;
        }
        if (iVar16 < 0x3e81) {
          FUN_0036055c(param_1,param_2,DAT_0032fa30,0);
          FUN_0036b0fc(param_1,param_2);
          FUN_0036b02c(param_1,param_2);
          iVar16 = DAT_0032fa44;
          if (-1 < psVar2[2]) {
            *(undefined *)(param_2 + 0x2237) = 1;
          }
          FUN_00360190(fVar20,fVar24,fVar24,DAT_0032fa48,param_2 + 0x254,param_1,
                       *(undefined4 *)(iVar16 + *(char *)(param_2 + 0x2237) * 4),0);
          *(float *)(param_2 + 0x221c) =
               SQRT(*(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x60) +
                    *(float *)(param_2 + 0x68) * *(float *)(param_2 + 0x68));
          *(short *)(param_2 + 0x2220) = sVar8;
        }
        else {
          fVar24 = (fVar20 - fVar19 * fVar27) * DAT_0032fa34;
          fVar20 = fVar24 * fVar24 * DAT_0032fa38;
          fVar21 = *(float *)(psVar2 + 0x52);
          *(short *)(param_2 + 0x22a0) = sVar10;
          if ((int)fVar20 < iVar13) {
            fVar20 = DAT_0032fa40;
          }
          FUN_003705a0(fVar24,fVar20 * fVar21,param_2 + 0x229c);
        }
      }
    }
  }
  uVar11 = *(uint *)(DAT_0032f1ec + 0x14);
  bVar17 = *(byte *)(param_2 + 0x248b) != uVar11;
  if (bVar17) {
    *(char *)(param_2 + 0x248b) = (char)uVar11;
  }
  else {
    uVar11 = (uint)*(byte *)(param_2 + 0x2489);
  }
  if (bVar17) {
    cVar7 = '\0';
  }
  else {
    cVar7 = (char)uVar11 + '\x01';
  }
  *(char *)(param_2 + 0x2489) = cVar7;
  return;
}

