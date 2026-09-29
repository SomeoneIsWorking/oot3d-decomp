// OoT3D decomp @ 00477e24  name=FUN_00477e24  size=2432

void FUN_00477e24(int param_1,byte *param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  undefined2 *puVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  undefined2 *puVar28;
  bool bVar29;
  bool bVar30;
  uint in_fpscr;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 auStack_d4 [12];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float *local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [48];
  int local_4c;
  byte *local_48;

  uVar19 = DAT_00478224;
  local_48 = param_2 + 0x1588;
  param_2[0x158c] = 0;
  param_2[0x158d] = 0;
  param_2[0x158e] = 0;
  param_2[0x158f] = 0;
  iVar15 = 0;
  do {
    iVar18 = iVar15 + 1;
    uVar5 = (undefined2)uVar19;
    *(undefined2 *)(param_2 + iVar15 * 0x6c + 0xe) = uVar5;
    *(undefined2 *)(param_2 + iVar15 * 0x6c + 0x10) = uVar5;
    *(undefined2 *)(param_2 + iVar15 * 0x6c + 0x12) = uVar5;
    fVar9 = DAT_0047822c;
    fVar8 = DAT_00478228;
    iVar15 = iVar18;
  } while (iVar18 < 0x32);
  uVar19 = 0;
  do {
    if ((*(ushort *)(param_2 + uVar19 * 2 + 0x151c) & 2) != 0) {
      (param_2 + uVar19 * 2 + 0x151c)[0] = 0;
      (param_2 + uVar19 * 2 + 0x151c)[1] = 0;
      pbVar14 = param_2 + uVar19 * 0x6c + 4;
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      pbVar14 = param_2 + uVar19 * 0x6c + 8;
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x20) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x1c) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x18) = fVar9;
      (param_2 + uVar19 * 0x6c + 0x28)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x28)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x26)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x26)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x24)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x24)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x34) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x30) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x2c) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x40) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x3c) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x38) = fVar9;
      (param_2 + uVar19 * 0x6c + 0x48)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x48)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x46)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x46)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x44)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x44)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x54) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x50) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x4c) = fVar8;
      (param_2 + uVar19 * 0x6c + 0xc)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0xc)[1] = 0;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0xe) = uVar5;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0x10) = uVar5;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0x12) = uVar5;
      (param_2 + uVar19 * 0x6c + 0x14)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x14)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x60) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x5c) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x58) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 100) = fVar8;
      *param_2 = *param_2 | 1;
    }
    if ((*(int *)(param_2 + uVar19 * 0x6c + 4) != 0) &&
       (*(int *)(*(int *)(param_2 + uVar19 * 0x6c + 4) + 0x13c) == 0)) {
      if ((uVar19 < 0x32) &&
         ((uVar1 = *(ushort *)(param_1 + 0xa98 + uVar19 * 2 + 0x156c), (uVar1 & 1) != 0 &&
          ((uVar1 & 2) == 0)))) {
        iVar15 = *(int *)(param_1 + 0xa98 + uVar19 * 0x6c + 0x54);
      }
      else {
        iVar15 = 0;
      }
      if (iVar15 == 0) {
        return;
      }
      *(undefined4 *)(iVar15 + 0x1a4) = 0xffffffff;
      (param_2 + uVar19 * 2 + 0x151c)[0] = 0;
      (param_2 + uVar19 * 2 + 0x151c)[1] = 0;
      pbVar14 = param_2 + uVar19 * 0x6c + 4;
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      pbVar14 = param_2 + uVar19 * 0x6c + 8;
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x20) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x1c) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x18) = fVar9;
      (param_2 + uVar19 * 0x6c + 0x28)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x28)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x26)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x26)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x24)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x24)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x34) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x30) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x2c) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x40) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x3c) = fVar9;
      *(float *)(param_2 + uVar19 * 0x6c + 0x38) = fVar9;
      (param_2 + uVar19 * 0x6c + 0x48)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x48)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x46)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x46)[1] = 0;
      (param_2 + uVar19 * 0x6c + 0x44)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x44)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x54) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x50) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x4c) = fVar8;
      (param_2 + uVar19 * 0x6c + 0xc)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0xc)[1] = 0;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0xe) = uVar5;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0x10) = uVar5;
      *(undefined2 *)(param_2 + uVar19 * 0x6c + 0x12) = uVar5;
      (param_2 + uVar19 * 0x6c + 0x14)[0] = 0;
      (param_2 + uVar19 * 0x6c + 0x14)[1] = 0;
      *(float *)(param_2 + uVar19 * 0x6c + 0x60) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x5c) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 0x58) = fVar8;
      *(float *)(param_2 + uVar19 * 0x6c + 100) = fVar8;
      *param_2 = *param_2 | 1;
    }
    fVar12 = DAT_00478238;
    fVar11 = DAT_00478234;
    fVar10 = DAT_00478230;
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 0x32);
  iVar15 = 0;
  iVar18 = 0;
  local_4c = 0;
  do {
    pbVar14 = local_48;
    iVar13 = local_4c;
    if ((*(ushort *)(param_2 + local_4c * 2 + 0x151c) & 1) != 0) {
      local_8c = (float *)(param_2 + local_4c * 0x6c + 0x58);
      iVar16 = *(int *)(param_2 + local_4c * 0x6c + 4);
      iVar25 = *(int *)(param_2 + local_4c * 0x6c + 8);
      *(short *)(param_2 + local_4c * 0x6c + 0xc) = (short)iVar18;
      sVar6 = (short)iVar15;
      *(short *)(param_2 + local_4c * 0x6c + 0x14) = sVar6;
      local_88 = *(undefined4 *)(iVar16 + 0x28);
      uStack_80 = *(undefined4 *)(iVar16 + 0x30);
      local_84 = *(float *)(iVar16 + 0x2c) + *(float *)(iVar16 + 0xc4) * *(float *)(iVar16 + 0x58);
      uVar24 = *(undefined4 *)(iVar16 + 0x58);
      uVar27 = *(undefined4 *)(iVar16 + 0x5c);
      *(undefined4 *)(param_2 + local_4c * 0x6c + 0x38) = *(undefined4 *)(iVar16 + 0x54);
      *(undefined4 *)(param_2 + local_4c * 0x6c + 0x3c) = uVar24;
      *(undefined4 *)(param_2 + local_4c * 0x6c + 0x40) = uVar27;
      FUN_0035fb94(param_2 + local_4c * 0x6c + 0x44,iVar16 + 0xbc);
      *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x4c) = local_88;
      *(float *)(param_2 + iVar13 * 0x6c + 0x50) = local_84;
      *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x54) = uStack_80;
      uVar19 = DAT_00478224;
      if ((*(ushort *)(param_2 + iVar13 * 2 + 0x151c) & 4) == 0) {
        if ((*param_2 & 1) == 0) {
          uVar23 = in_fpscr & 0xfffffff;
          in_fpscr = uVar23 | (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x18) ==
                                    *(float *)(param_2 + iVar13 * 0x6c + 0x38)) << 0x1e;
          bVar29 = false;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            in_fpscr = uVar23 | (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x1c) ==
                                      *(float *)(param_2 + iVar13 * 0x6c + 0x3c)) << 0x1e;
            bVar29 = SUB41(in_fpscr >> 0x1e,0);
          }
          bVar30 = false;
          if (bVar29) {
            in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x20) ==
                             *(float *)(param_2 + iVar13 * 0x6c + 0x40)) << 0x1e;
            bVar30 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (!bVar30) goto LAB_00478314;
          sVar2 = *(short *)(param_2 + iVar13 * 0x6c + 0x24);
          sVar3 = *(short *)(param_2 + iVar13 * 0x6c + 0x44);
          bVar29 = sVar2 == sVar3;
          if (bVar29) {
            sVar2 = *(short *)(param_2 + iVar13 * 0x6c + 0x26);
            sVar3 = *(short *)(param_2 + iVar13 * 0x6c + 0x46);
          }
          bVar30 = bVar29 && sVar2 == sVar3;
          if (bVar29 && sVar2 == sVar3) {
            bVar30 = *(short *)(param_2 + iVar13 * 0x6c + 0x28) ==
                     *(short *)(param_2 + iVar13 * 0x6c + 0x48);
          }
          if (!bVar30) goto LAB_00478314;
          uVar23 = in_fpscr & 0xfffffff;
          in_fpscr = uVar23 | (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x2c) ==
                                    *(float *)(param_2 + iVar13 * 0x6c + 0x4c)) << 0x1e;
          bVar29 = false;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            in_fpscr = uVar23 | (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x30) ==
                                      *(float *)(param_2 + iVar13 * 0x6c + 0x50)) << 0x1e;
            bVar29 = SUB41(in_fpscr >> 0x1e,0);
          }
          bVar30 = false;
          if (bVar29) {
            in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(param_2 + iVar13 * 0x6c + 0x34) ==
                             *(float *)(param_2 + iVar13 * 0x6c + 0x54)) << 0x1e;
            bVar30 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (!bVar30) goto LAB_00478314;
          iVar16 = iVar18;
          if (iVar18 < (int)((uint)*(ushort *)(iVar25 + 0xe) + iVar18)) {
            do {
              iVar20 = (int)*(short *)(*(int *)(param_2 + 0x1580) + iVar16 * 0x20 + 0xc);
              if (iVar20 < 0x4000) {
                if (DAT_004787bc <= iVar20) {
                  uVar23 = *(uint *)(pbVar14 + 4);
                  pbVar21 = param_2 + iVar13 * 0x6c + 0x10;
                  *(uint *)(pbVar14 + 4) = uVar23 + 1;
                  uVar23 = uVar23 & 0xffff;
                  if (*(int *)(pbVar14 + 8) <= (int)uVar23) goto LAB_0047821c;
                  goto LAB_004782a0;
                }
                if ((*(ushort *)(param_2 + iVar13 * 2 + 0x151c) & 8) == 0) {
                  uVar23 = *(uint *)(pbVar14 + 4);
                  pbVar21 = param_2 + iVar13 * 0x6c + 0xe;
                  *(uint *)(pbVar14 + 4) = uVar23 + 1;
                  uVar23 = uVar23 & 0xffff;
                  if (*(int *)(pbVar14 + 8) <= (int)uVar23) goto LAB_0047821c;
                  goto LAB_004782a0;
                }
              }
              else {
                uVar23 = *(uint *)(pbVar14 + 4);
                pbVar21 = param_2 + iVar13 * 0x6c + 0x12;
                *(uint *)(pbVar14 + 4) = uVar23 + 1;
                uVar23 = uVar23 & 0xffff;
                if (*(int *)(pbVar14 + 8) <= (int)uVar23) {
LAB_0047821c:
                  uVar23 = uVar19;
                }
LAB_004782a0:
                uVar5 = *(undefined2 *)pbVar21;
                puVar28 = (undefined2 *)(*(int *)pbVar14 + uVar23 * 4);
                *puVar28 = (short)iVar16;
                puVar28[1] = uVar5;
                *(short *)pbVar21 = (short)uVar23;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < (int)((uint)*(ushort *)(iVar25 + 0xe) + iVar18));
          }
        }
        else {
LAB_00478314:
          FUN_00358188(*(undefined4 *)(param_2 + iVar13 * 0x6c + 0x38),
                       *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x3c),
                       *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x40),
                       *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x4c),
                       *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x50),
                       *(undefined4 *)(param_2 + iVar13 * 0x6c + 0x54),auStack_7c,
                       (int)*(short *)(param_2 + iVar13 * 0x6c + 0x44),
                       (int)*(short *)(param_2 + iVar13 * 0x6c + 0x46),
                       (int)*(short *)(param_2 + iVar13 * 0x6c + 0x48));
          iVar16 = 0;
          fVar31 = (float)VectorUnsignedToFloat
                                    ((uint)*(ushort *)(iVar25 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
          fVar31 = fVar9 / fVar31;
          local_98 = fVar8;
          local_94 = fVar8;
          local_90 = fVar8;
          if (*(short *)(iVar25 + 0xc) != 0) {
            do {
              FUN_0036ac0c(auStack_d4,*(int *)(iVar25 + 0x18) + iVar16 * 6);
              FUN_00373598(auStack_7c,auStack_d4,&local_e0);
              pfVar17 = (float *)(*(int *)(param_2 + 0x1584) + (iVar15 + iVar16) * 0xc);
              *pfVar17 = local_e0;
              pfVar17[1] = local_dc;
              pfVar17[2] = local_d8;
              if (iVar16 == 0) {
                *(float *)(param_2 + iVar13 * 0x6c + 0x6c) = local_dc;
                *(float *)(param_2 + iVar13 * 0x6c + 0x68) = local_dc;
              }
              else {
                fVar32 = *(float *)(param_2 + iVar13 * 0x6c + 0x68);
                uVar19 = in_fpscr & 0xfffffff;
                uVar23 = uVar19 | (uint)(fVar32 < local_dc) << 0x1f |
                         (uint)(fVar32 == local_dc) << 0x1e;
                in_fpscr = uVar23 | (uint)(NAN(fVar32) || NAN(local_dc)) << 0x1c;
                bVar7 = (byte)(uVar23 >> 0x18);
                if ((bool)(bVar7 >> 6 & 1) || bVar7 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                  fVar33 = *(float *)(param_2 + iVar13 * 0x6c + 0x6c);
                  uVar19 = uVar19 | (uint)(fVar33 < local_dc) << 0x1f |
                           (uint)(fVar33 == local_dc) << 0x1e;
                  in_fpscr = uVar19 | (uint)(NAN(fVar33) || NAN(local_dc)) << 0x1c;
                  bVar7 = (byte)(uVar19 >> 0x18);
                  fVar32 = local_dc;
                  if (!(bool)(bVar7 >> 6 & 1) && bVar7 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    fVar32 = fVar33;
                  }
                  *(float *)(param_2 + iVar13 * 0x6c + 0x6c) = fVar32;
                }
                else {
                  *(float *)(param_2 + iVar13 * 0x6c + 0x68) = local_dc;
                }
              }
              iVar16 = iVar16 + 1;
              local_98 = local_98 + local_e0;
              local_94 = local_94 + local_dc;
              local_90 = local_90 + local_d8;
            } while (iVar16 < (int)(uint)*(ushort *)(iVar25 + 0xc));
          }
          iVar16 = 0;
          local_98 = local_98 * fVar31;
          local_94 = local_94 * fVar31;
          local_90 = local_90 * fVar31;
          *local_8c = local_98;
          local_8c[1] = local_94;
          local_8c[2] = local_90;
          fVar31 = fVar10;
          if (*(short *)(iVar25 + 0xc) != 0) {
            do {
              iVar20 = iVar15 + iVar16;
              iVar16 = iVar16 + 1;
              pfVar17 = (float *)(*(int *)(param_2 + 0x1584) + iVar20 * 0xc);
              local_a4 = *pfVar17;
              local_a0 = pfVar17[1];
              local_9c = pfVar17[2];
              fVar32 = (local_a4 - local_98) * (local_a4 - local_98) +
                       (local_a0 - local_94) * (local_a0 - local_94) +
                       (local_9c - local_90) * (local_9c - local_90);
              in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar32 <= fVar31) << 0x1d;
              if (!SUB41(in_fpscr >> 0x1d,0)) {
                fVar31 = fVar32;
              }
            } while (iVar16 < (int)(uint)*(ushort *)(iVar25 + 0xc));
          }
          iVar16 = 0;
          local_8c[3] = SQRT(fVar31) * fVar11;
          if (*(short *)(iVar25 + 0xe) != 0) {
            do {
              puVar22 = (undefined2 *)(*(int *)(iVar25 + 0x1c) + iVar16 * 0x14);
              iVar26 = iVar18 + iVar16;
              puVar28 = (undefined2 *)(*(int *)(param_2 + 0x1580) + iVar26 * 0x20);
              *puVar28 = *puVar22;
              puVar28[1] = puVar22[1];
              puVar28[2] = puVar22[2];
              puVar28[3] = puVar22[3];
              sVar2 = puVar22[5];
              puVar28[5] = sVar2;
              sVar3 = puVar22[6];
              puVar28[6] = sVar3;
              sVar4 = puVar22[7];
              uVar24 = VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
              uVar27 = VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
              puVar28[7] = sVar4;
              *(undefined4 *)(puVar28 + 8) = *(undefined4 *)(puVar22 + 8);
              uVar34 = VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(puVar28 + 10) = uVar24;
              *(undefined4 *)(puVar28 + 0xc) = uVar27;
              *(undefined4 *)(puVar28 + 0xe) = uVar34;
              uVar19 = ((ushort)puVar28[1] & 0xffff1fff) + iVar15;
              puVar28[1] = (ushort)uVar19 | puVar28[1] & 0xe000;
              puVar28[2] = (puVar28[2] & 0x1fff) + sVar6 | puVar28[2] & 0xe000;
              puVar28[3] = puVar28[3] + sVar6;
              iVar20 = *(int *)(param_2 + 0x1584);
              pfVar17 = (float *)(iVar20 + (uVar19 & 0x1fff) * 0xc);
              local_b0 = *pfVar17;
              local_ac = pfVar17[1];
              local_a8 = pfVar17[2];
              pfVar17 = (float *)(iVar20 + ((ushort)puVar28[2] & 0xffff1fff) * 0xc);
              local_bc = *pfVar17;
              local_b8 = pfVar17[1];
              local_b4 = pfVar17[2];
              pfVar17 = (float *)(iVar20 + (uint)(ushort)puVar28[3] * 0xc);
              local_c8 = *pfVar17;
              local_c4 = pfVar17[1];
              local_c0 = pfVar17[2];
              fVar33 = (local_b8 - local_ac) * (local_c0 - local_a8) -
                       (local_b4 - local_a8) * (local_c4 - local_ac);
              fVar31 = (local_b4 - local_a8) * (local_c8 - local_b0) -
                       (local_bc - local_b0) * (local_c0 - local_a8);
              fVar32 = (local_bc - local_b0) * (local_c4 - local_ac) -
                       (local_b8 - local_ac) * (local_c8 - local_b0);
              fVar35 = SQRT(fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32);
              if (DAT_004787c0 <= (int)ABS(fVar35)) {
                fVar35 = fVar9 / fVar35;
                fVar33 = fVar33 * fVar35;
                fVar31 = fVar31 * fVar35;
                fVar32 = fVar32 * fVar35;
                puVar28[5] = (short)(int)(fVar33 * fVar12);
                puVar28[6] = (short)(int)(fVar31 * fVar12);
                puVar28[7] = (short)(int)(fVar32 * fVar12);
                *(float *)(puVar28 + 10) = fVar33;
                *(float *)(puVar28 + 0xc) = fVar31;
                *(float *)(puVar28 + 0xe) = fVar32;
              }
              pfVar17 = (float *)(iVar20 + ((ushort)puVar28[1] & 0xffff1fff) * 0xc);
              *(float *)(puVar28 + 8) =
                   -(fVar33 * *pfVar17 + fVar31 * pfVar17[1] + fVar32 * pfVar17[2]);
              if ((int)fVar31 < 0x3f000001) {
                if ((uint)DAT_004787c4 < (uint)fVar31) {
                  uVar19 = *(uint *)(pbVar14 + 4);
                  pbVar21 = param_2 + iVar13 * 0x6c + 0xe;
                  *(uint *)(pbVar14 + 4) = uVar19 + 1;
                  uVar19 = uVar19 & 0xffff;
                  if (*(int *)(pbVar14 + 8) <= (int)uVar19) {
LAB_00478730:
                    uVar19 = DAT_00478224;
                  }
                }
                else {
                  uVar19 = *(uint *)(pbVar14 + 4);
                  pbVar21 = param_2 + iVar13 * 0x6c + 0x10;
                  *(uint *)(pbVar14 + 4) = uVar19 + 1;
                  uVar19 = uVar19 & 0xffff;
                  if (*(int *)(pbVar14 + 8) <= (int)uVar19) goto LAB_00478730;
                }
              }
              else {
                uVar19 = *(uint *)(pbVar14 + 4);
                pbVar21 = param_2 + iVar13 * 0x6c + 0x12;
                *(uint *)(pbVar14 + 4) = uVar19 + 1;
                uVar19 = uVar19 & 0xffff;
                if (*(int *)(pbVar14 + 8) <= (int)uVar19) goto LAB_00478730;
              }
              uVar5 = *(undefined2 *)pbVar21;
              iVar16 = iVar16 + 1;
              puVar28 = (undefined2 *)(*(int *)pbVar14 + uVar19 * 4);
              *puVar28 = (short)iVar26;
              puVar28[1] = uVar5;
              *(short *)pbVar21 = (short)uVar19;
            } while (iVar16 < (int)(uint)*(ushort *)(iVar25 + 0xe));
          }
        }
        iVar18 = iVar18 + (uint)*(ushort *)(iVar25 + 0xe);
        iVar15 = iVar15 + (uint)*(ushort *)(iVar25 + 0xc);
      }
    }
    local_4c = local_4c + 1;
    if (0x31 < local_4c) {
      *param_2 = *param_2 & 0xfe;
      return;
    }
  } while( true );
}
