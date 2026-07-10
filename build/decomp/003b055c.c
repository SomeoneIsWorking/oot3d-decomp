// OoT3D decomp @ 003b055c  name=FUN_003b055c  size=10004

void FUN_003b055c(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  short sVar18;
  float *pfVar19;
  uint uVar20;
  undefined4 uVar21;
  bool bVar22;
  uint in_fpscr;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  
  local_9c = 0;
  iVar17 = *(int *)(param_2 + 0x20ac);
  local_a0 = param_2 + 0x14;
  local_a4 = *(int *)(param_1 + 0x1a4);
  iVar11 = (int)*(short *)(param_1 + 0x1b0);
  if (iVar11 < 0xcc) {
    uVar23 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2),
                                 (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar23;
  }
  iVar14 = DAT_003b09a8;
  fVar37 = DAT_003b0990;
  fVar27 = DAT_003b098c;
  fVar36 = DAT_003b0980;
  fVar28 = DAT_003b097c;
  fVar29 = DAT_003b0974;
  fVar3 = DAT_003b0970;
  fVar32 = DAT_003b096c;
  fVar39 = DAT_003b0968;
  fVar31 = DAT_003b0964;
  fVar26 = DAT_003b0960;
  fVar25 = DAT_003b095c;
  fVar38 = DAT_003b0958;
  local_70 = param_1 + 0x1068;
  iVar12 = iVar11;
  if (iVar11 != 0) {
    iVar12 = iVar11 + -200;
  }
  if ((iVar12 < 0 == (iVar11 != 0 && SBORROW4(iVar11,200))) ||
     ((iVar11 == 0x65 || iVar11 == 1) || iVar11 == 5)) {
    fVar30 = DAT_003b0958;
    fVar34 = DAT_003b0978;
    if (iVar11 == 0) {
      fVar33 = DAT_003b0984;
      fVar27 = DAT_003b0974;
      fVar35 = DAT_003b0984;
      fVar29 = DAT_003b0978;
      if (*(short *)(*(int *)(param_2 + 0x7f64) + 0xfb8) == 0) {
        fVar33 = DAT_003b096c;
        fVar35 = DAT_003b0988;
      }
    }
    else {
      fVar33 = fVar37;
      fVar35 = fVar32;
      fVar34 = fVar39;
      if (iVar11 == 1) {
        fVar30 = fVar36;
        if (((*(ushort *)(param_1 + 0x1d4) & 0xf) == 0) && (*(short *)(param_1 + 0x1d6) < 0x2d)) {
          FUN_0031769c(local_70,DAT_003b0994,DAT_003b0998);
        }
      }
      else if (iVar11 == 5) {
        if (*(short *)(param_1 + 0x1d6) < 0x3d) {
          uVar2 = *(ushort *)(param_1 + 0x1d4) & 0xf;
          fVar29 = DAT_003b0960;
          fVar34 = DAT_003b0964;
          fVar35 = DAT_003b09b0;
          fVar33 = DAT_003b09b0;
        }
        else {
          uVar2 = *(ushort *)(param_1 + 0x1d4) & 0x1f;
          fVar30 = DAT_003b099c;
          fVar29 = DAT_003b095c;
          fVar34 = DAT_003b0960;
          fVar28 = DAT_003b09a4;
          fVar27 = DAT_003b09a0;
          fVar35 = DAT_003b096c;
          fVar33 = DAT_003b0990;
        }
        if (uVar2 == 0) {
          FUN_0031769c(local_70,DAT_003b0994,DAT_003b0998);
          FUN_0036f59c(iVar17,(uint)*(ushort *)(*(int *)(DAT_003b09ac + iVar17) + 0xf4) - iVar14);
        }
      }
      else {
        fVar33 = DAT_003b096c;
        fVar27 = DAT_003b09b4;
        fVar30 = DAT_003b099c;
        fVar28 = DAT_003b09a4;
        fVar29 = DAT_003b095c;
        fVar34 = DAT_003b0960;
        if ((iVar11 != 0x65) &&
           (fVar33 = DAT_003b0968, fVar27 = DAT_003b0968, fVar30 = DAT_003b0968,
           fVar35 = DAT_003b0968, fVar28 = DAT_003b0968, fVar36 = DAT_003b0968,
           fVar29 = DAT_003b0968, fVar34 = fVar39, 199 < iVar11)) {
          fVar33 = fVar37;
          fVar27 = DAT_003b09a0;
          fVar30 = DAT_003b09b8;
          fVar35 = fVar32;
          fVar28 = DAT_003b09bc;
          fVar36 = DAT_003b09b4;
          fVar29 = DAT_003b0968;
          fVar34 = DAT_003b0978;
        }
      }
    }
    FUN_00373500(fVar30,fVar3,fVar35,param_1 + 0x1e8);
    FUN_00373500(fVar27,fVar3,fVar32,param_1 + 0x1e0);
    FUN_00373500(fVar29,fVar3,fVar33,param_1 + 0x1e4);
    FUN_00373500(fVar28,fVar3,fVar35,param_1 + 500);
    FUN_00373500(fVar36,fVar3,fVar32,param_1 + 0x1ec);
    FUN_00373500(fVar34,fVar3,fVar33,param_1 + 0x1f0);
    *(short *)(param_1 + 0x1c6) =
         *(short *)(param_1 + 0x1c6) + (short)(int)*(float *)(param_1 + 0x1e8);
    *(short *)(param_1 + 0x1c8) =
         *(short *)(param_1 + 0x1c8) + (short)(int)*(float *)(param_1 + 500);
  }
  fVar33 = DAT_003b2704;
  uVar9 = DAT_003b2700;
  uVar8 = DAT_003b167c;
  fVar35 = DAT_003b0e00;
  uVar7 = DAT_003b0dfc;
  fVar34 = DAT_003b0ddc;
  fVar30 = DAT_003b0dd8;
  fVar37 = DAT_003b0dd4;
  uVar6 = DAT_003b0dc8;
  uVar24 = DAT_003b0dc4;
  fVar36 = DAT_003b0dc0;
  uVar5 = DAT_003b0dbc;
  fVar29 = DAT_003b09d4;
  fVar27 = DAT_003b09d0;
  uVar4 = DAT_003b09cc;
  fVar28 = DAT_003b09c8;
  uVar21 = DAT_003b09c4;
  uVar23 = DAT_003b09c0;
  iVar11 = (int)*(short *)(param_1 + 0x1b0);
  local_74 = param_2 + 0x2298;
  local_78 = param_1 + 0xdc4;
  local_7c = param_1 + 0xfd4;
  local_80 = param_1 + 0xdbc;
  local_84 = (undefined4 *)(param_1 + 0xfc0);
  local_88 = (undefined4 *)(param_1 + 0xfcc);
  local_8c = param_1 + 0xf00;
  local_90 = param_1 + 0x200;
  pfVar19 = (float *)(param_1 + 0x28);
  if (iVar11 == 100) {
    local_f8 = DAT_003b0e00;
    local_f4 = (float)DAT_003b0dfc;
    FUN_0037547c(DAT_003b1ff0,local_70,4,DAT_003b0e00);
    if (*(int *)(iVar17 + 0x124) == param_1) {
      *(undefined2 *)(DAT_003b1698 + iVar17) = 0x65;
      iVar11 = DAT_003b1ba0;
      *(undefined4 *)(iVar17 + 0x124) = 0;
      *(undefined1 *)(iVar11 + iVar17) = 0;
    }
    FUN_00373500(uVar23,fVar29,DAT_003b1ff4,param_1 + 0x238);
    uVar23 = DAT_003b1ff8;
    if (*(short *)(param_1 + 0x1cc) < 0x29) {
      sVar18 = 0;
      do {
        iVar11 = param_1 + *(short *)(param_1 + 0x1cc) * 0xc;
        local_b0 = *(float *)(iVar11 + 0xdc8);
        local_ac = *(float *)(iVar11 + 0xdcc);
        local_a8 = *(float *)(iVar11 + 0xdd0);
        fVar31 = (float)FUN_003738a8(fVar32);
        local_b0 = fVar31 + local_b0;
        fVar31 = (float)FUN_003738a8(fVar32);
        local_ac = fVar31 + local_ac;
        fVar31 = (float)FUN_003738a8(fVar32);
        local_a8 = fVar31 + local_a8;
        pfVar19 = *(float **)(param_2 + 0x5c28);
        fVar31 = (float)FUN_00371e50(uVar23);
        iVar11 = 0;
        local_bc = fVar39;
        local_b8 = fVar39;
        local_b4 = fVar39;
        do {
          if (*(char *)(pfVar19 + 9) == '\0') {
            *(undefined1 *)(pfVar19 + 9) = 3;
            fVar36 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b1ffc + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(char *)((int)pfVar19 + 0x26) = (char)(int)(fVar28 / fVar36 + fVar29);
            *pfVar19 = local_b0;
            pfVar19[1] = local_ac;
            pfVar19[2] = local_a8;
            pfVar19[3] = fVar39;
            pfVar19[4] = fVar39;
            pfVar19[5] = fVar39;
            pfVar19[6] = fVar39;
            pfVar19[7] = fVar39;
            pfVar19[8] = fVar39;
            pfVar19[0xc] = fVar31 + fVar27;
            pfVar19[0xe] = fVar3;
            break;
          }
          pfVar19 = pfVar19 + 0x10;
          iVar11 = (int)(short)((short)iVar11 + 1);
        } while (iVar11 < DAT_003b0df8);
        sVar18 = sVar18 + 1;
      } while (sVar18 < 10);
      *(short *)(param_1 + 0x1cc) = *(short *)(param_1 + 0x1cc) + 1;
    }
    FUN_00373500(fVar39,fVar3,fVar27,param_1 + 0x200);
    if ((0x28 < *(short *)(param_1 + 0x1cc)) || (*(short *)(param_1 + 0x1d6) == 0)) {
      *(undefined2 *)(param_1 + 0x1b0) = 0x65;
      uVar23 = DAT_003b1b8c;
      *(undefined2 *)(param_1 + 0x1d6) = 0x71;
      *(undefined4 *)(param_1 + 0xdbc) = uVar23;
      *(undefined4 *)(param_1 + 0xdc0) = uVar4;
      *(float *)(param_1 + 0x1e4) = fVar25;
      *(float *)(param_1 + 0x1f0) = fVar26;
    }
    goto switchD_003b0920_caseD_6;
  }
  if (100 < iVar11) {
    local_94 = param_2 + 0x208c;
    if (iVar11 == 0xca) {
      *(undefined2 *)(param_1 + 0x224) = 0x1e;
      FUN_00373500(DAT_003b2b2c,fVar33,uVar24,*(int *)(param_2 + 0x7f64) + 0x214);
      fVar27 = DAT_003b270c;
      uVar23 = DAT_003b2708;
      fVar28 = DAT_003b26fc;
      iVar11 = 0;
      *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_2 + 0x7f64) + 0x214) + fVar36;
      do {
        sVar18 = (short)iVar11;
        fVar25 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1e0) +
                                                 *(short *)(param_1 + 0x1c6)));
        fVar31 = *(float *)(param_1 + 0x1e4);
        fVar36 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        fVar26 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1ec) +
                                                 *(short *)(param_1 + 0x1c8)));
        fVar32 = *(float *)(param_1 + 0x1f0);
        fVar37 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00373500(*(float *)(param_1 + 0x1f8) * fVar28,fVar33,uVar23,
                     param_1 + iVar11 * 0xc + 0x704);
        iVar11 = param_1 + iVar11 * 6;
        FUN_00370084(iVar11 + 0xcc4,(int)(short)(int)(fVar25 * fVar27 * fVar31 * fVar36),
                     (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        FUN_00370084(iVar11 + 0xcc8,(int)(short)(int)(fVar26 * fVar27 * fVar32 * fVar37),
                     (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        iVar11 = (int)(short)(sVar18 + 1);
      } while (iVar11 < 0x29);
      *(float *)(param_1 + 0x6c) = fVar39;
      fVar28 = DAT_003b2b30;
      *(short *)(param_1 + 0x1d2) = *(short *)(param_1 + 0x1d2) + -1;
      FUN_00373500(fVar33,fVar33,fVar28,param_1 + 0x1f8);
      FUN_00373500(DAT_003b2b38,fVar29,DAT_003b2b34,local_78);
      if ((int)*(short *)(param_1 + 0x1d6) - 1U < 0x3b) {
        FUN_00373500(DAT_003b2b3c,DAT_003b2718,*(undefined4 *)(param_1 + 0x218),param_1 + 0x54);
        if (*(short *)(param_1 + 0x1d6) == 1) {
          *(float *)(param_1 + 0x218) = fVar39;
        }
      }
      else if (*(short *)(param_1 + 0x1d6) == 0) {
        FUN_00373500(uVar21,DAT_003b2718,*(undefined4 *)(param_1 + 0x218),param_1 + 0x54);
      }
      iVar11 = param_1 + 0x218;
      uVar24 = DAT_003b2b44;
      uVar23 = DAT_003b2b40;
    }
    else {
      if (iVar11 < 0xcb) {
        if (iVar11 == 0x65) {
          if (*(short *)(param_1 + 0xfba) != 0) {
            FUN_00373500(*(undefined4 *)(iVar17 + 0x28),DAT_003b09d4,DAT_003b09cc,local_88);
            FUN_00373500(*(undefined4 *)(iVar17 + 0x2c),fVar29,uVar4,param_1 + 0xfd0);
            FUN_00373500(*(undefined4 *)(iVar17 + 0x30),fVar29,uVar4,local_7c);
            FUN_00367b14(param_2,(int)*(short *)(local_8c + 0xba),local_88,param_1 + 0xfc0);
            if (*(int *)(iVar17 + 0x2c) <= DAT_003b2000) {
              iVar11 = FUN_0036c5bc(param_2,0);
              uVar23 = local_84[1];
              uVar21 = local_84[2];
              *(undefined4 *)(iVar11 + 0x8c) = *local_84;
              *(undefined4 *)(iVar11 + 0x90) = uVar23;
              *(undefined4 *)(iVar11 + 0x94) = uVar21;
              uVar23 = local_84[1];
              uVar21 = local_84[2];
              *(undefined4 *)(iVar11 + 0xa4) = *local_84;
              *(undefined4 *)(iVar11 + 0xa8) = uVar23;
              *(undefined4 *)(iVar11 + 0xac) = uVar21;
              uVar23 = local_88[1];
              uVar21 = local_88[2];
              *(undefined4 *)(iVar11 + 0x80) = *local_88;
              *(undefined4 *)(iVar11 + 0x84) = uVar23;
              *(undefined4 *)(iVar11 + 0x88) = uVar21;
              FUN_0036e9b8(param_2,(int)*(short *)(local_8c + 0xba),0);
              *(undefined2 *)(local_8c + 0xba) = 0;
              FUN_00367374(param_2,local_74);
              iVar11 = FUN_0035b164();
              if (iVar11 != 0) {
                FUN_00317624(0);
              }
              *DAT_003b2004 = 0;
            }
          }
          fVar25 = DAT_003b1b88;
          fVar28 = DAT_003b1b84;
          iVar11 = 0;
          do {
            sVar18 = (short)iVar11;
            fVar26 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 +
                                                                                     0x1e0) +
                                                     *(short *)(param_1 + 0x1c6)));
            fVar31 = *(float *)(param_1 + 0x1e4);
            fVar34 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            fVar37 = *(float *)(param_1 + 0x1f8);
            fVar32 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 +
                                                                                     0x1ec) +
                                                     *(short *)(param_1 + 0x1c8)));
            fVar30 = *(float *)(param_1 + 0x1f0);
            fVar35 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            fVar36 = *(float *)(param_1 + 0x1f8);
            FUN_00373500(fVar36 * fVar25,fVar29,fVar27,param_1 + iVar11 * 0xc + 0x704);
            iVar11 = param_1 + iVar11 * 6;
            FUN_00370084(iVar11 + 0xcc4,
                         (int)(short)(int)(fVar26 * fVar28 * fVar31 * fVar34 * fVar37),
                         (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                         (int)(short)(int)*(float *)(param_1 + 0xdc0));
            FUN_00370084(iVar11 + 0xcc8,
                         (int)(short)(int)(fVar32 * fVar28 * fVar30 * fVar35 * fVar36),
                         (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                         (int)(short)(int)*(float *)(param_1 + 0xdc0));
            iVar11 = (int)(short)(sVar18 + 1);
          } while (iVar11 < 0x29);
          FUN_00373500(fVar39,fVar29,DAT_003b2300,param_1 + 0x1f8);
          FUN_00373500(fVar29,fVar3,DAT_003b1ff4,local_80);
          FUN_00373500(DAT_003b2304,fVar3,uVar4,param_1 + 0xdc0);
          if (*(short *)(param_1 + 0x1d6) == 0) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            FUN_00373500(fVar39,fVar3,fVar25,param_1 + 0x1fc);
            fVar27 = DAT_003b2310;
            fVar28 = DAT_003b230c;
            uVar23 = DAT_003b2308;
            sVar18 = 0;
            do {
              fVar25 = (float)FUN_00371e50(uVar23);
              bVar1 = *(byte *)(DAT_003b2314 + (short)(int)fVar25);
              uVar20 = (uint)bVar1;
              local_b0 = fVar39;
              local_ac = fVar39;
              local_a8 = fVar39;
              fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x36),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              FUN_003735e8(fVar25 * fVar28 * fVar27,&local_ec,0);
              FUN_003735ac(&local_bc,&local_ec,&local_b0);
              uVar21 = DAT_003b2320;
              local_bc = local_bc + *(float *)(iVar17 + 0x28);
              pfVar19 = (float *)(DAT_003b2318 + uVar20 * 8);
              local_b4 = local_b4 + *(float *)(iVar17 + 0x30);
              if ((((int)ABS(local_bc - *pfVar19) <= DAT_003b231c) &&
                  ((int)ABS(local_b4 - pfVar19[1]) <= DAT_003b231c)) &&
                 ((*(int *)(param_2 + 0x7f6c) == 0 ||
                  (*(byte *)(*(int *)(param_2 + 0x7f6c) + 0x1ae) != uVar20)))) {
                *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(DAT_003b2318 + uVar20 * 8);
                *(float *)(param_1 + 0x234) = pfVar19[1];
                *(byte *)(param_1 + 0x1ae) = bVar1;
                fVar28 = (float)FUN_00371e50(uVar21);
                if ((short)(int)fVar28 + 0x1e < 1) {
                  fVar28 = (float)FUN_00371e50(uVar21);
                  fVar28 = (float)VectorSignedToFloat((short)(int)fVar28 + 0x1e,
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  fVar29 = fVar28 * DAT_003b2324 * fVar29 - fVar29;
                }
                else {
                  fVar28 = (float)FUN_00371e50(uVar21);
                  fVar28 = (float)VectorSignedToFloat((short)(int)fVar28 + 0x1e,
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  fVar29 = fVar29 + fVar28 * DAT_003b2324 * fVar29;
                }
                *(short *)(param_1 + 0x1d6) = (short)(int)fVar29;
                *(undefined2 *)(param_1 + 0x1b0) = 0x66;
                break;
              }
              sVar18 = sVar18 + 1;
            } while (sVar18 < 0x28);
          }
          if (*(int *)(param_2 + 0x7f68) == param_1) {
            bVar1 = *(byte *)(*(int *)(param_2 + 0x7f64) + 0x1ad);
            bVar22 = bVar1 == 2;
            if (1 < bVar1) {
              bVar22 = *(int *)(param_2 + 0x7f6c) == 0;
            }
            if (bVar22) {
              local_f8 = 0.0;
              local_f4 = 0.0;
              local_f0 = 1.4013e-43;
              local_ec = 1.4013e-45;
              iVar11 = FUN_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                    *(undefined4 *)(param_1 + 0x30),local_94,param_2,0xc4,0);
              *(int *)(param_2 + 0x7f6c) = iVar11;
              *(undefined1 *)(iVar11 + 0x1ae) = *(undefined1 *)(param_1 + 0x1ae);
              bVar1 = *(byte *)(*(int *)(param_2 + 0x7f6c) + 0x1ae);
              if (bVar1 < 0xb) {
                cVar13 = bVar1 + 1;
              }
              else {
                cVar13 = bVar1 - 1;
              }
              *(char *)(*(int *)(param_2 + 0x7f6c) + 0x1ae) = cVar13;
              iVar11 = DAT_003b2318;
              *(undefined4 *)(*(int *)(param_2 + 0x7f6c) + 0x22c) =
                   *(undefined4 *)
                    (DAT_003b2318 + (uint)*(byte *)(*(int *)(param_2 + 0x7f6c) + 0x1ae) * 8);
              *(undefined4 *)(*(int *)(param_2 + 0x7f6c) + 0x234) =
                   *(undefined4 *)
                    (iVar11 + (uint)*(byte *)(*(int *)(param_2 + 0x7f6c) + 0x1ae) * 8 + 4);
              *(undefined2 *)(*(int *)(param_2 + 0x7f6c) + 0x1d6) = 0x96;
              *(undefined2 *)(*(int *)(param_2 + 0x7f6c) + 0x1b0) = 0x66;
              *(undefined4 *)(*(int *)(param_2 + 0x7f6c) + 0x1a4) =
                   *(undefined4 *)(param_2 + 0x7f68);
              *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1a4) =
                   *(undefined4 *)(param_2 + 0x7f6c);
            }
          }
        }
        else if (iVar11 == 0x66) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          FUN_00373500(fVar39,fVar3,DAT_003b26fc,param_1 + 0x1fc);
          bVar22 = *(int *)(param_1 + 0x1fc) == 0x3f000000;
          if (*(int *)(param_1 + 0x1fc) < 0x3f000001) {
            bVar22 = *(short *)(param_1 + 0x1d6) == 0;
          }
          if (bVar22) {
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x234);
            *(float *)(param_1 + 0x108) = *pfVar19;
            *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
            *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x30);
            *(undefined2 *)(param_1 + 0x1cc) = 0;
            *(undefined2 *)(param_1 + 0x1ca) = 0;
            *(float *)(param_1 + 0x200) = fVar3;
            uVar23 = DAT_003b2320;
            *(undefined2 *)(param_1 + 0x1b0) = 10;
            fVar28 = (float)FUN_00371e50(uVar23);
            if ((short)(int)fVar28 + 10 < 1) {
              fVar28 = (float)FUN_00371e50(uVar23);
              fVar28 = (float)VectorSignedToFloat((short)(int)fVar28 + 10,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              uVar10 = (undefined2)(int)(fVar28 * DAT_003b2324 * fVar29 - fVar29);
            }
            else {
              fVar28 = (float)FUN_00371e50(uVar23);
              fVar28 = (float)VectorSignedToFloat((short)(int)fVar28 + 10,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              uVar10 = (undefined2)(int)(fVar29 + fVar28 * DAT_003b2324 * fVar29);
            }
            *(undefined2 *)(param_1 + 0x1d6) = uVar10;
            *(undefined4 *)(param_1 + 0xdbc) = uVar21;
            *(float *)(param_1 + 0xdc0) = fVar39;
            *(float *)(param_1 + 0x1f0) = fVar39;
            *(float *)(param_1 + 0x1e4) = fVar39;
            *(float *)(param_1 + 500) = fVar39;
            *(float *)(param_1 + 0x1e8) = fVar39;
          }
        }
        else if (iVar11 == 200) {
          *(undefined2 *)(param_1 + 0xbe) = 0x4000;
        }
        else if (iVar11 == 0xc9) {
          *(undefined2 *)(param_1 + 0x224) = 0x1e;
          *(undefined2 *)(param_1 + 0xbe) = 0x4000;
          *(undefined2 *)(param_1 + 0xbc) = 0x8000;
          *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_2 + 0x7f64) + 0x214) + fVar36;
          FUN_00373500(uVar5,uVar6,uVar24,*(int *)(param_2 + 0x7f64) + 0x214);
          fVar27 = DAT_003b0dd4;
          fVar28 = DAT_003b0dd0;
          uVar23 = DAT_003b0dcc;
          iVar11 = 0;
          do {
            sVar18 = (short)iVar11;
            fVar25 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 +
                                                                                     0x1e0) +
                                                     *(short *)(param_1 + 0x1c6)));
            fVar31 = *(float *)(param_1 + 0x1e4);
            fVar36 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            fVar26 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 +
                                                                                     0x1ec) +
                                                     *(short *)(param_1 + 0x1c8)));
            fVar32 = *(float *)(param_1 + 0x1f0);
            fVar37 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00373500(*(float *)(param_1 + 0x1f8) * fVar27,uVar6,uVar23,
                         param_1 + iVar11 * 0xc + 0x704);
            iVar11 = param_1 + iVar11 * 6;
            FUN_00370084(iVar11 + 0xcc4,(int)(short)(int)(fVar25 * fVar28 * fVar31 * fVar36),
                         (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                         (int)(short)(int)*(float *)(param_1 + 0xdc0));
            FUN_00370084(iVar11 + 0xcc8,(int)(short)(int)(fVar26 * fVar28 * fVar32 * fVar37),
                         (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                         (int)(short)(int)*(float *)(param_1 + 0xdc0));
            iVar11 = (int)(short)(sVar18 + 1);
          } while (iVar11 < 0x29);
          *(float *)(param_1 + 0x6c) = fVar39;
          FUN_00373500(uVar24,fVar29,DAT_003b2718,local_78);
        }
        goto switchD_003b0920_caseD_6;
      }
      if (iVar11 != 0xcb) {
        if (iVar11 == 0xcd) {
          iVar11 = 0;
          do {
            if (*(short *)(param_1 + 0x1d6) == 0) {
              fVar26 = *(float *)(param_1 + 0x1f8);
              fVar28 = fVar30;
              fVar25 = fVar31;
            }
            else {
              fVar26 = *(float *)(param_1 + 0x1f8);
              fVar28 = fVar34;
              fVar25 = *(float *)(param_1 + 0xdc0);
            }
            FUN_00373500(fVar26 * fVar37,fVar28,fVar25,param_1 + iVar11 * 0xc + 0x704);
            iVar12 = param_1 + iVar11 * 6;
            *(undefined2 *)(iVar12 + 0xcc8) = 0;
            *(undefined2 *)(iVar12 + 0xcc4) = 0;
            iVar11 = (int)(short)((short)iVar11 + 1);
          } while (iVar11 < 0x29);
          *(float *)(param_1 + 0xdc4) = fVar39;
          fVar28 = DAT_003b2b48;
          if (*(short *)(param_1 + 0x1d6) == 0) {
            *(float *)(param_1 + 0x1f8) = fVar27;
            fVar27 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1b2) << 0xd));
            *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1f8) + fVar27 * fVar34;
            fVar27 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x1b2) << 0xd));
            FUN_00373500(fVar27 * DAT_003b2b58 + DAT_003b2b5c,fVar29,param_1 + 0x54);
            fVar29 = DAT_003b2b60;
            fVar25 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
            *(float *)(param_1 + 0x2c) = fVar25;
            *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar3;
            fVar27 = DAT_003b2b68;
            if ((uint)fVar29 < (uint)fVar25) {
              *(undefined4 *)(param_1 + 0x2c) = DAT_003b2b64;
              *(float *)(param_1 + 100) = fVar39;
              *(undefined1 *)(param_1 + 0x229) = 0;
              *(undefined2 *)(param_1 + 0x1b0) = 0xce;
              local_f8 = DAT_003b2b6c;
              *(undefined2 *)(param_1 + 0x1d6) = 0x5a;
              local_f4 = fVar27;
              FUN_0037547c(DAT_003b2b70,local_70,4,local_f8);
              fVar36 = DAT_003b2b88;
              fVar31 = DAT_003b2b84;
              fVar26 = DAT_003b2b80;
              fVar25 = DAT_003b2b7c;
              uVar23 = DAT_003b2b78;
              fVar27 = DAT_003b2b74;
              fVar29 = DAT_003b2b30;
              iVar11 = 0;
              do {
                local_c8 = fVar39;
                local_c4 = fVar39;
                fVar34 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
                local_c0 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
                fVar34 = fVar34 * fVar27;
                local_c0 = local_c0 * fVar29;
                in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar34 == fVar39) << 0x1e;
                fVar37 = fVar3;
                fVar30 = fVar39;
                if (!SUB41(in_fpscr >> 0x1e,0)) {
                  fVar30 = (float)FUN_003727f0(fVar34);
                  fVar37 = (float)FUN_00372674(fVar34);
                }
                local_f4 = fVar39;
                local_ec = fVar39;
                local_d8 = -fVar30;
                local_e4 = fVar3;
                local_e8 = fVar39;
                local_e0 = fVar39;
                local_dc = fVar39;
                local_d4 = fVar39;
                local_cc = fVar39;
                local_f8 = fVar37;
                local_f0 = fVar30;
                local_d0 = fVar37;
                FUN_003735ac(&local_b0,&local_f8,&local_c8);
                local_ac = (float)FUN_00371e50(uVar23);
                local_ac = local_ac + fVar25;
                local_bc = *pfVar19 + local_b0 * fVar26;
                local_b8 = *(float *)(param_1 + 0x2c) + (local_ac * fVar26 - fVar32);
                if ((uint)DAT_003b2ecc <= (uint)local_b8) {
                  local_b8 = fVar36;
                }
                local_b4 = *(float *)(param_1 + 0x30) + local_a8 * fVar26;
                fVar37 = (float)VectorSignedToFloat(300 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
                FUN_003673d8(fVar31 + fVar37 * fVar28,3,*(undefined4 *)(param_2 + 0x5c28),&local_bc,
                             &local_b0);
                iVar11 = (int)(short)((short)iVar11 + 1);
              } while (iVar11 < 300);
              local_f0 = 0.0;
              local_ec = -NAN;
              local_f8 = 0.0;
              local_f4 = 0.0;
              FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),fVar36,*(undefined4 *)(param_1 + 0x30),
                           local_94,param_1,param_2,0x5d);
              iVar11 = FUN_0035b164();
              if (iVar11 == 1) {
                iVar11 = FUN_0035b0a0();
                if (iVar11 != 0) {
                  FUN_0035af20(*(float *)(param_1 + 0x28) + DAT_003b2ed0,fVar36,
                               *(undefined4 *)(param_1 + 0x30),
                               *(float *)(param_1 + 0x28) - DAT_003b2ed0,fVar36,
                               *(undefined4 *)(param_1 + 0x30),param_2,5,0x4000,0xc000);
                }
              }
              else {
                local_f0 = 0.0;
                local_ec = 1.4013e-45;
                local_f8 = 0.0;
                local_f4 = 0.0;
                FUN_003738d0(*(float *)(param_1 + 0x28) + DAT_003b2ed0,fVar36,
                             *(undefined4 *)(param_1 + 0x30),local_94,param_2,0x5f,0);
              }
              FUN_0036ec40(0,DAT_003b2ed4);
              FUN_0036ec14(param_2,(int)*(char *)(param_2 + DAT_003b2ed8));
              FUN_0035af04(iVar17,0);
            }
          }
          else {
            *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_2 + 0x7f64) + 0x214) + fVar36;
            *(float *)(param_1 + 0x1f8) = fVar29;
            FUN_00373500(fVar28,fVar34,*(undefined4 *)(param_1 + 0xdbc),param_1 + 0x54);
            FUN_00373500(DAT_003b2b50,fVar3,DAT_003b2b4c,local_80);
            FUN_00373500(DAT_003b2704,fVar3,DAT_003b2b54,param_1 + 0xdc0);
            *(float *)(param_1 + 100) = fVar39;
          }
        }
        goto switchD_003b0920_caseD_6;
      }
      *(undefined2 *)(param_1 + 0x224) = 0x1e;
      FUN_00373500(uVar5,fVar33,uVar9,*(int *)(param_2 + 0x7f64) + 0x214);
      fVar27 = DAT_003b270c;
      uVar23 = DAT_003b2708;
      fVar28 = DAT_003b26fc;
      iVar11 = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      do {
        sVar18 = (short)iVar11;
        fVar25 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1e0) +
                                                 *(short *)(param_1 + 0x1c6)));
        fVar31 = *(float *)(param_1 + 0x1e4);
        fVar36 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        fVar26 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1ec) +
                                                 *(short *)(param_1 + 0x1c8)));
        fVar32 = *(float *)(param_1 + 0x1f0);
        fVar37 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00373500(*(float *)(param_1 + 0x1f8) * fVar28,fVar33,uVar23,
                     param_1 + iVar11 * 0xc + 0x704);
        iVar11 = param_1 + iVar11 * 6;
        FUN_00370084(iVar11 + 0xcc4,(int)(short)(int)(fVar25 * fVar27 * fVar31 * fVar36),
                     (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        FUN_00370084(iVar11 + 0xcc8,(int)(short)(int)(fVar26 * fVar27 * fVar32 * fVar37),
                     (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        iVar11 = (int)(short)(sVar18 + 1);
      } while (iVar11 < 0x29);
      *(float *)(param_1 + 0x6c) = fVar39;
      FUN_00373500(DAT_003b2714,fVar29,DAT_003b2710,param_1 + 0x1f8);
      iVar11 = local_78;
      fVar33 = fVar29;
      uVar23 = DAT_003b2718;
    }
    FUN_00373500(uVar24,fVar33,uVar23,iVar11);
    goto switchD_003b0920_caseD_6;
  }
  switch(iVar11) {
  case 0:
  case 1:
    if (*(short *)(*(int *)(param_2 + 0x7f64) + 0xfb8) == 0) {
      local_f8 = DAT_003b0e00;
      local_f4 = (float)DAT_003b0dfc;
      FUN_0037547c(DAT_003b0e04,local_70,4,DAT_003b0e00);
    }
    uVar4 = DAT_003b0dcc;
    uVar23 = DAT_003b0dc8;
    FUN_00373500(DAT_003b0e08,DAT_003b0dc8,DAT_003b0dcc,param_1 + 0x220);
    fVar25 = DAT_003b0dd4;
    fVar27 = DAT_003b0dd0;
    local_98 = param_1 + 0xca8;
    iVar11 = 0;
    do {
      sVar18 = (short)iVar11;
      fVar26 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1e0) +
                                               *(short *)(param_1 + 0x1c6)));
      fVar32 = *(float *)(param_1 + 0x1e4);
      fVar37 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar31 = (float)FUN_002cfca0((int)(short)(sVar18 * (short)(int)*(float *)(param_1 + 0x1ec) +
                                               *(short *)(param_1 + 0x1c8)));
      fVar36 = *(float *)(param_1 + 0x1f0);
      fVar30 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      iVar17 = FUN_00373500(*(float *)(param_1 + 0x1f8) * fVar25,uVar23,uVar4,
                            param_1 + iVar11 * 0xc + 0x704);
      if (iVar11 == 0x1c) {
        iVar17 = local_98;
      }
      iVar12 = param_1 + iVar11 * 6;
      if (iVar11 == 0x1c) {
        local_9c = (int)*(short *)(iVar17 + 0xc4);
      }
      FUN_00370084(iVar12 + 0xcc4,(int)(short)(int)(fVar26 * fVar27 * fVar32 * fVar37),
                   (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                   (int)(short)(int)*(float *)(param_1 + 0xdc0));
      FUN_00370084(iVar12 + 0xcc8,(int)(short)(int)(fVar31 * fVar27 * fVar36 * fVar30),
                   (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                   (int)(short)(int)*(float *)(param_1 + 0xdc0));
      uVar5 = DAT_003b11c8;
      iVar11 = (int)(short)(sVar18 + 1);
    } while (iVar11 < 0x29);
    *(float *)(param_1 + 0x22c) = *pfVar19;
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x30);
    FUN_00373500(DAT_003b11cc,fVar3,uVar5,param_1 + 0x6c);
    if (*(short *)(param_1 + 0x1b0) == 1) {
      FUN_00370084(param_1 + 0xbe,
                   (int)(short)(*(short *)(local_90 + 0x26) + *(short *)(param_1 + 0x92)),10,500);
    }
    FUN_00373500(fVar3,fVar29,uVar5,param_1 + 0x1f8);
    if (*(short *)(*(int *)(param_2 + 0x7f64) + 0xfb8) == 0) {
      FUN_00373500(fVar3,fVar3,DAT_003b11d8,local_80);
      FUN_00373500(DAT_003b11dc,fVar3,fVar28,param_1 + 0xdc0);
    }
    else {
      FUN_00373500(fVar3,fVar3,uVar21,local_80);
      FUN_00373500(DAT_003b11d4,fVar3,DAT_003b11d0,param_1 + 0xdc0);
    }
    if (*(short *)(param_1 + 0x1b0) == 0) {
      if ((*(short *)(param_1 + 0x1d6) == 0) &&
         ((local_a4 == 0 || (*(short *)(local_a4 + 0x1b0) != 4 && *(short *)(local_a4 + 0x1b0) != 5)
          ))) {
        *(undefined2 *)(param_1 + 0x1b0) = 1;
        *(undefined2 *)(param_1 + 0x1d6) = 0x4b;
        FUN_00317688();
        fVar29 = (float)FUN_003738a8(DAT_003b11e0);
        *(short *)(local_90 + 0x26) = (short)(int)fVar29;
      }
      break;
    }
    if (((*(short *)(param_1 + 0x1d6) != 0) || (*(short *)(DAT_003b11e4 + param_1) < 0)) ||
       (-1 < local_9c)) break;
    *(undefined2 *)(param_1 + 0x1b0) = 2;
    if (*(int *)(param_2 + 0x7f68) != param_1) {
      *(undefined2 *)(param_1 + 0x1d6) = 0x53;
      break;
    }
    uVar10 = (undefined2)DAT_003b11e8;
    goto LAB_003b12c4;
  case 2:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    local_f8 = fVar35;
    local_f4 = (float)uVar7;
    FUN_0037547c(DAT_003b11ec,local_70,4,fVar35);
    FUN_00373500(DAT_003b0e08,DAT_003b0dc8,DAT_003b0dcc,param_1 + 0x220);
    fVar25 = DAT_003b11f4;
    uVar23 = DAT_003b11f0;
    fVar27 = DAT_003b0de0;
    fVar28 = DAT_003b0dd4;
    iVar11 = 0;
    do {
      fVar26 = (float)VectorSignedToFloat(0x28 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00373500(*(float *)(param_1 + 0x1f8) * (fVar28 + fVar26 * fVar25 * fVar27),fVar29,uVar23,
                   param_1 + iVar11 * 0xc + 0x704);
      iVar12 = param_1 + iVar11 * 6;
      FUN_00370084(iVar12 + 0xcc4,(int)(short)(*(short *)(DAT_003b11f8 + iVar11 * 2) << 8),
                   (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                   (int)(short)(int)*(float *)(param_1 + 0xdc0));
      FUN_00370084(iVar12 + 0xcc8,0,(int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                   (int)(short)(int)*(float *)(param_1 + 0xdc0));
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < 0x29);
    *(float *)(param_1 + 0x22c) = *pfVar19;
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x30);
    FUN_00373500(fVar29,fVar3,fVar27,local_80);
    FUN_00373500(DAT_003b11fc,fVar3,uVar4,param_1 + 0xdc0);
    if ((*(short *)(param_1 + 0x1d6) != 0) && (*(char *)(param_1 + 0x22a) == '\0')) break;
    fVar27 = *(float *)(param_1 + 0xed0) - *(float *)(iVar17 + 0x28);
    fVar29 = *(float *)(param_1 + 0xed4) - *(float *)(iVar17 + 0x2c);
    fVar28 = *(float *)(param_1 + 0xed8) - *(float *)(iVar17 + 0x30);
    if (((int)ABS(fVar29) < DAT_003b1200) &&
       (((local_a4 == 0 || (*(short *)(local_a4 + 0x1b0) != 4 && *(short *)(local_a4 + 0x1b0) != 5))
        && ((int)SQRT(fVar27 * fVar27 + fVar29 * fVar29 + fVar28 * fVar28) < DAT_003b1204)))) {
      *(undefined2 *)(param_1 + 0x1b0) = 3;
      *(undefined2 *)(param_1 + 0x1d6) = 0x3c;
      *(undefined4 *)(param_1 + 0xdbc) = uVar21;
      *(float *)(param_1 + 0xdc0) = fVar39;
      *(ushort *)(param_1 + 0x1ce) =
           (ushort)((short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x92)) < 0);
      break;
    }
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0xdbc) = uVar21;
    *(float *)(param_1 + 0xdc0) = fVar39;
    *(float *)(param_1 + 0x1f0) = fVar39;
    *(float *)(param_1 + 0x1e4) = fVar39;
    *(float *)(param_1 + 500) = fVar39;
    *(float *)(param_1 + 0x1e8) = fVar39;
    *(undefined2 *)(param_1 + 0x1d6) = 0x2d;
    if (((((int)ABS(*(float *)(iVar17 + 0x28) - *(float *)(param_1 + 0x28)) <= DAT_003b1674) &&
         (fVar29 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(in_fpscr >> 0x15) & 3),
         fVar29 <= *(float *)(iVar17 + 0x2c))) &&
        ((local_a4 == 0 || (*(short *)(local_a4 + 0x1b0) != 4 && *(short *)(local_a4 + 0x1b0) != 5))
        )) && ((int)ABS(*(float *)(iVar17 + 0x30) - *(float *)(param_1 + 0x30)) <= DAT_003b1674))
    break;
    *(undefined2 *)(param_1 + 0x1b0) = 0x65;
    uVar10 = 0x71;
LAB_003b12c4:
    *(undefined2 *)(param_1 + 0x1d6) = uVar10;
    break;
  case 3:
  case 4:
    FUN_00373500(DAT_003b1680,DAT_003b167c,DAT_003b1678,param_1 + 0x220);
    iVar11 = DAT_003b1684;
    iVar12 = 0;
    if (*(short *)(param_1 + 0x1d6) == 0xbc) {
      *(float *)(param_1 + 0xdc0) = fVar39;
      *(undefined4 *)(param_1 + 0xdbc) = uVar21;
    }
    do {
      if (*(short *)(param_1 + 0x1d6) < 0x27) {
        iVar14 = (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc));
        iVar15 = (int)(short)(int)*(float *)(param_1 + 0xdc0);
        sVar18 = *(short *)(iVar11 + 0x52 + iVar12 * 2);
        if (*(short *)(param_1 + 0x1ce) == 0) {
          FUN_00370084(param_1 + iVar12 * 6 + 0xcc8,(int)(short)(sVar18 << 8),iVar14,iVar15);
        }
        else {
          FUN_00370084(param_1 + iVar12 * 6 + 0xcc8,(int)(short)(sVar18 * -0x100),iVar14,iVar15);
        }
      }
      else {
        iVar14 = (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc));
        iVar15 = (int)(short)(int)*(float *)(param_1 + 0xdc0);
        sVar18 = *(short *)(iVar11 + iVar12 * 2);
        if (*(short *)(param_1 + 0x1ce) == 0) {
          FUN_00370084(param_1 + iVar12 * 6 + 0xcc8,(int)(short)(sVar18 << 8),iVar14,iVar15);
        }
        else {
          FUN_00370084(param_1 + iVar12 * 6 + 0xcc8,(int)(short)(sVar18 * -0x100),iVar14,iVar15);
        }
      }
      iVar12 = (int)(short)((short)iVar12 + 1);
    } while (iVar12 < 0x29);
    FUN_00373500(uVar8,fVar3,DAT_003b1688,local_80);
    FUN_00373500(DAT_003b168c,fVar3,fVar32,param_1 + 0xdc0);
    if (0x2c < *(short *)(param_1 + 0x1d6)) {
      FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,200);
    }
    if (*(short *)(param_1 + 0x1b0) == 3) {
      if (((7 < *(short *)(param_1 + 0x1d6)) && (*(char *)(param_1 + 0x22a) != '\0')) &&
         (*(int *)(iVar17 + 0x124) == 0)) {
        iVar11 = (**(code **)(param_2 + 0x5ba0))(param_2,iVar17);
        fVar28 = DAT_003b0e00;
        uVar23 = DAT_003b0dfc;
        if (iVar11 == 0) {
          *(undefined2 *)(param_1 + 0x1b0) = 0;
          *(undefined4 *)(param_1 + 0xdbc) = uVar21;
          *(float *)(param_1 + 0xdc0) = fVar39;
          *(float *)(param_1 + 0x1f0) = fVar39;
          *(float *)(param_1 + 0x1e4) = fVar39;
          *(float *)(param_1 + 500) = fVar39;
          *(float *)(param_1 + 0x1e8) = fVar39;
          uVar10 = 0x1e;
          goto LAB_003b12c4;
        }
        *(int *)(iVar17 + 0x124) = param_1;
        *(undefined2 *)(param_1 + 0x1b0) = 4;
        local_f8 = fVar28;
        local_f4 = (float)uVar23;
        FUN_0037547c(DAT_003b1690,local_70,4,fVar28);
        local_f8 = DAT_003b0e00;
        local_f4 = (float)DAT_003b0dfc;
        FUN_0037547c(DAT_003b1694,iVar17 + 0x28,4,DAT_003b0e00);
      }
      if (*(short *)(param_1 + 0x1d6) == 6) {
        *(undefined2 *)(param_1 + 0x1b0) = 0;
        *(undefined4 *)(param_1 + 0xdbc) = uVar21;
        *(float *)(param_1 + 0xdc0) = fVar39;
        *(float *)(param_1 + 0x1f0) = fVar39;
        *(float *)(param_1 + 0x1e4) = fVar39;
        *(float *)(param_1 + 500) = fVar39;
        *(float *)(param_1 + 0x1e8) = fVar39;
        uVar10 = 0x2d;
        goto LAB_003b12c4;
      }
    }
    uVar23 = DAT_003b169c;
    if (*(short *)(param_1 + 0x1b0) == 4) {
      *(undefined2 *)(DAT_003b1698 + iVar17) = 10;
      *(float *)(iVar17 + 100) = fVar39;
      *(float *)(iVar17 + 0x6c) = fVar39;
      FUN_00373500(*(undefined4 *)(param_1 + 0x23c),fVar29,uVar23,iVar17 + 0x28);
      FUN_00373500(*(undefined4 *)(param_1 + 0x240),fVar29,uVar23,iVar17 + 0x2c);
      FUN_00373500(*(undefined4 *)(param_1 + 0x244),fVar29,uVar23,iVar17 + 0x30);
      FUN_00370084(iVar17 + 0xbc,(int)*(short *)(local_90 + 0x48),2,2000);
      FUN_00370084(iVar17 + 0xbe,(int)*(short *)(local_90 + 0x4a),2,2000);
      FUN_00370084(iVar17 + 0xc0,(int)*(short *)(local_90 + 0x4c),2,2000);
      if (*(short *)(param_1 + 0x1d6) == 0) {
        iVar11 = FUN_0036c5bc(param_2,0);
        *(undefined2 *)(param_1 + 0x1b0) = 5;
        *(undefined4 *)(param_1 + 0xdbc) = uVar21;
        *(float *)(param_1 + 0xdc0) = fVar39;
        *(float *)(param_1 + 0x1f0) = fVar39;
        *(float *)(param_1 + 0x1e4) = fVar39;
        *(float *)(param_1 + 500) = fVar39;
        *(float *)(param_1 + 0x1e8) = fVar39;
        *(undefined2 *)(param_1 + 0x1d6) = 0xe1;
        *(undefined2 *)(param_1 + 0x1d0) = 0;
        *(undefined2 *)(param_1 + 0x1d4) = 0x1e;
        FUN_00317688();
        FUN_00367494(param_2,local_74);
        *(undefined1 *)(param_2 + 0x6017) = 1;
        iVar12 = FUN_0035b164();
        if (iVar12 != 0) {
          FUN_00317624(1);
        }
        uVar10 = FUN_00367d74(param_2);
        *(undefined2 *)(local_8c + 0xba) = uVar10;
        FUN_00320d7c(param_2,0,1);
        FUN_00320d7c(param_2,(int)*(short *)(local_8c + 0xba),7);
        uVar23 = *(undefined4 *)(iVar11 + 0x90);
        uVar21 = *(undefined4 *)(iVar11 + 0x94);
        *local_84 = *(undefined4 *)(iVar11 + 0x8c);
        local_84[1] = uVar23;
        local_84[2] = uVar21;
        uVar23 = *(undefined4 *)(iVar11 + 0x84);
        uVar21 = *(undefined4 *)(iVar11 + 0x88);
        *local_88 = *(undefined4 *)(iVar11 + 0x80);
        local_88[1] = uVar23;
        local_88[2] = uVar21;
        uVar23 = FUN_003696ec(*(float *)(param_1 + 0xfc0) - *(float *)(param_1 + 0x28),
                              *(float *)(param_1 + 0xfc8) - *(float *)(param_1 + 0x30));
        *(undefined4 *)(param_1 + 0x105c) = uVar23;
        *(float *)(param_1 + 0x1060) = fVar39;
switchD_003b0920_caseD_5:
        if (*(short *)(param_1 + 0x1d6) == 0xcf) {
          FUN_00338cd8(0);
          FUN_0034be04(0xb);
        }
        if ((2 < *(short *)(DAT_003b1b7c + 0x44)) && ((*(ushort *)(param_1 + 0x1d6) & 0xf) == 0)) {
          (**(code **)(param_2 + 0x5bac))(param_2,0xffffffff);
        }
        uVar23 = DAT_003b167c;
        FUN_00373500(DAT_003b1680,DAT_003b167c,DAT_003b1678,param_1 + 0x220);
        fVar26 = DAT_003b1b88;
        fVar25 = DAT_003b1b84;
        fVar27 = DAT_003b1b80;
        fVar28 = DAT_003b1688;
        iVar11 = 0;
        local_9c = (int)*(short *)(param_1 + 0xd1e);
        if ((*(uint *)(local_a0 + 4) & 1) != 0 || (*(uint *)(local_a0 + 4) & 2) != 0) {
          *(short *)(param_1 + 0x1d0) = *(short *)(param_1 + 0x1d0) + 1;
        }
        do {
          fVar32 = (float)FUN_002cfca0((int)(short)((short)iVar11 *
                                                    (short)(int)*(float *)(param_1 + 0x1e0) +
                                                   *(short *)(param_1 + 0x1c6)));
          fVar30 = *(float *)(param_1 + 0x1e4);
          fVar35 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
          fVar36 = (float)FUN_002cfca0((int)(short)((short)iVar11 *
                                                    (short)(int)*(float *)(param_1 + 0x1ec) +
                                                   *(short *)(param_1 + 0x1c8)));
          fVar34 = *(float *)(param_1 + 0x1f0);
          fVar33 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
          fVar37 = (float)VectorSignedToFloat(0x28 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00373500(*(float *)(param_1 + 0x1f8) * (fVar26 + fVar37 * fVar27 * fVar28),uVar23,
                       uVar23,param_1 + iVar11 * 0xc + 0x704);
          iVar12 = param_1 + iVar11 * 6;
          FUN_00370084(iVar12 + 0xcc4,(int)(short)(int)(fVar32 * fVar25 * fVar30 * fVar35),
                       (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                       (int)(short)(int)*(float *)(param_1 + 0xdc0));
          FUN_00370084(iVar12 + 0xcc8,(int)(short)(int)(fVar36 * fVar25 * fVar34 * fVar33),
                       (int)(short)(int)(fVar3 / *(float *)(param_1 + 0xdbc)),
                       (int)(short)(int)*(float *)(param_1 + 0xdc0));
          do {
            iVar11 = (int)(short)((short)iVar11 + 1);
            if (0x28 < iVar11) {
              *(undefined2 *)(iVar17 + 0x2238) = 10;
              *(undefined4 *)(iVar17 + 0x28) = *(undefined4 *)(param_1 + 0x23c);
              *(undefined4 *)(iVar17 + 0x2c) = *(undefined4 *)(param_1 + 0x240);
              *(undefined4 *)(iVar17 + 0x30) = *(undefined4 *)(param_1 + 0x244);
              uVar10 = *(undefined2 *)(local_90 + 0x48);
              *(undefined2 *)(iVar17 + 0xbc) = uVar10;
              *(undefined2 *)(iVar17 + 0x34) = uVar10;
              uVar10 = *(undefined2 *)(local_90 + 0x4a);
              *(undefined2 *)(iVar17 + 0xbe) = uVar10;
              *(undefined2 *)(iVar17 + 0x36) = uVar10;
              uVar10 = *(undefined2 *)(local_90 + 0x4c);
              *(undefined2 *)(iVar17 + 0xc0) = uVar10;
              *(undefined2 *)(iVar17 + 0x38) = uVar10;
              *(float *)(iVar17 + 100) = fVar39;
              *(float *)(iVar17 + 0x6c) = fVar39;
              FUN_00373500(fVar3,fVar29,fVar28,param_1 + 0x1f8);
              FUN_00373500(fVar29,fVar3,DAT_003b1b8c,local_80);
              uVar21 = DAT_003b1b90;
              FUN_00373500(DAT_003b1b94,fVar3,DAT_003b1b90,param_1 + 0xdc0);
              FUN_00373500(DAT_003b1b9c,fVar29,DAT_003b1b98,local_78);
              if (((0x27 < *(short *)(param_1 + 0x1d0)) || (*(short *)(param_1 + 0x1d6) == 0)) &&
                 ((*(short *)(param_1 + 0xd1e) < 0 && (-1 < local_9c)))) {
                *(undefined2 *)(param_1 + 0x1b0) = 0x65;
                *(undefined2 *)(param_1 + 0x1b8) = 0x4b;
                iVar11 = DAT_003b1ba0;
                if (*(int *)(iVar17 + 0x124) == param_1) {
                  *(undefined2 *)(iVar17 + 0x2238) = 0x65;
                  *(undefined4 *)(iVar17 + 0x124) = 0;
                  *(undefined1 *)(iVar11 + iVar17) = 0;
                  if (*(short *)(param_1 + 0x1d6) == 0) {
                    FUN_00368fc0(DAT_003b169c,uVar21,param_2,param_1,
                                 (int)(short)(*(short *)(param_1 + 0xbe) + -0x8000),0);
                  }
                }
                *(undefined2 *)(param_1 + 0x1d6) = 0x71;
              }
              uVar5 = DAT_003b1ba8;
              if (*(short *)(local_8c + 0xba) != 0) {
                local_b0 = fVar39;
                local_ac = fVar31;
                local_a8 = DAT_003b1ba4;
                *(float *)(param_1 + 0x105c) =
                     *(float *)(param_1 + 0x105c) - *(float *)(param_1 + 0x1060);
                FUN_00373500(fVar28,fVar3,uVar5,param_1 + 0x1060);
                FUN_003735e8(*(undefined4 *)(param_1 + 0x105c),&local_ec,0);
                FUN_003735ac(&local_bc,&local_ec,&local_b0);
                FUN_00373500(*(float *)(param_1 + 0x28) + local_bc,uVar23,uVar21,param_1 + 0xfc0);
                FUN_00373500(*(float *)(param_1 + 0x2c) + local_b8,uVar23,uVar21,param_1 + 0xfc4);
                FUN_00373500(*(float *)(param_1 + 0x30) + local_b4,uVar23,uVar21,param_1 + 0xfc8);
                FUN_00373500(*(undefined4 *)(iVar17 + 0x28),fVar29,uVar4,local_88);
                FUN_00373500(*(undefined4 *)(iVar17 + 0x2c),fVar29,uVar4,param_1 + 0xfd0);
                FUN_00373500(*(undefined4 *)(iVar17 + 0x30),fVar29,uVar4,local_7c);
                FUN_00367b14(param_2,(int)*(short *)(local_8c + 0xba),local_88,param_1 + 0xfc0);
              }
              goto switchD_003b0920_caseD_6;
            }
          } while (0x13 < iVar11);
        } while( true );
      }
    }
    break;
  case 5:
    goto switchD_003b0920_caseD_5;
  case 10:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    if (*(int *)(param_2 + 0x7f6c) == param_1) {
      *(undefined2 *)(param_1 + 0x1b0) = 0xb;
      *(undefined2 *)(param_1 + 0x1d6) = 0x69;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    }
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x229) = 1;
    *(undefined2 *)(param_1 + 0x224) = 0x1e;
    if (*(short *)(param_1 + 0x1d6) < 0x1e) {
      FUN_00373500(uVar23,fVar29,DAT_003b0de0,param_1 + 0x238);
      FUN_00373500(DAT_003b0de4,fVar3,DAT_003b0dd4,param_1 + 0x1fc);
      if (DAT_003b0de8 <= *(int *)(param_1 + 0x1fc)) {
        *(undefined2 *)(param_1 + 0x1b0) = 0;
        *(undefined2 *)(param_1 + 0x1d6) = 0x5a;
      }
    }
    uVar5 = DAT_003b0df4;
    uVar21 = DAT_003b0df0;
    uVar23 = DAT_003b0dec;
    sVar18 = *(short *)(param_1 + 0x1d6);
    if (sVar18 < 0x4c) {
      if (sVar18 < 0x3d) {
        if (sVar18 < 0x2e) {
          if (sVar18 < 0x1f) goto LAB_003b0b74;
          sVar18 = 8;
        }
        else {
          sVar18 = 5;
        }
      }
      else {
LAB_003b0b74:
        sVar18 = 3;
      }
    }
    else {
      sVar18 = 1;
    }
    sVar16 = 0;
    if (sVar18 != 0) {
      do {
        fVar29 = (float)FUN_00371e50(uVar4);
        uVar24 = FUN_00371e50(uVar23);
        local_b0 = *pfVar19;
        local_ac = *(float *)(param_1 + 0x2c);
        local_a8 = *(float *)(param_1 + 0x30);
        fVar28 = (float)FUN_003727f0();
        local_b0 = local_b0 + fVar28 * fVar29;
        fVar28 = (float)FUN_00372674(uVar24);
        local_a8 = local_a8 + fVar28 * fVar29;
        local_ac = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_f8 = 1.4013e-45;
        FUN_00365768(uVar5,uVar21,*(undefined4 *)(param_2 + 0x5c28),&local_b0,0x50,DAT_003b0df8);
        sVar16 = sVar16 + 1;
      } while (sVar16 < sVar18);
    }
  }
switchD_003b0920_caseD_6:
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  sVar18 = *(short *)(param_1 + 0x1b0);
  if (((((sVar18 == 2 || sVar18 == 0xca) || sVar18 == 3) || sVar18 == 4) &&
      (iVar11 = FUN_003759d0(), fVar29 = DAT_003b2ee4, iVar11 < DAT_003b2edc)) &&
     (DAT_003b2ee0 < *(int *)(param_1 + 0x54))) {
    local_bc = fVar39;
    local_b8 = fVar39;
    local_b4 = fVar39;
    if (*(short *)(param_1 + 0x1b0) < 0xca) {
      fVar29 = (float)FUN_00371e50(DAT_003b2ee8);
      iVar11 = (int)(short)((short)(int)fVar29 + 0x12);
      fVar28 = (float)FUN_00371e50(DAT_003b2b38);
      fVar28 = fVar28 + DAT_003b2eec;
      local_ac = *(float *)(param_1 + iVar11 * 0xc + 0xdcc) - DAT_003b2ef0;
    }
    else {
      iVar11 = 0x26;
      fVar28 = (float)FUN_00371e50(DAT_003b2ee4);
      fVar28 = fVar28 + fVar29;
      local_ac = *(float *)(param_1 + 0xf94);
    }
    fVar38 = *(float *)(param_1 + 0x54) * fVar38;
    local_b0 = (float)FUN_003738a8(fVar38);
    param_1 = param_1 + iVar11 * 0xc;
    local_b0 = local_b0 + *(float *)(param_1 + 0xdc8);
    local_a8 = (float)FUN_003738a8(fVar38);
    local_a8 = local_a8 + *(float *)(param_1 + 0xdd0);
    FUN_003673d8(fVar28,3,*(undefined4 *)(param_2 + 0x5c28),&local_b0,&local_bc);
  }
  return;
}

