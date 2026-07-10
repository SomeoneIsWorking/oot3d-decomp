// OoT3D decomp @ 0039858c  name=FUN_0039858c  size=2912

void FUN_0039858c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int unaff_r7;
  int iVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uStack_e4;
  short local_e0;
  undefined1 auStack_de [4];
  short local_da;
  undefined1 auStack_d8 [4];
  short local_d4;
  undefined1 auStack_c8 [56];
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  
  fVar5 = DAT_0039891c;
  fVar4 = DAT_00398918;
  fVar3 = DAT_00398914;
  fVar2 = DAT_00398910;
  fVar1 = DAT_0039890c;
  fVar20 = DAT_00398900;
  fVar23 = DAT_003988fc;
  local_6c = *(int *)(param_2 + 0x20ac);
  local_70 = 500;
  for (psVar8 = *(short **)(param_2 + 0x20dc); psVar8 != (short *)0x0;
      psVar8 = *(short **)(psVar8 + 0x98)) {
    if (*psVar8 == 0x32) goto LAB_003985e0;
  }
  psVar8 = (short *)0x0;
LAB_003985e0:
  if (psVar8 != (short *)0x0) {
    unaff_r7 = *(int *)(psVar8 + 0x114);
  }
  if ((psVar8 != (short *)0x0 && unaff_r7 != 0) && unaff_r7 != local_6c) {
    local_74 = DAT_00398908;
    local_84 = *(float *)(psVar8 + 0x14);
    local_80 = *(float *)(psVar8 + 0x16);
    local_7c = *(float *)(psVar8 + 0x18);
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00398904 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    local_88 = (uint)(ushort)psVar8[0x1b];
    local_8c = (uint)(ushort)psVar8[0x1a];
    fVar16 = fVar16 * DAT_00398900;
    uVar13 = (uint)*(byte *)(psVar8 + 0x136);
    if (2 < uVar13) {
      do {
        uVar24 = FUN_003758b0(*(float *)(unaff_r7 + 0x44) - local_7c,
                              *(float *)(unaff_r7 + 0x3c) - local_84);
        fVar21 = *(float *)(unaff_r7 + 0x3c) - local_84;
        fVar17 = *(float *)(unaff_r7 + 0x44) - local_7c;
        sVar7 = (short)local_88 - (short)uVar24;
        uVar9 = FUN_003758b0(SQRT(fVar21 * fVar21 + fVar17 * fVar17),
                             local_80 - *(float *)(unaff_r7 + 0x40));
        fVar22 = *(float *)(unaff_r7 + 0x3c) - local_84;
        fVar17 = *(float *)(unaff_r7 + 0x40) - local_80;
        sVar6 = (short)local_8c - (short)uVar9;
        fVar21 = *(float *)(unaff_r7 + 0x44) - local_7c;
        fVar17 = (fVar1 - SQRT(fVar22 * fVar22 + fVar17 * fVar17 + fVar21 * fVar21)) * fVar2;
        if ((int)fVar17 < DAT_00398920) {
          fVar17 = fVar3;
        }
        if (sVar7 < 0) {
          sVar7 = -sVar7;
        }
        if (sVar6 < 0) {
          sVar6 = -sVar6;
        }
        fVar21 = (float)VectorSignedToFloat((int)sVar7,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00370378(&local_88,uVar24,(int)(short)(int)(fVar21 * fVar17));
        fVar21 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00370378(&local_8c,uVar9,(int)(short)(int)(fVar21 * fVar17));
        fVar17 = (float)FUN_002cfca0((int)(short)local_8c);
        fVar21 = (float)FUN_00338f60((int)(short)local_8c);
        fVar22 = (float)FUN_002cfca0((int)(short)local_88);
        fVar18 = (float)FUN_00338f60((int)(short)local_88);
        uVar13 = uVar13 - 1;
        local_84 = local_84 + fVar22 * fVar21 * fVar5 * fVar16;
        local_80 = local_80 + fVar17 * fVar4 * fVar16;
        local_7c = local_7c + fVar18 * fVar21 * fVar5 * fVar16;
      } while (2 < (int)uVar13);
    }
    local_70 = 16000;
  }
  else {
    local_84 = *(float *)(local_6c + 0x28);
    local_7c = *(float *)(local_6c + 0x30);
    local_80 = *(float *)(local_6c + 0x2c) + DAT_003988fc;
    local_74 = 16000;
  }
  FUN_003731e0(param_1 + 0x1a4);
  FUN_0031cb28(param_1);
  fVar2 = DAT_00398934;
  fVar1 = DAT_0039892c;
  uVar24 = DAT_00398928;
  if (0xe < *(byte *)(DAT_00398924 + 8)) {
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xd);
    fVar23 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fVar1,fVar23 - fVar1,fVar23,uVar24,param_1 + 0x1a4,0xd,1);
    uVar24 = DAT_00398930;
    *(undefined1 *)(param_1 + 0xf95) = 0;
    *(undefined4 *)(param_1 + 0xf90) = uVar24;
    return;
  }
  if ((*(byte *)(DAT_00398924 + 7) & 0x7f) == 0) {
    uVar13 = in_fpscr & 0xfffffff |
             (uint)(*(float *)(*(int *)(param_1 + 0x124) + 0x6c) == DAT_00398934) << 0x1e;
    if (SUB41(uVar13 >> 0x1e,0)) {
      sVar6 = FUN_003758b0(*(float *)(param_1 + 0xfc0) - local_7c,
                           *(float *)(param_1 + 0xfb8) - local_84);
      local_58 = param_1 + 0xfea;
      local_5c = param_1 + 0xff6;
      local_60 = param_1 + 0xfee;
      sVar7 = sVar6 - *(short *)(param_1 + 0xbe);
      iVar19 = (int)sVar7;
      local_64 = param_1 + 0xff4;
      if (iVar19 < 0) {
        iVar19 = -iVar19;
      }
      local_68 = param_1 + 0x1d4;
      if ((((local_74 < iVar19) && (*(char *)(param_1 + 0xf95) == '\0')) ||
          ((*(byte *)(DAT_00398924 + 7) & 0x80) != 0)) ||
         ((*(uint *)(local_6c + 0x1710) & 0x4000000) != 0)) {
        if ((*(char *)(param_1 + 0xf95) != '\0') || (*(short *)(param_1 + 4000) < 0)) {
          if ((*(byte *)(DAT_00398fe8 + param_1) & 2) == 0) {
            if (0 < *(short *)(param_1 + 4000)) {
              *(undefined2 *)(param_1 + 4000) = 0;
            }
          }
          else if (0 < *(short *)(param_1 + 4000)) {
            FUN_00375bcc(param_1,DAT_00398fec);
            *(undefined2 *)(param_2 + 0x31fc) = 10;
            *(undefined2 *)(param_2 + 0x31fe) = 10;
            *(undefined2 *)(param_2 + 0x3200) = 10;
            *(undefined2 *)(param_2 + 0x3202) = 0x73;
            *(undefined2 *)(param_2 + 0x3204) = 0x41;
            *(undefined2 *)(param_2 + 0x3206) = 100;
            *(undefined2 *)(param_2 + 0x3208) = 0x78;
            *(undefined2 *)(param_2 + 0x320a) = 0x78;
            *(undefined2 *)(param_2 + 0x320c) = 0x46;
            *(undefined2 *)(param_1 + 4000) = 0xffff;
            *(undefined1 *)(*(int *)(param_1 + 0x124) + 0xf94) = 6;
          }
          if ((*(short *)(param_1 + 4000) < 0) && ((*(uint *)(local_6c + 0x1710) & 0x4000000) != 0))
          {
            uStack_e4 = 1;
            FUN_0031f5a8(fVar2,fVar2,fVar2,param_2,param_1,1,0x1e,6);
          }
        }
        uVar24 = DAT_00398fc0;
        FUN_00375a18(local_58,0,1,DAT_00398fc0,0);
        FUN_00375a18(param_1 + 0xff0,0,1,uVar24,0);
        FUN_00375a18(local_60,0,1,uVar24,0);
        FUN_00375a18(local_5c,(int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbc)),
                     1,uVar24,0);
        FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,&local_8c,0);
        FUN_00375a18(local_64,(int)(short)local_88,1,uVar24,0);
        FUN_0036e168(fVar1,fVar1,DAT_00398ff0,fVar2,local_68 + 0x10);
        *(undefined1 *)(param_1 + 0xf95) = 0;
        return;
      }
      if (*(char *)(param_1 + 0xf95) == '\0') {
        iVar14 = (int)sVar7;
        iVar19 = iVar14;
        if ((DAT_00398fb8 < iVar14 + 6000U) && (iVar19 = DAT_00398fbc, iVar14 < 1)) {
          iVar19 = ((int)DAT_00398fb8 >> 1) - DAT_00398fb8;
        }
        local_78 = FUN_00375a18(local_58,iVar19,1,DAT_00398fc0,0);
        if (local_78 < 0) {
          local_78 = -local_78;
        }
        iVar14 = (int)(short)(sVar6 - (short)iVar19);
        iVar19 = iVar14;
        if ((DAT_00398fb8 < iVar14 + 6000U) && (iVar19 = DAT_00398fbc, iVar14 < 1)) {
          iVar19 = ((int)DAT_00398fb8 >> 1) - DAT_00398fb8;
        }
        iVar19 = FUN_00375a18(param_1 + 0xff0,iVar19,1,DAT_00398fc0,0);
        if (iVar19 < 0) {
          iVar19 = -iVar19;
        }
        iVar19 = iVar19 + local_78;
        sVar7 = FUN_003758b0(local_7c - *(float *)(param_1 + 0xfd8),
                             local_84 - *(float *)(param_1 + 0xfd0));
        iVar14 = FUN_00375a18(local_5c,(int)(short)(sVar7 + -0x4000),1,DAT_00398fc4,0);
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        FUN_00334e70(*(undefined4 *)(param_1 + 0x21c),&uStack_e4,0);
        FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x34,auStack_de,0);
        FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x68,auStack_d8,0);
        sVar7 = *(short *)(param_1 + 0xbc);
        sVar6 = FUN_0037587c(&local_84,param_1 + 0xfc4);
        iVar10 = FUN_00375a18(local_60,(int)(short)(sVar6 - (local_e0 + sVar7 + local_da + local_d4)
                                                   ),1,4000,0);
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        sVar7 = FUN_0037587c(param_1 + 0xfd0,&local_84);
        iVar11 = FUN_00375a18(local_64,(int)-sVar7,1,4000,0);
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        *(float *)(param_1 + 0x1e4) = fVar2;
        fVar20 = (float)FUN_0036e168(fVar2,fVar1,DAT_00398fc8,fVar2,local_68 + 0xc);
        uVar13 = uVar13 & 0xfffffff | (uint)(fVar20 == fVar2) << 0x1e;
        if (SUB41(uVar13 >> 0x1e,0)) {
          if ((uint)(iVar10 + iVar14 + iVar19 + iVar11) < local_70) {
            *(undefined2 *)(param_1 + 4000) = 0;
            *(char *)(param_1 + 0xf95) = *(char *)(param_1 + 0xf95) + '\x01';
            *(float *)(param_1 + 0xfdc) = local_84;
            *(float *)(param_1 + 0xfe0) = local_80;
            *(float *)(param_1 + 0xfe4) = local_7c;
          }
          iVar19 = FUN_003759d0();
          if (iVar19 < DAT_00398fcc) {
            FUN_00375bcc(param_1,DAT_00398fd0);
          }
        }
        if (*(char *)(param_1 + 0xf95) == '\0') {
          return;
        }
      }
      uVar24 = DAT_00398fd4;
      if (*(char *)(param_1 + 0xf95) == '\x02') {
        return;
      }
      iVar19 = (int)*(short *)(param_1 + 4000);
      if (iVar19 < 0x30) {
        uStack_e4 = 1;
        uVar24 = VectorSignedToFloat((iVar19 >> 3) + 1,(byte)(uVar13 >> 0x15) & 3);
        FUN_0031f5a8(DAT_00398fd4,fVar2,uVar24,param_2,param_1,2,0x32,5);
        if (*(short *)(param_1 + 4000) == 0x2d) {
          *(undefined2 *)(param_2 + 0x31fc) = 10;
          *(undefined2 *)(param_2 + 0x31fe) = 10;
          *(undefined2 *)(param_2 + 0x3200) = 10;
          *(undefined2 *)(param_2 + 0x3202) = 0x73;
          *(undefined2 *)(param_2 + 0x3204) = 0x41;
          *(undefined2 *)(param_2 + 0x3206) = 100;
          *(undefined2 *)(param_2 + 0x3208) = 0x78;
          *(undefined2 *)(param_2 + 0x320a) = 0x78;
          *(undefined2 *)(param_2 + 0x320c) = 0x46;
        }
        if (*(short *)(param_1 + 4000) == 0x1e) {
          local_90 = *(undefined4 *)(param_1 + 0xfd0);
          local_8c = *(uint *)(param_1 + 0xfd4);
          local_88 = *(uint *)(param_1 + 0xfd8);
          sVar7 = 0;
          uVar24 = *(undefined4 *)(DAT_00398924 + 0x18);
          puVar12 = DAT_00399170;
          do {
            if (*(char *)(puVar12 + 9) == '\0') {
              *(undefined1 *)(puVar12 + 9) = 5;
              puVar12[0x15] = param_1;
              *puVar12 = local_90;
              puVar12[1] = local_8c;
              puVar12[2] = local_88;
              uVar9 = DAT_00399174[1];
              uVar15 = DAT_00399174[2];
              puVar12[6] = *DAT_00399174;
              puVar12[7] = uVar9;
              puVar12[8] = uVar15;
              puVar12[3] = puVar12[6];
              puVar12[4] = puVar12[7];
              puVar12[5] = puVar12[8];
              *(undefined2 *)(puVar12 + 10) = 0;
              *(short *)((int)puVar12 + 0x2a) = *(short *)(param_1 + 0xffa) + 0x4000;
              *(undefined2 *)(puVar12 + 0xb) = *(undefined2 *)(param_1 + 0xffc);
              fVar20 = (float)FUN_003759d0();
              *(short *)((int)puVar12 + 0x26) = (short)(int)(fVar20 * fVar23) + 10;
              *(undefined2 *)((int)puVar12 + 0x36) = 0xf0;
              puVar12[0x10] = fVar1;
              uVar24 = FUN_00371478(uVar24,10);
              puVar12[0x16] = uVar24;
              break;
            }
            sVar7 = sVar7 + 1;
            puVar12 = puVar12 + 0x17;
          } while (sVar7 < 200);
        }
      }
      else {
        if (iVar19 == 0x30) {
          FUN_00375bcc(param_1,DAT_00398fd8);
        }
        uStack_e4 = 1;
        FUN_0031f5a8(uVar24,uVar24,DAT_00398fdc,param_2,param_1,2,0x6e,3);
        uStack_e4 = 1;
        FUN_0031f5a8(uVar24,uVar24,DAT_00398fe0,param_2,param_1,2,0x6e,3);
        uStack_e4 = 1;
        FUN_0031f5a8(uVar24,uVar24,DAT_00398fe4,param_2,param_1,2,0x6e,3);
        FUN_003761f0(param_2);
        FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1158);
      }
      sVar7 = *(short *)(param_1 + 4000) + 1;
      *(short *)(param_1 + 4000) = sVar7;
      if (0x3b < sVar7) {
        *(undefined1 *)(param_1 + 0xf95) = 0;
      }
      return;
    }
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xc);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(uVar13 >> 0x15) & 3);
    FUN_00375c08(fVar2,fVar2,uVar9,uVar24,param_1 + 0x1a4,0xc,3);
    uVar24 = DAT_00398fb4;
    *(undefined1 *)(param_1 + 0xf95) = 0;
  }
  else {
    FUN_00371738(auStack_c8,param_1 + 0x1d4,0x44);
    iVar19 = FUN_003759d0();
    uVar24 = DAT_00398938;
    if (iVar19 < 0x3f000001) {
      uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xc);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar20,fVar2,uVar9,uVar24,param_1 + 0x1a4,0xc,3);
    }
    else {
      uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xb);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar20,fVar2,uVar9,uVar24,param_1 + 0x1a4,0xb,3);
    }
    FUN_00375ed8(param_1,0,0xff,0,0xc);
    uVar24 = DAT_00398fb0;
    *(undefined1 *)(param_1 + 0xf95) = 0;
  }
  *(undefined4 *)(param_1 + 0xf90) = uVar24;
  return;
}

