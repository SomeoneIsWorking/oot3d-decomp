// OoT3D decomp @ 0011598c  name=FUN_0011598c  size=3424

void FUN_0011598c(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  float *pfVar18;
  byte bVar19;
  undefined4 *puVar20;
  int iVar21;
  char *pcVar22;
  short sVar23;
  char *pcVar24;
  int iVar25;
  ushort uVar26;
  uint in_fpscr;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 auStack_ac [3];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;

  iVar2 = DAT_00115e18;
  iVar25 = 1;
  local_64 = param_1 + 0x5000;
  pcVar22 = *(char **)(param_1 + 0x5c28);
  local_78 = *(int *)(param_1 + 0x20ac);
  pcVar24 = (char *)(*(int *)(DAT_00115e18 + 0x20) + 4);
  do {
    cVar1 = *pcVar24;
    if (cVar1 == '\x02') {
      *pcVar24 = '\x03';
    }
    else if (cVar1 == '\x03') {
      *pcVar24 = '\x04';
    }
    else if (cVar1 == '\x04') {
      FUN_003685a0(pcVar24 + 0x40);
      if (*(int **)(pcVar24 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pcVar24 + 4) + 4))();
      }
      *pcVar24 = '\0';
      pcVar24[1] = -1;
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24[8] = '\0';
      pcVar24[9] = '\0';
      pcVar24[10] = '\0';
      pcVar24[0xb] = '\0';
      pcVar24[2] = '\0';
      pcVar24[0xc] = '\0';
      pcVar24[0xd] = '\0';
      pcVar24[0xe] = '\0';
    }
    iVar14 = local_78;
    fVar12 = DAT_00115e40;
    fVar11 = DAT_00115e3c;
    fVar10 = DAT_00115e38;
    uVar9 = DAT_00115e34;
    uVar8 = DAT_00115e30;
    fVar7 = DAT_00115e2c;
    uVar6 = DAT_00115e28;
    fVar5 = DAT_00115e24;
    uVar4 = DAT_00115e20;
    fVar3 = DAT_00115e1c;
    iVar25 = iVar25 + 1;
    pcVar24 = pcVar24 + 0xd8;
  } while (iVar25 < 0xa0);
  uVar26 = 0;
  local_7c = 0;
  local_68 = param_1 + 0x3000;
  do {
    cVar1 = *pcVar22;
    if (cVar1 != '\0') {
      bVar19 = pcVar22[1] + 1;
      pcVar22[1] = bVar19;
      *(float *)(pcVar22 + 4) = *(float *)(pcVar22 + 4) + *(float *)(pcVar22 + 0x10);
      *(float *)(pcVar22 + 8) = *(float *)(pcVar22 + 8) + *(float *)(pcVar22 + 0x14);
      *(float *)(pcVar22 + 0xc) = *(float *)(pcVar22 + 0xc) + *(float *)(pcVar22 + 0x18);
      *(float *)(pcVar22 + 0x10) = *(float *)(pcVar22 + 0x10) + *(float *)(pcVar22 + 0x1c);
      *(float *)(pcVar22 + 0x14) = *(float *)(pcVar22 + 0x14) + *(float *)(pcVar22 + 0x20);
      *(float *)(pcVar22 + 0x18) = *(float *)(pcVar22 + 0x18) + *(float *)(pcVar22 + 0x24);
      fVar27 = DAT_0011662c;
      fVar28 = DAT_001162b4;
      if (cVar1 == '\x01') {
        uVar15 = bVar19 & 3;
        if (*(short *)(pcVar22 + 0x2c) == 0) {
          uVar15 = uVar15 + 4;
        }
        iVar25 = uVar15 * 3 + DAT_00115e44;
        pcVar22[0x28] = *(char *)(DAT_00115e44 + uVar15 * 3);
        pcVar22[0x29] = *(char *)(iVar25 + 1);
        pcVar22[0x2a] = *(char *)(iVar25 + 2);
        sVar23 = *(short *)(pcVar22 + 2);
        *(short *)(pcVar22 + 2) = sVar23 + -0x14;
        if ((short)(sVar23 + -0x14) < 1) {
          pcVar22[2] = '\0';
          pcVar22[3] = '\0';
          *pcVar22 = '\0';
          puVar16 = *(undefined1 **)(pcVar22 + 0x44);
          if (puVar16 != (undefined1 *)0x0) {
            cVar1 = puVar16[2];
            goto joined_r0x00115eb8;
          }
          goto LAB_00115f4c;
        }
      }
      else if (cVar1 == '\x03' || cVar1 == '\x02') {
        if (*(short *)(pcVar22 + 0x2c) == 2) {
          sVar23 = *(short *)(pcVar22 + 2);
          *(short *)(pcVar22 + 2) = sVar23 + -0x14;
          if ((short)(sVar23 + -0x14) < 1) {
            pcVar22[2] = '\0';
            pcVar22[3] = '\0';
            *pcVar22 = '\0';
            puVar16 = *(undefined1 **)(pcVar22 + 0x44);
            if (puVar16 != (undefined1 *)0x0) {
              cVar1 = puVar16[2];
              goto joined_r0x00115eb8;
            }
            goto LAB_00115f4c;
          }
        }
        else if (*(short *)(pcVar22 + 0x2c) == 0) {
          sVar23 = *(short *)(pcVar22 + 2) + 10;
          *(short *)(pcVar22 + 2) = sVar23;
          if (99 < sVar23) {
            pcVar22[0x2c] = '\x01';
            pcVar22[0x2d] = '\0';
          }
        }
        else {
          sVar23 = *(short *)(pcVar22 + 2) + -3;
          *(short *)(pcVar22 + 2) = sVar23;
          if (sVar23 < 1) {
            pcVar22[2] = '\0';
            pcVar22[3] = '\0';
            *pcVar22 = '\0';
            puVar16 = *(undefined1 **)(pcVar22 + 0x44);
            if (puVar16 != (undefined1 *)0x0) {
              cVar1 = puVar16[2];
              goto joined_r0x00115eb8;
            }
            goto LAB_00115f4c;
          }
        }
      }
      else if (cVar1 == '\x06') {
        if (*(short *)(pcVar22 + 0x2e) == 0) {
          sVar23 = *(short *)(pcVar22 + 2) + 300;
          *(short *)(pcVar22 + 2) = sVar23;
joined_r0x00115f64:
          if (0xfe < sVar23) {
            pcVar22[2] = -1;
            pcVar22[3] = '\0';
            pcVar22[0x2e] = '\x01';
            pcVar22[0x2f] = '\0';
          }
        }
        else {
          sVar23 = (*(short *)(pcVar22 + 2) - (uVar26 & 7)) + -0xd;
          *(short *)(pcVar22 + 2) = sVar23;
          if (sVar23 < 1) {
            pcVar22[2] = '\0';
            pcVar22[3] = '\0';
            *pcVar22 = '\0';
            puVar16 = *(undefined1 **)(pcVar22 + 0x44);
            if (puVar16 != (undefined1 *)0x0) {
              cVar1 = puVar16[2];
              goto joined_r0x00115eb8;
            }
            goto LAB_00115f4c;
          }
        }
      }
      else if (cVar1 == '\b') {
        *(undefined1 *)(iVar2 + 0xc) = 1;
        sVar23 = *(short *)(pcVar22 + 0x2e);
        *(short *)(pcVar22 + 0x2e) = sVar23 + 1;
        if ((0x1e < (short)(sVar23 + 1)) &&
           (sVar23 = *(short *)(pcVar22 + 2), *(short *)(pcVar22 + 2) = sVar23 + -10,
           (short)(sVar23 + -10) < 1)) {
          pcVar22[2] = '\0';
          pcVar22[3] = '\0';
          *pcVar22 = '\0';
          puVar16 = *(undefined1 **)(pcVar22 + 0x44);
          if ((puVar16 != (undefined1 *)0x0) && (puVar16[2] == '\0')) {
            *puVar16 = 2;
          }
          pcVar22[0x44] = '\0';
          pcVar22[0x45] = '\0';
          pcVar22[0x46] = '\0';
          pcVar22[0x47] = '\0';
        }
        FUN_00373500(*(undefined4 *)(pcVar22 + 0x34),fVar10,DAT_00115e48,pcVar22 + 0x30);
        uVar13 = DAT_00115e60;
        fVar28 = DAT_00115e5c;
        uVar31 = DAT_00115e58;
        uVar29 = DAT_00115e54;
        iVar25 = *(int *)(iVar2 + 0x94);
        fVar32 = *(float *)(iVar25 + 0x28) - *(float *)(pcVar22 + 4);
        fVar30 = *(float *)(iVar25 + 0x30) - *(float *)(pcVar22 + 0xc);
        fVar27 = (*(float *)(iVar25 + 0x2c) - *(float *)(pcVar22 + 8)) * fVar11;
        if ((*(int *)(iVar25 + 0x1a4) != DAT_00115e4c) &&
           ((int)(fVar32 * fVar32 + fVar27 * fVar27 + fVar30 * fVar30) < DAT_00115e50)) {
          sVar23 = 0;
          do {
            local_88 = (float)FUN_003738a8(uVar29);
            local_88 = local_88 + *(float *)(*(int *)(iVar2 + 0x94) + 0x28);
            local_84 = (float)FUN_003738a8(uVar31);
            local_84 = local_84 + *(float *)(*(int *)(iVar2 + 0x94) + 0x2c);
            local_80 = (float)FUN_003738a8(uVar29);
            local_80 = local_80 + *(float *)(*(int *)(iVar2 + 0x94) + 0x30);
            local_94 = (float)FUN_003738a8(uVar13);
            local_90 = (float)FUN_003738a8(uVar13);
            local_8c = (float)FUN_003738a8(uVar13);
            local_a0 = fVar12;
            local_9c = fVar12;
            local_98 = fVar12;
            fVar27 = (float)FUN_00371e50(fVar7);
            local_b8 = (float *)(int)*(short *)(pcVar22 + 0x2c);
            FUN_00368498(fVar27 + fVar28,param_1,&local_88,&local_94,&local_a0);
            sVar23 = sVar23 + 1;
          } while (sVar23 < 6);
          *(undefined1 *)(*(int *)(iVar2 + 0x94) + 0x54c) = 1;
          *(float *)(local_68 + 600) = fVar5;
          *pcVar22 = '\0';
          puVar16 = *(undefined1 **)(pcVar22 + 0x44);
          if (puVar16 != (undefined1 *)0x0) {
            cVar1 = puVar16[2];
            goto joined_r0x00115eb8;
          }
          goto LAB_00115f4c;
        }
      }
      else if (cVar1 == '\a') {
        local_74 = fVar12;
        local_70 = *(float *)(pcVar22 + 8);
        local_6c = *(float *)(pcVar22 + 0x34);
        FUN_003735e8(*(float *)(*(int *)(iVar2 + 0x94) + 0x200) + *(float *)(pcVar22 + 0x38),
                     auStack_ac,0);
        FUN_003735ac(pcVar22 + 4,auStack_ac,&local_74);
        if (*(short *)(pcVar22 + 0x2e) == 0) {
          sVar23 = *(short *)(pcVar22 + 2) + 0x3c;
          *(short *)(pcVar22 + 2) = sVar23;
          goto joined_r0x00115f64;
        }
        sVar23 = *(short *)(pcVar22 + 2) + -0x3c;
        *(short *)(pcVar22 + 2) = sVar23;
        if (sVar23 < 1) {
          pcVar22[2] = '\0';
          pcVar22[3] = '\0';
          *pcVar22 = '\0';
          puVar16 = *(undefined1 **)(pcVar22 + 0x44);
          if (puVar16 != (undefined1 *)0x0) {
            cVar1 = puVar16[2];
            goto joined_r0x00115eb8;
          }
          goto LAB_00115f4c;
        }
      }
      else {
        if (cVar1 == '\t') {
          *(short *)(pcVar22 + 0x2e) = *(short *)(pcVar22 + 0x2e) + 1;
          local_74 = fVar12;
          local_70 = fVar12;
          local_6c = -*(float *)(pcVar22 + 0x34);
          fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x12),
                                              (byte)(in_fpscr >> 0x15) & 3);
          FUN_003735e8(fVar27 * fVar3 * fVar28,auStack_ac,0);
          FUN_00369014(DAT_001162b8,auStack_ac,1);
          FUN_00371234(*(undefined4 *)(pcVar22 + 0x38),auStack_ac,1);
          FUN_003735e8(*(undefined4 *)(pcVar22 + 0x3c),auStack_ac,1);
          FUN_003735ac(pcVar22 + 4,auStack_ac,&local_74);
          pfVar18 = DAT_001162bc;
          *(float *)(pcVar22 + 4) = *(float *)(pcVar22 + 4) + *DAT_001162bc;
          *(float *)(pcVar22 + 8) = *(float *)(pcVar22 + 8) + pfVar18[1];
          *(float *)(pcVar22 + 0xc) = *(float *)(pcVar22 + 0xc) + pfVar18[2];
          if (*(short *)(pcVar22 + 0x2e) < 10) {
            FUN_00373500(DAT_001162c4,fVar11,DAT_001162c0,pcVar22 + 0x34);
          }
          else {
            FUN_00373500(fVar12,fVar11,fVar7,pcVar22 + 0x3c);
            FUN_00373500(DAT_001162c8,fVar5,fVar7,pcVar22 + 0x34);
            iVar25 = (int)*(short *)(pcVar22 + 0x2e);
            if (0xf < iVar25) {
              iVar21 = iVar25;
              if (iVar25 == 0x10) {
                iVar21 = local_7c;
              }
              if (iVar25 == 0x10 && iVar21 == 0) {
                local_7c = 1;
                local_b8 = *(float **)(pcVar22 + 4);
                local_b0 = *(undefined4 *)(pcVar22 + 0xc);
                local_b4 = DAT_001162d0;
                if (DAT_001162cc < *(int *)(pcVar22 + 8)) {
                  local_b4 = DAT_001162d4;
                }
                fVar28 = (float)FUN_00368280(&local_b8);
                uVar15 = in_fpscr & 0xfffffff | (uint)(fVar28 < fVar12) << 0x1f;
                in_fpscr = uVar15 | (uint)(NAN(fVar28) || NAN(fVar12)) << 0x1c;
                iVar25 = *(int *)(iVar2 + 0x94);
                *(float *)(iVar25 + 0x55c) = fVar28;
                if (((byte)(uVar15 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) && (fVar28 != 35.0))
                {
                  *(undefined4 *)(iVar25 + 0x558) = *(undefined4 *)(pcVar22 + 4);
                  *(undefined4 *)(iVar25 + 0x560) = *(undefined4 *)(pcVar22 + 0xc);
                  FUN_00368008(iVar25,param_1,(int)*(short *)(pcVar22 + 0x2c));
                }
              }
              sVar23 = *(short *)(pcVar22 + 2);
              *(short *)(pcVar22 + 2) = sVar23 + -300;
              if ((short)(sVar23 + -300) < 1) {
                pcVar22[2] = '\0';
                pcVar22[3] = '\0';
                *pcVar22 = '\0';
                puVar16 = *(undefined1 **)(pcVar22 + 0x44);
                if (puVar16 != (undefined1 *)0x0) {
                  cVar1 = puVar16[2];
joined_r0x001162a8:
                  if (cVar1 == '\0') {
                    *puVar16 = 2;
                  }
                }
LAB_00116160:
                pcVar22[0x44] = '\0';
                pcVar22[0x45] = '\0';
                pcVar22[0x46] = '\0';
                pcVar22[0x47] = '\0';
              }
            }
          }
        }
        else {
          if (cVar1 != '\n') {
            if (cVar1 == '\x04') {
              if (*(short *)(pcVar22 + 0x2e) == 0) {
                FUN_00373500(*(undefined4 *)(pcVar22 + 0x34),DAT_00116610,fVar5,pcVar22 + 0x30);
                if ((0xf < (byte)pcVar22[1]) &&
                   (sVar23 = *(short *)(pcVar22 + 2), *(short *)(pcVar22 + 2) = sVar23 + -10,
                   (short)(sVar23 + -10) < 1)) {
                  pcVar22[2] = '\0';
                  pcVar22[3] = '\0';
                  *pcVar22 = '\0';
                  puVar16 = *(undefined1 **)(pcVar22 + 0x44);
                  if (puVar16 != (undefined1 *)0x0) {
                    cVar1 = puVar16[2];
joined_r0x00115eb8:
                    if (cVar1 == '\0') {
                      *puVar16 = 2;
                    }
                  }
LAB_00115f4c:
                  pcVar22[0x44] = '\0';
                  pcVar22[0x45] = '\0';
                  pcVar22[0x46] = '\0';
                  pcVar22[0x47] = '\0';
                }
              }
              else {
                FUN_00373500(*(undefined4 *)(pcVar22 + 0x34),fVar10,DAT_00116614,pcVar22 + 0x30);
                sVar23 = *(short *)(pcVar22 + 2);
                *(short *)(pcVar22 + 2) = sVar23 + -0xf;
                if ((short)(sVar23 + -0xf) < 1) {
                  pcVar22[2] = '\0';
                  pcVar22[3] = '\0';
                  *pcVar22 = '\0';
                  puVar16 = *(undefined1 **)(pcVar22 + 0x44);
                  if (puVar16 != (undefined1 *)0x0) {
                    cVar1 = puVar16[2];
                    goto joined_r0x00115eb8;
                  }
                  goto LAB_00115f4c;
                }
              }
            }
            else if (cVar1 == '\x05') {
              if ((int)*(short *)(pcVar22 + 0x2c) < (int)(uint)bVar19) {
                if ((*(int *)(pcVar22 + 0x40) != 0) ||
                   (fVar28 = fVar5, *(char *)(iVar2 + 3) == '\x01')) {
                  fVar28 = DAT_00116618;
                }
                FUN_00373500(fVar12,fVar5,fVar28 * DAT_0011661c,pcVar22 + 0x30);
                puVar20 = DAT_00116624;
                iVar25 = DAT_00116620;
                cVar1 = *(char *)(DAT_00116620 + 0x69);
                if (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 == '\x02')) {
                  puVar17 = (undefined4 *)(DAT_00116620 + 0x34);
                  iVar21 = 6;
                  *(undefined4 *)(DAT_00116620 + 0x34) = *DAT_00116624;
                  uVar29 = puVar20[1];
                  do {
                    uVar31 = puVar20[2];
                    puVar17[1] = uVar29;
                    uVar29 = puVar20[3];
                    iVar21 = iVar21 + -1;
                    puVar17[2] = uVar31;
                    puVar17 = puVar17 + 2;
                    puVar20 = puVar20 + 2;
                  } while (iVar21 != 0);
                  *(float *)(iVar25 + 0x6c) = fVar5;
                  *(undefined1 *)(iVar25 + 0x74) = 1;
                  *(undefined1 *)(iVar25 + 0x69) = 3;
                }
                if (cVar1 == '\0') {
                  *pcVar22 = '\0';
                  *(uint *)(iVar14 + 0x29b8) = *(uint *)(iVar14 + 0x29b8) & 0xf7ffffff;
                  if (*(int *)(pcVar22 + 0x40) == 0) {
                    *(uint *)(iVar14 + 0x1714) = *(uint *)(iVar14 + 0x1714) & 0xffff7fff;
                    *(undefined1 *)(iVar2 + 9) = 0;
                  }
                }
              }
              else {
                if (*(char *)(iVar2 + 3) == '\x01') {
                  pcVar22[1] = 'd';
                }
                FUN_00373500(fVar27,uVar4,DAT_00116628,pcVar22 + 0x34);
                if (*(int *)(pcVar22 + 0x40) == 0) {
                  FUN_00373500(DAT_00116630,fVar5,uVar6,pcVar22 + 0x30);
                  iVar21 = DAT_00116634;
                  fVar28 = *(float *)(pcVar22 + 0x38) + *(float *)(pcVar22 + 0x34);
                  *(float *)(pcVar22 + 0x38) = fVar28;
                  iVar25 = DAT_00116620;
                  if ((int)fVar28 < iVar21) {
                    *(uint *)(iVar14 + 0x1714) = *(uint *)(iVar14 + 0x1714) & 0xffff7fff;
                  }
                  else {
                    *(float *)(pcVar22 + 0x38) = fVar28 - fVar27;
                    *(uint *)(iVar14 + 0x1714) = *(uint *)(iVar14 + 0x1714) | 0x8000;
                    *(uint *)(iVar14 + 0x29b8) = *(uint *)(iVar14 + 0x29b8) | 0x8000000;
                    if (*(char *)(iVar25 + 0x69) == '\0') {
                      *(undefined1 *)(iVar25 + 0x68) = 0;
                      pfVar18 = (float *)(iVar25 + 0x34);
                      *(float *)(iVar25 + 0x34) = fVar12;
                      iVar21 = 6;
                      do {
                        pfVar18[1] = fVar12;
                        pfVar18 = pfVar18 + 2;
                        iVar21 = iVar21 + -1;
                        *pfVar18 = fVar12;
                      } while (iVar21 != 0);
                      *(float *)(iVar25 + 0x6c) = fVar5;
                      *(undefined1 *)(iVar25 + 0x74) = 1;
                      local_80 = *(float *)(*(int *)(iVar25 + 0x70) + 0x20ac);
                      FUN_00375bcc(local_80,DAT_00116638);
                      FUN_00375bcc(local_80,DAT_0011663c);
                      *(undefined1 *)(iVar25 + 0x69) = 1;
                    }
                  }
                  if (*(int *)(*(int *)(iVar2 + 0x8c) + 0x208) + 0xbedfffffU < DAT_00116640) {
                    pcVar22[1] = 'd';
                  }
                  if ((*(uint *)(local_64 + 0xbf4) & 1) == 0) {
                    (**(code **)(local_64 + 0xbac))(param_1,0xffffffff);
                  }
                }
                else {
                  FUN_00373500(DAT_00116794,fVar5,uVar6,pcVar22 + 0x30);
                }
                if ((DAT_00116798 < *(int *)(pcVar22 + 0x34)) && ((pcVar22[1] & 7U) == 0)) {
                  fVar28 = (float)FUN_00371e50(DAT_0011679c);
                  iVar25 = *(int *)(pcVar22 + 0x40);
                  if (iVar25 == 0) {
                    local_88 = (float)FUN_003738a8(uVar8);
                    iVar25 = local_78 + (short)(int)fVar28 * 0xc;
                    local_88 = local_88 + *(float *)(iVar25 + 0x2340);
                    local_84 = (float)FUN_003738a8(uVar8);
                    local_84 = local_84 + *(float *)(iVar25 + 0x2344);
                    local_80 = (float)FUN_003738a8(uVar8);
                    local_80 = local_80 + *(float *)(iVar25 + 0x2348);
                    fVar28 = fVar7;
                  }
                  else {
                    local_88 = (float)FUN_003738a8(uVar9);
                    local_88 = local_88 + *(float *)(iVar25 + 0x28);
                    local_84 = (float)FUN_003738a8(uVar9);
                    local_84 = local_84 + *(float *)(iVar25 + 0x2c);
                    local_80 = (float)FUN_003738a8(uVar9);
                    local_80 = local_80 + *(float *)(iVar25 + 0x30);
                    fVar28 = DAT_001167a0;
                  }
                  local_94 = fVar12;
                  local_90 = fVar12;
                  local_8c = fVar12;
                  local_a0 = fVar12;
                  local_9c = fVar10;
                  local_98 = fVar12;
                  fVar27 = (float)FUN_00371e50(fVar28 * fVar11);
                  local_b8 = &local_a0;
                  local_b4 = 0;
                  local_b0 = 0;
                  auStack_ac[0] = 0x96;
                  FUN_00367f34(fVar27 + fVar28,param_1,3,&local_88,&local_94);
                }
              }
            }
            goto LAB_00116774;
          }
          *(short *)(pcVar22 + 0x2e) = *(short *)(pcVar22 + 0x2e) + 1;
          local_74 = fVar12;
          local_70 = fVar12;
          local_6c = -*(float *)(pcVar22 + 0x34);
          fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x12),
                                              (byte)(in_fpscr >> 0x15) & 3);
          FUN_003735e8(fVar27 * fVar3 * fVar28,auStack_ac,0);
          FUN_00369014(DAT_001162b8,auStack_ac,1);
          FUN_00371234(*(undefined4 *)(pcVar22 + 0x38),auStack_ac,1);
          FUN_003735e8(*(undefined4 *)(pcVar22 + 0x3c),auStack_ac,1);
          FUN_003735ac(pcVar22 + 4,auStack_ac,&local_74);
          pfVar18 = DAT_001162bc;
          *(float *)(pcVar22 + 4) = *(float *)(pcVar22 + 4) + *DAT_001162bc;
          *(float *)(pcVar22 + 8) = *(float *)(pcVar22 + 8) + pfVar18[1];
          *(float *)(pcVar22 + 0xc) = *(float *)(pcVar22 + 0xc) + pfVar18[2];
          if (*(short *)(pcVar22 + 0x2e) < 5) {
            FUN_00373500(uVar9,fVar11,DAT_001162c0,pcVar22 + 0x34);
          }
          else {
            FUN_00373500(fVar12,uVar4,uVar8,pcVar22 + 0x34);
            if ((10 < *(short *)(pcVar22 + 0x2e)) &&
               (sVar23 = *(short *)(pcVar22 + 2), *(short *)(pcVar22 + 2) = sVar23 + -0x1e,
               (short)(sVar23 + -0x1e) < 1)) {
              pcVar22[2] = '\0';
              pcVar22[3] = '\0';
              *pcVar22 = '\0';
              puVar16 = *(undefined1 **)(pcVar22 + 0x44);
              if (puVar16 != (undefined1 *)0x0) {
                cVar1 = puVar16[2];
                goto joined_r0x001162a8;
              }
              goto LAB_00116160;
            }
          }
        }
        local_b8 = (float *)(int)*(short *)(pcVar22 + 0x2c);
        FUN_00368498(fVar7,param_1,pcVar22 + 4,DAT_0011660c);
      }
    }
LAB_00116774:
    uVar26 = uVar26 + 1;
    pcVar22 = pcVar22 + 0x48;
    if (0x95 < (short)uVar26) {
      return;
    }
  } while( true );
}
