// OoT3D decomp @ 003d374c  name=FUN_003d374c  size=4804

void FUN_003d374c(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  short sVar17;
  undefined4 uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 auStack_100 [24];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 auStack_c4 [48];
  short local_94;
  short local_92;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  int local_70;
  int local_6c;
  int local_68;

  uVar12 = DAT_003d3ac0;
  iVar16 = *(int *)(param_1 + 0x124);
  iVar19 = *(int *)(param_2 + 0x20ac);
  FUN_00373500(param_1 + 0x2c);
  fVar24 = DAT_003d3acc;
  uVar4 = DAT_003d3ac8;
  FUN_00373500(DAT_003d3acc,param_1 + 0x6c);
  FUN_003731e0(param_1 + 0x5c0);
  fVar8 = DAT_003d3aec;
  fVar7 = DAT_003d3ae8;
  fVar6 = DAT_003d3ae4;
  fVar27 = DAT_003d3ae0;
  fVar25 = DAT_003d3adc;
  fVar5 = DAT_003d3ad8;
  uVar18 = DAT_003d3ad4;
  local_68 = param_1 + 0x508;
  *(float *)(param_1 + 0x578) = *(float *)(param_1 + 0x578) + DAT_003d3ad0;
  local_6c = param_1 + 0x50c;
  local_70 = param_2 + 0x5000;
  local_74 = (undefined4 *)(param_1 + 0x564);
  local_78 = (undefined4 *)(param_1 + 0x588);
  local_7c = param_2 + 0x3000;
  if (*(short *)(param_1 + 0x1d2) != 0) {
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,
                 (int)(short)(int)*(float *)(param_1 + 0x520));
    fVar24 = DAT_003d3af4;
    if ((((*(uint *)(DAT_003d3af0 + iVar19) & 0x400000) == 0) ||
        (sVar17 = (*(short *)(iVar19 + 0xbe) - *(short *)(param_1 + 0xbe)) + -0x8000,
        0x1fff < sVar17)) || (sVar17 < -0x1fff)) {
      FUN_00373500(*(undefined4 *)(iVar19 + 0x28),local_68);
      FUN_00373500(*(float *)(iVar19 + 0x2c) + fVar24,local_6c);
      FUN_00373500(*(undefined4 *)(iVar19 + 0x30),param_1 + 0x510);
    }
    else {
      FUN_00373500(*(undefined4 *)(iVar19 + 0x23e8),local_68);
      FUN_00373500(*(undefined4 *)(iVar19 + 0x23ec),local_6c);
      FUN_00373500(*(undefined4 *)(iVar19 + 0x23f0),param_1 + 0x510);
    }
    fVar26 = DAT_003d3af8;
    *(undefined2 *)(param_1 + 0x1d0) = 0x69;
    *(float *)(param_1 + 0x560) = fVar26;
    uVar9 = DAT_003d3b00;
    uVar12 = DAT_003d3afc;
    *(float *)(param_1 + 0x55c) = fVar26;
    *(float *)(param_1 + 0x558) = fVar26;
    *(float *)(param_1 + 0x544) = *(float *)(param_1 + 0x544) + *(float *)(param_1 + 0x548) * fVar7;
    FUN_00373500(uVar9,param_1 + 0x530);
    uVar10 = DAT_003d3b04;
    FUN_00373500(DAT_003d3b04,param_1 + 0x548);
    sVar17 = *(short *)(param_1 + 0x1d2);
    if (sVar17 < 0x4b) {
      if (sVar17 < 0xf) {
        if (sVar17 == 0xe) {
          *(float *)(local_7c + 600) = fVar27;
          *(char *)(local_7c + 0x235) = '\x03' - (char)*(undefined2 *)(param_1 + 0x1c);
          FUN_00375bcc(param_1,DAT_003d3b08);
        }
        if (*(short *)(param_1 + 0x1d2) == 8) {
          *(undefined4 *)(param_1 + 0x528) = uVar9;
        }
        else if (*(short *)(param_1 + 0x1d2) < 8) goto LAB_003d3a78;
        fVar28 = DAT_003d3b0c;
        sVar17 = 0;
        do {
          iVar14 = 0;
          do {
            iVar11 = param_1 + iVar14 * 0xc;
            local_d0 = *(float *)(iVar11 + 0x4a8);
            local_cc = *(float *)(iVar11 + 0x4ac);
            local_c8 = *(float *)(iVar11 + 0x4b0);
            local_dc = (float)FUN_003738a8(uVar12);
            local_d8 = (float)FUN_003738a8(uVar12);
            local_d4 = (float)FUN_003738a8(uVar12);
            local_e8 = fVar26;
            local_e4 = fVar26;
            local_e0 = fVar26;
            fVar23 = (float)FUN_00371e50(uVar12);
            FUN_00368498(fVar23 + fVar28,param_2,&local_d0,&local_dc,&local_e8,
                         (int)*(short *)(param_1 + 0x1c));
            iVar14 = (int)(short)((short)iVar14 + 1);
          } while (iVar14 < 5);
          sVar17 = sVar17 + 1;
        } while (sVar17 < 2);
      }
LAB_003d3a78:
      if (*(short *)(param_1 + 0x1d2) < 0x1e) {
        FUN_00373500(fVar26,uVar4,DAT_003d3b10,param_1 + 0x52c);
        FUN_00373500(fVar26,uVar4,fVar24,param_1 + 0x530);
      }
      else {
        FUN_00373500(uVar9,uVar4,uVar12,param_1 + 0x52c);
        if (*(short *)(param_1 + 0x1c) == 1) {
          FUN_00375bcc(param_1,DAT_003d3f38);
        }
        else {
          FUN_00375bcc(param_1,DAT_003d3f3c);
        }
      }
      uVar12 = DAT_003d3f40;
      *(float *)(param_1 + 0x540) =
           *(float *)(param_1 + 0x540) + *(float *)(param_1 + 0x53c) * fVar7;
      FUN_00373500(fVar26,uVar12,param_1 + 0x538);
      FUN_00373500(uVar10,uVar4,fVar25,param_1 + 0x53c);
    }
    iVar14 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar4,param_1 + 0x5c0);
    if (iVar14 != 0) {
      FUN_00370350(fVar26,param_1 + 0x5c0,0xf);
      *(undefined4 *)(param_1 + 0x1fc) = uVar18;
    }
    if (*(short *)(param_1 + 0x1d2) == 1) {
      FUN_00374a58(fVar26,param_1 + 0x5c0,0);
      uVar12 = FUN_0036ae14(param_1 + 0x5c0,0);
      iVar14 = DAT_003d3f44;
      uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1fc) = uVar12;
      *(float *)(param_1 + 0x534) = fVar26;
      *(float *)(param_1 + 0x530) = fVar26;
      *(float *)(param_1 + 0x52c) = fVar26;
      *(undefined1 *)(iVar14 + 10) = 0;
    }
    goto LAB_003d43d4;
  }
  iVar14 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),param_1 + 0x5c0);
  if (iVar14 != 0) {
    FUN_00370350(DAT_003d3af8,param_1 + 0x5c0,1);
    *(undefined4 *)(param_1 + 0x1fc) = uVar18;
  }
  iVar14 = FUN_003736fc(*(float *)(param_1 + 0x1fc) - fVar24,param_1 + 0x5c0);
  if (iVar14 != 0) {
    *(undefined2 *)(param_1 + 0x554) = 0;
    *(char *)(DAT_003d3f44 + 2) = (char)*(undefined2 *)(param_1 + 0x1c) + '\x01';
  }
  iVar14 = FUN_003736fc(*(float *)(param_1 + 0x1fc) - DAT_003d3f48,param_1 + 0x5c0);
  if (iVar14 != 0) {
    FUN_00375bcc(param_1,DAT_003d3f4c);
    FUN_00375bcc(param_1,DAT_003d3f50);
  }
  fVar23 = *(float *)(param_1 + 0x508) - *(float *)(param_1 + 0x4e4);
  fVar28 = *(float *)(param_1 + 0x50c) - *(float *)(param_1 + 0x4e8);
  fVar26 = *(float *)(param_1 + 0x510) - *(float *)(param_1 + 0x4ec);
  uVar18 = FUN_003696ec(fVar23,fVar26);
  fVar23 = fVar23 * fVar23;
  *(undefined4 *)(param_1 + 0x574) = uVar18;
  fVar24 = (float)FUN_003696ec(fVar28,SQRT(fVar23 + fVar26 * fVar26));
  *(float *)(param_1 + 0x570) = -fVar24;
  fVar24 = DAT_003d4414;
  uVar9 = DAT_003d3f54;
  uVar18 = DAT_003d3afc;
  sVar17 = *(short *)(param_1 + 0x554);
  if (sVar17 != -1) {
    local_80 = param_2 + 0x5bb4;
    if (sVar17 == 0) {
      if (*(short *)(param_1 + 0x1d0) != 0) {
        iVar14 = *(int *)(param_2 + 0x20ac);
        if ((((*(uint *)(DAT_003d3af0 + iVar14) & 0x400000) == 0) ||
            (sVar17 = (*(short *)(iVar14 + 0xbe) - *(short *)(param_1 + 0xbe)) + -0x8000,
            0x1fff < sVar17)) || (sVar17 < -0x1fff)) {
LAB_003d402c:
          iVar14 = 0;
        }
        else {
          local_d0 = DAT_003d3af8;
          local_cc = DAT_003d3af8;
          local_c8 = (float)DAT_003d3afc;
          fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0xbe),
                                              (byte)(in_fpscr >> 0x15) & 3);
          FUN_003735e8(fVar24 * fVar5 * fVar8,&local_10c,0);
          FUN_003735ac(&local_dc,&local_10c,&local_d0);
          local_d0 = (*(float *)(iVar14 + 0x28) + local_dc) - *(float *)(param_1 + 0x4e4);
          local_cc = (*(float *)(iVar14 + 0x2c) + local_d8) - *(float *)(param_1 + 0x4e8);
          local_c8 = (*(float *)(iVar14 + 0x30) + local_d4) - *(float *)(param_1 + 0x4ec);
          FUN_00369014(-*(float *)(param_1 + 0x570),&local_10c,0);
          FUN_003735e8(-*(float *)(param_1 + 0x574),&local_10c,1);
          FUN_003735ac(&local_dc,&local_10c,&local_d0);
          if (((DAT_003d3f5c <= (int)ABS(local_dc)) ||
              (DAT_003d3f5c + 0x9c0000 <= (int)ABS(local_d8))) ||
             (((int)local_d4 <= DAT_003d3f5c + 0xd80000 ||
              (in_fpscr = in_fpscr & 0xfffffff |
                          (uint)(local_d4 == *(float *)(param_1 + 0x584)) << 0x1e |
                          (uint)(*(float *)(param_1 + 0x584) <= local_d4) << 0x1d,
              bVar3 = (byte)(in_fpscr >> 0x18), (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)))))
          goto LAB_003d402c;
          iVar11 = FUN_00351388(param_2);
          iVar14 = DAT_003d3f44;
          if (iVar11 == 0) {
            if (10 < *(byte *)(DAT_003d3f44 + 10)) goto LAB_003d402c;
            if (*(byte *)(DAT_003d3f44 + 10) == 0) {
              FUN_0035123c(uVar18,param_2,(int)*(short *)(param_1 + 0x1c));
              uVar12 = DAT_003d440c;
              local_124 = DAT_003d4408;
              *(undefined4 *)(local_7c + 600) = uVar4;
              *(undefined2 *)(param_1 + 0x1d0) = 0xf;
              FUN_0037547c(DAT_003d4410,0,4,uVar12,uVar12);
            }
            *(char *)(iVar14 + 10) = *(char *)(iVar14 + 10) + '\x01';
            iVar14 = 2;
            *(float *)(param_1 + 0x584) =
                 SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8);
          }
          else {
            iVar14 = 1;
            *(float *)(param_1 + 0x584) =
                 SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8);
          }
        }
        uVar12 = DAT_003d4418;
        fVar24 = DAT_003d4414;
        if (iVar14 == 1) {
          sVar17 = 0;
          local_e8 = DAT_003d4414;
          local_e4 = DAT_003d4414;
          local_e0 = DAT_003d4414;
          do {
            local_dc = (float)FUN_003738a8(uVar12);
            local_d8 = (float)FUN_003738a8(uVar12);
            local_d4 = (float)FUN_003738a8(uVar12);
            local_d0 = *(float *)(iVar19 + 0x23e8);
            local_cc = *(float *)(iVar19 + 0x23ec);
            local_c8 = *(float *)(iVar19 + 0x23f0);
            fVar26 = (float)FUN_00371e50(fVar25);
            local_124 = 2.10195e-43;
            uVar18 = VectorSignedToFloat((short)(int)fVar26 + 5,(byte)(in_fpscr >> 0x15) & 3);
            FUN_0035ec30(uVar18,param_2,&local_d0,&local_dc,&local_e8,
                         (int)*(short *)(param_1 + 0x1c));
            uVar18 = DAT_003d440c;
            fVar26 = DAT_003d4408;
            sVar17 = sVar17 + 1;
          } while (sVar17 < 0xf);
          *(undefined2 *)(param_1 + 0x554) = 1;
          local_124 = fVar26;
          FUN_0037547c(DAT_003d441c,iVar19 + 0x28,4,uVar18,uVar18);
          FUN_003624c8(iVar19 + 0x243c,&local_94,0);
          local_92 = local_92 + -0x8000;
          local_94 = -local_94;
          *(short *)(param_1 + 0x57c) = local_94;
          *(short *)(param_1 + 0x57e) = local_92;
          *(float *)(param_1 + 0x560) = fVar24;
          *(float *)(param_1 + 0x55c) = fVar24;
          *(float *)(param_1 + 0x558) = fVar24;
          *(undefined4 *)(local_7c + 600) = uVar4;
        }
        else if (iVar14 == 0) {
          iVar11 = *(int *)(param_2 + 0x20ac);
          local_d0 = *(float *)(iVar11 + 0x28) - *(float *)(param_1 + 0x4e4);
          local_cc = *(float *)(iVar11 + 0x2c) - *(float *)(param_1 + 0x4e8);
          local_c8 = *(float *)(iVar11 + 0x30) - *(float *)(param_1 + 0x4ec);
          FUN_00369014(-*(float *)(param_1 + 0x570),&local_10c,0);
          FUN_003735e8(-*(float *)(param_1 + 0x574),&local_10c,1);
          FUN_003735ac(&local_dc,&local_10c,&local_d0);
          iVar14 = DAT_003d3f44;
          if (((((int)ABS(local_dc) < DAT_003d4420) &&
               ((int)ABS(local_d8) < DAT_003d4420 + 0xa80000)) &&
              (DAT_003d4420 + 0x1280000 < (int)local_d4)) &&
             ((in_fpscr = in_fpscr & 0xfffffff |
                          (uint)(local_d4 == *(float *)(param_1 + 0x584)) << 0x1e |
                          (uint)(*(float *)(param_1 + 0x584) <= local_d4) << 0x1d,
              bVar3 = (byte)(in_fpscr >> 0x18), !(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6) &&
              (*(short *)(*(int *)(DAT_003d3f44 + 0x94) + 0x1d4) == 0)))) {
            *(undefined2 *)(*(int *)(DAT_003d3f44 + 0x94) + 0x1d4) = 0xe1;
            fVar24 = DAT_003d4414;
            *(float *)(param_1 + 0x584) =
                 SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8);
            FUN_00368fc0(fVar6,fVar24,param_2,param_1,(int)*(short *)(param_1 + 0xbe),0x20);
            if (*(short *)(param_1 + 0x1c) == 0) {
              if (*(char *)(iVar14 + 9) == '\0') {
                *(undefined1 *)(iVar14 + 9) = 1;
              }
            }
            else if (*(char *)(DAT_003d4424 + iVar11) == '\0') {
              FUN_0035d8d8(iVar11,param_2,0);
              FUN_0036f59c(iVar11,DAT_003d442c +
                                  (uint)*(ushort *)(*(int *)(DAT_003d4428 + iVar11) + 0xf4));
            }
          }
          if (*(short *)(param_1 + 0x498) == 0) {
            FUN_00373500(SQRT(fVar23 + fVar28 * fVar28 + fVar26 * fVar26) * fVar25,uVar4,uVar9,
                         param_1 + 0x584);
          }
        }
      }
      FUN_0033b11c(local_80,local_74,param_1 + 0x5a4,param_1 + 0xf8);
      bVar20 = *(short *)(param_1 + 0x1c) != 1;
      uVar12 = 1;
      if (bVar20) {
        uVar12 = DAT_003d4430;
      }
      local_124 = DAT_003d4408;
      puVar13 = local_74;
      if (!bVar20) {
        uVar12 = DAT_003d4434;
      }
    }
    else {
      if (sVar17 != 1) goto LAB_003d4350;
      if ((*(uint *)(param_2 + 0x14) & 0x100) == 0) {
        *(undefined2 *)(param_1 + 0x554) = 0;
        *(float *)(param_1 + 0x5a0) = fVar24;
      }
      else {
        iVar14 = *(int *)(param_2 + 0x20ac);
        *(float *)(param_1 + 0x584) = SQRT(fVar23 + fVar28 * fVar28 + fVar26 * fVar26);
        FUN_00373500(DAT_003d3f58,uVar4,uVar9,param_1 + 0x5a0);
        FUN_00373500(*(undefined4 *)(iVar14 + 0x23e8),uVar4,uVar12,local_68);
        FUN_00373500(*(undefined4 *)(iVar14 + 0x23ec),uVar4,uVar12,local_6c);
        FUN_00373500(*(undefined4 *)(iVar14 + 0x23f0),uVar4,uVar12,param_1 + 0x510);
        if ((*(ushort *)(param_1 + 0x1a8) & 3) == 0) {
          pcVar15 = *(char **)(local_70 + 0xc28);
          uVar2 = *(undefined2 *)(param_1 + 0x1c);
          sVar17 = 0;
          do {
            if (*pcVar15 == '\0') {
              *pcVar15 = '\x04';
              uVar12 = *(undefined4 *)(iVar14 + 0x23ec);
              uVar18 = *(undefined4 *)(iVar14 + 0x23f0);
              *(undefined4 *)(pcVar15 + 4) = *(undefined4 *)(iVar14 + 0x23e8);
              *(undefined4 *)(pcVar15 + 8) = uVar12;
              *(undefined4 *)(pcVar15 + 0xc) = uVar18;
              puVar13 = DAT_003d474c;
              uVar12 = DAT_003d474c[1];
              uVar18 = DAT_003d474c[2];
              *(undefined4 *)(pcVar15 + 0x10) = *DAT_003d474c;
              *(undefined4 *)(pcVar15 + 0x14) = uVar12;
              *(undefined4 *)(pcVar15 + 0x18) = uVar18;
              uVar12 = puVar13[1];
              uVar18 = puVar13[2];
              *(undefined4 *)(pcVar15 + 0x1c) = *puVar13;
              *(undefined4 *)(pcVar15 + 0x20) = uVar12;
              *(undefined4 *)(pcVar15 + 0x24) = uVar18;
              *(float *)(pcVar15 + 0x30) = fVar27 * fVar7;
              *(float *)(pcVar15 + 0x34) = fVar6 * fVar7;
              *(undefined2 *)(pcVar15 + 0x2c) = uVar2;
              pcVar15[0x2e] = '\x01';
              pcVar15[0x2f] = '\0';
              pcVar15[2] = -1;
              pcVar15[3] = '\0';
              uVar12 = FUN_00371e50(fVar8);
              *(undefined4 *)(pcVar15 + 0x38) = uVar12;
              pcVar15[1] = '\0';
              uVar12 = FUN_00371178(*(undefined4 *)(DAT_003d3f44 + 0x20),0,5);
              *(undefined4 *)(pcVar15 + 0x44) = uVar12;
              break;
            }
            sVar17 = sVar17 + 1;
            pcVar15 = pcVar15 + 0x48;
          } while (sVar17 < 0x96);
        }
      }
      FUN_0033b11c(local_80,local_78,param_1 + 0x5b0,param_1 + 0xf8);
      local_124 = DAT_003d4408;
      if (*(short *)(param_1 + 0x1c) == 1) {
        FUN_0037547c(DAT_003d4434,local_78,4,DAT_003d440c,DAT_003d440c);
        local_124 = DAT_003d4408;
        uVar12 = DAT_003d4750;
        puVar13 = local_78;
      }
      else {
        FUN_0037547c(DAT_003d4430,local_78,4,DAT_003d440c,DAT_003d440c);
        local_124 = DAT_003d4408;
        uVar12 = DAT_003d4754;
        puVar13 = local_78;
      }
    }
    DAT_003d4408 = local_124;
    FUN_0037547c(uVar12,puVar13,4,DAT_003d440c,DAT_003d440c);
  }
LAB_003d4350:
  uVar12 = DAT_003d4438;
  fVar24 = DAT_003d4414;
  if (*(short *)(param_1 + 0x1d0) == 0) {
    if (*(char *)(DAT_003d3f44 + 2) == '\x01' || *(char *)(DAT_003d3f44 + 2) == '\x02') {
      *(undefined1 *)(DAT_003d3f44 + 2) = 0;
    }
    FUN_00373500(fVar24,uVar4,uVar12,param_1 + 0x550);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x550) == fVar24) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_003d443c;
      FUN_00374a58(fVar24,param_1 + 0x5c0,2);
      uVar12 = FUN_0036ae14(param_1 + 0x5c0,2);
      uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1fc) = uVar12;
      *(float *)(param_1 + 0x5a0) = fVar24;
      *(float *)(param_1 + 0x584) = fVar24;
    }
  }
LAB_003d43d4:
  FUN_003713fc(*(undefined4 *)(param_1 + 0x4e4),*(undefined4 *)(param_1 + 0x4e8),
               *(undefined4 *)(param_1 + 0x4ec),auStack_c4,0);
  FUN_003735e8(*(undefined4 *)(param_1 + 0x574),auStack_c4,1);
  FUN_00369014(*(undefined4 *)(param_1 + 0x570),auStack_c4,1);
  fVar24 = DAT_003d4414;
  local_8c = DAT_003d4414;
  local_88 = DAT_003d4414;
  local_84 = *(float *)(param_1 + 0x584) + DAT_003d4740;
  FUN_003735ac(local_74,auStack_c4,&local_8c);
  sVar17 = *(short *)(param_1 + 0x498);
  bVar20 = sVar17 == 0;
  if (bVar20) {
    sVar17 = *(short *)(param_1 + 0x554);
  }
  if ((bVar20 && sVar17 == 0) && (*(short *)(param_1 + 0x1d0) != 0)) {
    fVar25 = (float)FUN_00368280(local_74);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar24) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar25) || NAN(fVar24)) << 0x1c;
    *(float *)(param_1 + 0x55c) = fVar25;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined2 *)(param_1 + 0x498) = 1;
      *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x564);
      *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x56c);
      FUN_00368008(param_1,param_2,(int)*(short *)(param_1 + 0x1c));
      *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
    }
  }
  if (*(short *)(param_1 + 0x554) == 1) {
    if (*(short *)(param_1 + 0x498) == 0) {
      FUN_003624c8(iVar19 + 0x243c,&local_94,0);
      local_92 = local_92 + -0x8000;
      local_94 = -local_94;
      FUN_00370084(param_1 + 0x57c,(int)local_94,5,0x2000);
      FUN_00370084(param_1 + 0x57e,(int)local_92,5,0x2000);
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x57c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x594) = fVar25 * fVar5 * fVar8;
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x57e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x598) = fVar25 * fVar5 * fVar8;
    }
    FUN_003713fc(*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568),
                 *(undefined4 *)(param_1 + 0x56c),auStack_100,0);
    FUN_003735e8(*(undefined4 *)(param_1 + 0x598),auStack_100,1);
    FUN_00369014(*(undefined4 *)(param_1 + 0x594),auStack_100,1);
    local_8c = fVar24;
    local_88 = fVar24;
    local_84 = *(float *)(param_1 + 0x5a0) + DAT_003d4744;
    FUN_003735ac(local_78,auStack_100,&local_8c);
    fVar5 = DAT_003d4748;
    if (*(short *)(param_1 + 0x498) == 0) {
      iVar19 = 0;
      local_84 = fVar24;
      do {
        FUN_003735ac(&local_d0,auStack_100,&local_8c);
        fVar26 = (float)FUN_00368280(&local_d0);
        *(float *)(param_1 + 0x55c) = fVar26;
        fVar25 = DAT_003d4ae8;
        uVar12 = DAT_003d4ae4;
        if (!NAN(fVar26) && !NAN(fVar24)) {
          iVar19 = *(int *)(param_1 + 0x55c);
          bVar22 = SBORROW4(iVar19,DAT_003d4ae0);
          bVar20 = iVar19 - DAT_003d4ae0 < 0;
          bVar21 = iVar19 == DAT_003d4ae0;
          if (!bVar21) {
            fVar26 = *(float *)(param_1 + 0x594);
            bVar20 = fVar26 < fVar24;
            bVar21 = fVar26 == fVar24;
            bVar22 = NAN(fVar26) || NAN(fVar24);
          }
          if ((bVar21 || bVar20 != bVar22) || (*(short *)(param_1 + 0x1d0) == 0)) {
            sVar17 = 0;
            do {
              local_10c = (float)FUN_003738a8(fVar5);
              local_108 = (float)FUN_003738a8(fVar5);
              local_104 = (float)FUN_003738a8(fVar5);
              local_118 = fVar24;
              local_114 = fVar24;
              local_110 = fVar24;
              fVar26 = (float)FUN_00371e50(uVar12);
              FUN_00368498(fVar26 + fVar25,param_2,local_78,&local_10c,&local_118,
                           (int)*(short *)(param_1 + 0x1c));
              sVar17 = sVar17 + 1;
            } while (sVar17 < 5);
            *(float *)(param_1 + 0x5a0) = local_84;
            FUN_00373500(DAT_003d4af0,uVar4,DAT_003d4aec,param_2 + 0x3258);
          }
          else {
            *(undefined2 *)(param_1 + 0x498) = 1;
            *(float *)(param_1 + 0x558) = local_d0;
            *(float *)(param_1 + 0x560) = local_c8;
            FUN_00368008(param_1,param_2,(int)*(short *)(param_1 + 0x1c));
            *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
          }
          break;
        }
        local_84 = local_84 + fVar5;
        fVar25 = *(float *)(param_1 + 0x5a0);
        bVar20 = local_84 < fVar25;
        bVar21 = NAN(local_84) || NAN(fVar25);
        if (local_84 <= fVar25) {
          iVar19 = (int)(short)((short)iVar19 + 1);
          bVar21 = SBORROW4(iVar19,200);
          bVar20 = iVar19 + -200 < 0;
        }
      } while (bVar20 != bVar21);
    }
    iVar19 = FUN_0031561c(param_1,param_1 + 0x28);
    if ((iVar19 != 0) && ((*(ushort *)(param_1 + 0x1a8) & 3) == 0)) {
      uVar2 = *(undefined2 *)(param_1 + 0x1c);
      pcVar15 = *(char **)(local_70 + 0xc28);
      sVar17 = 0;
      do {
        if (*pcVar15 == '\0') {
          *pcVar15 = '\x04';
          uVar12 = local_78[1];
          uVar18 = local_78[2];
          *(undefined4 *)(pcVar15 + 4) = *local_78;
          *(undefined4 *)(pcVar15 + 8) = uVar12;
          *(undefined4 *)(pcVar15 + 0xc) = uVar18;
          puVar13 = DAT_003d474c;
          uVar12 = DAT_003d474c[1];
          uVar18 = DAT_003d474c[2];
          *(undefined4 *)(pcVar15 + 0x10) = *DAT_003d474c;
          *(undefined4 *)(pcVar15 + 0x14) = uVar12;
          *(undefined4 *)(pcVar15 + 0x18) = uVar18;
          uVar12 = puVar13[1];
          uVar18 = puVar13[2];
          *(undefined4 *)(pcVar15 + 0x1c) = *puVar13;
          *(undefined4 *)(pcVar15 + 0x20) = uVar12;
          *(undefined4 *)(pcVar15 + 0x24) = uVar18;
          *(float *)(pcVar15 + 0x30) = fVar27 * fVar7;
          *(float *)(pcVar15 + 0x34) = fVar6 * fVar7;
          *(undefined2 *)(pcVar15 + 0x2c) = uVar2;
          pcVar15[0x2e] = '\x01';
          pcVar15[0x2f] = '\0';
          pcVar15[2] = -1;
          pcVar15[3] = '\0';
          uVar12 = FUN_00371e50(fVar8);
          *(undefined4 *)(pcVar15 + 0x38) = uVar12;
          pcVar15[1] = '\0';
          uVar12 = FUN_00371178(*(undefined4 *)(DAT_003d3f44 + 0x20),0,5);
          *(undefined4 *)(pcVar15 + 0x44) = uVar12;
          break;
        }
        sVar17 = sVar17 + 1;
        pcVar15 = pcVar15 + 0x48;
      } while (sVar17 < 0x96);
    }
    uVar29 = FUN_0031561c(param_1,iVar16 + 0x28);
    uVar18 = DAT_003d4af8;
    fVar25 = DAT_003d4ae8;
    uVar12 = DAT_003d4ae4;
    fVar5 = DAT_003d4748;
    iVar19 = (int)((ulonglong)uVar29 >> 0x20);
    bVar20 = (int)uVar29 != 0;
    iVar14 = 0;
    if (bVar20) {
      iVar19 = *(int *)(iVar16 + 0x1a4);
      iVar14 = DAT_003d4af4;
    }
    if (bVar20 && iVar19 != iVar14) {
      sVar17 = 0;
      do {
        local_10c = (float)FUN_003738a8(uVar18);
        local_10c = local_10c + *(float *)(iVar16 + 0x28);
        local_108 = (float)FUN_003738a8(uVar18);
        local_108 = local_108 + *(float *)(iVar16 + 0x2c);
        local_104 = (float)FUN_003738a8(uVar18);
        local_104 = local_104 + *(float *)(iVar16 + 0x30);
        local_118 = (float)FUN_003738a8(fVar5);
        local_114 = (float)FUN_003738a8(fVar5);
        local_110 = (float)FUN_003738a8(fVar5);
        local_124 = fVar24;
        local_120 = fVar24;
        local_11c = fVar24;
        fVar27 = (float)FUN_00371e50(uVar12);
        FUN_00368498(fVar27 + fVar25,param_2,&local_10c,&local_118,&local_124,
                     (int)*(short *)(param_1 + 0x1c));
        sVar17 = sVar17 + 1;
      } while (sVar17 < 0x32);
      *(int *)(iVar16 + 0x1a4) = DAT_003d4af4;
      FUN_00374a58(fVar24,iVar16 + 0x5c0,3);
      *(undefined2 *)(iVar16 + 0x1d0) = 0x50;
      uVar12 = DAT_003d4afc;
      *(float *)(iVar16 + 0x6c) = fVar24;
      FUN_00375bcc(iVar16,uVar12);
      *(undefined4 *)(local_7c + 600) = uVar4;
      *(char *)(iVar16 + 0xb7) = *(char *)(iVar16 + 0xb7) + '\x01';
      FUN_003741e4(param_2,0,0,iVar16 + 0x3c,0);
    }
  }
  return;
}
