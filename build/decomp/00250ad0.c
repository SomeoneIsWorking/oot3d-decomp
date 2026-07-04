// OoT3D decomp @ 00250ad0  name=FUN_00250ad0  size=10020

void FUN_00250ad0(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  float fVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  ushort uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte bVar19;
  uint uVar20;
  uint extraout_r1;
  int iVar21;
  uint extraout_r1_00;
  float fVar22;
  undefined2 uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  byte *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  
  *(undefined4 *)(DAT_00251304 + 0xac) = param_3;
  local_60 = param_1 + 0x2400;
  *(undefined4 *)(param_1 + 0x29c8) = param_3;
  if ((*(char *)(param_1 + 0x249e) < '\0') &&
     (cVar8 = *(char *)(param_1 + 0x249e) + '\x01', *(char *)(param_1 + 0x249e) = cVar8,
     fVar29 = DAT_0025130c, fVar34 = DAT_00251308, cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 0x249e) = 1;
    local_a0 = fVar29;
    local_9c = fVar34;
    FUN_0037547c(DAT_00251310,0,4,fVar29);
  }
  FUN_0036df4c(param_1 + 0x108,param_1 + 8);
  if (*(char *)(param_1 + 0x247e) != '\0') {
    *(char *)(param_1 + 0x247e) = *(char *)(param_1 + 0x247e) + -1;
  }
  local_64 = param_2 + 0x208c;
  if (*(char *)(param_1 + 0x227a) != '\0') {
    *(char *)(param_1 + 0x227a) = *(char *)(param_1 + 0x227a) + -1;
  }
  if (*(char *)(param_1 + 0x249f) != '\0') {
    *(char *)(param_1 + 0x249f) = *(char *)(param_1 + 0x249f) + -1;
  }
  if (*(char *)(local_60 + 0x82) != '\0') {
    *(char *)(param_1 + 0x2482) = *(char *)(local_60 + 0x82) + -1;
  }
  if (((*(uint *)(param_1 + 0x1710) & 0x2000000) != 0 &&
       (*(uint *)(param_1 + 0x1710) & 0x20000000) != 0) &&
     (iVar13 = FUN_00372d64(local_64,0x32,8), iVar13 != 0)) {
    FUN_00375d3c(param_2,local_64,iVar13,6);
  }
  cVar8 = *(char *)(local_60 + 0x88);
  if (cVar8 < '\0') {
    cVar8 = cVar8 + '\x01';
LAB_00250c2c:
    *(char *)(param_1 + 0x2488) = cVar8;
  }
  else if ('\0' < cVar8) {
    iVar14 = *(int *)(param_1 + 0x1708);
    bVar25 = iVar14 != DAT_00251314;
    iVar13 = DAT_00251314;
    if (bVar25) {
      iVar13 = DAT_00251318;
    }
    bVar27 = iVar14 != iVar13;
    if (bVar25 && bVar27) {
      iVar13 = DAT_0025131c;
    }
    iVar21 = iVar13;
    if ((bVar25 && bVar27) && iVar14 != iVar13) {
      iVar21 = DAT_00251320;
    }
    if (((bVar25 && bVar27) && iVar14 != iVar13) && iVar14 != iVar21) {
      cVar8 = cVar8 + -1;
      goto LAB_00250c2c;
    }
  }
  if (*(char *)(param_1 + 0x227c) != '\0') {
    *(char *)(param_1 + 0x227c) = *(char *)(param_1 + 0x227c) + -1;
  }
  FUN_003c45f4(param_2,param_1);
  local_90 = (byte *)0x0;
  uVar24 = **(uint **)(param_1 + 0x29c8) & 0x200;
  if (uVar24 == 0) {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xbfffffff;
    *(undefined1 *)(param_1 + 0x174f) = 0xff;
  }
  uVar15 = FUN_0037571c(param_2);
  bVar25 = uVar15 != 0;
  if (!bVar25) {
    uVar15 = (uint)*(byte *)(param_1 + 0x12bc);
  }
  if (bVar25 || uVar15 != 0) {
LAB_00250ca8:
    uVar16 = 0;
LAB_00250cd8:
    *(undefined4 *)(param_1 + 0x1700) = uVar16;
  }
  else {
    bVar25 = (DAT_00251324 & *(uint *)(param_1 + 0x1710)) == 0;
    uVar15 = DAT_00251324;
    if (bVar25) {
      uVar15 = (uint)*(byte *)(param_1 + 0x172a);
    }
    if (!bVar25 || (uVar15 & 0x80) != 0) goto LAB_00250ca8;
    bVar25 = uVar24 == 0;
    if (bVar25) {
      uVar15 = *(uint *)(param_1 + 0x1714);
    }
    bVar26 = (uVar15 & 0x2000) == 0;
    bVar27 = bVar25 && bVar26;
    if (bVar25 && bVar26) {
      bVar27 = *(int *)(param_1 + 0x1718) == 0;
    }
    if (!bVar27) {
      iVar13 = *(int *)(param_1 + 0x1700);
      if (8 < iVar13) {
LAB_00250cfc:
        *(int *)(param_1 + 0x1700) = iVar13 + -1;
        if (8 < iVar13 + -1) {
          local_90 = (byte *)0x1;
        }
        goto LAB_00250d10;
      }
      uVar16 = 8;
      goto LAB_00250cd8;
    }
    if ((*(uint *)(param_1 + 0x1710) & 0x20000) == 0) {
      iVar13 = *(int *)(param_1 + 0x1700);
      if (iVar13 != 0) goto LAB_00250cfc;
    }
    else {
      *(undefined4 *)(param_1 + 0x1700) = 0;
    }
  }
LAB_00250d10:
  local_68 = param_2 + 0x2000;
  if ((*(uint *)(DAT_00251328 + *(int *)(param_2 + 0x20ac)) & 0x80) == 0 &&
      (*(uint *)(*(int *)(param_2 + 0x20ac) + 4) & 0x100) == 0) {
    if ((*(int *)(param_1 + 0x1700) != 0) || ((*(uint *)(param_1 + 0x1710) & DAT_0025132c) != 0)) {
      cVar8 = *(char *)(DAT_00251330 + 0x2d);
      bVar25 = cVar8 == '\0';
      if (bVar25) {
        cVar8 = *(char *)(param_1 + 2);
      }
      uVar15 = (uint)(!bVar25 || cVar8 != '\x02');
      local_6c = uVar15;
      if (*(byte *)(param_1 + 0x2492) != uVar15) {
        FUN_00334354(param_1);
      }
      *(char *)(param_1 + 0x2492) = (char)local_6c;
      uVar20 = *(uint *)(param_1 + 0x1710);
      if (((uVar20 & 0x2000000) == 0) &&
         (((*(char *)(param_1 + 0x1a9) != '\x02' || (*(short *)(param_1 + 0x2248) == 0)) &&
          ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & 0x200) != 0)))) {
        if (*(char *)(param_1 + 2) == '\x02') {
          iVar13 = *(int *)(local_68 + 0x130);
        }
        else {
          iVar13 = *(int *)(local_68 + 0xac);
        }
        *(uint *)(param_1 + 0x1710) = uVar20 | 0x8000;
        if ((iVar13 == 0) || ((*(uint *)(iVar13 + 4) & 0x8000000) != 0)) {
          if ((DAT_00251334 & (uVar20 | 0x8000)) == 0) {
            *(uint *)(param_1 + 0x1710) = uVar20 | 0x28000;
            if ((*(byte *)(param_1 + 0x2a6) & 0x80) == 0) {
              uVar15 = *(ushort *)(param_1 + 0x90) & 0x200;
              bVar25 = (*(ushort *)(param_1 + 0x90) & 0x200) != 0;
              if (bVar25) {
                uVar15 = *(uint *)(DAT_00251304 + 0x22);
              }
              if (bVar25 && (int)uVar15 < 0x2000) {
                sVar12 = *(short *)(param_1 + 0x82) + -0x8000;
                *(short *)(param_1 + 0xbe) = sVar12;
                *(short *)(param_1 + 0x2220) = sVar12;
              }
            }
            *(undefined2 *)(param_1 + 0x2222) = *(undefined2 *)(param_1 + 0xbe);
          }
        }
        else {
          if ((*(int *)(param_1 + 0x16f8) == iVar13 && *(char *)(param_1 + 2) == '\x02') &&
             (*(int *)(local_68 + 0x1a4) != 0)) {
            iVar13 = *(int *)(local_68 + 0x1a4);
          }
          if (*(int *)(param_1 + 0x16f8) == iVar13) {
            if (uVar15 == 0) {
              FUN_00334354(param_1);
            }
          }
          else {
            if (uVar15 == 0) {
              *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x2000;
            }
            *(int *)(param_1 + 0x16f8) = iVar13;
            *(undefined4 *)(param_1 + 0x1700) = 0x12;
            *(undefined1 *)(param_1 + 0x174f) = 0;
            *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xffdffffd;
          }
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xbfffffff;
        }
      }
      iVar13 = *(int *)(param_1 + 0x16f8);
      if (iVar13 != 0) {
        if ((*(char *)(param_1 + 2) == '\x02') && (iVar13 != *(int *)(param_1 + 0x1718))) {
          iVar13 = FUN_001ebe68(iVar13,param_1,local_90);
          if (iVar13 != 0) {
            FUN_00334354(param_1);
            *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x40000000;
            goto LAB_00250f38;
          }
          if (*(int *)(param_1 + 0x16f8) == 0) goto LAB_00250f88;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x16f8) + 0x115) = 0x3c;
        goto LAB_00250f38;
      }
      if (*(int *)(param_1 + 0x1718) != 0) {
        *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x1718);
        goto LAB_00250f44;
      }
      goto LAB_00250f88;
    }
    FUN_0032fac8(param_1);
  }
  else {
LAB_00250f38:
    if (*(int *)(param_1 + 0x16f8) == 0) {
LAB_00250f88:
      if ((*(uint *)(param_1 + 0x1710) & 0x20000) == 0) {
        FUN_0032fac8(param_1);
        if (*(int *)(param_1 + 0x1720) != 0) {
          uVar42 = FUN_0032fa9c(local_64,*(int *)(param_1 + 0x1720),5);
          uVar15 = (uint)((ulonglong)uVar42 >> 0x20);
          iVar13 = (int)uVar42;
          if (iVar13 == 0) {
            FUN_0032fa9c(local_64,*(undefined4 *)(param_1 + 0x1720),5);
            uVar15 = extraout_r1;
          }
          if (iVar13 != 0) {
            uVar15 = (uint)*(byte *)(iVar13 + 0xb7);
          }
          bVar25 = iVar13 == 0 || uVar15 == 0;
          if (uVar24 != 0) {
            uVar15 = (uint)*(byte *)(param_1 + 0x174f);
          }
          if (uVar24 != 0 && uVar15 < 4) {
            iVar13 = 0;
            if (bVar25) {
              iVar13 = *(int *)(local_68 + 0x1a4);
            }
            if (bVar25 && iVar13 != 0) {
              *(int *)(param_1 + 0x16f8) = iVar13;
              *(int *)(param_1 + 0x1718) = iVar13;
            }
          }
          cVar8 = *(char *)(param_1 + 0x174f) + '\x01';
          *(char *)(param_1 + 0x174f) = cVar8;
          if (cVar8 == -1) {
            *(undefined1 *)(param_1 + 0x174f) = 0xfe;
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xffffdfff;
      }
    }
    else {
LAB_00250f44:
      uVar24 = *(uint *)(param_1 + 0x1710);
      uVar15 = uVar24 & 0xfffcffff;
      *(uint *)(param_1 + 0x1710) = uVar15;
      if (((uVar24 & 0x800) != 0) || ((~*(uint *)(*(int *)(param_1 + 0x16f8) + 4) & 5) != 0)) {
        *(uint *)(param_1 + 0x1710) = uVar15 | 0x10000;
      }
    }
  }
  fVar29 = DAT_0025133c;
  fVar34 = DAT_00251338;
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(param_1 + 0x16f8);
  fVar35 = DAT_00251344;
  fVar39 = DAT_00251340;
  *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xffbfffff;
  fVar4 = DAT_00251348;
  psVar3 = DAT_00251304;
  if (*(char *)(param_1 + 0x1a9) == '\x06') {
    if (*(short *)(param_1 + 0x2248) != 0) {
      if (((*(uint *)(DAT_00251304 + 0x7c) & 1) == 0) &&
         (iVar13 = FUN_003679b4(DAT_00251304 + 0x7c), pfVar5 = DAT_0025134c, iVar13 != 0)) {
        *DAT_0025134c = fVar4;
        pfVar5[1] = fVar39;
        pfVar5[2] = fVar4;
      }
      if (((*(uint *)(psVar3 + 0x7a) & 1) == 0) &&
         (iVar13 = FUN_003679b4(DAT_00251350), pfVar5 = DAT_00251354, iVar13 != 0)) {
        *DAT_00251354 = fVar4;
        pfVar5[1] = fVar39;
        pfVar5[2] = fVar4;
      }
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2244) == fVar4) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        FUN_0034d688(param_2,param_1,0xff);
      }
      else {
        if (*(short *)(param_1 + 0x2248) == 0) {
LAB_00251160:
          FUN_00355830(0,0xffffffff);
          fVar40 = DAT_0025135c;
          *(float *)(param_1 + 0x2244) = fVar4;
          *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfffff7ff;
          fVar28 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00251358 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x2248) = (short)(int)(fVar40 / fVar28 + fVar39);
          fVar40 = fVar4;
        }
        else {
          sVar12 = *(short *)(param_1 + 0x2248) + -1;
          iVar13 = (int)sVar12;
          *(short *)(param_1 + 0x2248) = sVar12;
          if (iVar13 == 0) goto LAB_00251160;
          iVar14 = (int)*(short *)(*DAT_00251358 + 0x110);
          fVar40 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
          if ((int)(DAT_00251360 / fVar40 + fVar39) < iVar13) {
            fVar40 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
            fVar28 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
            fVar41 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
            fVar28 = (float)VectorSignedToFloat((int)(DAT_00251364 / fVar40 + fVar39) -
                                                (iVar13 - (int)(DAT_00251360 / fVar28 + fVar39)),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar40 = (float)VectorSignedToFloat((int)(DAT_00251364 / fVar41 + fVar39),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar40 = fVar28 / fVar40;
          }
          else {
            fVar28 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
            fVar40 = fVar35;
            if (iVar13 < (int)(fVar29 / fVar28 + fVar39)) {
              fVar40 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
              fVar28 = (float)VectorSignedToFloat((int)(fVar29 / fVar40 + fVar39),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar40 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
              fVar40 = fVar40 / fVar28;
              *(float *)(param_1 + 0x2244) = fVar40;
              if ((*(uint *)(param_1 + 0x29b8) & 0x800) != 0) {
                *(float *)(param_1 + 0x2244) = fVar40 * fVar39;
              }
            }
          }
        }
        local_98 = (float)(int)(short)(int)(fVar40 * fVar34);
        local_9c = DAT_00251368;
        local_94 = 0.0;
        local_90 = &NMI;
        local_a0 = (float)((int)DAT_00251368 + -4);
        FUN_00365d20(param_2,param_1 + 0x22a8,DAT_00251354 + -3);
      }
    }
  }
  else if ((*(char *)(param_1 + 0x1a9) == '\x02') && (*(short *)(param_1 + 0x2248) < 0)) {
    *(short *)(param_1 + 0x2248) = *(short *)(param_1 + 0x2248) + 1;
  }
  fVar40 = DAT_00251714;
  piVar6 = DAT_00251358;
  if (*(char *)(param_1 + 0x227d) != '\0') {
    bVar9 = *(char *)(param_1 + 0x227d) - 1;
    uVar15 = (uint)bVar9;
    *(byte *)(param_1 + 0x227d) = bVar9;
    iVar13 = *piVar6;
    uVar24 = *(byte *)(param_1 + 0x227e) + uVar15;
    fVar28 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    cVar8 = (char)uVar24;
    *(char *)(param_1 + 0x227e) = cVar8;
    uVar16 = DAT_00251718;
    if ((int)(fVar29 / fVar28 + fVar39) < (int)(uVar24 & 0xff)) {
      uVar23 = (undefined2)(uVar15 * 2);
      if (uVar15 != 0x14 && 0x27 < uVar15 * 2) {
        uVar23 = 0x28;
      }
      fVar28 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x227e) = cVar8 - (char)(int)(fVar29 / fVar28 + fVar39);
      fVar29 = (float)FUN_00371e50(uVar16);
      iVar13 = param_1 + (int)fVar29 * 0xc;
      fVar29 = (float)FUN_003738a8(fVar40);
      local_98 = (fVar29 + *(float *)(iVar13 + 0x2340)) - *(float *)(param_1 + 0x28);
      fVar29 = (float)FUN_003738a8(fVar40);
      local_94 = (fVar29 + *(float *)(iVar13 + 0x2344)) - *(float *)(param_1 + 0x2c);
      fVar29 = (float)FUN_003738a8(fVar40);
      local_90 = (byte *)((fVar29 + *(float *)(iVar13 + 0x2348)) - *(float *)(param_1 + 0x30));
      local_a0 = 1.4013e-45;
      FUN_0032fa4c(param_2,param_1,&local_98,uVar23);
      FUN_0034a928(param_1,DAT_0025171c);
    }
  }
  fVar41 = DAT_00251728;
  fVar28 = DAT_00251724;
  fVar29 = DAT_00251720;
  local_70 = param_2 + 0x100;
  local_74 = param_2 + 0x5000;
  local_78 = param_2 + 0x3100;
  if (*(char *)(param_1 + 0x246c) != '\0') {
    if (*(char *)(param_1 + 0x1a4) == '\x01') {
      iVar13 = 0x14;
    }
    else {
      iVar13 = (int)(*(float *)(param_1 + 0x221c) * DAT_0025172c) + 1;
    }
    bVar25 = false;
    iVar14 = 0;
    if ((*(uint *)(param_1 + 0x1714) & 8) != 0) {
      iVar14 = 100;
    }
    local_90 = (byte *)(param_1 + 0x246d);
    if (*(char *)(param_1 + 0x1a6) == '\x01') {
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = 1.4013e-45;
      local_94 = 1.4013e-45;
      FUN_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),local_64,param_2,0xee,0);
      FUN_0035d190(param_2,1);
      FUN_00367c7c(param_2,DAT_00251730,0);
    }
    uVar16 = DAT_00251734;
    iVar21 = 0x11;
    pbVar17 = local_90;
    do {
      fVar22 = (float)(uint)*pbVar17;
      if (iVar13 + iVar14 < (int)fVar22) {
        uVar24 = (int)fVar22 - (iVar13 + iVar14);
        fVar22 = (float)(uVar24 & 0xff);
        bVar25 = true;
        *pbVar17 = (byte)uVar24;
        if (0x14 < (uint)fVar22) {
          fVar22 = (float)VectorUnsignedToFloat(fVar22,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = (fVar22 - fVar41) * fVar29;
        }
      }
      else {
        *pbVar17 = 0;
      }
      iVar21 = iVar21 + -1;
      pbVar17 = pbVar17 + 1;
    } while (iVar21 != 0);
    if (bVar25) {
      FUN_0036f59c(param_1,DAT_00251738,fVar22,uVar16);
      uVar24 = *(uint *)(local_74 + 0xbf4);
      if (*(short *)(local_70 + 4) == 0x17) {
        uVar24 = uVar24 & 1;
      }
      else {
        uVar24 = uVar24 + (uint)((ulonglong)uVar24 * (ulonglong)DAT_0025173c >> 0x23) * -10;
      }
      if (uVar24 == 0) {
        FUN_0035daac(param_2,0xffffffff);
      }
    }
    else if (*(short *)(local_78 + 0x8c) == 0) {
      *(undefined1 *)(param_1 + 0x246c) = 0;
    }
  }
  if ((((*(byte *)(param_1 + 0x172a) & 0x40) != 0) && (*(short *)(DAT_00251740 + 0x52) != 0)) &&
     (*(short *)(DAT_00251740 + 0x80) == 0)) {
    *(undefined2 *)(DAT_00251740 + 0x80) = 3;
    local_98 = 0.0;
    local_94 = 1.4013e-45;
    local_a0 = 0.0;
    local_9c = 0.0;
    FUN_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),local_64,param_2,(int)*(short *)(DAT_00251744 + 2),
                 0);
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xbf;
  }
  local_7c = param_1 + 0x1310;
  if ((*(uint *)(param_1 + 0x1714) & 0x8000) != 0) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(float *)(param_1 + 0x6c) = fVar4;
      *(float *)(param_1 + 0x221c) = fVar4;
      FUN_00376864(param_1);
    }
    FUN_0032eeb4(param_2,param_1);
    goto LAB_0025330c;
  }
  if (*(char *)(param_1 + 0x1a7) != *(char *)(param_1 + 0x1ab)) {
    uVar24 = *(uint *)(param_1 + 0x1710) & 0x8000000;
    if (*(char *)(param_1 + 0x1a7) == '\x01') {
      if (uVar24 != 0) {
        FUN_00355264(param_2,param_1);
        fVar22 = *(float *)(param_1 + 0x88);
        fVar36 = *(float *)(*(int *)(param_1 + 0x170c) + 0x2c);
        uVar24 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar36) << 0x1f |
                 (uint)(fVar22 == fVar36) << 0x1e;
        in_fpscr = uVar24 | (uint)(NAN(fVar22) || NAN(fVar36)) << 0x1c;
        bVar9 = (byte)(uVar24 >> 0x18);
        if (!(bool)(bVar9 >> 6 & 1) && bVar9 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          uVar24 = *(uint *)(param_1 + 0x1714) | 0x400;
          goto LAB_002517d0;
        }
      }
    }
    else if ((uVar24 != 0) &&
            ((*(char *)(param_1 + 0x1ab) == '\x01' || ((*(ushort *)(param_1 + 0x90) & 1) != 0)))) {
      FUN_0032ec94(param_2,param_1);
      uVar24 = *(uint *)(param_1 + 0x1714) & 0xfffffbff;
LAB_002517d0:
      *(uint *)(param_1 + 0x1714) = uVar24;
    }
    iVar13 = DAT_00251cd4;
    *(undefined1 *)(param_1 + 0x1ab) = *(undefined1 *)(param_1 + 0x1a7);
    iVar14 = *(int *)(param_1 + 0x1708);
    bVar25 = iVar14 != iVar13;
    if (bVar25) {
      iVar13 = DAT_00251cd8;
    }
    bVar27 = iVar14 != iVar13;
    if (bVar25 && bVar27) {
      iVar13 = DAT_00251cdc;
    }
    iVar21 = iVar13;
    if ((bVar25 && bVar27) && iVar14 != iVar13) {
      iVar21 = DAT_00251ce0;
    }
    if (((bVar25 && bVar27) && iVar14 != iVar13) && iVar14 != iVar21) {
      bVar25 = iVar14 != DAT_00251ce4;
      iVar13 = DAT_00251ce4;
      if (bVar25) {
        iVar13 = DAT_00251ce8;
      }
      bVar27 = iVar14 != iVar13;
      if (bVar25 && bVar27) {
        iVar13 = DAT_00251cec;
      }
      bVar26 = iVar14 != iVar13;
      if ((bVar25 && bVar27) && bVar26) {
        iVar13 = DAT_00251cf0;
      }
      if (((bVar25 && bVar27) && bVar26) && iVar14 != iVar13) {
        *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_1 + 0x1a7);
      }
      if (((bVar25 && bVar27) && bVar26) && iVar14 != iVar13) goto LAB_0025183c;
    }
    *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 4;
  }
LAB_0025183c:
  if ((*(int *)(param_1 + 0x124) == 0) && ((*(uint *)(param_1 + 0x1710) & 0x800000) != 0)) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x12b8);
    uVar10 = *(undefined1 *)(param_1 + 0x2a6);
    *(undefined1 *)(param_1 + 0x2a6) = 0;
    FUN_0036055c(param_2,param_1,DAT_00251cf4,0);
    *(undefined1 *)(param_1 + 0x2a6) = uVar10;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x800000;
    FUN_003604f0(param_1 + 0x254,param_2,0x21);
    FUN_003603f8(param_2,param_1,0x9b);
    *(undefined2 *)(param_1 + 0x2238) = 99;
  }
  cVar8 = *(char *)(param_1 + 0x2228);
  if (cVar8 == '\0') {
    *(undefined1 *)(param_1 + 0x2229) = 0;
  }
  else {
    if (cVar8 < '\0') {
      cVar8 = cVar8 + '\x01';
    }
    else {
      cVar8 = cVar8 + -1;
    }
    *(char *)(param_1 + 0x2228) = cVar8;
  }
  FUN_00370378(param_1 + 0x175c,0,400);
  FUN_0025342c(param_1 + 0x1220,0x14,0x50,6);
  fVar7 = DAT_00251d00;
  fVar36 = DAT_00251cfc;
  fVar22 = DAT_00251cf8;
  local_80 = param_1 + 0x1200;
  if ((*(uint *)(local_74 + 0xbf4) & 0x20) == 0) {
    sVar12 = 3;
  }
  else {
    sVar12 = 0;
  }
  *(short *)(param_1 + 0xc2) = sVar12 + *(short *)(param_1 + 0x1220);
  psVar3 = DAT_00251d04;
  if (*(char *)(param_1 + 0x1b7) == '\x04') {
    psVar2 = DAT_00251d04 + 4;
    DAT_00251d04[3] = (DAT_00251d04[3] - (DAT_00251d04[3] >> 3)) + (short)(-(int)*DAT_00251d04 >> 2)
    ;
    psVar3[4] = (*psVar2 - (*psVar2 >> 3)) + (short)(-(int)psVar3[1] >> 2);
    local_90 = (byte *)(int)(short)(*(short *)(param_1 + 0x36) - *(short *)(param_1 + 0xbe));
    fVar30 = (float)FUN_00338f60();
    fVar31 = (float)FUN_003738a8(fVar36);
    fVar37 = *(float *)(param_1 + 0x6c) * DAT_00251d08;
    fVar32 = (float)FUN_002cfca0(local_90);
    fVar33 = (float)FUN_003738a8(fVar36);
    fVar38 = *(float *)(param_1 + 0x6c);
    sVar12 = psVar3[3] + ((short)(int)(fVar30 * (fVar31 + fVar7) * fVar37) >> 2);
    psVar3[3] = sVar12;
    iVar13 = DAT_00251d0c;
    sVar1 = psVar3[4] + ((short)(int)(fVar32 * (fVar33 + fVar7) * fVar38 * fVar22) >> 2);
    psVar3[4] = sVar1;
    iVar14 = (iVar13 >> 0xd) - iVar13;
    if (iVar13 < sVar12) {
      psVar3[3] = (short)iVar13;
    }
    else if (sVar12 < iVar14) {
      psVar3[3] = (short)iVar14;
    }
    if (iVar13 < sVar1) {
      psVar3[4] = (short)iVar13;
    }
    else if (sVar1 < iVar14) {
      psVar3[4] = (short)iVar14;
    }
    sVar12 = *psVar3 + psVar3[3];
    *psVar3 = sVar12;
    bVar25 = -1 < sVar12;
    if (bVar25) {
      sVar12 = 0;
    }
    if (!bVar25) {
      sVar12 = sVar12 >> 1;
    }
    psVar3[1] = psVar3[1] + psVar3[4];
    psVar3[2] = sVar12;
  }
  iVar14 = FUN_0034dd2c(param_1);
  iVar13 = DAT_00251d14;
  fVar30 = DAT_00251d10;
  if (iVar14 != 0) {
    fVar31 = *(float *)(param_1 + 0x2240) + *(float *)(param_1 + 0x2244);
    *(float *)(param_1 + 0x2240) = fVar31;
    fVar32 = (*(float *)(param_1 + 0x2244) - fVar31 * fVar40) * fVar30;
    *(float *)(param_1 + 0x2244) = fVar32;
    uVar24 = in_fpscr & 0xfffffff;
    uVar15 = uVar24 | (uint)(fVar32 < fVar4) << 0x1f;
    in_fpscr = uVar15 | (uint)(NAN(fVar32) || NAN(fVar4)) << 0x1c;
    if ((byte)(uVar15 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar32 = -fVar32;
    }
    if ((int)fVar32 < iVar13) {
      uVar24 = uVar24 | (uint)(fVar31 < fVar4) << 0x1f;
      in_fpscr = uVar24 | (uint)(NAN(fVar31) || NAN(fVar4)) << 0x1c;
      *(float *)(param_1 + 0x2244) = fVar4;
      if ((byte)(uVar24 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar31 = -fVar31;
      }
      if ((int)fVar31 < iVar13) {
        *(float *)(param_1 + 0x2240) = fVar4;
      }
    }
  }
  local_84 = param_1 + 0x229c;
  local_88 = param_2 + 0xa98;
  if ((*(byte *)(param_1 + 0x2a6) & 0x80) == 0) {
    if (((*(ushort *)(param_1 + 0x90) & 1) == 0) || (*(int *)(DAT_00251304 + 0x14) != 5)) {
      uVar24 = (uint)*(byte *)(param_1 + 0x1a7);
      bVar25 = uVar24 == 2;
      if (bVar25) {
        uVar24 = *(uint *)(param_1 + 0x1710);
      }
      if (!bVar25 || (uVar24 & 0x28000000) != 0) goto LAB_00251d34;
LAB_00251b40:
      sVar12 = *(short *)(param_1 + 0x2220);
      iVar14 = (int)sVar12;
      iVar13 = (int)(short)(*(short *)(param_1 + 0x36) - sVar12);
      if (iVar13 < 0) {
        iVar13 = -iVar13;
      }
      fVar34 = *(float *)(param_1 + 0x221c);
      if ((0x6000 < iVar13) &&
         (in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e,
         !SUB41(in_fpscr >> 0x1e,0))) {
        iVar14 = (int)(short)(sVar12 + -0x8000);
        fVar34 = fVar4;
      }
      iVar13 = FUN_003705a0(fVar34,DAT_00251d18,param_1 + 0x6c);
      if ((iVar13 != 0) &&
         (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar34 == fVar4) << 0x1e,
         SUB41(in_fpscr >> 0x1e,0))) {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x2220);
      }
      uVar24 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x221c) == fVar4) << 0x1e;
      if (!SUB41(uVar24 >> 0x1e,0)) {
        iVar13 = (int)(ABS(*(float *)(param_1 + 0x221c)) * DAT_00251d1c -
                      ABS(*(float *)(param_1 + 0x6c)) * fVar22);
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        else if (DAT_00251d20 < iVar13) {
          iVar13 = DAT_00251d20;
        }
        FUN_00370378(param_1 + 0x36,iVar14,(int)(short)iVar13);
      }
      iVar13 = DAT_00251d24;
      in_fpscr = uVar24 & 0xfffffff | (uint)(*(float *)(param_1 + 0x221c) == fVar4) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar24 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          iVar21 = *(int *)(param_1 + 0x1708);
          iVar14 = DAT_00251cd4;
          if (iVar21 != DAT_00251cd4) {
            iVar14 = DAT_00251cdc;
          }
          if ((((iVar21 == DAT_00251cd4 || iVar21 == iVar14) &&
               (0x40000000 < (int)*(float *)(param_1 + 0x6c))) &&
              (iVar14 = *(int *)(param_1 + 0x284), iVar14 != DAT_00251d24 && iVar14 != 500)) &&
             ((iVar14 != *(int *)(DAT_00251d28 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x198) &&
              (*(int *)(DAT_00251304 + 0x14) == 5)))) {
            uVar16 = FUN_003603c0(param_1 + 0x254,DAT_00251d24);
            uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00360190(DAT_00251d2c,fVar4,uVar16,fVar4,param_1 + 0x254,param_2,iVar13,0);
          }
          FUN_0032ebe8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x28,DAT_00251d30);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x1a7) != '\x01') goto LAB_00251b40;
LAB_00251d34:
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x221c);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x2220);
    }
    FUN_0035fb14(param_1);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x229c) == fVar4) << 0x1e;
    if (((!SUB41(in_fpscr >> 0x1e,0)) && (iVar13 = FUN_0036a7a0(param_2), iVar13 == 0)) &&
       ((*(uint *)(param_1 + 0x1710) & DAT_00252118) == 0)) {
      iVar14 = *(int *)(param_1 + 0x1708);
      iVar13 = DAT_0025211c;
      if (iVar14 != DAT_0025211c) {
        iVar13 = DAT_00252120;
      }
      if (iVar14 != DAT_0025211c && iVar14 != iVar13) {
        fVar34 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x22a0));
        *(float *)(param_1 + 0x60) =
             *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x229c) * fVar34;
        fVar34 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x22a0));
        *(float *)(param_1 + 0x68) =
             *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x229c) * fVar34;
      }
    }
    FUN_0036b96c(param_1);
    FUN_0032eeb4(param_2,param_1);
    psVar3 = DAT_00251304;
    iVar13 = *(int *)(DAT_00251304 + 0x1c);
    uVar24 = extraout_r1_00;
    if (iVar13 != 0) {
      uVar24 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    if (iVar13 == 0 || uVar24 == 1) goto LAB_00251fcc;
    iVar13 = iVar13 + -1;
    *(int *)(DAT_00251304 + 0x1c) = iVar13;
    if (*psVar3 == 0) {
      fVar34 = *(float *)(DAT_00252128 + iVar13 * 4);
      if ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) {
        fVar34 = fVar34 * DAT_0025212c;
      }
    }
    else {
      fVar34 = *(float *)(DAT_00252124 + iVar13 * 4);
    }
    FUN_003705a0(fVar34,fVar34 * DAT_00252130,local_84);
    fVar31 = DAT_00252134;
    if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
      fVar31 = DAT_00252138;
    }
    FUN_00370378(param_1 + 0x22a0,(int)psVar3[1],(int)(short)(int)(fVar34 * fVar31));
  }
  else {
    psVar3 = DAT_00251304;
    psVar3[0x14] = 0;
    psVar3[0x15] = 0;
    *(undefined1 *)(param_1 + 0x248a) = 0;
    pfVar5 = DAT_0025213c;
    if (((*(uint *)(param_1 + 0x1710) & 1) == 0) && ((*(uint *)(param_1 + 0x1710) & 0x800000) != 0))
    {
      if (((*(uint *)(DAT_00251304 + 0x82) & 1) == 0) &&
         (iVar13 = FUN_003679b4(DAT_00252140), iVar13 != 0)) {
        *pfVar5 = fVar4;
        pfVar5[1] = fVar4;
        pfVar5[2] = fVar34;
      }
      iVar13 = *(int *)(param_1 + 0x12b8);
      if ((*(ushort *)(iVar13 + 0x90) & 1) == 0) {
        fVar34 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
        fVar31 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
        local_a0 = *pfVar5 * fVar34 + pfVar5[2] * fVar31 + *(float *)(param_1 + 0x28);
        local_9c = *(float *)(param_1 + 0x2c) + pfVar5[1];
        local_98 = (pfVar5[2] * fVar34 - *pfVar5 * fVar31) + *(float *)(param_1 + 0x30);
        FUN_00358410(local_88,&local_90,&local_94,&local_a0);
      }
      else {
        local_90 = *(byte **)(iVar13 + 0x7c);
        local_94 = (float)(uint)*(byte *)(iVar13 + 0x81);
      }
      if ((local_90 != (byte *)0x0) &&
         (iVar13 = FUN_003365b0(param_2,param_1,local_90,local_94), iVar13 != 0)) {
        iVar13 = *DAT_00251358;
        if (*(short *)(iVar13 + 0x586) == 0) {
          *(undefined2 *)(iVar13 + 0xe60) = 1;
        }
        else {
          *(undefined2 *)(iVar13 + 0x586) = 0;
        }
      }
    }
    psVar3 = DAT_00251304;
    psVar3[0x1c] = 0;
    psVar3[0x1d] = 0;
    *(float *)(param_1 + 0x229c) = fVar4;
LAB_00251fcc:
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x229c) == fVar4) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar34 = fVar35;
      if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
        fVar34 = fVar39;
      }
      FUN_003705a0(fVar4,fVar34,local_84);
    }
  }
  uVar24 = FUN_0035db20(param_2,param_1);
  bVar25 = uVar24 == 0;
  if (bVar25) {
    uVar24 = *(uint *)(param_1 + 0x1714);
  }
  if (bVar25 && (uVar24 & 0x40000) == 0) {
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(*(float *)(*(int *)(param_1 + 0x170c) + 0x2c) <= *(float *)(param_1 + 0x88))
               << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      FUN_0032eb60(0x20);
      if (*(ushort *)(param_1 + 0x2224) < DAT_00252144) {
        sVar12 = *(ushort *)(param_1 + 0x2224) + 1;
        goto LAB_00252060;
      }
    }
    else {
      FUN_0032eb60(0);
      sVar12 = 0;
LAB_00252060:
      *(short *)(param_1 + 0x2224) = sVar12;
    }
    uVar16 = DAT_002524d4;
    iVar14 = *(int *)(param_1 + 0x1708);
    iVar13 = DAT_0025211c;
    if (iVar14 != DAT_0025211c) {
      iVar13 = DAT_00252148;
    }
    if (iVar14 != DAT_0025211c && iVar14 != iVar13) {
      fVar34 = *(float *)(param_1 + 0x88);
      fVar31 = *(float *)(*(int *)(param_1 + 0x170c) + 0x2c);
      uVar24 = in_fpscr & 0xfffffff;
      uVar15 = uVar24 | (uint)(fVar34 < fVar31) << 0x1f | (uint)(fVar34 == fVar31) << 0x1e;
      in_fpscr = uVar15 | (uint)(NAN(fVar34) || NAN(fVar31)) << 0x1c;
      bVar9 = (byte)(uVar15 >> 0x18);
      if ((bool)(bVar9 >> 6 & 1) || bVar9 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        bVar25 = true;
        if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
          in_fpscr = uVar24 | (uint)(*(float *)(*(int *)(param_1 + 0x170c) + 0x24) <= fVar34) <<
                              0x1d;
          bVar25 = SUB41(in_fpscr >> 0x1d,0);
        }
        if (!bVar25) {
          if ((*(char *)(param_1 + 0x2a6) == '\0') &&
             ((*(char *)(param_1 + 0x1a7) != '\x01' || (iVar14 == DAT_0025214c)))) {
            *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
            FUN_0036055c(param_2,param_1,uVar16,1);
            uVar16 = DAT_002524dc;
            iVar13 = DAT_00251d28;
            *(short *)(param_1 + 0x226a) =
                 (short)(int)(DAT_002524d8 * *(float *)(DAT_00251304 + 0x16));
            FUN_00360190(fVar35,fVar4,fVar4,uVar16,param_1 + 0x254,param_2,
                         *(undefined4 *)(iVar13 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x300),0);
          }
          uVar16 = DAT_002524e0;
          *(undefined4 *)(param_1 + 100) = DAT_002524e0;
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xf7ffffff | 0x40000;
          FUN_00355264(param_2,param_1);
          iVar13 = FUN_00358b3c(uVar16,param_2,param_1,500);
          if (iVar13 != 0) {
            FUN_0036f59c(param_1,DAT_002524e4);
          }
          FUN_003589dc(param_2,param_1);
        }
      }
      else if ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) {
LAB_00252100:
        FUN_0032ec94(param_2,param_1);
      }
      else if ((*(char *)(param_1 + 0x1a7) != '\x01') || ((*(ushort *)(param_1 + 0x90) & 1) == 0)) {
        bVar25 = iVar14 != DAT_00252150;
        iVar13 = DAT_00252150;
        if (bVar25) {
          iVar13 = DAT_00252154;
        }
        bVar27 = iVar14 != iVar13;
        if (bVar25 && bVar27) {
          iVar13 = DAT_00252158;
        }
        iVar21 = iVar13;
        if ((bVar25 && bVar27) && iVar14 != iVar13) {
          iVar21 = DAT_0025215c;
        }
        if (((bVar25 && bVar27) && iVar14 != iVar13) && iVar14 != iVar21) {
          bVar25 = iVar14 != DAT_0025214c;
          if (bVar25) {
            iVar21 = DAT_00252160;
          }
          bVar27 = iVar14 != iVar21;
          if (bVar25 && bVar27) {
            iVar21 = DAT_00252164;
          }
          iVar13 = iVar21;
          if ((bVar25 && bVar27) && iVar14 != iVar21) {
            iVar13 = DAT_00252168;
          }
          if (((bVar25 && bVar27) && iVar14 != iVar21) && iVar14 != iVar13) goto LAB_00252100;
        }
      }
    }
    uVar11 = (ushort)*(byte *)(param_1 + 2);
    bVar25 = uVar11 != 2;
    if (!bVar25) {
      uVar11 = *(ushort *)(DAT_00251330 + 0x44);
    }
    if (bVar25 || uVar11 != 0) {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (((*(char *)(DAT_00252510 + param_2) == '\x14' || (*(char *)(param_1 + 0x249f) != '\0')) ||
          (iVar13 = FUN_00132ad0(param_1,param_2), iVar13 == 0)))) {
        FUN_001cf9ac(param_1,param_2);
      }
      else {
        *(short *)(param_1 + 0x2280) = (short)(int)*(float *)(param_1 + 0x2c);
      }
      iVar13 = DAT_00252920;
      if ((*(uint *)(DAT_00252914 + 0xbc) & *(uint *)(DAT_00252918 + 0x54)) != 0) {
        fVar34 = DAT_0025291c - *(float *)(param_1 + 0x173c) * fVar40;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 <= fVar34) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar34 = fVar4;
        }
        fVar34 = *(float *)(param_1 + 0x1738) + fVar34;
        *(float *)(param_1 + 0x1738) = fVar34;
        if ((iVar13 < (int)fVar34) &&
           (*(float *)(param_1 + 0x1738) = fVar4, *(char *)(param_1 + 2) == '\x02')) {
          if (*(int *)(param_1 + 0x1734) != 0) {
            FUN_00375bcc(*(int *)(param_1 + 0x1734),DAT_00252924);
          }
          FUN_0040a0e8();
        }
      }
    }
    else {
      uVar24 = *(uint *)(param_1 + 0x1710);
      if ((DAT_00252118 & uVar24) == 0) {
        if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
          if ((uVar24 & 0x8000000) == 0) goto LAB_0025259c;
LAB_002522d4:
          if (*(char *)(param_1 + 0x1a7) == '\x01') goto LAB_002522e4;
          iVar13 = 0x37;
        }
        else {
          if ((uVar24 & 0x8000000) != 0) goto LAB_002522d4;
LAB_002522e4:
          iVar13 = DAT_002524e8;
          if (*(char *)(param_1 + 0x227d) != '\0') {
            iVar13 = 0xb6;
          }
        }
        bVar25 = (uVar24 & 0x8000000) != 0;
        if (bVar25) {
          uVar24 = (uint)*(byte *)(param_1 + 0x1a7);
        }
        local_90 = (byte *)(uint)(bVar25 && uVar24 != 1);
        FUN_0036b0fc(param_2,param_1);
        FUN_0036b02c(param_2,param_1);
        iVar14 = DAT_002524ec;
        if (local_90 != (byte *)0x0) {
          iVar14 = DAT_00252154;
        }
        FUN_0036055c(param_2,param_1,iVar14,0);
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x80;
        FUN_003604f0(param_1 + 0x254,param_2,iVar13);
        iVar14 = DAT_002524f8;
        if (iVar13 == 0x17a) {
          *(undefined4 *)(param_1 + 0x29c) = DAT_002524f0;
        }
        *(float *)(param_1 + 0x6c) = fVar4;
        *(float *)(param_1 + 0x221c) = fVar4;
        uVar16 = DAT_002524f4;
        *(undefined1 *)(param_1 + 0x1749) = 0;
        *(undefined4 *)(iVar14 + 0xcc) = uVar16;
        *(undefined1 *)(iVar14 + 0xd4) = 0;
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,DAT_002524fc + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0032eb30();
          iVar13 = FUN_001c4130(param_2);
          if (iVar13 == 0) {
            *(undefined2 *)(local_78 + 0x8c) = 1;
            FUN_00355f54(0);
            FUN_0035c528(DAT_00252500);
            iVar13 = DAT_00252504;
            *(undefined4 *)(DAT_00252504 + 0x558) = 0xff;
            *(undefined1 *)(iVar13 + 0x56e) = 0xff;
          }
          else {
            *(undefined2 *)(local_78 + 0x8c) = 0x14;
            *(undefined1 *)(param_1 + 0x2237) = 1;
          }
          local_a0 = 0.0;
          if (local_90 == (byte *)0x0) {
            uVar16 = 0x3c;
          }
          else {
            uVar16 = 0x78;
          }
          FUN_00371808(param_2,DAT_00252508,uVar16,param_1);
          FUN_00338cd8(*DAT_0025250c);
        }
      }
      else {
        FUN_0036b0fc(param_2,param_1);
        FUN_00345394(param_1,param_2);
      }
    }
  }
LAB_0025259c:
  iVar13 = FUN_0037571c(param_2);
  if (iVar13 == 0) goto LAB_0025265c;
  if (*(char *)(param_1 + 0x12bc) == '\x06') {
LAB_00252684:
    *(undefined1 *)(param_1 + 0x1749) = 3;
  }
  else {
    uVar24 = *(uint *)(param_1 + 0x1710);
    bVar25 = (uVar24 & 0x800000) == 0;
    if (bVar25) {
      uVar24 = *(uint *)(param_1 + 0x1714);
    }
    bVar26 = (uVar24 & 0x80) == 0;
    bVar27 = bVar25 && bVar26;
    if (bVar25 && bVar26) {
      bVar27 = *(char *)(param_1 + 2) == '\x02';
    }
    if (bVar27) {
      if ((*(ushort **)(local_68 + 0x2d8) != (ushort *)0x0) &&
         (*(char *)(DAT_00252928 + (uint)**(ushort **)(local_68 + 0x2d8)) != '\0')) {
        FUN_0036e980(param_2,0,6);
        *(float *)(param_1 + 0x6c) = fVar4;
        *(float *)(param_1 + 0x221c) = fVar4;
        goto LAB_0025265c;
      }
      if (*(char *)(param_1 + 0x12bc) == '\0') {
        if ((uVar24 & 0x400) == 0) {
          iVar13 = FUN_0037571c(param_2);
          if (iVar13 != 3) {
            FUN_0036e980(param_2,0,0x31);
            *(float *)(param_1 + 0x6c) = fVar4;
            *(float *)(param_1 + 0x221c) = fVar4;
          }
          goto LAB_0025265c;
        }
        goto LAB_002526bc;
      }
LAB_00252668:
      if ((*(char *)(param_1 + 0x12bc) != '\a') ||
         ((*(uint *)(param_1 + 0x1710) & DAT_0025292c) == 0)) goto LAB_00252684;
      if (*(int *)(param_1 + 0x1708) != DAT_00252930) {
        FUN_003343ec(param_2,param_1,0);
      }
    }
    else {
LAB_0025265c:
      if (*(char *)(param_1 + 0x12bc) != '\0') goto LAB_00252668;
LAB_002526bc:
      *(undefined1 *)(param_1 + 0x12bd) = 0;
    }
  }
  fVar34 = DAT_00252940;
  piVar6 = DAT_00252938;
  *(undefined4 *)(param_1 + 0x74) = DAT_00252934;
  iVar13 = DAT_0025293c;
  fVar31 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x9c),(byte)(in_fpscr >> 0x15) & 3);
  fVar31 = fVar31 * fVar29;
  *(float *)(param_1 + 0x70) = fVar31;
  iVar13 = *(int *)(iVar13 + 0x28);
  if (((iVar13 == 4 || iVar13 == 7) || iVar13 == 0xc) &&
     (*(int *)(param_1 + 0x1708) != DAT_00252944)) {
    fVar29 = ABS(*(float *)(param_1 + 0x221c)) * fVar41;
    fVar22 = fVar4;
    if (iVar13 == 4) {
      fVar32 = *(float *)(param_1 + 0x1760);
      if ((int)*(float *)(param_1 + 0x1760) <= DAT_00252948) {
        fVar32 = DAT_0025294c;
      }
      if (*(char *)(param_1 + 0x1a7) == '\x02') {
        fVar29 = fVar29 * fVar36;
      }
      else {
        if (*(char *)(param_1 + 0x1a7) == '\x01') {
          fVar29 = fVar29 * fVar30;
        }
LAB_00252780:
        fVar28 = (fVar32 - *(float *)(param_1 + 0x1760)) * fVar28;
        if ((fVar4 <= fVar28) && (fVar22 = fVar28, DAT_00252954 < (int)fVar28)) {
          fVar22 = DAT_00252958;
        }
        if (*(char *)(param_1 + 0x1a7) == '\x01') {
          fVar22 = fVar22 * fVar36;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x1708) == DAT_00251cf0) {
        fVar29 = fVar29 * fVar34;
      }
      fVar32 = DAT_00252950;
      if (*(char *)(param_1 + 0x1a7) != '\x02') {
        fVar29 = fVar29 * fVar36;
        goto LAB_00252780;
      }
      if (iVar13 == 7) {
        fVar29 = fVar4;
      }
    }
    fVar22 = *(float *)(param_1 + 0x1760) + (fVar22 - fVar29);
    *(float *)(param_1 + 0x1760) = fVar22;
    fVar29 = DAT_0025295c;
    fVar28 = fVar4;
    if ((fVar4 <= fVar22) && (fVar28 = fVar32, fVar22 <= fVar32)) {
      fVar28 = fVar22;
    }
    *(float *)(param_1 + 0x1760) = fVar28;
    *(float *)(param_1 + 0x70) = fVar31 - fVar28 * fVar29;
  }
  else {
    if ((*(uint *)(param_1 + 0x29b8) & 0x100) == 0) {
      *(float *)(param_1 + 0x1760) = fVar4;
    }
    else {
      fVar29 = *(float *)(param_1 + 0x1760) - *(float *)(DAT_0025293c + 0x90);
      *(float *)(param_1 + 0x1760) = fVar29;
      if (fVar29 <= fVar4) {
        *(float *)(param_1 + 0x1760) = fVar4;
        *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfffffeff;
      }
    }
    if (((*(int *)(param_1 + 0x1708) == DAT_00251cd8) &&
        (fVar29 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x10c),
        *(float *)(DAT_0025293c + 0x94) <= fVar29)) &&
       (iVar13 = FUN_00359690(local_88,*(undefined1 *)(param_1 + 0x81)), iVar13 == 0)) {
      *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x100;
      *(float *)(param_1 + 0x1760) = *(float *)(param_1 + 0x1760) + fVar29 * fVar22;
    }
  }
  iVar13 = DAT_00252dc0;
  if ((*(ushort *)(param_1 + 0x90) & 0x20) != 0) {
    if (*(int *)(param_1 + 0x88) < DAT_00252960) {
      iVar14 = DAT_00252960 + -0x1c80000;
      fVar29 = ABS(*(float *)(param_1 + 0x2340) - *(float *)(local_60 + 0xa0)) +
               ABS(*(float *)(param_1 + 0x2344) - *(float *)(local_60 + 0xa4)) +
               ABS(*(float *)(param_1 + 0x2348) - *(float *)(local_60 + 0xa8));
      if (iVar14 < (int)fVar29) {
        fVar29 = DAT_00252964;
      }
      fVar29 = *(float *)(param_1 + 0x223c) + fVar29;
      *(float *)(param_1 + 0x223c) = fVar29;
      if (iVar13 < (int)fVar29) {
        *(float *)(param_1 + 0x223c) = fVar4;
        fVar29 = (float)FUN_003759d0();
        local_98 = *(float *)(param_1 + 0x28) + fVar29 * fVar7;
        local_94 = *(float *)(param_1 + 0x8c);
        fVar29 = (float)FUN_003759d0();
        local_90 = (byte *)(*(float *)(param_1 + 0x30) + fVar29 * fVar7);
        local_a0 = 0.0;
        FUN_00362068(param_2,&local_98,100,500);
        if (iVar14 < (int)*(float *)(param_1 + 0x221c)) {
          uVar24 = *(uint *)(param_1 + 0x1710);
          bVar25 = (uVar24 & 0x8000000) != 0;
          if (bVar25) {
            uVar24 = (uint)*(byte *)(param_1 + 0x1a7);
          }
          if ((!bVar25 || uVar24 == 1) &&
             (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x2344)
             )) {
            FUN_00358b3c(fVar41,param_2,param_1,
                         (int)(ABS(*(float *)(param_1 + 0x221c)) * DAT_00252dc4 +
                              *(float *)(param_1 + 0x88) * fVar40));
          }
        }
      }
    }
    if (DAT_00252dc8 < *(int *)(param_1 + 0x88)) {
      fVar29 = *(float *)(param_1 + 100);
      bVar25 = fVar29 == DAT_00252dcc;
      if ((uint)DAT_00252dcc <= (uint)fVar29) {
        bVar25 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
      }
      if (bVar25) {
        uVar24 = (uint)(fVar29 * DAT_00252dd4);
      }
      else {
        iVar13 = FUN_003759d0();
        uVar24 = (uint)(iVar13 < DAT_00252dd0);
      }
      uVar16 = DAT_00252dd8;
      iVar13 = 0;
      if (0 < (int)uVar24) {
        do {
          FUN_00368a98(fVar41,fVar7,fVar41,uVar16,param_2,param_1 + 0x28);
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)uVar24);
      }
    }
  }
  uVar24 = *(uint *)(param_1 + 0x16f8);
  bVar25 = uVar24 == 0;
  if (bVar25) {
    uVar24 = (uint)*(ushort *)(param_1 + 0x1728);
  }
  if (bVar25 && uVar24 == 0) {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xffdffffd;
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & DAT_00252ddc;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & DAT_00252de0;
  *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xef;
  *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xefffffff;
  *(char *)(param_1 + 0x28f6) = (char)*(undefined4 *)(param_1 + 0x2498);
  *(undefined4 *)(param_1 + 0x2498) = 0;
  if ((*(ushort *)(param_1 + 0x174a) & 2) == 0) {
    local_90 = (byte *)((uint)*(ushort *)(param_1 + 0x4a) - (uint)*(ushort *)(param_1 + 0xbe));
    FUN_0032eadc(&local_90);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0xbe) + (short)local_90;
  }
  if ((*(ushort *)(param_1 + 0x174a) & 1) == 0) {
    FUN_0032eadc(param_1 + 0x48);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 8) == 0) {
    FUN_0032eadc(param_1 + 0x1750);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 0x40) == 0) {
    FUN_0032eadc(param_1 + 0x1756);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 4) == 0) {
    FUN_0032eadc(param_1 + 0x4c);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 0x10) == 0) {
    FUN_0032eadc(param_1 + 0x1752);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 0x20) == 0) {
    FUN_0032eadc(param_1 + 0x1754);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 0x80) == 0) {
    if (*(short *)(param_1 + 0x174c) == 0) {
      iVar13 = param_1 + 0x1758;
    }
    else {
      iVar13 = param_1 + 0x174c;
    }
    FUN_0032eadc(iVar13);
  }
  if ((*(ushort *)(param_1 + 0x174a) & 0x100) == 0) {
    FUN_0032eadc(param_1 + 0x175a);
  }
  *(undefined2 *)(param_1 + 0x174a) = 0;
  local_8c = param_1 + 0x2800;
  *(undefined4 *)(local_60 + 0x8c) = *(undefined4 *)(param_1 + 0x29cc);
  *(undefined2 *)(local_60 + 0x90) = *(undefined2 *)(param_1 + 0x29d0);
  FUN_001a35cc(param_1 + 0x29cc,param_1 + 0x29d0,*(undefined4 *)(param_1 + 0x29c8));
  iVar13 = (int)*(short *)(param_1 + 0x29d0);
  if ((iVar13 != 0) &&
     ((*(short *)(DAT_0025293c + 0x10) * -0xb6 + 0x8000 < iVar13 ||
      (iVar13 < *(short *)(DAT_0025293c + 0x10) * 0xb6 + -0x8000)))) {
    *(undefined2 *)(param_1 + 0x29d0) = 0x8000;
  }
  sVar12 = FUN_00368fec(*(undefined4 *)(param_2 + *(short *)(DAT_00252de4 + param_2) * 4 + 0xa54));
  uVar24 = DAT_00252de8;
  sVar12 = sVar12 + *(short *)(param_1 + 0x29d0);
  *(short *)(param_1 + 0x29d2) = sVar12;
  uVar15 = *(byte *)(param_1 + 0x222a) + 1;
  uVar15 = uVar15 + (uint)((ulonglong)uVar15 * (ulonglong)uVar24 >> 0x22) * -6;
  *(char *)(param_1 + 0x222a) = (char)uVar15;
  if (*(int *)(local_8c + 0x1cc) < DAT_00252dec) {
    bVar19 = 0xff;
    bVar9 = 0xff;
  }
  else {
    bVar9 = (byte)((uint)((*(short *)(param_1 + 0x29d0) + 0x2000) * 0x10000) >> 0x19);
    bVar19 = (byte)((uint)(((short)(sVar12 - *(short *)(param_1 + 0xbe)) + 0x2000) * 0x10000) >>
                   0x1e);
  }
  *(byte *)((uVar15 & 0xff) + param_1 + 0x222b) = bVar9;
  *(byte *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) = bVar19;
  if ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) {
    *(float *)(DAT_0025293c + 0x2c) = fVar35;
  }
  else {
    *(float *)(DAT_0025293c + 0x2c) = fVar39;
  }
  iVar13 = DAT_0025293c;
  fVar29 = fVar35 / *(float *)(DAT_0025293c + 0x2c);
  *(float *)(DAT_0025293c + 0x30) = fVar29;
  *(undefined4 *)(iVar13 + 0x50) = 0;
  *(undefined4 *)(iVar13 + 0x4c) = 0;
  *(uint *)(iVar13 + 0x154) = (uint)*(byte *)(param_1 + 0x1b7);
  if ((*(byte *)(param_1 + 0x172a) & 4) == 0) {
    fVar29 = (float)(**(code **)(param_1 + 0x1708))(param_1,param_2);
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    local_90 = (byte *)0x0;
    if (*(char *)(param_1 + 0x12bc) == '\0') {
      uVar24 = *(uint *)(param_1 + 0x1710);
      if ((uVar24 & 0x100000) == 0) {
        bVar25 = *(int *)(param_1 + 0x124) == 0;
        bVar9 = 0;
        if (!bVar25) {
          bVar9 = *(byte *)(param_1 + 0x172a);
        }
        if (bVar25 || (bVar9 & 0x80) == 0) {
          if (*(int *)(param_1 + 0x1708) == DAT_00253408) {
LAB_00252fdc:
            uVar16 = 0x12;
          }
          else if ((*(uint *)(param_1 + 0x1714) & 0x100) == 0) {
            local_94 = *(float *)(param_1 + 0x16f8);
            if (local_94 == 0.0) {
              if ((uVar24 & 0x1000) == 0) {
                if ((uVar24 & 0x2000000) == 0) {
                  if ((uVar24 & 0x6000) == 0) {
                    if ((DAT_00253410 & uVar24) == 0) {
                      if ((uVar24 & 0x240000) == 0) {
                        if ((uVar24 & 0x80000) == 0) {
                          if (((*(char *)(param_1 + 0x2227) != '\0') &&
                              (-1 < *(char *)(param_1 + 0x2226))) &&
                             (*(char *)(param_1 + 0x2226) < '\x18')) goto LAB_00252fdc;
                          uVar16 = 0;
                          if (*(float *)(param_1 + 0x221c) == fVar4) {
                            bVar25 = (uVar24 & 0x800000) == 0;
                            if (!bVar25) {
                              uVar24 = *(uint *)(param_1 + 0x12b8);
                            }
                            if (!bVar25) {
                              bVar25 = *(float *)(uVar24 + 0x6c) == fVar4;
                            }
                            if (bVar25) {
                              local_90 = (byte *)0x2;
                            }
                          }
                        }
                        else {
                          uVar16 = 0x10;
                        }
                      }
                      else if ((*(int *)(param_1 + 0x1708) == DAT_0025211c) ||
                              ((uVar24 & 0x200000) != 0)) {
                        uVar16 = 5;
                      }
                      else {
                        uVar16 = 0xd;
                      }
                    }
                    else {
                      uVar42 = FUN_0033bd6c(param_1);
                      uVar24 = (uint)((ulonglong)uVar42 >> 0x20);
                      if ((int)uVar42 == 0) {
                        bVar25 = (*(uint *)(param_1 + 0x1710) & 0x1000000) != 0;
                        if (bVar25) {
                          uVar24 = (uint)*(ushort *)(param_1 + 0x2218);
                        }
                        if (!bVar25 || uVar24 == 0) {
                          if ((*(uint *)(param_1 + 0x1710) & 0x200000) == 0) {
                            uVar16 = 1;
                          }
                          else {
                            uVar16 = 0xc;
                          }
                          goto LAB_00253014;
                        }
                      }
                      uVar16 = 8;
                    }
                  }
                  else if ((uVar24 & DAT_0025340c) == 0) {
                    uVar16 = 0xe;
                  }
                  else {
                    uVar16 = 0xf;
                  }
                }
                else {
                  uVar16 = 0x14;
                  uVar18 = FUN_0036c5bc(param_2,0);
                  FUN_003521f0(uVar18,8,*(undefined4 *)(param_1 + 0x171c));
                }
              }
              else {
                uVar16 = 0x11;
              }
            }
            else {
              if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
                if ((uVar24 & 0x10000) == 0) {
                  uVar16 = 4;
                }
                else if ((uVar24 & 0x2000000) == 0) {
                  uVar16 = 2;
                }
                else {
                  uVar16 = 0x14;
                }
              }
              else {
                uVar16 = 3;
              }
              uVar18 = FUN_0036c5bc(param_2,0);
              FUN_003521f0(uVar18,8,local_94);
            }
          }
          else {
            uVar16 = 0x13;
          }
        }
        else {
          uVar16 = 9;
          uVar18 = FUN_0036c5bc(param_2,0);
          FUN_003521f0(uVar18,8,*(undefined4 *)(param_1 + 0x124));
        }
LAB_00253014:
        uVar18 = FUN_0036c5bc(param_2,0);
        goto LAB_00253024;
      }
      local_90 = (byte *)0x2;
    }
    else {
      uVar18 = FUN_0036c5bc(param_2,0);
      uVar16 = 0;
LAB_00253024:
      fVar29 = (float)FUN_00332284(uVar18,uVar16);
    }
    if (*(int *)(local_68 + 0x1a0) != 0) {
      local_90 = (byte *)0x1;
      fVar29 = (float)FUN_0026f7ec(SQRT(*(float *)(*(int *)(local_68 + 0x1a0) + 0x94)));
    }
    if (*(short *)(local_70 + 4) != 0x49) {
      fVar29 = (float)FUN_0032e780(local_90);
      *(char *)(param_1 + 0x174e) = (char)local_90;
    }
  }
  bVar9 = *(byte *)(param_1 + 0x2a6);
  uVar24 = (uint)bVar9;
  if ((bVar9 & 8) != 0) {
    bVar25 = (bVar9 & 4) == 0;
    if (bVar25) {
      uVar24 = *(uint *)(param_1 + 0x170c);
      fVar35 = fVar29;
    }
    if (bVar25) {
      fVar35 = *(float *)(uVar24 + 8);
    }
    FUN_003fd1b8(fVar35,param_2,param_1,param_1 + 0x254);
  }
  uVar24 = *(uint *)(param_1 + 0x1714);
  sVar12 = *(short *)(param_1 + 0xbe);
  if ((DAT_00253414 & uVar24) == 0) {
    iVar13 = *(int *)(param_1 + 0x16f8);
    if (iVar13 != 0) {
      cVar8 = *(char *)(local_68 + 0x147);
      bVar25 = cVar8 == '\0';
      if (bVar25) {
        cVar8 = *(char *)(param_1 + 2);
      }
      if (!bVar25 || cVar8 != '\x02') {
        uVar16 = FUN_003758b0(*(float *)(iVar13 + 0x44) - *(float *)(param_1 + 0x30),
                              *(float *)(iVar13 + 0x3c) - *(float *)(param_1 + 0x28));
        FUN_00370378(param_1 + 0xbe,uVar16,4000);
        goto LAB_00253154;
      }
    }
    if (((*(uint *)(param_1 + 0x1710) & 0x20000) != 0) &&
       ((uVar24 & 0x60) == 0 && (*(uint *)(param_1 + 0x1710) & 0x20000000) == 0)) {
      FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x2222),4000);
    }
  }
  else if ((uVar24 & 0x40) == 0) {
    FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x2220),2000);
  }
LAB_00253154:
  uVar16 = DAT_00253418;
  *(short *)(param_1 + 0x2268) = *(short *)(param_1 + 0xbe) - sVar12;
  if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x172c) = 0;
    *(undefined4 *)(param_1 + 0x1730) = uVar16;
    *(undefined1 *)(param_1 + 0x172b) = 0;
  }
  else {
    *(float *)(param_1 + 0x1730) = fVar4;
  }
  if ((*(uint *)(param_1 + 0x29b8) & 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x1744) = 0;
  }
  uVar24 = *(uint *)(param_1 + 0x1710);
  if ((uVar24 & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0x12b0) = 0;
    *(undefined2 *)(local_80 + 0xae) = 0x6000;
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    *(undefined4 *)(param_1 + 0x12b8) = 0;
  }
  *(undefined2 *)(param_1 + 0x1728) = 0;
  if ((*(uint *)(param_1 + 0x1714) & 0x2000000) == 0) {
    *(undefined4 *)(param_1 + 0x1740) = 0;
  }
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xff7fffff;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(undefined4 *)(param_1 + 0x173c) = uVar16;
  *(undefined1 *)(param_1 + 0x12a4) = 0;
  *(undefined1 *)(param_1 + 0x2291) = 0;
  *(undefined4 *)(param_1 + 0x1718) = 0;
  fVar35 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x10c);
  fVar29 = fVar35 + (*(float *)(param_1 + 0x238c) + *(float *)(param_1 + 0x2368)) * fVar39;
  fVar35 = *(float *)(param_1 + 0x2398) + fVar35 + fVar7;
  fVar39 = fVar35 - fVar29;
  *(float *)(param_1 + 0x1354) = fVar39;
  bVar25 = fVar39 < fVar4;
  if (bVar25) {
    fVar39 = -fVar39;
    fVar29 = fVar35;
  }
  if (bVar25) {
    *(float *)(param_1 + 0x1354) = fVar39;
  }
  *(float *)(param_1 + 0x1358) = fVar29 - *(float *)(param_1 + 0x2c);
  if ((uVar24 & 0x400000) != 0) {
    fVar34 = *(float *)(param_1 + 0x1354) * fVar34;
    *(float *)(param_1 + 0x1354) = fVar34;
    if (*(int *)(param_1 + 0x284) == 0xbd) {
      *(float *)(param_1 + 0x1354) = fVar34 * DAT_0025341c;
    }
  }
  FUN_0037632c(param_1,local_7c);
  if ((*(uint *)(param_1 + 0x1714) & 0x4000) == 0) {
    iVar13 = param_2 + 0x5c78;
    if ((*(uint *)(param_1 + 0x1710) & DAT_00253420) == 0) {
      FUN_003762a4(param_2,iVar13,local_7c);
    }
    if (((*(uint *)(param_1 + 0x1710) & DAT_00253424) == 0) && (*(char *)(local_60 + 0x88) < '\x01')
       ) {
      if (*(byte *)(param_1 + 0x249f) < 0xf) {
        FUN_00376168(param_2,iVar13,local_7c);
      }
      if (*(char *)(local_60 + 0x88) < '\0') {
        FUN_003761f0(param_2,iVar13,local_7c);
      }
    }
  }
  FUN_003ab984(param_2);
LAB_0025330c:
  FUN_0036df4c(param_1 + 8,param_1 + 0x28);
  FUN_0036df4c(param_1 + 0x24a0,param_1 + 0x2340);
  if ((*(uint *)(param_1 + 0x1710) & DAT_00253428) == 0) {
    uVar10 = 0x32;
  }
  else {
    uVar10 = 0xff;
  }
  *(undefined1 *)(param_1 + 0xb6) = uVar10;
  *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xfb;
  uVar24 = *(uint *)(param_1 + 0x29b8);
  if ((uVar24 & 0x2000000) == 0) {
    bVar25 = (uVar24 & 0x1000000) != 0;
    if (bVar25) {
      uVar24 = (uint)*(byte *)(param_1 + 0x1749);
    }
    if (bVar25 && uVar24 != 0) {
      FUN_0036b0fc(param_2,param_1);
    }
    *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfeffffff;
  }
  FUN_001d1794(param_2,local_7c);
  FUN_003328ec(param_2,param_1 + 0x1368);
  FUN_003328ec(param_2,param_1 + 0x13e8);
  FUN_001d1848(param_2);
  FUN_003328ec(param_2,param_1 + 0x1568);
  FUN_0020c130(param_2,param_1 + 0x15e8);
  FUN_003328ec(param_2,param_1 + 0x1468);
  FUN_003328ec(param_2,param_1 + 0x14e8);
  return;
}

