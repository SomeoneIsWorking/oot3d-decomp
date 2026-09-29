// OoT3D decomp @ 003b5ae0  name=FUN_003b5ae0  size=6850

void FUN_003b5ae0(int param_1,int param_2)

{
  code *pcVar1;
  byte *pbVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  byte bVar8;
  ushort uVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  float fVar19;
  float *pfVar20;
  short *psVar21;
  float *pfVar22;
  bool bVar23;
  uint in_fpscr;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 auStack_cc [48];
  int local_9c;
  uint local_98;
  float local_94 [2];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;

  fVar3 = DAT_003b5ed8;
  pbVar2 = DAT_003b5ed4;
  local_70 = param_1;
  if (((*(uint *)(DAT_003b5ed4 + 0xa8) & 1) == 0) &&
     (iVar13 = FUN_003679b4(DAT_003b5ed4 + 0xa8), puVar4 = DAT_003b5ee4, uVar28 = DAT_003b5ee0,
     iVar13 != 0)) {
    *DAT_003b5ee4 = DAT_003b5edc;
    puVar4[1] = fVar3;
    puVar4[2] = uVar28;
  }
  local_68 = param_2 + 0x2000;
  iVar13 = *(int *)(param_2 + 0x20ac);
  local_9c = param_2 + 0x14;
  local_98 = (uint)*(byte *)(iVar13 + 0xd0);
  if ((int)(*(float *)(iVar13 + 0x28) * *(float *)(iVar13 + 0x28) +
           *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30)) < DAT_003b5ee8) {
    FUN_00370084(&local_98,0,1,0x28);
  }
  else {
    FUN_00370084(&local_98,200,1,0x28);
  }
  *(char *)(iVar13 + 0xd0) = (char)local_98;
  FUN_003731e0(local_70 + 0x230);
  if ((*(short *)(pbVar2 + 0x1c) == 0) && (iVar14 = FUN_003769d8(param_2 + 0x28a0), iVar14 == 0)) {
    *(uint *)(local_70 + 4) = *(uint *)(local_70 + 4) | 0x21;
  }
  else {
    *(uint *)(local_70 + 4) = *(uint *)(local_70 + 4) & 0xfffffffe;
  }
  if ((*(int *)(local_70 + 0x98) < DAT_003b5eec) ||
     (iVar14 = FUN_003769d8(param_2 + 0x28a0), iVar14 != 0)) {
    iVar18 = (int)(short)(*(short *)(local_70 + 0xbe) - *(short *)(local_70 + 0x92));
    iVar14 = DAT_003b5ef0;
    if ((DAT_003b5ef0 < iVar18) || (iVar14 = (DAT_003b5ef0 >> 0xe) - DAT_003b5ef0, iVar18 < iVar14))
    {
      iVar18 = iVar14;
    }
  }
  else {
    iVar18 = 0;
  }
  FUN_00370084(local_70 + 0x1bc,iVar18,3,DAT_003b5ef4);
  local_6c = param_2 + 0x5000;
  if ((*(uint *)(param_2 + 0x5bf4) & 0x1f) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined2 *)(param_1 + 0x1b8) = *(undefined2 *)(DAT_003b5efc + *(short *)(param_1 + 0x1ba) * 2)
  ;
  if (*(short *)(param_1 + 0x1ba) != 0) {
    *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1ba) + -1;
  }
  iVar14 = DAT_003b5f00;
  if (*(short *)(pbVar2 + 0x1c) != 0) {
    *(short *)(pbVar2 + 0x1c) = *(short *)(pbVar2 + 0x1c) + -1;
  }
  if ((pbVar2[5] == 0) && (pbVar2[0x16] != 2)) {
    uVar9 = *(ushort *)(pbVar2 + 0x1e);
    if (0 < (short)uVar9) {
      uVar9 = (ushort)pbVar2[4];
    }
    if (uVar9 != 1) goto LAB_003b5d90;
    if ((*(short *)(pbVar2 + 0x1c) == 0) &&
       ((int)SQRT((*DAT_003b5f04 - DAT_003b5f04[3]) * (*DAT_003b5f04 - DAT_003b5f04[3]) +
                  (DAT_003b5f04[1] - DAT_003b5f04[4]) * (DAT_003b5f04[1] - DAT_003b5f04[4]) +
                  (DAT_003b5f04[2] - DAT_003b5f04[5]) * (DAT_003b5f04[2] - DAT_003b5f04[5])) <
        DAT_003b5f08)) {
      pbVar2[4] = 0;
      uVar28 = DAT_003b5f0c;
      pbVar2[5] = 1;
      FUN_00367c7c(param_2,uVar28,0);
      goto LAB_003b5d90;
    }
LAB_003b5dac:
    uVar15 = *(uint *)(iVar14 + 0xed8) & 0xffffefff;
LAB_003b5db4:
    *(uint *)(iVar14 + 0xed8) = uVar15;
  }
  else {
LAB_003b5d90:
    if (pbVar2[4] == 0) {
      uVar15 = *(uint *)(iVar14 + 0xed8) | 0x1000;
      goto LAB_003b5db4;
    }
    if (pbVar2[4] == 1) goto LAB_003b5dac;
  }
  bVar8 = pbVar2[3];
  if ((bVar8 != 0) && (pbVar2[3] = bVar8 - 1, bVar8 == 1)) {
    FUN_00367c7c(param_2,*(undefined2 *)(pbVar2 + 0x2a),0);
  }
  FUN_001c3558(local_70,param_2);
  pbVar2 = DAT_003b5ed4;
  *(undefined4 *)(DAT_003b5ed4 + 0xf8) = DAT_003b5f10;
  *(int *)(pbVar2 + 0x58) = *(int *)(pbVar2 + 0x58) + 1;
  bVar8 = 0;
  if (*(short *)(pbVar2 + 0x30) != 0) {
    bVar8 = DAT_003b5ed4[2];
  }
  if (*(short *)(pbVar2 + 0x30) != 0 && bVar8 != 0) {
    FUN_003d1040(local_70,param_2);
  }
  FUN_001bfb74(*(undefined4 *)(local_6c + 0xc28),param_2);
  fVar19 = DAT_003b5f38;
  fVar30 = DAT_003b5f34;
  fVar35 = DAT_003b5f30;
  fVar37 = DAT_003b5f2c;
  uVar28 = DAT_003b5f28;
  fVar34 = DAT_003b5f24;
  iVar14 = DAT_003b5f20;
  fVar33 = DAT_003b5f1c;
  fVar29 = DAT_003b5f18;
  iVar18 = *(int *)(local_68 + 0xac);
  local_d0 = 0.0;
  pfVar20 = DAT_003b5f14;
  do {
    uVar16 = DAT_003b5f3c;
    if (*(char *)(pfVar20 + 0xc) != '\0') {
      *(short *)((int)pfVar20 + 0x32) = *(short *)((int)pfVar20 + 0x32) + 1;
      FUN_00368cc0(param_2,pfVar20,pfVar20 + 6,uVar16);
      fVar25 = pfVar20[8];
      uVar15 = in_fpscr & 0xfffffff;
      in_fpscr = uVar15 | (uint)(pfVar20[0xe] <= fVar25) << 0x1d;
      if ((SUB41(in_fpscr >> 0x1d,0)) ||
         (in_fpscr = uVar15 | (uint)(fVar25 + DAT_003b5f40 <= ABS(pfVar20[6])) << 0x1d,
         SUB41(in_fpscr >> 0x1d,0))) {
        *(undefined1 *)(pfVar20 + 0xd) = 0;
        fVar25 = pfVar20[0xf] - fVar34;
        pfVar20[0xf] = fVar25;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar25 == fVar3) << 0x1e |
                   (uint)(fVar3 <= fVar25) << 0x1d;
        bVar8 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar8 >> 5 & 1) || (bool)(bVar8 >> 6)) {
          pfVar20[0xf] = fVar3;
          *(undefined1 *)((int)pfVar20 + 0x2a) = 0;
        }
      }
      else {
        *(undefined1 *)(pfVar20 + 0xd) = 1;
        if ((int)fVar25 < DAT_003b6350) {
          *(undefined1 *)(pfVar20 + 0xd) = 2;
        }
        fVar25 = pfVar20[0xf] + fVar34;
        pfVar20[0xf] = fVar25;
        if (0x3f800000 < (int)fVar25) {
          fVar25 = DAT_003b6354;
        }
        pfVar20[0xf] = fVar25;
        iVar5 = DAT_003b6358;
        if (*(char *)(pfVar20 + 0xd) == '\x02') {
          if (*(char *)(pfVar20 + 0xc) == '\x01') {
            fVar31 = *pfVar20 - *(float *)(iVar18 + 0x28);
            fVar25 = pfVar20[2] - *(float *)(iVar18 + 0x30);
            fVar25 = SQRT(fVar31 * fVar31 + fVar25 * fVar25);
            if ((int)fVar25 <= DAT_003b6358) {
              fVar31 = (float)FUN_003675f8();
              pfVar20[4] = fVar31;
              FUN_00373500((fVar35 - fVar25) * fVar29,fVar34,fVar34,pfVar20 + 3);
            }
            for (psVar21 = *(short **)(local_68 + 0xbc); psVar21 != (short *)0x0;
                psVar21 = *(short **)(psVar21 + 0x98)) {
              if (((*psVar21 == 0xfe) && (99 < psVar21[0xe])) &&
                 (fVar25 = SQRT((*pfVar20 - *(float *)(psVar21 + 0x14)) *
                                (*pfVar20 - *(float *)(psVar21 + 0x14)) +
                                (pfVar20[2] - *(float *)(psVar21 + 0x18)) *
                                (pfVar20[2] - *(float *)(psVar21 + 0x18))), (int)fVar25 <= iVar5)) {
                fVar31 = (float)FUN_003675f8();
                pfVar20[4] = fVar31;
                FUN_00373500((fVar35 - fVar25) * fVar29,fVar34,fVar34,pfVar20 + 3);
              }
            }
            pfVar22 = pfVar20 + 3;
            fVar25 = fVar19;
          }
          else {
            if (*(char *)(pfVar20 + 0xc) != '\x02') goto LAB_003b62bc;
            fVar31 = *pfVar20 - *(float *)(iVar18 + 0x28);
            fVar25 = pfVar20[2] - *(float *)(iVar18 + 0x30);
            if ((int)SQRT(fVar31 * fVar31 + fVar25 * fVar25) <= iVar14) {
              uVar16 = FUN_003758b0();
              FUN_00370084(pfVar20 + 10,uVar16,10,0x300);
            }
            fVar31 = DAT_003b6360;
            piVar6 = DAT_003b635c;
            fVar25 = DAT_003b6354;
            for (psVar21 = *(short **)(local_68 + 0xbc); psVar21 != (short *)0x0;
                psVar21 = *(short **)(psVar21 + 0x98)) {
              if ((*psVar21 == 0xfe) && (99 < psVar21[0xe])) {
                if (*(byte *)((int)psVar21 + 0x1a9) == 0) {
                  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  fVar26 = fVar3 * fVar26 * fVar33 - fVar30;
                }
                else {
                  fVar26 = (float)VectorUnsignedToFloat
                                            ((uint)*(byte *)((int)psVar21 + 0x1a9),
                                             (byte)(in_fpscr >> 0x15) & 3);
                  fVar36 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  fVar26 = fVar30 + fVar26 * fVar36 * fVar33;
                }
                fVar36 = SQRT((*pfVar20 - *(float *)(psVar21 + 0x14)) *
                              (*pfVar20 - *(float *)(psVar21 + 0x14)) +
                              (pfVar20[2] - *(float *)(psVar21 + 0x18)) *
                              (pfVar20[2] - *(float *)(psVar21 + 0x18)));
                if ((int)fVar36 <= iVar14) {
                  uVar16 = FUN_003758b0();
                  FUN_00370084(pfVar20 + 10,uVar16,10,0x300);
                }
                if ((((int)fVar26 & 0xffU) != 0) && ((int)fVar36 <= DAT_003b6364)) {
                  fVar36 = fVar25;
                  if (0x14 < ((int)fVar26 & 0xffU)) {
                    fVar36 = fVar31;
                  }
                  FUN_00373500(fVar36,fVar37,fVar34,pfVar20 + 0xb);
                }
              }
            }
            FUN_00370084(pfVar20 + 10,0,0x14,0x50);
            fVar25 = DAT_003b6368;
            pbVar2 = DAT_003b5ed4;
            uVar38 = FUN_00368d94(local_d0,*(undefined4 *)(DAT_003b5ed4 + 0xa0));
            fVar31 = (float)FUN_002cfca0((int)(short)(*(short *)((int)pfVar20 + 0x32) << 0xc));
            pfVar22 = pfVar20 + 0xb;
            fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar26 = (float)VectorSignedToFloat((int)((ulonglong)uVar38 >> 0x20),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar36 = (float)VectorSignedToFloat((int)uVar38,(byte)(in_fpscr >> 0x15) & 3);
            pfVar20[1] = fVar32 + DAT_003b636c + fVar31 * pfVar20[0xb] +
                         fVar26 * *(float *)(pbVar2 + 0xa4) + fVar36 * fVar25;
            fVar25 = fVar37;
          }
          FUN_0036fc20(fVar25,pfVar22);
        }
      }
    }
LAB_003b62bc:
    pfVar20 = pfVar20 + 0x10;
    local_d0 = (float)(int)(short)(SUB42(local_d0,0) + 1);
  } while ((int)local_d0 < 0x67);
  FUN_001141f4(param_2);
  uVar16 = DAT_003b6370;
  pbVar2 = DAT_003b5ed4;
  sVar11 = *(short *)(DAT_003b5ed4 + 0x30);
  if (((sVar11 != 0) && (DAT_003b5ed4[9] == 0)) &&
     ((DAT_003b6374 < *(int *)(iVar13 + 0x30) &&
      ((int)ABS(*(float *)(iVar13 + 0x28)) < DAT_003b5f08)))) {
    *(undefined4 *)(iVar13 + 0x30) = DAT_003b6370;
    *(float *)(iVar13 + 0x6c) = fVar3;
    if (pbVar2[10] == 0) {
      pbVar2[9] = 10;
    }
  }
  if (pbVar2[1] != 0 && sVar11 != 0) {
    iVar14 = DAT_003b6810 + (uint)pbVar2[1] * 6;
    fVar33 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + -6),(byte)(in_fpscr >> 0x15) & 3);
    if ((((int)ABS(*(float *)(iVar13 + 0x28) - fVar33) < DAT_003b5f08) &&
        (fVar33 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + -4),
                                             (byte)(in_fpscr >> 0x15) & 3),
        (int)ABS(*(float *)(iVar13 + 0x2c) - fVar33) < DAT_003b5f08 + -0xa80000)) &&
       (fVar33 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + -2),
                                            (byte)(in_fpscr >> 0x15) & 3),
       (int)ABS(*(float *)(iVar13 + 0x30) - fVar33) < DAT_003b5f08)) {
      pbVar2[1] = 0;
      local_120 = DAT_003b6818;
      uStack_11c = DAT_003b6814;
      pbVar2[9] = 0x14;
      FUN_0037547c(DAT_003b681c,0,4,local_120);
      FUN_003655d0(0,0x14);
    }
  }
  pfVar20 = DAT_003b6830;
  uVar27 = DAT_003b6820;
  if (pbVar2[10] != 0) {
    pbVar2[10] = pbVar2[10] - 1;
  }
  fVar26 = DAT_003b6834;
  fVar31 = DAT_003b682c;
  fVar25 = DAT_003b6828;
  fVar33 = DAT_003b6824;
  piVar6 = DAT_003b635c;
  bVar8 = pbVar2[9];
  pfVar22 = pfVar20 + -3;
  if (bVar8 == 0xb) {
LAB_003b6794:
    *(undefined4 *)(iVar13 + 0x30) = uVar16;
    *(float *)(iVar13 + 0x6c) = fVar3;
    iVar14 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar14 == 0) {
      iVar14 = FUN_0036c5bc(param_2,0);
      fVar33 = pfVar20[-2];
      fVar34 = pfVar20[-1];
      *(float *)(iVar14 + 0x8c) = *pfVar22;
      *(float *)(iVar14 + 0x90) = fVar33;
      *(float *)(iVar14 + 0x94) = fVar34;
      fVar33 = pfVar20[-2];
      fVar34 = pfVar20[-1];
      *(float *)(iVar14 + 0xa4) = *pfVar22;
      *(float *)(iVar14 + 0xa8) = fVar33;
      *(float *)(iVar14 + 0xac) = fVar34;
      fVar33 = pfVar20[1];
      fVar34 = pfVar20[2];
      *(float *)(iVar14 + 0x80) = *pfVar20;
      *(float *)(iVar14 + 0x84) = fVar33;
      *(float *)(iVar14 + 0x88) = fVar34;
      FUN_0036e9b8(param_2,(int)*(short *)(pbVar2 + 0x44),0);
      FUN_00367374(param_2,param_2 + 0x2298);
      FUN_0036e980(param_2,local_70,7);
      piVar6 = DAT_003b635c;
      pbVar2[9] = 0;
      pbVar2[0x44] = 0;
      pbVar2[0x45] = 0;
      fVar33 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      pbVar2[10] = (byte)(int)(fVar25 / fVar33 + fVar30);
      FUN_00316d74(param_2,0);
      *(undefined2 *)(DAT_003b6d3c + param_2) = 0;
    }
  }
  else if (bVar8 < 0xc) {
    if (bVar8 == 2) {
LAB_003b651c:
      FUN_00338cd8(*DAT_003b6838);
      pfVar7 = DAT_003b683c;
      local_94[0] = *DAT_003b683c - *(float *)(iVar13 + 0x28);
      local_8c = DAT_003b683c[2] - *(float *)(iVar13 + 0x30);
      fVar31 = SQRT(local_94[0] * local_94[0] + local_8c * local_8c);
      FUN_003675f8();
      FUN_003735e8(auStack_cc,0);
      uVar16 = DAT_003b6840;
      local_7c = fVar3;
      local_78 = fVar3;
      local_74 = DAT_003b6840;
      FUN_003735ac(local_94,auStack_cc,&local_7c);
      fVar25 = fVar37;
      if (*(short *)(pbVar2 + 0x1e) == 1) {
        fVar25 = fVar34;
      }
      FUN_00373500(*pfVar7,fVar25,ABS(local_94[0]) * *(float *)(pbVar2 + 0x108),DAT_003b6830);
      FUN_00373500(pfVar7[1],fVar25,*(float *)(pbVar2 + 0x108) * DAT_003b6844,pfVar20 + 1);
      FUN_00373500(pfVar7[2],fVar25,ABS(local_8c) * *(float *)(pbVar2 + 0x108),pfVar20 + 2);
      local_7c = -*(float *)(pbVar2 + 0x10c);
      local_78 = (float)DAT_003b6848;
      if (pbVar2[0xd] != 1) {
        local_78 = (float)DAT_003b684c;
      }
      local_74 = DAT_003b6850;
      FUN_003735ac(&local_88,auStack_cc,&local_7c);
      fVar34 = DAT_003b6854;
      local_88 = local_88 + *(float *)(iVar13 + 0x28);
      local_84 = local_84 + *(float *)(iVar13 + 0x2c);
      local_80 = local_80 + *(float *)(iVar13 + 0x30);
      FUN_00373500(fVar33,fVar37,DAT_003b6854,DAT_003b6858);
      if ((*(uint *)(local_9c + 4) & 0x200) != 0) {
        uVar15 = (uint)(char)pbVar2[0x14];
        if (-1 < (int)uVar15) {
          uVar15 = (uint)*(ushort *)(pbVar2 + 0x3c);
        }
        if (uVar15 == 0) {
          bVar8 = pbVar2[0x14] + 1;
          pbVar2[0x14] = bVar8;
          if ((char)bVar8 < '\x04') {
            uVar27 = DAT_003b685c;
            if (bVar8 != 0 && bVar8 != 3) {
              uVar27 = DAT_003b6d40;
            }
          }
          else {
            pbVar2[0x14] = 0;
            uVar27 = DAT_003b685c;
          }
          local_120 = DAT_003b6818;
          uStack_11c = DAT_003b6814;
          FUN_0037547c(uVar27,0,4,DAT_003b6818);
        }
      }
      if (2 < *(short *)(pbVar2 + 0x1e)) {
        if ((int)fVar31 < DAT_003b6d44) {
          bVar8 = 0xff;
        }
        else {
          if (((int)fVar31 <= DAT_003b6d48) || (-1 < (char)pbVar2[0x14])) goto LAB_003b696c;
          bVar8 = 0;
        }
        pbVar2[0x14] = bVar8;
      }
LAB_003b696c:
      iVar14 = FUN_0036c5bc(param_2,(int)*(short *)(pbVar2 + 0x44));
      FUN_00367c48();
      if ((char)pbVar2[0x14] < '\x01') {
        *(undefined4 *)(iVar14 + 0xd0) = *(undefined4 *)(param_2 + 0x1b0);
      }
      else {
        fVar33 = SQRT(local_94[0] * local_94[0] + local_8c * local_8c) * DAT_003b6d4c;
        if (0x3f800000 < (int)fVar33) {
          fVar33 = DAT_003b6d50;
        }
        if (pbVar2[0x14] == 2) {
          fVar37 = *(float *)(pbVar2 + 0xac);
        }
        else {
          fVar37 = *(float *)(pbVar2 + 0xb0);
        }
        FUN_00367c54(iVar14);
        fVar31 = *(float *)(pbVar2 + 0xbc);
        fVar25 = SQRT((*pfVar20 - *pfVar22) * (*pfVar20 - *pfVar22) +
                      (pfVar20[1] - pfVar20[-2]) * (pfVar20[1] - pfVar20[-2]) +
                      (pfVar20[2] - pfVar20[-1]) * (pfVar20[2] - pfVar20[-1]));
        uVar15 = in_fpscr & 0xfffffff;
        in_fpscr = uVar15 | (uint)(fVar31 <= fVar25) << 0x1d;
        if (SUB41(in_fpscr >> 0x1d,0)) {
          fVar36 = *(float *)(pbVar2 + 0xc0);
          uVar15 = uVar15 | (uint)(fVar25 < fVar36) << 0x1f | (uint)(fVar25 == fVar36) << 0x1e;
          in_fpscr = uVar15 | (uint)(NAN(fVar25) || NAN(fVar36)) << 0x1c;
          bVar8 = (byte)(uVar15 >> 0x18);
          if ((bool)(bVar8 >> 6 & 1) || bVar8 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar25 = *(float *)(pbVar2 + 0xb4) +
                     (*(float *)(pbVar2 + 0xb8) - *(float *)(pbVar2 + 0xb4)) *
                     ((fVar25 - fVar31) / (fVar36 - fVar31));
          }
          else {
            fVar25 = *(float *)(pbVar2 + 0xb8);
          }
        }
        else {
          fVar25 = *(float *)(pbVar2 + 0xb4);
        }
        *(float *)(iVar14 + 0xd0) =
             *(float *)(iVar14 + 0xd0) + (fVar25 - *(float *)(iVar14 + 0xd0)) * DAT_003b6d54;
        fVar33 = fVar37 + fVar34 + fVar33 * fVar34;
        local_88 = local_88 + (*pfVar7 - local_88) * fVar33;
        local_84 = fVar35 + (pfVar7[1] - local_84) * fVar33 + local_84;
        local_80 = local_80 + (pfVar7[2] - local_80) * fVar33;
        *(undefined4 *)(pbVar2 + 0xf8) = DAT_003b6d58;
      }
      local_7c = fVar3;
      local_78 = fVar3;
      local_74 = uVar16;
      FUN_003735ac(local_94,auStack_cc,&local_7c);
      uVar16 = DAT_003b6d5c;
      FUN_00373500(local_88,DAT_003b6d5c,ABS(local_94[0]) * *(float *)(pbVar2 + 0x108),DAT_003b6d60)
      ;
      FUN_00373500(local_84,uVar16,*(float *)(pbVar2 + 0x108) * fVar35,pfVar20 + -2);
      FUN_00373500(local_80,uVar16,ABS(local_8c) * *(float *)(pbVar2 + 0x108),pfVar20 + -1);
    }
    else if (bVar8 < 3) {
      if ((bVar8 != 0) && (bVar8 == 1)) {
        uVar10 = FUN_00367d74(param_2);
        *(undefined2 *)(pbVar2 + 0x44) = uVar10;
        FUN_00320d7c(param_2,0,1);
        FUN_00320d7c(param_2,(int)*(short *)(pbVar2 + 0x44),7);
        iVar14 = FUN_0036c5bc(param_2,0);
        *pfVar22 = *(float *)(iVar14 + 0x8c);
        pfVar20[-2] = *(float *)(iVar14 + 0x90);
        pfVar20[-1] = *(float *)(iVar14 + 0x94);
        *pfVar20 = *(float *)(iVar14 + 0x80);
        pfVar20[1] = *(float *)(iVar14 + 0x84);
        pfVar20[2] = *(float *)(iVar14 + 0x88);
        pbVar2[9] = 2;
        FUN_0034be04(0xc);
        *(float *)(pbVar2 + 0x108) = fVar3;
        goto LAB_003b651c;
      }
    }
    else if (bVar8 == 3) {
      iVar14 = FUN_0036c5bc(param_2,0);
      fVar33 = pfVar20[-2];
      fVar34 = pfVar20[-1];
      *(float *)(iVar14 + 0x8c) = *pfVar22;
      *(float *)(iVar14 + 0x90) = fVar33;
      *(float *)(iVar14 + 0x94) = fVar34;
      fVar33 = pfVar20[-2];
      fVar34 = pfVar20[-1];
      *(float *)(iVar14 + 0xa4) = *pfVar22;
      *(float *)(iVar14 + 0xa8) = fVar33;
      *(float *)(iVar14 + 0xac) = fVar34;
      fVar33 = pfVar20[1];
      fVar34 = pfVar20[2];
      *(float *)(iVar14 + 0x80) = *pfVar20;
      *(float *)(iVar14 + 0x84) = fVar33;
      *(float *)(iVar14 + 0x88) = fVar34;
      if (*(short *)(pbVar2 + 0x44) != 0) {
        FUN_0036c5bc(param_2);
        FUN_00367c48();
        FUN_0036e9b8(param_2,(int)*(short *)(pbVar2 + 0x44),0);
      }
      FUN_00367374(param_2,param_2 + 0x2298);
      pbVar2[9] = 0;
      pbVar2[0x44] = 0;
      pbVar2[0x45] = 0;
      FUN_00316d74(param_2,0);
      iVar14 = DAT_003b6d64;
      *(undefined2 *)(DAT_003b6d3c + param_2) = 0;
      piVar6 = DAT_003b635c;
      *(undefined2 *)(iVar14 + iVar13) = 0xfffb;
      fVar33 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(pbVar2 + 0x34) = (short)(int)(fVar31 / fVar33 + fVar30);
    }
    else if (bVar8 == 10) {
      FUN_00367494(param_2,param_2 + 0x2298);
      uVar10 = FUN_00367d74(param_2);
      *(undefined2 *)(pbVar2 + 0x44) = uVar10;
      FUN_00320d7c(param_2,0,1);
      FUN_00320d7c(param_2,(int)*(short *)(pbVar2 + 0x44),7);
      FUN_0036e980(param_2,local_70,5);
      iVar14 = FUN_0036c5bc(param_2,0);
      uVar27 = DAT_003b6860;
      *pfVar22 = *(float *)(iVar14 + 0x8c);
      pfVar20[-2] = *(float *)(iVar14 + 0x90);
      pfVar20[-1] = *(float *)(iVar14 + 0x94);
      *pfVar20 = *(float *)(iVar14 + 0x80);
      pfVar20[1] = *(float *)(iVar14 + 0x84);
      pfVar20[2] = *(float *)(iVar14 + 0x88);
      FUN_00367c7c(param_2,uVar27,0);
      pbVar2[9] = 0xb;
      goto LAB_003b6794;
    }
  }
  else {
    if (bVar8 == 0x14) {
      FUN_00367494(param_2,param_2 + 0x2298);
      uVar10 = FUN_00367d74(param_2);
      *(undefined2 *)(pbVar2 + 0x44) = uVar10;
      FUN_00320d7c(param_2,0,1);
      FUN_00320d7c(param_2,(int)*(short *)(pbVar2 + 0x44),7);
      FUN_0036e980(param_2,local_70,5);
      iVar14 = FUN_0036c5bc(param_2,0);
      uVar16 = DAT_003b6d68;
      *pfVar22 = *(float *)(iVar14 + 0x8c);
      pfVar20[-2] = *(float *)(iVar14 + 0x90);
      pfVar20[-1] = *(float *)(iVar14 + 0x94);
      *pfVar20 = *(float *)(iVar14 + 0x80);
      pfVar20[1] = *(float *)(iVar14 + 0x84);
      pfVar20[2] = *(float *)(iVar14 + 0x88);
      FUN_00367c7c(param_2,uVar16,0);
      pbVar2[9] = 0x15;
      piVar6 = DAT_003b635c;
      *(undefined4 *)(pbVar2 + 0x104) = DAT_003b6d6c;
      fVar34 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      pbVar2[10] = (byte)(int)(fVar33 / fVar34 + fVar30);
    }
    else if (bVar8 != 0x15) {
      if (bVar8 == 0x16) {
        fVar33 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b635c + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_003b6828 / fVar33 + fVar30) == (uint)pbVar2[10]) {
          FUN_0036ec40(0,DAT_003b716c);
        }
        pbVar2[0xb] = 1;
        FUN_00373500(DAT_003b7170,fVar30,fVar26,DAT_003b7174);
        fVar33 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_003735e8(fVar33 * DAT_003b7178 * DAT_003b717c,auStack_cc,0);
        local_7c = (float)FUN_002cfca0((int)(short)(*(int *)(local_6c + 0xbf4) << 0xc));
        local_78 = *(float *)(pbVar2 + 0x110);
        local_74 = DAT_003b7180;
        if (pbVar2[0xd] == 1) {
          local_78 = local_78 - fVar35;
        }
        FUN_003735ac(&local_88,auStack_cc,&local_7c);
        uVar16 = DAT_003b7188;
        pfVar7 = DAT_003b7184;
        *DAT_003b7184 = *(float *)(iVar13 + 0x28) + local_88;
        pfVar7[1] = *(float *)(iVar13 + 0x2c) + local_84;
        pfVar7[2] = *(float *)(iVar13 + 0x30) + local_80;
        FUN_00373500(fVar31,fVar37,uVar16,DAT_003b718c);
        fVar33 = DAT_003b7194;
        fVar34 = DAT_003b7190;
        local_7c = *(float *)(pbVar2 + 0x104) - fVar31;
        if (pbVar2[0xd] == 1) {
          local_74 = DAT_003b7198;
          local_78 = DAT_003b7194;
        }
        else {
          local_74 = uVar27;
          local_78 = DAT_003b7190;
        }
        FUN_003735ac(DAT_003b6d60,auStack_cc,&local_7c);
        *pfVar22 = *pfVar22 + *(float *)(iVar13 + 0x28);
        pfVar20[-2] = pfVar20[-2] + *(float *)(iVar13 + 0x2c);
        pfVar20[-1] = pfVar20[-1] + *(float *)(iVar13 + 0x30);
        fVar37 = *(float *)(iVar13 + 0x2c);
        fVar25 = *(float *)(iVar13 + 0x30);
        *pfVar20 = *(float *)(iVar13 + 0x28);
        pfVar20[1] = fVar37;
        pfVar20[2] = fVar25;
        if (pbVar2[0xd] != 1) {
          fVar33 = DAT_003b719c;
        }
        pfVar20[1] = pfVar20[1] + fVar33;
        if (pbVar2[10] == 0) {
          iVar14 = FUN_003769d8(param_2 + 0x28a0);
          if (((iVar14 == 4) || (iVar14 = FUN_003769d8(param_2 + 0x28a0), iVar14 == 0)) &&
             (iVar14 = FUN_00346964(param_2), iVar14 != 0)) {
            iVar14 = FUN_0036c5bc(param_2,0);
            FUN_003725e0(param_2);
            iVar18 = FUN_00369f3c(param_2);
            if (iVar18 == 0) {
              pbVar2[0x16] = 2;
              pbVar2[0x13] = 0;
            }
            fVar33 = pfVar20[-2];
            fVar37 = pfVar20[-1];
            *(float *)(iVar14 + 0x8c) = *pfVar22;
            *(float *)(iVar14 + 0x90) = fVar33;
            *(float *)(iVar14 + 0x94) = fVar37;
            fVar33 = pfVar20[-2];
            fVar37 = pfVar20[-1];
            *(float *)(iVar14 + 0xa4) = *pfVar22;
            *(float *)(iVar14 + 0xa8) = fVar33;
            *(float *)(iVar14 + 0xac) = fVar37;
            fVar33 = pfVar20[1];
            fVar37 = pfVar20[2];
            *(float *)(iVar14 + 0x80) = *pfVar20;
            *(float *)(iVar14 + 0x84) = fVar33;
            *(float *)(iVar14 + 0x88) = fVar37;
            FUN_0036e9b8(param_2,(int)*(short *)(pbVar2 + 0x44),0);
            FUN_00367374(param_2,param_2 + 0x2298);
            FUN_0036e980(param_2,local_70,7);
            iVar14 = DAT_003b6d64;
            pbVar2[9] = 0;
            pbVar2[0x44] = 0;
            pbVar2[0x45] = 0;
            *(undefined2 *)(iVar14 + iVar13) = 0xfffb;
            sVar11 = *(short *)(*piVar6 + 0x110);
            fVar33 = (float)VectorSignedToFloat((int)sVar11,(byte)(in_fpscr >> 0x15) & 3);
            *(short *)(pbVar2 + 0x34) = (short)(int)(fVar31 / fVar33 + fVar30);
            pbVar2[0xb] = 0;
            fVar33 = (float)VectorSignedToFloat((int)sVar11,(byte)(in_fpscr >> 0x15) & 3);
            *(short *)(pbVar2 + 0x2e) = (short)(int)(fVar34 / fVar33 + fVar30);
            FUN_00316d74(param_2,0);
            *(undefined2 *)(DAT_003b6d3c + param_2) = 0;
          }
        }
      }
      else if (bVar8 == 100) {
        if (*(short *)(pbVar2 + 0x44) == 0) goto LAB_003b7118;
        FUN_0036c5bc(param_2);
        FUN_00367c48();
      }
      goto LAB_003b7084;
    }
    if ((pbVar2[10] == 0) && (iVar14 = FUN_00346964(param_2), iVar14 != 0)) {
      pbVar2[9] = 0x16;
      fVar33 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b635c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      pbVar2[10] = (byte)(int)(DAT_003b6d70 / fVar33 + fVar30);
      FUN_0036e980(param_2,local_70,0x1c);
      *(float *)(pbVar2 + 0x110) = fVar3;
    }
  }
LAB_003b7084:
  if (*(short *)(pbVar2 + 0x44) != 0) {
    FUN_00367b14(param_2,(int)*(short *)(pbVar2 + 0x44),DAT_003b6d60 + 0xc);
    fVar33 = DAT_003b6d50;
    FUN_00373500(DAT_003b6d50,DAT_003b6d50,uVar28,DAT_003b71a0);
    fVar34 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(pfVar20[-2] == fVar34 + fVar33) << 0x1e |
               (uint)(fVar34 + fVar33 <= pfVar20[-2]) << 0x1d;
    bVar8 = (byte)(in_fpscr >> 0x18);
    if ((bool)(bVar8 >> 5 & 1) && !(bool)(bVar8 >> 6)) {
      FUN_00316d74(param_2,0);
      bVar8 = 0;
      *(undefined2 *)(DAT_003b6d3c + param_2) = 0;
    }
    else {
      FUN_00316d74(param_2,1);
      if (pbVar2[0xe] == 0) {
        *(undefined2 *)(DAT_003b6d3c + param_2) = 0xffd2;
      }
      else {
        *(undefined2 *)(param_2 + 0x320e) = 0xff4e;
      }
      bVar8 = 1;
    }
    pbVar2[8] = bVar8;
  }
LAB_003b7118:
  pfVar20 = DAT_003b71a8;
  fVar33 = DAT_003b71a4;
  fVar34 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
  uVar15 = in_fpscr & 0xfffffff | (uint)(fVar34 - fVar26 <= *(float *)(iVar13 + 0x84)) << 0x1d;
  bVar23 = SUB41(uVar15 >> 0x1d,0);
  if (!bVar23) {
    uVar15 = in_fpscr & 0xfffffff |
             (uint)(*(float *)(iVar13 + 0x84) + fVar26 <= *(float *)(iVar13 + 0x2c)) << 0x1d;
    bVar23 = SUB41(uVar15 >> 0x1d,0);
  }
  if (((!bVar23) && (0x3f800000 < *(int *)(iVar13 + 0x6c))) &&
     ((*(uint *)(local_6c + 0xbf4) & 1) == 0)) {
    local_d8 = (float)FUN_003738a8(fVar35);
    local_d8 = local_d8 + *(float *)(iVar13 + 0x28);
    local_d0 = (float)FUN_003738a8(fVar35);
    local_d0 = local_d0 + *(float *)(iVar13 + 0x30);
    local_d4 = *(float *)(iVar13 + 0x84) + fVar33;
    pfVar22 = *(float **)(local_6c + 0xc28);
    local_e4 = fVar3;
    local_e0 = fVar19;
    local_dc = fVar3;
    sVar11 = 0;
    do {
      if (*(char *)(pfVar22 + 9) == '\0') {
        *(undefined1 *)(pfVar22 + 9) = 3;
        uVar28 = DAT_003b755c;
        *pfVar22 = local_d8;
        pfVar22[1] = local_d4;
        pfVar22[2] = local_d0;
        fVar34 = pfVar20[1];
        fVar37 = pfVar20[2];
        pfVar22[3] = *pfVar20;
        pfVar22[4] = fVar34;
        pfVar22[5] = fVar37;
        pfVar22[6] = fVar3;
        pfVar22[7] = fVar19;
        pfVar22[8] = fVar3;
        *(undefined2 *)((int)pfVar22 + 0x2a) = 0xff;
        fVar37 = (float)FUN_00371e50(uVar28);
        fVar34 = DAT_003b7560;
        *(char *)((int)pfVar22 + 0x25) = (char)(int)fVar37;
        pfVar22[0xc] = fVar30;
        pfVar22[0xd] = fVar30 * fVar34;
        break;
      }
      sVar11 = sVar11 + 1;
      pfVar22 = pfVar22 + 0x10;
    } while (sVar11 < 0x5a);
  }
  fVar30 = DAT_003b7578;
  uVar16 = DAT_003b7574;
  uVar28 = DAT_003b7570;
  fVar35 = DAT_003b756c;
  fVar37 = DAT_003b7564;
  fVar34 = DAT_003b7560;
  fVar25 = *(float *)(iVar13 + 0x84);
  iVar14 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
  fVar31 = (float)VectorSignedToFloat(iVar14,(byte)(uVar15 >> 0x15) & 3);
  uVar24 = uVar15 & 0xfffffff | (uint)(fVar31 <= fVar25) << 0x1d;
  if (!SUB41(uVar24 >> 0x1d,0)) {
    fVar31 = (float)VectorSignedToFloat(iVar14,(byte)(uVar24 >> 0x15) & 3);
    fVar31 = fVar31 - DAT_003b7564;
    uVar15 = uVar15 & 0xfffffff | (uint)(fVar25 < fVar31) << 0x1f | (uint)(fVar25 == fVar31) << 0x1e
    ;
    uVar24 = uVar15 | (uint)(NAN(fVar25) || NAN(fVar31)) << 0x1c;
    bVar8 = (byte)(uVar15 >> 0x18);
    if (((!(bool)(bVar8 >> 6 & 1) && bVar8 >> 7 == ((byte)(uVar24 >> 0x1c) & 1)) &&
        (DAT_003b7568 <= *(int *)(iVar13 + 0x6c))) && ((*(uint *)(local_6c + 0xbf4) & 3) == 0)) {
      sVar11 = 0;
      do {
        fVar25 = (float)FUN_00371e50(fVar35);
        fVar25 = fVar25 + fVar35;
        uVar27 = FUN_00371e50(uVar16);
        local_e4 = (float)FUN_003727f0();
        local_e4 = local_e4 * fVar25;
        local_dc = (float)FUN_00372674(uVar27);
        local_dc = local_dc * fVar25;
        local_e0 = (float)FUN_00371e50(fVar26);
        local_e0 = local_e0 + fVar34;
        local_d8 = *(float *)(iVar13 + 0x28) + local_e4 * fVar34;
        local_d4 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(uVar24 >> 0x15) & 3);
        local_d0 = *(float *)(iVar13 + 0x30) + local_dc * fVar34;
        fVar25 = (float)FUN_00371e50(uVar28);
        FUN_00346ab4(fVar25 + fVar30,0,*(undefined4 *)(local_6c + 0xc28),&local_d8,&local_e4);
        sVar11 = sVar11 + 1;
      } while (sVar11 < 10);
    }
  }
  if (1 < pbVar2[0xf]) {
    pbVar2[0xf] = pbVar2[0xf] - 1;
  }
  if (pbVar2[0xf] == 1) {
    uVar38 = FUN_003769d8(param_2 + 0x28a0);
    bVar23 = (int)uVar38 == 0;
    if (bVar23) {
      uVar38 = CONCAT44(DAT_003b757c,*(undefined4 *)(pbVar2 + 0x58));
    }
    if (bVar23 && (int)((ulonglong)uVar38 >> 0x20) == (int)uVar38 * 0x100000) {
      pbVar2[0xf] = 200;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  fVar34 = DAT_003b7584;
  uVar28 = VectorUnsignedToFloat((uint)*pbVar2,(byte)(uVar24 >> 0x15) & 3);
  FUN_00373500(uVar28,DAT_003b7584,fVar19,DAT_003b7588);
  fVar35 = *(float *)(pbVar2 + 0x48);
  uVar15 = uVar24 & 0xfffffff | (uint)(fVar35 < fVar3) << 0x1f | (uint)(fVar35 == fVar3) << 0x1e;
  uVar24 = uVar15 | (uint)(NAN(fVar35) || NAN(fVar3)) << 0x1c;
  bVar8 = (byte)(uVar15 >> 0x18);
  if (!(bool)(bVar8 >> 6 & 1) && bVar8 >> 7 == ((byte)(uVar24 >> 0x1c) & 1)) {
    fVar29 = DAT_003b758c + fVar35 * fVar29;
    if (DAT_003b7590 < (int)fVar29) {
      fVar29 = DAT_003b7594;
    }
    FUN_00373500(fVar29,fVar34,DAT_003b7570,DAT_003b7598);
  }
  iVar13 = DAT_003b75a0;
  fVar29 = (fVar37 - *(float *)(pbVar2 + 0x48)) * DAT_003b759c;
  uVar15 = uVar24 & 0xfffffff | (uint)(fVar3 <= fVar29) << 0x1d;
  if (!SUB41(uVar15 >> 0x1d,0)) {
    fVar29 = fVar3;
  }
  FUN_00373500(fVar29,fVar34,fVar33,DAT_003b75a0 + 8);
  if (*(int *)(iVar13 + 8) < DAT_003b75a4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x77,0x3b752c);
    (*pcVar1)();
  }
  if (*pbVar2 == 0) {
    FUN_0036fc20(fVar34,DAT_003b7560,DAT_003b75b0);
  }
  else {
    FUN_00373500(DAT_003b75ac,fVar34,DAT_003b7560,DAT_003b75b0);
  }
  uVar10 = (undefined2)(int)*(float *)(pbVar2 + 0x4c);
  *(undefined2 *)(param_2 + 0x3206) = uVar10;
  *(undefined2 *)(param_2 + 0x3204) = uVar10;
  *(undefined2 *)(param_2 + 0x3202) = uVar10;
  uVar24 = VectorFloatToUnsigned(*(undefined4 *)(pbVar2 + 0x48),3);
  if ((uVar24 & 0xff) != 0) {
    FUN_0036c5bc(param_2,0);
    fVar33 = DAT_003b77bc;
    uVar17 = FUN_00368fec();
    uVar27 = DAT_003b77d4;
    iVar13 = DAT_003b77d0;
    fVar35 = DAT_003b77cc;
    fVar37 = DAT_003b77c8;
    uVar16 = DAT_003b77c4;
    uVar28 = DAT_003b755c;
    iVar14 = 0;
    fVar29 = (float)VectorSignedToFloat(uVar17,(byte)(uVar15 >> 0x15) & 3);
    fVar29 = fVar29 * DAT_003b77c0;
    uVar15 = VectorFloatToUnsigned(*(undefined4 *)(pbVar2 + 0x48),3);
    if ((uVar15 & 0xff) != 0) {
      do {
        sVar11 = (short)iVar14;
        local_d8 = (float)FUN_003738a8(uVar16);
        local_d8 = local_d8 + *(float *)(param_2 + 0x1b8);
        fVar30 = (float)FUN_00371e50(uVar28);
        local_d4 = (fVar30 + fVar37) - fVar35;
        local_d0 = (float)FUN_003738a8(uVar16);
        local_d0 = local_d0 + *(float *)(param_2 + 0x1c0);
        if ((int)local_d0 < iVar13) {
          FUN_00368cc0(param_2,&local_d8,&local_e4,DAT_003b77d8);
          if (local_dc < fVar3) {
            sVar11 = sVar11 + -1;
          }
          else {
            local_f0 = fVar3;
            local_ec = fVar3;
            pfVar22 = (float *)(*(int *)(local_6c + 0xc28) + 0x780);
            local_e8 = uVar27;
            sVar12 = 0x1e;
            do {
              if (*(char *)(pfVar22 + 9) == '\0') {
                *(undefined1 *)(pfVar22 + 9) = 5;
                *pfVar22 = local_d8;
                pfVar22[1] = local_d4;
                pfVar22[2] = local_d0;
                fVar30 = pfVar20[1];
                fVar19 = pfVar20[2];
                pfVar22[6] = *pfVar20;
                pfVar22[7] = fVar30;
                pfVar22[8] = fVar19;
                pfVar22[0xd] = fVar33;
                pfVar22[0xe] = fVar34;
                pfVar22[0xf] = fVar34 + fVar29;
                FUN_003735e8(fVar34,&local_120,0);
                FUN_00369014(fVar33,&local_120,1);
                FUN_003735ac(pfVar22 + 3,&local_120,&local_f0);
                break;
              }
              sVar12 = sVar12 + 1;
              pfVar22 = pfVar22 + 0x10;
            } while (sVar12 < 0x82);
          }
        }
        uVar15 = VectorFloatToUnsigned(*(undefined4 *)(pbVar2 + 0x48),3);
        iVar14 = (int)(short)(sVar11 + 1);
      } while (iVar14 < (int)(uVar15 & 0xff));
    }
  }
  local_120 = DAT_003b6818;
  uStack_11c = DAT_003b6814;
  FUN_0037547c(DAT_003b77e0,DAT_003b77dc,4,DAT_003b6818);
  return;
}
