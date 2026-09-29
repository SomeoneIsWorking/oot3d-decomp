// OoT3D decomp @ 0011e508  name=FUN_0011e508  size=5892

void FUN_0011e508(int param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  short sVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint in_fpscr;
  float fVar23;
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
  undefined4 local_e0;
  undefined4 uStack_dc;
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
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  int local_6c;
  int local_68;

  fVar33 = DAT_0011e844;
  fVar28 = DAT_0011e840;
  fVar3 = DAT_0011e83c;
  local_68 = param_2 + 0x2000;
  iVar16 = *(int *)(param_2 + 0x20ac);
  *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0x204) + DAT_0011e83c;
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x208) + fVar3;
  *(float *)(param_1 + 0x210) = *(float *)(param_1 + 0x210) + fVar28;
  FUN_00373500(DAT_0011e848,param_1 + 0x1fc);
  local_6c = param_1 + 0xf00;
  if (*(short *)(param_1 + 0xfb8) != 0) {
    if (99 < *(short *)(param_1 + 0xfb8)) {
      FUN_00118a70(param_1,param_2);
      return;
    }
    FUN_00152b30();
    if (*(short *)(param_1 + 0x1b0) == 0x14) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
  }
  uVar4 = DAT_0011e860;
  uVar24 = DAT_0011e85c;
  fVar3 = DAT_0011e84c;
  uVar15 = DAT_0011e858;
  uVar22 = DAT_0011e858;
  if (*(ushort *)(param_1 + 0x1b0) < 10) {
    fVar23 = *(float *)(param_1 + 0x2c);
    fVar29 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    uVar13 = in_fpscr & 0xfffffff;
    uVar12 = uVar13 | (uint)(fVar23 < fVar29) << 0x1f | (uint)(fVar23 == fVar29) << 0x1e;
    in_fpscr = uVar12 | (uint)(NAN(fVar23) || NAN(fVar29)) << 0x1c;
    bVar2 = (byte)(uVar12 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar23 = *(float *)(param_1 + 100);
      uVar13 = uVar13 | (uint)(fVar23 < DAT_0011e84c) << 0x1f |
               (uint)(fVar23 == DAT_0011e84c) << 0x1e;
      in_fpscr = uVar13 | (uint)(NAN(fVar23) || NAN(DAT_0011e84c)) << 0x1c;
      bVar2 = (byte)(uVar13 >> 0x18);
      uVar15 = DAT_0011e854;
      uVar22 = DAT_0011e850;
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        uVar15 = DAT_0011e850;
        uVar22 = DAT_0011e854;
      }
    }
  }
  FUN_00373500(uVar15,DAT_0011e860,DAT_0011e85c,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  FUN_00373500(uVar22,uVar4,uVar24,param_1 + 0x58);
  fVar23 = DAT_0011e864;
  uVar10 = FUN_003658b8(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1be) = uVar10;
  local_70 = FUN_003658b8(fVar3,param_1 + 0x28);
  local_70 = local_70 & 0xff;
  fVar29 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar13 = in_fpscr | (uint)(fVar29 - DAT_0011e868 <= *(float *)(iVar16 + 0x2c)) << 0x1d;
  if ((!SUB41(uVar13 >> 0x1d,0)) && (*(ushort *)(param_1 + 0x1b0) < 2)) {
    *(undefined2 *)(param_1 + 0x1b0) = 2;
    *(float *)(param_1 + 0x6c) = fVar3;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
  }
  uVar4 = DAT_0011e88c;
  fVar9 = DAT_0011e888;
  fVar8 = DAT_0011e884;
  fVar7 = DAT_0011e880;
  fVar6 = DAT_0011e87c;
  fVar5 = DAT_0011e878;
  fVar32 = DAT_0011e874;
  fVar29 = DAT_0011e870;
  uVar24 = DAT_0011e86c;
  sVar20 = *(short *)(param_1 + 0x1b0);
  pfVar19 = (float *)(param_1 + 0x28);
  if (sVar20 == 1) {
    sVar20 = *(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0);
    if (sVar20 == 0x66 || sVar20 == 10) {
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(undefined2 *)(param_1 + 0x1d6) = 0x69;
    }
    if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 100) {
      *(undefined2 *)(param_1 + 0x1b0) = 10;
      *(undefined2 *)(param_1 + 0x1bc) = 0;
      *(undefined2 *)(param_1 + 0x1d6) = 0;
    }
    if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 2) {
      *(undefined2 *)(param_1 + 0x1b0) = 10;
      *(undefined2 *)(param_1 + 0x1bc) = 0;
      *(undefined2 *)(param_1 + 0x1d6) = 0;
      *(float *)(param_1 + 0x6c) = fVar3;
      goto LAB_0011e93c;
    }
    goto LAB_0011e930;
  }
  if (sVar20 < 2) {
    if ((sVar20 == -0xb || sVar20 == -10) || (sVar20 != 0)) goto LAB_0011e930;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    if (*(short *)(param_1 + 0x1d6) == 0) {
      sVar20 = *(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0);
      if (sVar20 == 10 || sVar20 == 0) {
        fVar30 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(uVar13 >> 0x15) & 3);
        uVar13 = in_fpscr | (uint)(fVar30 <= *(float *)(param_1 + 0x2c)) << 0x1d;
        if (!SUB41(uVar13 >> 0x1d,0)) {
          *(float *)(param_1 + 0x6c) = fVar3;
          *(undefined2 *)(param_1 + 0x1b0) = 1;
          if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 10) {
            *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0xb;
            *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = 0x69;
            *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0xbe) =
                 *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x92);
            goto LAB_0011e930;
          }
        }
      }
      goto LAB_0011e93c;
    }
    goto LAB_0011eaa8;
  }
  if (sVar20 == 2) {
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(uVar13 >> 0x15) & 3);
    in_fpscr = in_fpscr | (uint)(*(float *)(iVar16 + 0x2c) < fVar30) << 0x1f;
    uVar13 = in_fpscr | (uint)(NAN(*(float *)(iVar16 + 0x2c)) || NAN(fVar30)) << 0x1c;
    if ((byte)(in_fpscr >> 0x1f) == ((byte)(uVar13 >> 0x1c) & 1)) {
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(float *)(param_1 + 0x6c) = fVar3;
    }
LAB_0011e930:
    if (*(short *)(param_1 + 0x1d6) == 0) {
LAB_0011e93c:
      sVar20 = *(short *)(param_1 + 0x1b0);
      if (sVar20 != 10) {
        if (sVar20 == 0xb) {
          sVar20 = *(short *)(param_1 + 0x1bc) + -1;
          *(short *)(param_1 + 0x1bc) = sVar20;
          if (sVar20 < 1) {
            *(undefined2 *)(param_1 + 0x1b0) = 1;
            *(undefined2 *)(param_1 + 0x1d6) = 0x96;
            *(float *)(param_1 + 0xdc0) = fVar3;
            *(float *)(param_1 + 0x6c) = fVar3;
          }
          *(undefined2 *)(param_1 + 0x1d6) = 0;
        }
        else if (sVar20 == 0x15) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + 1;
          fVar30 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1b2) * 0x500));
          sVar11 = *(short *)(param_1 + 0x1bc);
          sVar20 = (short)(int)(fVar30 * fVar33);
          if (sVar20 + 0xf < (int)sVar11) {
            sVar11 = sVar20 + 0xf;
          }
          *(short *)(param_1 + 0x1bc) = sVar11;
          if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) != 0) goto LAB_0011e9bc;
        }
        goto LAB_0011eaa8;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + 1;
      if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 2) {
        fVar30 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1b2) * 0x300));
        sVar11 = *(short *)(param_1 + 0x1bc);
        sVar20 = (short)(int)(fVar30 * fVar33 * fVar8 * DAT_0011ed08);
        if (sVar20 + 0xf < (int)sVar11) {
          sVar11 = sVar20 + 0xf;
        }
        *(short *)(param_1 + 0x1bc) = sVar11;
        if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 2) goto LAB_0011eaa8;
      }
      if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 100) goto LAB_0011eaa8;
LAB_0011e9bc:
      *(undefined2 *)(param_1 + 0x1b0) = 0xb;
      *(undefined2 *)(param_1 + 0x1d6) = 0;
    }
    else {
LAB_0011eaa8:
      if (*(short *)(param_1 + 0x1b0) < 10) goto LAB_0011ec4c;
    }
    if (*(short *)(param_1 + 0x1bc) < 0) {
      uVar10 = 0;
LAB_0011ead0:
      *(undefined2 *)(param_1 + 0x1bc) = uVar10;
    }
    else if (0x28 < *(short *)(param_1 + 0x1bc)) {
      uVar10 = 0x28;
      goto LAB_0011ead0;
    }
    uVar15 = DAT_0011ed18;
    iVar16 = DAT_0011ed14;
    iVar14 = (int)*(short *)(*(int *)(param_2 + 0x7f68) + 0x1c2) +
             *(short *)(param_1 + 0x1bc) * -2 + 300;
    lVar1 = (longlong)DAT_0011ed0c * (longlong)iVar14;
    iVar17 = -5;
    fVar30 = *(float *)(*(int *)(param_2 + 0x7f68) +
                       (short)((short)iVar14 +
                              ((short)(int)(lVar1 >> 0x25) - (short)(lVar1 >> 0x3f)) * -300) * 4 +
                       0x250);
    fVar31 = *(float *)(DAT_0011ed10 + *(short *)(param_1 + 0x1bc) * 4);
    do {
      uVar12 = (uint)(short)(*(short *)(param_1 + 0x1bc) + (short)iVar17 + -2);
      if (uVar12 < 0x29) {
        FUN_00373500(fVar30 * fVar31 + *(float *)(iVar16 + iVar17 * 4 + 0x14) * fVar9,uVar15,uVar24,
                     *(int *)(param_2 + 0x7f68) + DAT_0011ed1c + uVar12 * 0xc);
      }
      iVar14 = DAT_0011ed24;
      iVar17 = (int)(short)((short)iVar17 + 1);
    } while (iVar17 < 6);
    iVar16 = (int)*(short *)(param_1 + 0x1bc);
    uVar24 = *(undefined4 *)(*(int *)(param_2 + 0x7f68) + DAT_0011ed20 + iVar16 * 0xc);
    *(undefined4 *)(param_1 + 0x22c) = uVar24;
    fVar30 = *(float *)(*(int *)(param_2 + 0x7f68) + iVar14 + iVar16 * 0xc);
    *(float *)(param_1 + 0x230) = fVar30;
    if (iVar16 < 2) {
      fVar30 = fVar30 - fVar6;
    }
    *(undefined4 *)(param_1 + 0x234) =
         *(undefined4 *)(*(int *)(param_2 + 0x7f68) + iVar16 * 0xc + 0xdd0);
    if (iVar16 < 2) {
      *(float *)(param_1 + 0x230) = fVar30;
    }
    FUN_00373500(uVar24,fVar32,*(undefined4 *)(param_1 + 0x6c),param_1 + 0x28);
    FUN_00373500(*(undefined4 *)(param_1 + 0x230),fVar32,*(undefined4 *)(param_1 + 0x6c),
                 param_1 + 0x2c);
    FUN_00373500(*(undefined4 *)(param_1 + 0x234),fVar32,*(undefined4 *)(param_1 + 0x6c),
                 param_1 + 0x30);
    FUN_00373500(fVar29,fVar28,fVar28,param_1 + 0x6c);
  }
  else {
    if (sVar20 != 5) goto LAB_0011e930;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    if (*(short *)(param_1 + 0x1d6) == 0) {
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(undefined2 *)(param_1 + 0x1d6) = 0x2d;
    }
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(uVar13 >> 0x15) & 3);
    uVar13 = in_fpscr | (uint)(fVar30 <= *(float *)(param_1 + 0x2c)) << 0x1d;
    if (SUB41(uVar13 >> 0x1d,0)) goto LAB_0011e930;
    *(undefined2 *)(param_1 + 0x1b0) = 1;
    *(undefined2 *)(param_1 + 0x1d6) = 0x4b;
    *(float *)(param_1 + 0x6c) = fVar3;
LAB_0011ec4c:
    fVar30 = DAT_0011ed28;
    if (*(short *)(param_1 + 0x1b0) == 0) {
      local_74 = fVar7;
      fVar31 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1b4) << 0xb));
      fVar25 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x1b4) << 0xb));
      FUN_00373500(*(float *)(*(int *)(param_2 + 0x7f68) + 0x22c) + fVar31 * fVar5,local_74,
                   *(undefined4 *)(param_1 + 0x6c),param_1 + 0x28);
      FUN_00373500(*(float *)(*(int *)(param_2 + 0x7f68) + 0x234) + fVar25 * fVar5,local_74,
                   *(undefined4 *)(param_1 + 0x6c),param_1 + 0x30);
      FUN_00373500(fVar33,fVar28,fVar32,param_1 + 0x6c);
LAB_0011eca8:
      if (*(short *)(param_1 + 0x1b0) == 0 || *(short *)(param_1 + 0x1b0) == 5) {
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar28;
        FUN_00376340(DAT_0011ed2c,fVar6,fVar5,param_2,param_1,1);
        uVar24 = DAT_0011ed30;
        local_84 = fVar3;
        sVar20 = 0;
        local_88 = fVar3;
        local_8c = fVar3;
        do {
          local_80 = (float)FUN_003738a8(fVar6);
          local_80 = local_80 + *(float *)(param_1 + 0x28);
          local_7c = (float)FUN_003738a8(fVar6);
          local_7c = local_7c + *(float *)(param_1 + 0x2c);
          local_78 = (float)FUN_003738a8(fVar6);
          local_78 = local_78 + *(float *)(param_1 + 0x30);
          fVar29 = (float)FUN_00371e50(uVar24);
          FUN_003673d8(fVar29 + fVar7,3,*(undefined4 *)(param_2 + 0x5c28),&local_80,&local_8c);
          uVar15 = DAT_0011f1e8;
          sVar20 = sVar20 + 1;
        } while (sVar20 < 1);
        if (local_70 == 0) {
          fVar29 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(uVar13 >> 0x15) & 3);
          uVar13 = uVar13 & 0xfffffff | (uint)(fVar29 <= *(float *)(param_1 + 0x2c)) << 0x1d;
          if (!SUB41(uVar13 >> 0x1d,0)) {
            iVar16 = FUN_003658b8(fVar30,param_1 + 0x28);
            if (iVar16 == 0) {
              *(undefined4 *)(param_1 + 100) = uVar15;
            }
            else {
              *(float *)(param_1 + 100) = fVar23;
            }
            fVar29 = *(float *)(param_1 + 0x2c) + fVar23;
            fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(uVar13 >> 0x15) & 3);
            uVar12 = uVar13 & 0xfffffff | (uint)(fVar29 < fVar32) << 0x1f;
            uVar13 = uVar12 | (uint)(NAN(fVar29) || NAN(fVar32)) << 0x1c;
            if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar13 >> 0x1c) & 1)) {
              FUN_00375bcc(param_1,DAT_0011f204);
            }
          }
        }
        else if ((int)*(float *)(param_1 + 0x2c) <= DAT_0011f1ec) {
          *(float *)(param_1 + 0x2c) = fVar33;
          *(undefined4 *)(param_1 + 100) = DAT_0011f1f0;
          if (*(short *)(param_1 + 0x1d8) == 0) {
            *(undefined2 *)(param_1 + 0x1d8) = 2;
            FUN_00375bcc(param_1,DAT_0011f1f4);
            fVar29 = DAT_0011f1fc;
            uVar24 = DAT_0011f1f8;
            sVar20 = 0;
            do {
              local_8c = (float)FUN_003738a8(uVar4);
              local_88 = (float)FUN_00371e50(fVar8);
              local_88 = local_88 + fVar9;
              local_84 = (float)FUN_003738a8(uVar4);
              local_7c = *(float *)(param_1 + 0x2c);
              local_80 = *pfVar19 + local_8c;
              local_78 = *(float *)(param_1 + 0x30) + local_84;
              fVar32 = (float)FUN_00371e50(uVar24);
              FUN_003673d8(fVar32 + fVar29,3,*(undefined4 *)(param_2 + 0x5c28),&local_80,&local_8c);
              sVar20 = sVar20 + 1;
            } while (sVar20 < 10);
            local_84 = fVar3;
            local_88 = fVar3;
            local_8c = fVar3;
            local_80 = *pfVar19;
            local_78 = *(float *)(param_1 + 0x30);
            local_7c = fVar3;
            FUN_003673d8(DAT_0011f200,3,*(undefined4 *)(param_2 + 0x5c28),&local_80,&local_8c);
          }
          else if (*(short *)(param_1 + 0x1d8) == 1) {
            *(undefined4 *)(param_1 + 100) = uVar15;
          }
        }
        goto LAB_0011f480;
      }
    }
    else if (*(short *)(param_1 + 0x1b0) == 5) {
      fVar31 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x60) = fVar31 * *(float *)(param_1 + 0x6c);
      fVar31 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      fVar31 = fVar31 * *(float *)(param_1 + 0x6c);
      *(float *)(param_1 + 0x68) = fVar31;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar31;
      goto LAB_0011eca8;
    }
    fVar31 = DAT_0011f208;
    sVar20 = *(short *)(param_1 + 0x1b0);
    if (-1 < sVar20) {
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(uVar13 >> 0x15) & 3);
      uVar13 = uVar13 & 0xfffffff | (uint)(fVar25 <= *(float *)(param_1 + 0x2c)) << 0x1d;
      if (SUB41(uVar13 >> 0x1d,0)) {
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar28;
      }
      else {
        if (sVar20 == 1) {
          *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x22c);
          *(float *)(param_1 + 0x230) = *(float *)(*(int *)(param_2 + 0x7f68) + 0x2c) - fVar30;
          *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x234);
          FUN_00373500(fVar33,fVar28,fVar32,param_1 + 0x6c);
        }
        else if (sVar20 == 2) {
          if (*(short *)(param_1 + 0x1c0) == 0) {
            uVar15 = *(undefined4 *)(iVar16 + 0x2c);
            uVar22 = *(undefined4 *)(iVar16 + 0x30);
            *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(iVar16 + 0x28);
            *(undefined4 *)(param_1 + 0x230) = uVar15;
            *(undefined4 *)(param_1 + 0x234) = uVar22;
            *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x230) + fVar29;
            local_a4 = fVar3;
            local_a0 = fVar3;
            local_9c = fVar5;
            fVar30 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0x36),
                                                (byte)(uVar13 >> 0x15) & 3);
            FUN_003735e8(fVar30 * fVar31 * DAT_0011f20c,&local_e0,0);
            FUN_003735ac(&local_b0,&local_e0,&local_a4);
            *(float *)(param_1 + 0x22c) = *(float *)(iVar16 + 0x28) + local_b0;
            *(float *)(param_1 + 0x230) = *(float *)(iVar16 + 0x2c) + fVar29;
            *(float *)(param_1 + 0x234) = *(float *)(iVar16 + 0x30) + local_a8;
            FUN_00373500(fVar33,fVar28,fVar28,param_1 + 0x6c);
            uVar15 = DAT_0011f210;
            if (*(short *)(param_1 + 0x1d6) == 0) {
              *(undefined2 *)(param_1 + 0x1c0) = 1;
              fVar30 = (float)FUN_00371e50(uVar15);
              if ((short)(int)fVar30 + 0x32 < 1) {
                fVar30 = (float)FUN_00371e50(uVar15);
                fVar30 = (float)VectorSignedToFloat((short)(int)fVar30 + 0x32,
                                                    (byte)(uVar13 >> 0x15) & 3);
                uVar10 = (undefined2)(int)(fVar30 * fVar9 * fVar32 - fVar32);
              }
              else {
                fVar30 = (float)FUN_00371e50(uVar15);
                fVar30 = (float)VectorSignedToFloat((short)(int)fVar30 + 0x32,
                                                    (byte)(uVar13 >> 0x15) & 3);
                uVar10 = (undefined2)(int)(fVar32 + fVar30 * fVar9 * fVar32);
              }
              *(undefined2 *)(param_1 + 0x1d6) = uVar10;
            }
          }
          else if ((*(short *)(param_1 + 0x1c0) == 1) &&
                  (FUN_00373500(fVar28,fVar28,fVar32,param_1 + 0x6c),
                  *(short *)(param_1 + 0x1d6) == 0)) {
            *(undefined2 *)(param_1 + 0x1c0) = 0;
            fVar30 = (float)FUN_00371e50(fVar6);
            if ((short)(int)fVar30 + 0x14 < 1) {
              fVar30 = (float)FUN_00371e50(fVar6);
              fVar30 = (float)VectorSignedToFloat((short)(int)fVar30 + 0x14,
                                                  (byte)(uVar13 >> 0x15) & 3);
              fVar32 = fVar30 * fVar9 * fVar32 - fVar32;
            }
            else {
              fVar30 = (float)FUN_00371e50(fVar6);
              fVar30 = (float)VectorSignedToFloat((short)(int)fVar30 + 0x14,
                                                  (byte)(uVar13 >> 0x15) & 3);
              fVar32 = fVar32 + fVar30 * fVar9 * fVar32;
            }
            uVar15 = DAT_0011f650;
            *(short *)(param_1 + 0x1d6) = (short)(int)fVar32;
            FUN_00375bcc(param_1,uVar15);
          }
        }
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),
                                            (byte)(uVar13 >> 0x15) & 3);
        fVar32 = (float)FUN_002cfca0((int)(short)(int)(fVar32 * DAT_0011f654));
        *(float *)(param_1 + 0x22c) = *(float *)(param_1 + 0x22c) + fVar32 * fVar29;
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),
                                            (byte)(uVar13 >> 0x15) & 3);
        fVar32 = (float)FUN_002cfca0((int)(short)(int)(fVar32 * DAT_0011f658));
        *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x230) + fVar32 * fVar29;
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),
                                            (byte)(uVar13 >> 0x15) & 3);
        fVar32 = (float)FUN_002cfca0((int)(short)(int)(fVar32 * DAT_0011f65c));
        uVar15 = DAT_0011f660;
        fVar31 = *(float *)(param_1 + 0x234) + fVar32 * fVar29;
        *(float *)(param_1 + 0x234) = fVar31;
        *(undefined4 *)(param_1 + 0xdbc) = uVar24;
        *(undefined4 *)(param_1 + 0xdc0) = uVar15;
        fVar26 = *(float *)(param_1 + 0x22c) - *(float *)(param_1 + 0x28);
        fVar32 = *(float *)(param_1 + 0x230);
        fVar25 = *(float *)(param_1 + 0x2c);
        fVar31 = fVar31 - *(float *)(param_1 + 0x30);
        fVar30 = (float)FUN_003696ec(fVar26,fVar31);
        fVar29 = DAT_0011f664;
        fVar30 = (float)VectorSignedToFloat((int)(short)(int)(fVar30 * DAT_0011f664),
                                            (byte)(uVar13 >> 0x15) & 3);
        fVar32 = (float)FUN_003696ec(fVar32 - fVar25,SQRT(fVar26 * fVar26 + fVar31 * fVar31));
        fVar29 = (float)VectorSignedToFloat((int)(short)(int)(fVar32 * fVar29),
                                            (byte)(uVar13 >> 0x15) & 3);
        FUN_00370084(param_1 + 0x36,(int)(short)(int)fVar30,
                     (int)(short)(int)*(float *)(param_1 + 0xdbc),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        FUN_00370084(param_1 + 0x34,(int)(short)(int)fVar29,
                     (int)(short)(int)*(float *)(param_1 + 0xdbc),
                     (int)(short)(int)*(float *)(param_1 + 0xdc0));
        FUN_00365860(param_1);
      }
      FUN_0036b96c(param_1);
      if ((uint)DAT_0011f668 < (uint)*(float *)(param_1 + 0x2c)) {
        uVar24 = 5;
      }
      else {
        uVar24 = 1;
      }
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar6;
      FUN_00376340(DAT_0011f210,fVar6,fVar5,param_2,param_1,uVar24);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar6;
    }
  }
LAB_0011f480:
  fVar29 = DAT_0011f66c;
  iVar16 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
  fVar32 = (float)VectorSignedToFloat(iVar16,(byte)(uVar13 >> 0x15) & 3);
  uVar12 = uVar13 & 0xfffffff | (uint)(fVar32 <= *(float *)(param_1 + 0x2c)) << 0x1d;
  if (!SUB41(uVar12 >> 0x1d,0)) {
    fVar32 = (float)VectorSignedToFloat(iVar16,(byte)(uVar12 >> 0x15) & 3);
    uVar13 = uVar13 & 0xfffffff | (uint)(*(float *)(param_1 + 0x10c) < fVar32) << 0x1f;
    uVar12 = uVar13 | (uint)(NAN(*(float *)(param_1 + 0x10c)) || NAN(fVar32)) << 0x1c;
    if ((byte)(uVar13 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
      if (DAT_0011f670 < *(uint *)(param_1 + 100)) {
        FUN_00375bcc(param_1,DAT_0011f204);
      }
      else {
        FUN_00375bcc(param_1,DAT_0011f674);
      }
      fVar31 = DAT_0011f688;
      fVar30 = DAT_0011f684;
      fVar32 = DAT_0011f680;
      if ((*(short *)(param_1 + 0x1dc) == 0) &&
         (((iVar16 = *(int *)(param_2 + 0x7f68), *(int *)(iVar16 + 0x1f8) <= DAT_0011f678 ||
           (DAT_0011f67c <= (int)ABS(*(float *)(param_1 + 0x28) - *(float *)(iVar16 + 0x28)))) ||
          (DAT_0011f67c <= (int)ABS(*(float *)(param_1 + 0x30) - *(float *)(iVar16 + 0x30)))))) {
        iVar16 = 0;
        *(undefined2 *)(param_1 + 0x1dc) = 0xc;
        do {
          fVar25 = (float)FUN_00371e50(DAT_0011f68c);
          fVar26 = (float)FUN_00371e50(DAT_0011f690);
          fVar27 = (float)VectorSignedToFloat(iVar16,(byte)(uVar12 >> 0x15) & 3);
          local_8c = (float)FUN_002cfca0((int)(short)(int)(fVar25 + fVar27 * fVar30 * fVar29));
          local_8c = local_8c * (fVar26 + fVar32);
          fVar27 = (float)VectorSignedToFloat(iVar16,(byte)(uVar12 >> 0x15) & 3);
          local_84 = (float)FUN_00338f60((int)(short)(int)(fVar25 + fVar27 * fVar30 * fVar29));
          local_84 = local_84 * (fVar26 + fVar32);
          local_88 = (float)FUN_00371e50(DAT_0011f694);
          local_88 = local_88 + fVar9;
          local_80 = *pfVar19 + local_8c * fVar9;
          local_7c = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(uVar12 >> 0x15) & 3);
          local_78 = *(float *)(param_1 + 0x30) + local_84 * fVar9;
          fVar25 = (float)FUN_00371e50(DAT_0011f698);
          FUN_003673d8(fVar25 + fVar31,4,*(undefined4 *)(param_2 + 0x5c28),&local_80,&local_8c);
          uVar24 = DAT_0011fa84;
          iVar16 = (int)(short)((short)iVar16 + 1);
        } while (iVar16 < 10);
        local_80 = *pfVar19;
        local_78 = *(float *)(param_1 + 0x30);
        local_7c = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(uVar12 >> 0x15) & 3);
        local_e0 = 1;
        FUN_00365768(fVar5,DAT_0011fa88,*(undefined4 *)(param_2 + 0x5c28),&local_80,100,DAT_0011fa84
                    );
        local_e0 = 1;
        FUN_00365768(DAT_0011fa90,DAT_0011fa8c,*(undefined4 *)(param_2 + 0x5c28),&local_80,0x46,
                     uVar24);
        local_e0 = 1;
        FUN_00365768(fVar3,DAT_0011fa94,*(undefined4 *)(param_2 + 0x5c28),&local_80,0x32,uVar24);
      }
    }
  }
  fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2
                                                     ),(byte)(uVar12 >> 0x15) & 3);
  uVar13 = uVar12 & 0xfffffff | (uint)(fVar32 <= *(float *)(param_1 + 0x2c)) << 0x1d;
  if ((!SUB41(uVar13 >> 0x1d,0)) || (9 < *(short *)(param_1 + 0x1b0))) {
    sVar20 = 0;
    do {
      local_90 = fVar3;
      local_98 = fVar3;
      local_84 = fVar3;
      local_88 = fVar3;
      local_8c = fVar3;
      if (*(short *)(param_1 + 0x1b0) < 10) {
        local_94 = fVar29;
        fVar32 = fVar6;
      }
      else {
        local_94 = fVar3;
        fVar32 = fVar33;
      }
      local_80 = (float)FUN_003738a8(fVar32);
      local_80 = local_80 + *(float *)(param_1 + 0x28);
      local_7c = (float)FUN_003738a8(fVar32);
      local_7c = local_7c + *(float *)(param_1 + 0x2c);
      local_78 = (float)FUN_003738a8(fVar32);
      local_78 = local_78 + *(float *)(param_1 + 0x30);
      pfVar18 = *(float **)(param_2 + 0x5c28);
      fVar32 = (float)FUN_00371e50(fVar7);
      sVar11 = 0;
      do {
        if (*(char *)(pfVar18 + 9) == '\0') {
          *(undefined1 *)(pfVar18 + 9) = 7;
          *(undefined1 *)((int)pfVar18 + 0x26) = 0;
          *pfVar18 = local_80;
          pfVar18[1] = local_7c;
          pfVar18[2] = local_78;
          pfVar18[3] = local_8c;
          pfVar18[4] = local_88;
          pfVar18[5] = local_84;
          pfVar18[6] = local_98;
          pfVar18[7] = local_94;
          pfVar18[8] = local_90;
          pfVar18[0xc] = fVar32 + fVar29;
          pfVar18[0xd] = fVar3;
          pfVar18[0xf] = 0.0;
          *(undefined2 *)((int)pfVar18 + 0x2a) = 0xff;
          *(undefined1 *)((int)pfVar18 + 0x25) = 0;
          break;
        }
        sVar11 = sVar11 + 1;
        pfVar18 = pfVar18 + 0x10;
      } while (sVar11 < 0x118);
      sVar20 = sVar20 + 1;
    } while (sVar20 < 3);
  }
  iVar16 = *(int *)(local_68 + 0xac);
  if (((*(byte *)(param_1 + 0x1694) & 2) != 0) &&
     (*(byte *)(param_1 + 0x1694) = *(byte *)(param_1 + 0x1694) & 0xfd,
     *(short *)(param_1 + 0x1b0) == 2)) {
    *(undefined2 *)(param_1 + 0x1c0) = 1;
    *(undefined2 *)(param_1 + 0x1d6) = 0xe1;
  }
  if ((*(byte *)(param_1 + 0x1695) & 2) == 0) goto LAB_0011fcac;
  puVar21 = *(uint **)(param_1 + 0x16c0);
  *(byte *)(param_1 + 0x1695) = *(byte *)(param_1 + 0x1695) & 0xfd;
  local_a4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16aa),(byte)(uVar13 >> 0x15) & 3
                                       );
  local_a0 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16ac),(byte)(uVar13 >> 0x15) & 3
                                       );
  local_9c = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16ae),(byte)(uVar13 >> 0x15) & 3
                                       );
  if (((*puVar21 & 0x20000) == 0) || (*(short *)(param_1 + 0x1b0) != 10)) {
    if (*(short *)(param_1 + 0x1b0) == 2) goto LAB_0011fcac;
  }
  else {
    *(undefined2 *)(param_1 + 0x1b0) = 0xb;
  }
  if (*(short *)(param_1 + 0x1b8) != 0) goto LAB_0011fcac;
  local_a8 = (float)FUN_003656fc(param_2,*puVar21);
  iVar14 = 0;
  iVar17 = 0;
  if (local_a8 != 0.0) {
    iVar17 = (int)*(short *)(param_1 + 0x1b0);
    iVar14 = iVar17 + -10;
  }
  if (iVar14 < 0 == (local_a8 != 0.0 && SBORROW4(iVar17,10))) {
    uVar13 = *puVar21;
    if ((uVar13 & 0x100000) == 0) {
      if ((uVar13 & 0x80) == 0) {
        local_e0 = 0;
        FUN_003741e4(param_2,uVar13,1,&local_a4);
      }
      else {
        if (9 < *(short *)(param_1 + 0x1b0)) {
          local_e0 = DAT_0011fd30;
          uStack_dc = DAT_0011fd2c;
          FUN_0037547c(DAT_0011fd34,*(int *)(param_2 + 0x7f68) + 0x1068,4,DAT_0011fd30);
          sVar20 = *(short *)(param_1 + 0x1bc);
          *(short *)(*(int *)(param_2 + 0x7f68) + 0x1ca) = sVar20;
          *(short *)(*(int *)(param_2 + 0x7f68) + 0x1cc) = sVar20 + 1;
          *(float *)(*(int *)(param_2 + 0x7f68) + 0x200) = fVar28;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 100;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = 0x3c;
          *(uint *)(*(int *)(param_2 + 0x7f68) + 4) =
               *(uint *)(*(int *)(param_2 + 0x7f68) + 4) & 0xfffffffe;
          if (*(int *)(iVar16 + 0x124) == *(int *)(param_2 + 0x7f68)) {
            *(undefined2 *)(DAT_0011fd24 + iVar16) = 0x65;
            iVar14 = DAT_0011fd28;
            *(undefined4 *)(iVar16 + 0x124) = 0;
            *(undefined1 *)(iVar14 + iVar16) = 0;
          }
        }
        *(undefined2 *)(param_1 + 0x1b0) = 5;
        *(undefined2 *)(param_1 + 0x1d6) = 0x2d;
        local_e0 = DAT_0011fd38;
        *(float *)(param_1 + 0x6c) = fVar3;
        *(undefined2 *)(param_1 + 0x1b8) = 0xf;
        FUN_00365560(param_2,*puVar21,0,&local_a4);
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1b0) = 5;
    *(undefined2 *)(param_1 + 0x1d6) = 0x26;
    *(float *)(param_1 + 0x6c) = fVar23;
    fVar28 = (float)FUN_003655ec();
    *(short *)(param_1 + 0x36) =
         (short)(int)(fVar28 * DAT_0011fa98 - DAT_0011fa9c) + *(short *)(param_1 + 0x92) + -0x8000;
    *(undefined2 *)(param_1 + 0x1b6) = 0xf;
    FUN_00375bcc(param_1,DAT_0011faa0);
    local_ac = (float)((uint)*(byte *)(param_1 + 0xb7) - (int)local_a8);
    if ((int)local_ac < 0) {
      local_ac = 0.0;
    }
    *(char *)(param_1 + 0xb7) = SUB41(local_ac,0);
    *(char *)(param_1 + 0x1ad) = *(char *)(param_1 + 0x1ad) + '\x01';
    local_e0 = 0;
    FUN_003741e4(param_2,*puVar21,0,&local_a4);
    if (((int)local_ac < 1) || (99 < *(byte *)(param_1 + 0x1ad))) {
      if (*(short *)(*(int *)(param_2 + 0x7f68) + 0xfba) == 0) {
        iVar14 = *(int *)(param_2 + 0x7f6c);
        sVar20 = 0;
        if (iVar14 != 0) {
          sVar20 = *(short *)(iVar14 + 0xfba);
        }
        if (iVar14 == 0 || sVar20 == 0) {
          FUN_00375b70(param_2,param_1);
          FUN_003655d0(0,1);
          *(undefined2 *)(local_6c + 0xb8) = 100;
          *(undefined1 *)(*(int *)(param_2 + 0x7f68) + 0x229) = 0;
          *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 200;
          *(float *)(*(int *)(param_2 + 0x7f68) + 0x1fc) = fVar3;
          if (*(int *)(param_2 + 0x7f6c) != 0) {
            *(undefined1 *)(*(int *)(param_2 + 0x7f6c) + 0x1ac) = 1;
          }
          if (*(int *)(iVar16 + 0x124) != 0) {
            *(undefined2 *)(DAT_0011fd24 + iVar16) = 0x65;
            iVar14 = DAT_0011fd28;
            *(undefined4 *)(iVar16 + 0x124) = 0;
            *(undefined1 *)(iVar14 + iVar16) = 0;
          }
          goto LAB_0011faec;
        }
      }
      *(undefined1 *)(param_1 + 0xb7) = 1;
    }
LAB_0011faec:
    *(undefined2 *)(param_1 + 0x1b8) = 0xf;
  }
  fVar3 = DAT_0011fd40;
  uVar24 = DAT_0011fd3c;
  sVar20 = 0;
  do {
    local_c0 = (float)FUN_003738a8(uVar4);
    local_bc = (float)FUN_00371e50(fVar8);
    local_bc = local_bc + fVar9;
    local_b8 = (float)FUN_003738a8(uVar4);
    local_b0 = *(float *)(param_1 + 0x2c);
    local_b4 = *pfVar19 + local_c0 * fVar9;
    local_ac = *(float *)(param_1 + 0x30) + local_b8 * fVar9;
    fVar28 = (float)FUN_00371e50(uVar24);
    FUN_003673d8(fVar28 + fVar3,3,*(undefined4 *)(param_2 + 0x5c28),&local_b4,&local_c0);
    sVar20 = sVar20 + 1;
  } while (sVar20 < 10);
LAB_0011fcac:
  iVar16 = DAT_0011fd44;
  fVar28 = *(float *)(DAT_0011fd44 + 0x20);
  *(float *)(param_1 + 0x16c4) = fVar28;
  fVar33 = *(float *)(iVar16 + 0x24);
  *(float *)(param_1 + 0x16c8) = fVar33;
  fVar23 = *(float *)(iVar16 + 0x28);
  *(float *)(param_1 + 0x16cc) = fVar23;
  fVar3 = DAT_0011fd48;
  if ((*(uint *)(param_1 + 4) & 0x2000) == 0) {
    if (*(short *)(param_1 + 0x1b0) < 10) {
      return;
    }
    *(float *)(param_1 + 0x16c4) = fVar28 * DAT_0011fd48;
    *(float *)(param_1 + 0x16c8) = fVar33 * fVar3;
  }
  else {
    *(float *)(param_1 + 0x16c4) = fVar28 * fVar29;
    *(float *)(param_1 + 0x16c8) = fVar33 * fVar29;
    fVar3 = fVar29;
  }
  *(float *)(param_1 + 0x16cc) = fVar23 * fVar3;
  return;
}
