// OoT3D decomp @ 004be20c  name=FUN_004be20c  size=2248

void FUN_004be20c(int param_1,int param_2)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined auStack_54 [12];
  uint local_48;
  
  iVar17 = (int)*(float *)(*(int *)(param_1 + 0x29c8) + 0x2c);
  iVar18 = (int)*(float *)(*(int *)(param_1 + 0x29c8) + 0x28);
  *(undefined *)(DAT_004be688 + param_2) = 0;
  *(short *)(param_1 + 0x2280) = (short)(int)*(float *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  fVar21 = DAT_004be6a4;
  fVar22 = DAT_004be6a0;
  if (*(char *)(param_1 + 0x2237) != '\0') {
    iVar9 = iVar17;
    if (iVar17 < 0) {
      iVar9 = -iVar17;
    }
    iVar11 = iVar18;
    if (iVar18 < 0) {
      iVar11 = -iVar18;
    }
    if (iVar9 < iVar11) {
      iVar9 = iVar18;
      if (iVar18 < 0) {
        iVar9 = -iVar18;
      }
      iVar17 = 0;
      fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = fVar19 * DAT_004be68c;
      goto LAB_004be2e0;
    }
  }
  iVar9 = iVar17;
  if (iVar17 < 0) {
    iVar9 = -iVar17;
  }
  iVar18 = 0;
  fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = fVar19 * DAT_004be690;
LAB_004be2e0:
  fVar20 = DAT_004be694;
  if ((0x3f7fffff < (int)fVar19) && (fVar20 = fVar19, DAT_004be698 < (int)fVar19)) {
    fVar20 = DAT_004be69c;
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x294) < DAT_004be6a0) << 0x1f;
  uVar16 = uVar12 | (uint)(NAN(*(float *)(param_1 + 0x294)) || NAN(DAT_004be6a0)) << 0x1c;
  fVar19 = DAT_004be694;
  if ((byte)(uVar12 >> 0x1f) != ((byte)(uVar16 >> 0x1c) & 1)) {
    fVar19 = DAT_004be6a4;
  }
  *(float *)(param_1 + 0x294) = fVar19 * fVar20;
  uVar14 = DAT_004be6b0;
  uVar10 = DAT_004be6ac;
  fVar19 = DAT_004be6a8;
  local_48 = param_2 + 0xa98;
  if (-1 < *(short *)(param_1 + 0x2238)) {
    bVar15 = *(int *)(param_1 + 0x78) != 0;
    uVar12 = local_48;
    if (bVar15) {
      uVar12 = (uint)*(byte *)(param_1 + 0x80);
    }
    if ((bVar15 && uVar12 != 0x32) && (iVar9 = FUN_00359690(local_48), iVar9 != 0)) {
      fVar23 = *(float *)(iVar9 + 0x10c);
      fVar25 = *(float *)(iVar9 + 0x110);
      fVar20 = *(float *)(iVar9 + 0x2c);
      fVar24 = *(float *)(iVar9 + 0x30);
      *(float *)(param_1 + 0x28) =
           *(float *)(param_1 + 0x28) + (*(float *)(iVar9 + 0x28) - *(float *)(iVar9 + 0x108));
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + (fVar20 - fVar23);
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + (fVar24 - fVar25);
    }
    FUN_00376340(param_2,param_1,7);
    uVar12 = FUN_0035ea34(local_48,*(undefined4 *)(param_1 + 0x78),*(undefined *)(param_1 + 0x80));
    *(uint *)(param_1 + 0x2498) = uVar12;
    if (uVar12 == *(byte *)(param_1 + 0x28f6)) {
      *(char *)(param_1 + 0x2489) = *(char *)(param_1 + 0x2489) + '\x01';
    }
    else {
      *(char *)(param_1 + 0x28f6) = (char)uVar12;
      *(undefined *)(param_1 + 0x2489) = 0;
    }
    FUN_003598c8(param_2,param_1);
  }
  fVar20 = DAT_004be6c0;
  uVar3 = DAT_004be6bc;
  if (*(char *)(param_1 + 0x1749) == '\x03') {
    iVar18 = 0;
    iVar17 = iVar18;
  }
  if ((*(short *)(param_1 + 0x2238) < 0) ||
     ((((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_004be6c4) == 0 &&
       ((*(ushort *)(param_1 + 0x90) & 0x200) != 0)) &&
      (((*(uint *)(DAT_004be6b4 + 0x34) & 10) != 0 ||
       (iVar9 = FUN_002bb8b0(local_48,*(undefined4 *)(param_1 + 0x78),*(undefined *)(param_1 + 0x80)
                            ), iVar9 != 0)))))) {
    iVar9 = FUN_0036b4ec(param_1 + 0x254,param_2);
    pfVar5 = DAT_004be6d0;
    uVar4 = DAT_004be6cc;
    if (iVar9 != 0) {
      iVar9 = (int)*(short *)(param_1 + 0x2238);
      if (iVar9 < 0) {
        uVar7 = -*(short *)(param_1 + 0x2238) & 1;
      }
      else {
        if (iVar17 == 0) {
          bVar15 = *(char *)(param_1 + 0x2237) == '\0';
          if (bVar15 || iVar18 == 0) {
            *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x1000;
            return;
          }
          iVar17 = *(int *)(param_1 + 0x170c);
          uVar10 = *(undefined4 *)(iVar17 + iVar9 * 4 + 0x11c);
          if ((bVar15 || iVar18 == 0) || !bVar15 && iVar18 < 0) {
            puVar13 = (undefined4 *)(iVar9 * 0xc + 0xdc + iVar17);
            *(undefined4 *)(param_1 + 0x2ac) = *puVar13;
            *(undefined4 *)(param_1 + 0x2b0) = puVar13[1];
            *(undefined4 *)(param_1 + 0x2b4) = puVar13[2];
            uVar14 = FUN_003603c0(param_1 + 0x254,uVar10);
            uVar14 = VectorSignedToFloat(uVar14,(byte)(uVar16 >> 0x15) & 3);
            FUN_00360190(fVar21,uVar14,fVar22,param_1 + 0x254,param_2,uVar10,2);
            return;
          }
          puVar13 = (undefined4 *)(iVar9 * 0xc + 0xc4 + iVar17);
          *(undefined4 *)(param_1 + 0x2ac) = *puVar13;
          *(undefined4 *)(param_1 + 0x2b0) = puVar13[1];
          *(undefined4 *)(param_1 + 0x2b4) = puVar13[2];
          FUN_003604f0(param_1 + 0x254,param_2,uVar10);
          return;
        }
        uVar12 = *(char *)(param_1 + 0x2237) + iVar9;
        if (iVar17 < 1) {
          if ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) < DAT_004beae0) {
            if (*(char *)(param_1 + 0x2237) == 0) {
              if (iVar9 != 0) {
                iVar17 = *(int *)(param_1 + 0x170c);
                *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(iVar17 + 0x58);
                *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(iVar17 + 0x5c);
                *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(iVar17 + 0x60);
              }
              uVar10 = DAT_004beadc;
              uVar14 = *(undefined4 *)
                        (*(int *)(param_1 + 0x170c) + *(short *)(param_1 + 0x2238) * 4 + 0x124);
              if (*(char *)(param_1 + 0x12bc) == '\0') {
                uVar1 = *(undefined *)(param_1 + 0x2a6);
                *(undefined *)(param_1 + 0x2a6) = 0;
                FUN_0036055c(param_2,param_1,uVar10,0);
                *(undefined *)(param_1 + 0x2a6) = uVar1;
                FUN_00358dfc(uVar4,param_1 + 0x254,param_2,uVar14);
              }
              *(undefined2 *)(param_1 + 0x2238) = 1;
            }
            else {
              FUN_003598c8(fVar19,*(float *)(*(int *)(param_1 + 0x170c) + 0x3c) + DAT_004beae4,
                           uVar14,uVar10,param_2,param_1);
              *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xf7dfffff;
              FUN_00345394(param_1,param_2);
              *(undefined4 *)(param_1 + 0x221c) = uVar3;
            }
          }
          else {
            puVar13 = (undefined4 *)(*(int *)(param_1 + 0x170c) + (uVar12 ^ 1) * 0xc + 0x94);
            *(undefined4 *)(param_1 + 0x2ac) = *puVar13;
            *(undefined4 *)(param_1 + 0x2b0) = puVar13[1];
            *(undefined4 *)(param_1 + 0x2b4) = puVar13[2];
            uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x170c) + (uVar12 ^ 1) * 4 + 0x10c);
            uVar10 = FUN_003603c0(param_1 + 0x254,uVar14);
            uVar10 = VectorSignedToFloat(uVar10,(byte)(uVar16 >> 0x15) & 3);
            FUN_00360190(fVar21,uVar10,fVar22,param_1 + 0x254,param_2,uVar14,2);
          }
        }
        else {
          if (((*(uint *)(DAT_004be6b4 + 0x128) & 1) == 0) &&
             (iVar17 = FUN_003679b4(DAT_004be6d4), iVar17 != 0)) {
            *pfVar5 = fVar22;
            pfVar5[1] = fVar22;
            pfVar5[2] = fVar19;
          }
          pfVar6 = DAT_004be6d0;
          pfVar5[1] = *(float *)(*(int *)(param_1 + 0x170c) + 0x40);
          fVar21 = (float)FUN_003596d0(param_2,param_1,pfVar6,auStack_54);
          uVar10 = DAT_004beadc;
          uVar7 = *(ushort *)(param_2 + 0x104);
          fVar19 = fVar21 - *(float *)(param_1 + 0x2c);
          bVar15 = uVar7 == 1;
          if (bVar15) {
            uVar7 = (ushort)*(byte *)(DAT_004be6d8 + param_2);
          }
          if (bVar15 && uVar7 == 9) {
            fVar22 = fVar20;
          }
          if (fVar19 == fVar22 || fVar19 < fVar22 != (NAN(fVar19) || NAN(fVar22))) {
            puVar13 = (undefined4 *)(*(int *)(param_1 + 0x170c) + uVar12 * 0xc + 100);
            *(undefined4 *)(param_1 + 0x2ac) = *puVar13;
            *(undefined4 *)(param_1 + 0x2b0) = puVar13[1];
            *(undefined4 *)(param_1 + 0x2b4) = puVar13[2];
            FUN_003604f0(param_1 + 0x254,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x170c) + uVar12 * 4 + 0x10c));
          }
          else if (*(char *)(param_1 + 0x2237) == '\0') {
            uVar14 = *(undefined4 *)
                      (*(int *)(param_1 + 0x170c) + *(short *)(param_1 + 0x2238) * 4 + 300);
            if (*(char *)(param_1 + 0x12bc) == '\0') {
              uVar1 = *(undefined *)(param_1 + 0x2a6);
              *(undefined *)(param_1 + 0x2a6) = 0;
              FUN_0036055c(param_2,param_1,uVar10,0);
              *(undefined *)(param_1 + 0x2a6) = uVar1;
              FUN_00358dfc(uVar4,param_1 + 0x254,param_2,uVar14);
            }
          }
          else {
            *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xffdfffff;
            *(float *)(param_1 + 0x2c) = fVar21;
            FUN_0033ebfc(*(undefined4 *)(*(int *)(param_1 + 0x170c) + 0x3c),param_2,param_1,
                         *(undefined4 *)(param_1 + 0x78),*(undefined *)(param_1 + 0x80),0,0x91);
            uVar10 = DAT_004be6dc;
            sVar8 = *(short *)(param_1 + 0x2220) + -0x8000;
            *(short *)(param_1 + 0x2220) = sVar8;
            *(short *)(param_1 + 0xbe) = sVar8;
            *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
            FUN_0036055c(param_2,param_1,uVar10,0);
            FUN_00358dfc(DAT_004be6e0,param_1 + 0x254,param_2,0x91);
            *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x4000;
          }
        }
        uVar7 = *(ushort *)(param_1 + 0x2238) ^ 1;
      }
      *(ushort *)(param_1 + 0x2238) = uVar7;
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xf7dfffff;
    FUN_00345394(param_1,param_2);
    *(undefined4 *)(param_1 + 0x221c) = uVar3;
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_0036f59c(param_1,DAT_004be6c8 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_1 + 0x28);
    }
  }
  iVar17 = DAT_004beae8;
  iVar18 = DAT_004beae8 + -2;
  if (*(short *)(param_1 + 0x2238) < 0) {
    if (((*(short *)(param_1 + 0x2238) != -2) ||
        ((iVar9 = FUN_0036b1e0(DAT_004beaec,param_1 + 0x254), iVar9 == 0 &&
         (iVar9 = FUN_0036b1e0(DAT_004beaf0,param_1 + 0x254), iVar9 == 0)))) &&
       ((*(short *)(param_1 + 0x2238) != -4 ||
        ((((iVar9 = FUN_0036b1e0(DAT_004beaf4,param_1 + 0x254), iVar9 == 0 &&
           (iVar9 = FUN_0036b1e0(DAT_004beaf8,param_1 + 0x254), iVar9 == 0)) &&
          (iVar9 = FUN_0036b1e0(DAT_004beafc,param_1 + 0x254), iVar9 == 0)) &&
         (iVar9 = FUN_0036b1e0(DAT_004beb00,param_1 + 0x254), iVar9 == 0)))))) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x2237);
  }
  else {
    fVar21 = *(float *)(param_1 + 0x294);
    if (fVar21 != fVar22 && fVar21 < fVar22 == (NAN(fVar21) || NAN(fVar22))) {
      fVar22 = fVar20;
    }
    iVar9 = FUN_0036b1e0(fVar22,param_1 + 0x254);
    if (iVar9 == 0) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x2237);
  }
  if (cVar2 != '\0') {
    iVar18 = iVar17;
  }
  FUN_0036f59c(param_1,iVar18);
  return;
}

