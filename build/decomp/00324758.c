// OoT3D decomp @ 00324758  name=FUN_00324758  size=1864

int FUN_00324758(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,float *param_5_00,
                float *param_5,float *param_6,undefined4 *param_7,int *param_8,float param_9,
                float *param_10)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float *local_c8;
  undefined4 local_c4;
  float *local_c0;
  float *local_bc;
  float *local_b8;
  float *local_b4;
  float *local_b0;
  undefined4 *local_ac;
  uint local_a8;
  float *local_a4;
  int local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  float *local_50;
  float *local_4c;
  int local_48;
  undefined4 local_30;
  float *local_28;
  
  fVar12 = param_2[0x10];
  local_84 = *param_5;
  local_80 = param_5[1];
  fStack_7c = param_5[2];
  *param_8 = 0x32;
  uVar1 = *(ushort *)((int)*param_2 + 0xe);
  puVar6 = (undefined *)param_2[0x13];
  if (puVar6 < puVar6 + uVar1) {
    do {
      puVar7 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar7;
    } while (puVar7 < (undefined *)((int)param_2[0x13] + (uint)uVar1));
  }
  FUN_002bf5b0(param_2,param_5_00,&local_64);
  FUN_002bf5b0(param_2,&local_84,&local_70);
  iVar4 = local_5c;
  iVar3 = local_60;
  iVar8 = local_64;
  local_78 = DAT_00324b88;
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  iVar15 = 0;
  *param_6 = *param_5;
  param_6[1] = fVar10;
  param_6[2] = fVar11;
  *param_7 = 0;
  uVar2 = DAT_00324b8c;
  bVar19 = local_64 == local_70;
  iVar16 = local_64;
  iVar14 = local_70;
  if (bVar19) {
    iVar16 = local_60;
    iVar14 = local_6c;
  }
  bVar20 = bVar19 && iVar16 == iVar14;
  if (bVar19 && iVar16 == iVar14) {
    bVar20 = local_5c == local_68;
  }
  if (bVar20) {
    fVar11 = param_2[1] - DAT_00324ea8;
    fVar10 = *param_5_00;
    if ((fVar11 == fVar10 || fVar11 < fVar10 != (NAN(fVar11) || NAN(fVar10))) &&
       (fVar10 <= param_2[4] + DAT_00324ea8)) {
      fVar10 = param_5_00[1];
      fVar11 = param_2[2] - DAT_00324ea8;
      if ((fVar11 == fVar10 || fVar11 < fVar10 != (NAN(fVar11) || NAN(fVar10))) &&
         (fVar10 <= param_2[5] + DAT_00324ea8)) {
        fVar10 = param_5_00[2];
        fVar11 = param_2[3] - DAT_00324ea8;
        if ((fVar11 == fVar10 || fVar11 < fVar10 != (NAN(fVar11) || NAN(fVar10))) &&
           (fVar10 <= param_2[6] + DAT_00324ea8)) {
          FUN_002bf5b0(param_2,param_5_00,&local_90);
          local_c4 = &local_84;
          local_b8 = &local_78;
          local_b4 = param_10;
          local_bc = (float *)param_7;
          local_c0 = param_6;
          local_c8 = param_5_00;
          iVar15 = FUN_004a30a0(param_1,(int)local_88 * (int)param_2[7] * (int)param_2[8] * 6 +
                                        (int)local_8c * (int)param_2[7] * 6 +
                                        (int)fVar12 + (int)local_90 * 6,param_2,param_3,param_4);
          if (iVar15 == 1) {
            local_78 = (*param_6 - *param_5_00) * (*param_6 - *param_5_00) +
                       (param_6[1] - param_5_00[1]) * (param_6[1] - param_5_00[1]) +
                       (param_6[2] - param_5_00[2]) * (param_6[2] - param_5_00[2]);
          }
          goto LAB_00324d04;
        }
      }
    }
    iVar15 = 0;
  }
  else {
    if (local_70 < local_64) {
      local_64 = local_70;
      local_70 = iVar8;
    }
    if (local_6c < local_60) {
      local_60 = local_6c;
      local_6c = iVar3;
    }
    if (local_68 < local_5c) {
      local_5c = local_68;
      local_68 = iVar4;
    }
    local_58 = local_5c * (int)param_2[7] * (int)param_2[8] * 6 + (int)fVar12;
    fVar12 = (float)VectorSignedToFloat(local_5c,(byte)(in_fpscr >> 0x15) & 3);
    local_88 = param_2[3] + param_2[0xc] * fVar12;
    local_94 = local_88 + param_2[0xc];
    local_74 = local_5c;
    if (local_5c < local_68 + 1) {
      local_48 = (int)param_2[7] * (int)param_2[8] * 3;
      do {
        local_a0 = local_60 * (int)param_2[7] * 6 + local_58;
        fVar12 = (float)VectorSignedToFloat(local_60,(byte)(in_fpscr >> 0x15) & 3);
        local_8c = param_2[2] + param_2[0xb] * fVar12;
        local_98 = local_8c + param_2[0xb];
        iVar16 = local_60;
        if (local_60 < local_6c + 1) {
          do {
            puVar13 = (ushort *)(local_a0 + local_64 * 6);
            fVar12 = (float)VectorSignedToFloat(local_64,(byte)(in_fpscr >> 0x15) & 3);
            local_90 = param_2[1] + param_2[10] * fVar12;
            local_9c = local_90 + param_2[10];
            iVar14 = local_64;
            if (local_64 < local_70 + 1) {
              do {
                iVar8 = FUN_003564a4(&local_90,&local_9c,param_5_00,&local_84);
                if (iVar8 == 1) {
                  bVar19 = ((uint)param_10 & 2) != 0;
                  uVar9 = 1;
                  if (bVar19) {
                    uVar9 = (uint)*puVar13;
                  }
                  bVar20 = false;
                  if (bVar19 && uVar9 != uVar2) {
                    local_b8 = &local_78;
                    local_b4 = param_10;
                    local_c4 = &local_84;
                    local_bc = (float *)param_7;
                    local_c0 = param_6;
                    local_c8 = param_5_00;
                    uVar9 = FUN_002bded8(param_1,puVar13,param_2,param_3,param_4);
                    if (uVar9 != 0) {
                      bVar20 = true;
                    }
                  }
                  bVar19 = ((uint)param_10 & 1) != 0;
                  if (bVar19) {
                    uVar9 = (uint)puVar13[1];
                  }
                  if (bVar19 && uVar9 != uVar2) {
                    local_b8 = &local_78;
                    local_b4 = param_10;
                    local_c4 = &local_84;
                    local_bc = (float *)param_7;
                    local_c0 = param_6;
                    local_c8 = param_5_00;
                    uVar9 = FUN_002bded8(param_1,puVar13 + 1,param_2,param_3,param_4);
                    if (uVar9 != 0) {
                      bVar20 = true;
                    }
                  }
                  bVar19 = ((uint)param_10 & 4) != 0;
                  if (bVar19) {
                    uVar9 = (uint)puVar13[2];
                  }
                  if (bVar19 && uVar9 != uVar2) {
                    local_b8 = &local_78;
                    local_b4 = param_10;
                    local_c4 = &local_84;
                    local_bc = (float *)param_7;
                    local_c0 = param_6;
                    local_c8 = param_5_00;
                    iVar8 = FUN_002bded8(param_1,puVar13 + 2,param_2,param_3,param_4);
                    if (iVar8 != 0) {
                      bVar20 = true;
                    }
                  }
                  if (bVar20) {
                    iVar15 = 1;
                  }
                }
                iVar14 = iVar14 + 1;
                puVar13 = puVar13 + 3;
                local_90 = local_90 + param_2[10];
                local_9c = local_9c + param_2[10];
              } while (iVar14 < local_70 + 1);
            }
            local_8c = local_8c + param_2[0xb];
            iVar16 = iVar16 + 1;
            local_a0 = local_a0 + (int)param_2[7] * 6;
            local_98 = local_98 + param_2[0xb];
          } while (iVar16 < local_6c + 1);
        }
        local_58 = local_58 + local_48 * 2;
        local_88 = local_88 + param_2[0xc];
        local_94 = local_94 + param_2[0xc];
        local_74 = local_74 + 1;
      } while (local_74 < local_68 + 1);
    }
LAB_00324d04:
    if (((uint)param_10 & 0x10) != 0) {
      local_4c = &local_90;
      local_50 = param_2 + 0x14;
      bVar19 = false;
      local_54 = ((uint)param_10 & 8) >> 3;
      iVar16 = 0;
      local_30 = param_3;
      local_28 = param_5_00;
      do {
        pfVar5 = local_4c;
        fVar10 = fStack_7c;
        fVar12 = local_80;
        if (((*(ushort *)((int)param_2 + iVar16 * 2 + 0x156c) & 1) != 0) &&
           (param_2[iVar16 * 0x1b + 0x15] != param_9)) {
          fVar21 = param_2[iVar16 * 0x1b + 0x2e];
          fVar11 = local_28[1];
          bVar20 = fVar21 < fVar11;
          bVar17 = fVar21 == fVar11;
          bVar18 = NAN(fVar21) || NAN(fVar11);
          if (!bVar17 && bVar20 == bVar18) {
            bVar20 = fVar21 < local_80;
            bVar17 = fVar21 == local_80;
            bVar18 = NAN(fVar21) || NAN(local_80);
          }
          if ((bVar17 || bVar20 != bVar18) &&
             (fVar11 <= param_2[iVar16 * 0x1b + 0x2f] || local_80 <= param_2[iVar16 * 0x1b + 0x2f]))
          {
            local_9c = *local_28;
            local_98 = local_28[1];
            local_94 = local_28[2];
            *local_4c = local_84;
            pfVar5[1] = fVar12;
            pfVar5[2] = fVar10;
            iVar14 = FUN_003188a8(param_2 + iVar16 * 0x1b + 0x2a,&local_9c);
            if (iVar14 != 0) {
              local_c4 = (float *)CONCAT22(local_c4._2_2_,(short)local_30);
              bVar20 = false;
              local_c0 = local_50;
              local_b8 = local_28;
              local_b0 = param_6;
              local_ac = param_7;
              local_a8 = local_54;
              local_a4 = &local_78;
              local_bc = param_2 + iVar16 * 0x1b + 0x18;
              local_c8 = param_2;
              local_b4 = &local_84;
              local_a0 = param_1;
              if ((((uint)param_10 & 1) != 0) && (iVar14 = FUN_002b9124(&local_c8), iVar14 != 0)) {
                bVar20 = true;
              }
              local_bc = (float *)((int)param_2 + iVar16 * 0x6c + 0x62);
              if ((((uint)param_10 & 2) != 0) && (iVar14 = FUN_002b9124(&local_c8), iVar14 != 0)) {
                bVar20 = true;
              }
              local_bc = (float *)((int)param_2 + iVar16 * 0x6c + 0x5e);
              if ((((uint)param_10 & 4) != 0) && (iVar14 = FUN_002b9124(&local_c8), iVar14 != 0)) {
                bVar20 = true;
              }
              if (bVar20) {
                bVar19 = true;
                *param_8 = iVar16;
              }
            }
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x32);
      if (bVar19) {
        iVar15 = 1;
      }
    }
  }
  return iVar15;
}

