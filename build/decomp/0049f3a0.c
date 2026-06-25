// OoT3D decomp @ 0049f3a0  name=FUN_0049f3a0  size=1432

int FUN_0049f3a0(float param_1,int *param_2,int param_3,float *param_4,float *param_5_00,
                int *param_5,float *param_6,int param_7)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint in_fpscr;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  undefined4 *local_64;
  int *local_60;
  
  fVar5 = DAT_0049f788;
  *param_6 = 7.006492e-44;
  *param_4 = param_5_00[1];
  fVar21 = *param_5_00;
  iVar13 = param_2[0x10];
  fVar25 = (float)param_2[1] - fVar5;
  if ((fVar25 == fVar21 || fVar25 < fVar21 != (NAN(fVar25) || NAN(fVar21))) &&
     (fVar21 <= (float)param_2[4] + fVar5)) {
    fVar21 = param_5_00[1];
    fVar25 = (float)param_2[2] - fVar5;
    if ((fVar25 == fVar21 || fVar25 < fVar21 != (NAN(fVar25) || NAN(fVar21))) &&
       (fVar21 <= (float)param_2[5] + fVar5)) {
      fVar21 = param_5_00[2];
      fVar25 = (float)param_2[3] - fVar5;
      if ((fVar25 == fVar21 || fVar25 < fVar21 != (NAN(fVar25) || NAN(fVar21))) &&
         (uVar20 = in_fpscr & 0xfffffff | (uint)(fVar21 <= (float)param_2[6] + fVar5) << 0x1d,
         SUB41(uVar20 >> 0x1d,0))) {
        FUN_002bf5b0(param_2,param_5_00,&local_80);
        fVar25 = DAT_0049f798;
        iVar11 = DAT_0049f794;
        fVar21 = DAT_0049f790;
        fVar5 = DAT_0049f78c;
        iVar16 = 0;
        uVar9 = (uint)*(ushort *)
                       ((int)local_78 * param_2[7] * param_2[8] * 6 +
                        local_7c * param_2[7] * 6 + iVar13 + (int)local_80 * 6 + 4);
        if (uVar9 != 0xffff) {
          iVar13 = param_2[0x12];
          iVar15 = *(int *)(*param_2 + 0x18);
          iVar17 = *(int *)(*param_2 + 0x1c);
          *param_4 = param_5_00[1];
          psVar14 = (short *)(iVar13 + uVar9 * 4);
          while( true ) {
            iVar13 = iVar17 + *psVar14 * 0x14;
            if (((uint)*(ushort *)(*(int *)(*param_2 + 0x1c) + *psVar14 * 0x14 + 2) & param_3 << 0xd
                ) == 0) {
              fVar26 = *param_5_00;
              fVar27 = param_5_00[2];
              FUN_0036ac0c(DAT_0049f794,iVar15 + (*(ushort *)(iVar13 + 2) & 0xffff1fff) * 6);
              FUN_0036ac0c(iVar11 + 0xc,iVar15 + (*(ushort *)(iVar13 + 4) & 0xffff1fff) * 6);
              FUN_0036ac0c(iVar11 + 0x18,iVar15 + (uint)*(ushort *)(iVar13 + 6) * 6);
              fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 10),
                                                  (byte)(uVar20 >> 0x15) & 3);
              fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xc),
                                                  (byte)(uVar20 >> 0x15) & 3);
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xe),
                                                  (byte)(uVar20 >> 0x15) & 3);
              iVar10 = FUN_002bf520(fVar22 * fVar25,fVar23 * fVar25,fVar24 * fVar25,
                                    *(undefined4 *)(iVar13 + 0x10),fVar27,fVar26,fVar21,DAT_0049f794
                                    ,iVar11 + 0xc,iVar11 + 0x18,&local_78);
              if (iVar10 != 0) {
                fVar22 = local_78 - *param_4;
                fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xc),
                                                    (byte)(uVar20 >> 0x15) & 3);
                uVar9 = uVar20 & 0xfffffff;
                uVar1 = uVar9 | (uint)(fVar22 < fVar5) << 0x1f | (uint)(fVar22 == fVar5) << 0x1e;
                uVar20 = uVar1 | (uint)(NAN(fVar22) || NAN(fVar5)) << 0x1c;
                bVar3 = (byte)(uVar1 >> 0x18);
                if (((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar20 >> 0x1c) & 1)) &&
                    (uVar20 = uVar9 | (uint)(param_1 <= fVar22) << 0x1d, !SUB41(uVar20 >> 0x1d,0)))
                   && (fVar22 = fVar22 * fVar23 * fVar25,
                      uVar20 = uVar9 | (uint)(fVar22 == fVar5) << 0x1e |
                               (uint)(fVar5 <= fVar22) << 0x1d, bVar3 = (byte)(uVar20 >> 0x18),
                      !(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6))) {
                  iVar16 = 1;
                  *param_4 = local_78 - param_1;
                  *param_5 = iVar13;
                }
              }
              uVar2 = psVar14[1];
            }
            else {
              uVar2 = psVar14[1];
            }
            if (uVar2 == 0xffff) break;
            psVar14 = (short *)(param_2[0x12] + (uint)uVar2 * 4);
          }
        }
        uVar20 = DAT_0049f7a4;
        fVar22 = DAT_0049f7a0;
        puVar6 = DAT_0049f79c;
        local_74 = *param_5_00;
        local_6c = param_5_00[2];
        local_70 = *param_4;
        fVar25 = local_70 + param_1;
        local_78 = 0.0;
        local_7c = 0;
        local_60 = param_2 + 0x414;
        local_64 = DAT_0049f79c + 3;
        fVar23 = fVar25;
        local_68 = iVar16;
        do {
          fVar24 = local_78;
          if ((((*(ushort *)((int)param_2 + (int)local_78 * 2 + 0x156c) & 1) != 0) &&
              (param_2[(int)local_78 * 0x1b + 0x15] != param_7)) &&
             (iVar13 = FUN_002bf4ec(local_74,local_6c,param_2 + (int)local_78 * 0x1b + 0x2a),
             piVar8 = local_60, iVar13 != 0)) {
            uVar9 = (uint)*(ushort *)((int)param_2 + (int)fVar24 * 0x6c + 0x5e);
            bVar4 = false;
            if (uVar9 != uVar20) {
              local_88 = local_74;
              local_84 = local_70;
              local_80 = local_6c;
              psVar14 = (short *)(local_60[0x162] + uVar9 * 4);
              while( true ) {
                iVar13 = piVar8[0x160] + *psVar14 * 0x20;
                if (((uint)*(ushort *)(iVar13 + 2) & param_3 << 0xd) == 0) {
                  fVar24 = *(float *)(iVar13 + 0x18);
                  fVar25 = (float)FUN_0033ee60(*(undefined4 *)(iVar13 + 0x14),fVar24,
                                               *(undefined4 *)(iVar13 + 0x1c),
                                               *(undefined4 *)(iVar13 + 0x10),&local_88);
                  puVar7 = DAT_0049f958;
                  if (fVar25 == param_1 || fVar25 < param_1 != (NAN(fVar25) || NAN(param_1))) {
                    iVar11 = piVar8[0x161];
                    puVar12 = (undefined4 *)(iVar11 + (*(ushort *)(iVar13 + 2) & 0xffff1fff) * 0xc);
                    uVar18 = puVar12[1];
                    uVar19 = puVar12[2];
                    *DAT_0049f958 = *puVar12;
                    puVar7[1] = uVar18;
                    puVar7[2] = uVar19;
                    puVar12 = (undefined4 *)(iVar11 + (*(ushort *)(iVar13 + 4) & 0xffff1fff) * 0xc);
                    uVar18 = puVar12[1];
                    uVar19 = puVar12[2];
                    *puVar6 = *puVar12;
                    puVar6[1] = uVar18;
                    puVar6[2] = uVar19;
                    puVar12 = (undefined4 *)(iVar11 + (uint)*(ushort *)(iVar13 + 6) * 0xc);
                    uVar18 = puVar12[1];
                    uVar19 = puVar12[2];
                    *local_64 = *puVar12;
                    local_64[1] = uVar18;
                    local_64[2] = uVar19;
                    iVar11 = FUN_002bf520(*(undefined4 *)(iVar13 + 0x14),
                                          *(undefined4 *)(iVar13 + 0x18),
                                          *(undefined4 *)(iVar13 + 0x1c),
                                          *(undefined4 *)(iVar13 + 0x10),local_80,local_88,fVar21,
                                          DAT_0049f958,puVar7 + 3,puVar7 + 6,&local_8c);
                    if (((iVar11 != 0) &&
                        (fVar25 = local_8c - local_84,
                        fVar25 != fVar5 && fVar25 < fVar5 == (NAN(fVar25) || NAN(fVar5)))) &&
                       ((fVar25 < param_1 && (fVar25 * fVar24 <= fVar5)))) {
                      bVar4 = true;
                      fVar25 = fVar22;
                      if (fVar24 < fVar5 == (NAN(fVar24) || NAN(fVar5))) {
                        fVar25 = fVar21;
                      }
                      local_84 = local_8c + param_1 * fVar25;
                      iVar16 = iVar13;
                    }
                    uVar2 = psVar14[1];
                    fVar25 = local_84;
                  }
                  else {
                    uVar2 = psVar14[1];
                    fVar25 = local_84;
                  }
                }
                else {
                  uVar2 = psVar14[1];
                  fVar25 = local_84;
                }
                local_84 = fVar25;
                if (uVar2 == uVar20) break;
                psVar14 = (short *)(piVar8[0x162] + (uint)uVar2 * 4);
              }
            }
            if ((bVar4) && (fVar23 != fVar25 && fVar23 < fVar25 == (NAN(fVar23) || NAN(fVar25)))) {
              *param_5 = iVar16;
              *param_6 = local_78;
              local_7c = 1;
              fVar23 = fVar25;
            }
          }
          local_78 = (float)((int)local_78 + 1);
        } while ((int)local_78 < 0x32);
        if (local_7c == 0) {
          return local_68;
        }
        *param_4 = fVar23;
        return 1;
      }
    }
  }
  return 0;
}

