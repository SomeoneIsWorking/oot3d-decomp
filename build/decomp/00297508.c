// OoT3D decomp @ 00297508  name=FUN_00297508  size=3208

/* WARNING: Removing unreachable block (ram,0x00159e3c) */
/* WARNING: Removing unreachable block (ram,0x00159e50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00297508(int param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  float *pfVar5;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
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
  float local_bc [3];
  float *local_b0;
  float local_ac;
  float local_a8;
  float local_a4 [12];
  float local_74 [6];
  float local_5c [6];

  fVar13 = DAT_00297ce4;
  uVar30 = DAT_002978d0;
  fVar14 = DAT_002978c4;
  uVar28 = DAT_002978c0;
  uVar27 = DAT_002978bc;
  iVar11 = DAT_00159efc;
  fVar18 = DAT_00159ef8;
  iVar7 = DAT_00159ef4;
  fVar17 = DAT_00159ef0;
  fVar19 = DAT_00159eec;
  fVar16 = DAT_00159ee8;
  fVar29 = DAT_00159ee4;
  fVar26 = DAT_00159ee0;
  fVar15 = DAT_00159edc;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    if ((*(ushort *)(*(int *)(param_2 + 0xa54) + 0x194) & 0x100) != 0) {
      return;
    }
    uVar10 = 0;
    if (*(char *)(param_2 + 0x3271) != '\0') {
      do {
        iVar12 = param_1 + uVar10 * 0x54;
        local_5c[3] = *(float *)(iVar12 + 0x1c0) + *(float *)(iVar12 + 0x1a8);
        local_5c[4] = *(float *)(iVar12 + 0x1c4) + *(float *)(iVar12 + 0x1ac);
        local_5c[5] = *(float *)(iVar12 + 0x1c8) + *(float *)(iVar12 + 0x1b0);
        local_5c[2] = *(float *)(iVar12 + 0x1e8);
        fVar13 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar12 + 0x1e4),(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = fVar13 * fVar26;
        if (0x3f800000 < (int)(fVar13 * fVar26)) {
          fVar14 = fVar29;
        }
        fVar14 = fVar14 * fVar16;
        local_5c[0] = local_5c[2] * fVar14;
        local_5c[1] = local_5c[2] * fVar14;
        local_5c[2] = local_5c[2] * fVar14;
        uVar20 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x7f44) == fVar15) << 0x1e;
        if (SUB41(uVar20 >> 0x1e,0)) goto LAB_00159cd0;
        if ((int)uVar10 < 0x20) {
          bVar1 = *(byte *)(iVar12 + 0x1e4);
          if (*(char *)(iVar12 + 0x1a4) == '\x02') {
            if (bVar1 < 100) {
              cVar3 = bVar1 + 1;
              goto LAB_00159c4c;
            }
          }
          else if (bVar1 != 0) {
            cVar3 = bVar1 - 1;
            goto LAB_00159c4c;
          }
        }
        else {
          bVar1 = *(byte *)(iVar12 + 0x1e4);
          if (*(char *)(iVar12 + 0x1a4) == '\x02') {
            if ((*(ushort *)(iVar12 + 0x1e0) & 0xf) < 8) {
              if (0x9a < bVar1) goto LAB_00159cb4;
              cVar3 = bVar1 + 100;
            }
            else {
              if (bVar1 < 0xb) goto LAB_00159cc8;
              cVar3 = bVar1 - 10;
            }
          }
          else if ((*(ushort *)(iVar12 + 0x1e0) & 0x1f) < 0x10) {
            if (bVar1 < 0xeb) {
              cVar3 = bVar1 + 0x14;
            }
            else {
LAB_00159cb4:
              cVar3 = -1;
            }
          }
          else if (bVar1 < 0x15) {
LAB_00159cc8:
            cVar3 = '\0';
          }
          else {
            cVar3 = bVar1 - 0x14;
          }
LAB_00159c4c:
          *(char *)(iVar12 + 0x1e4) = cVar3;
        }
LAB_00159cd0:
        if ((uVar10 & 1) == 0) {
          local_b0 = (float *)(uint)*(byte *)(iVar12 + 0x1e4);
          local_ac = 3.50325e-43;
          local_a8 = 2.52234e-43;
          local_a4[0] = 0.0;
          FUN_003534b8(local_74 + 2,0xff,0xff,0x9b);
        }
        else if ((uVar10 & 1) == 1) {
          local_b0 = (float *)(uint)*(byte *)(iVar12 + 0x1e4);
          local_ac = 0.0;
          local_a8 = 1.4013e-43;
          local_a4[0] = 3.57331e-43;
          FUN_003534b8(local_74 + 2,0xff,0xff);
        }
        fVar14 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(DAT_00159f00 + iVar12),
                                   (byte)(uVar20 >> 0x15) & 3);
        fVar14 = fVar14 * fVar19 * fVar17;
        in_fpscr = uVar20 & 0xfffffff | (uint)(fVar15 <= fVar14) << 0x1d;
        for (fVar14 = ABS(fVar14); iVar7 <= (int)fVar14; fVar14 = fVar14 - fVar18) {
        }
        uVar20 = VectorFloatToUnsigned(fVar15,3);
        uVar21 = VectorFloatToUnsigned(fVar15,3);
        uVar22 = VectorFloatToUnsigned(fVar14,3);
        pfVar8 = (float *)(iVar11 + (uVar20 & 0xff) * 0x10);
        fVar25 = (float)VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorUnsignedToFloat(uVar21 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar5 = (float *)(iVar11 + (uVar22 & 0xff) * 0x10);
        fVar23 = (float)VectorUnsignedToFloat(uVar22 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar24 = pfVar8[1] + (fVar15 - fVar25) * pfVar8[3];
        pfVar9 = (float *)(iVar11 + (uVar21 & 0xff) * 0x10);
        fVar25 = *pfVar8 + (fVar15 - fVar25) * pfVar8[2];
        local_a4[10] = *pfVar9 + (fVar15 - fVar13) * pfVar9[2];
        local_a4[6] = pfVar9[1] + (fVar15 - fVar13) * pfVar9[3];
        fVar13 = *pfVar5 + (fVar14 - fVar23) * pfVar5[2];
        fVar14 = pfVar5[1] + (fVar14 - fVar23) * pfVar5[3];
        local_a4[0xb] = fVar25 * local_a4[6];
        local_74[0] = fVar24 * local_a4[6];
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar13 = -fVar13;
        }
        local_a4[2] = fVar14 * local_a4[6];
        local_a4[6] = fVar13 * local_a4[6];
        local_a4[3] = fVar25 * fVar14 * local_a4[10] - fVar24 * fVar13;
        local_a4[8] = fVar24 * fVar13 * local_a4[10] - fVar25 * fVar14;
        local_a4[4] = fVar25 * fVar13 + fVar24 * fVar14 * local_a4[10];
        local_a4[7] = fVar24 * fVar14 + fVar25 * fVar13 * local_a4[10];
        local_a4[10] = -local_a4[10];
        local_a4[5] = 0.0;
        local_a4[9] = 0.0;
        local_b0 = local_74 + 2;
        local_74[1] = 0.0;
        local_ac = 0.0;
        FUN_00371f1c(*(undefined4 *)(param_1 + (uVar10 & 1) * 4 + 0x16c0),local_5c + 3,local_a4 + 2,
                     local_5c);
        uVar10 = (uint)(short)((short)uVar10 + 1);
      } while ((int)uVar10 < (int)(uint)*(byte *)(param_2 + 0x3271));
    }
    FUN_00371eac(*(undefined4 *)(param_1 + 0x16c0),0);
    FUN_00371eac(*(undefined4 *)(param_1 + 0x16c4),0);
    return;
  case 2:
    if (*(char *)(param_1 + 0x1a4) == '\x01') {
      iVar7 = *(int *)(&DAT_000022dc + param_2);
      local_5c[3] = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),
                                               (byte)(in_fpscr >> 0x15) & 3);
      local_5c[5] = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x14),
                                               (byte)(in_fpscr >> 0x15) & 3);
      local_5c[4] = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x10),
                                               (byte)(in_fpscr >> 0x15) & 3);
      local_5c[0] = DAT_002978c8;
      local_5c[1] = (float)DAT_002978cc;
      local_5c[2] = (float)DAT_002978bc;
      FUN_00369014(DAT_002978d0,local_a4 + 6,0);
      FUN_00371234(uVar30,local_a4 + 6,1);
      uVar27 = DAT_002978e4;
      uVar10 = (uint)*(ushort *)(param_1 + 500) * 2;
      local_bc[0] = (float)VectorSignedToFloat(uVar10 % 8,(byte)(in_fpscr >> 0x15) & 3);
      local_bc[0] = local_bc[0] * DAT_002978d4;
      local_ac = (float)VectorSignedToFloat((int)uVar10 >> 3,(byte)(in_fpscr >> 0x15) & 3);
      local_ac = local_ac * DAT_002978d8;
      local_a4[5] = fVar14;
      local_c0 = 0.0;
      local_c4 = 0.0;
      local_c8 = 1.0;
      local_bc[1] = 0.0;
      local_bc[2] = 1.0;
      local_b0 = (float *)0x0;
      local_a8 = 0.0;
      local_a4[0] = 0.0;
      local_a4[1] = 1.0;
      local_a4[2] = fVar14;
      local_e8 = fVar14;
      local_dc = fVar14;
      local_d4 = fVar14;
      local_d0 = fVar14;
      local_d8 = (float)uVar28;
      local_cc = (float)DAT_002978e4;
      local_e4 = (float)uVar28;
      local_e0 = (float)uVar28;
      iVar7 = *(int *)(param_1 + 0x16c8);
      *(undefined4 *)(iVar7 + 0xf0) = uVar28;
      *(float *)(iVar7 + 0xf4) = fVar14;
      *(float *)(iVar7 + 0xf8) = fVar14;
      *(undefined4 *)(iVar7 + 0xfc) = uVar27;
      local_a4[3] = local_bc[0];
      local_a4[4] = local_ac;
      FUN_003429c8(*(undefined4 *)(param_1 + 0x16c8),1,&local_e8);
      iVar7 = *(int *)(param_1 + 0x16c8);
      *(float *)(iVar7 + 0x110) = local_c8;
      *(float *)(iVar7 + 0x114) = local_c4;
      *(float *)(iVar7 + 0x118) = local_c0;
      *(float *)(iVar7 + 0x11c) = local_bc[0];
      *(float *)(iVar7 + 0x120) = local_bc[1];
      *(float *)(iVar7 + 0x124) = local_bc[2];
      *(float **)(iVar7 + 0x128) = local_b0;
      *(float *)(iVar7 + 300) = local_ac;
      *(float *)(iVar7 + 0x130) = local_a8;
      *(float *)(iVar7 + 0x134) = local_a4[0];
      *(float *)(iVar7 + 0x138) = local_a4[1];
      *(float *)(iVar7 + 0x13c) = local_a4[2];
      iVar7 = *(int *)(param_1 + 0x16c8);
      *(float *)(iVar7 + 0x3c) = local_5c[3];
      *(float *)(iVar7 + 0x40) = local_5c[4];
      *(float *)(iVar7 + 0x44) = local_5c[5];
      iVar7 = *(int *)(param_1 + 0x16c8);
      *(float *)(iVar7 + 0x48) = local_5c[0];
      *(float *)(iVar7 + 0x4c) = local_5c[1];
      *(float *)(iVar7 + 0x50) = local_5c[2];
      iVar7 = *(int *)(param_1 + 0x16c8);
      *(float *)(iVar7 + 0x54) = local_a4[6];
      *(float *)(iVar7 + 0x58) = local_a4[7];
      *(float *)(iVar7 + 0x5c) = local_a4[8];
      *(float *)(iVar7 + 0x60) = local_a4[9];
      *(float *)(iVar7 + 100) = local_a4[10];
      *(float *)(iVar7 + 0x68) = local_a4[0xb];
      *(float *)(iVar7 + 0x6c) = local_74[0];
      *(float *)(iVar7 + 0x70) = local_74[1];
      *(float *)(iVar7 + 0x74) = local_74[2];
      *(float *)(iVar7 + 0x78) = local_74[3];
      *(float *)(iVar7 + 0x7c) = local_74[4];
      *(float *)(iVar7 + 0x80) = local_74[5];
      FUN_00371eac(*(undefined4 *)(param_1 + 0x16c8),0);
    }
    break;
  case 3:
    FUN_003f87fc(param_1,param_2);
    return;
  case 4:
    iVar11 = FUN_0037571c(param_2);
    iVar7 = DAT_002978ec;
    psVar6 = (short *)0x0;
    if (iVar11 != 0) {
      psVar6 = *(short **)(&DAT_000022e0 + param_2);
    }
    if (((iVar11 != 0 && psVar6 != (short *)0x0) && (*psVar6 == 2)) &&
       (*(char *)(param_1 + 0x16b1) != '\0')) {
      if (*(char *)(param_1 + 0x1a4) == '\0') {
        fVar15 = *(float *)(param_1 + 0x1f0) + DAT_002978e8;
        *(float *)(param_1 + 0x1f0) = fVar15;
        if (0x3f7fffff < (int)fVar15) {
          *(undefined4 *)(param_1 + 0x1f0) = uVar28;
          *(undefined1 *)(param_1 + 0x1a4) = 1;
        }
      }
      else {
        fVar15 = *(float *)(param_1 + 0x1f0) - DAT_002978e8;
        *(float *)(param_1 + 0x1f0) = fVar15;
        if ((int)fVar15 <= iVar7) {
          *(float *)(param_1 + 0x1f0) = fVar14;
          *(undefined1 *)(param_1 + 0x1a4) = 0;
        }
      }
      uVar4 = *(short *)(param_1 + 500) + 1;
      *(ushort *)(param_1 + 500) = uVar4;
      if (7 < uVar4) {
        *(undefined2 *)(param_1 + 500) = 0;
      }
      iVar7 = *(int *)(&DAT_000022e0 + param_2);
      fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar29 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x10),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar19 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x18),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar17 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x1c),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x20),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar15 = (float)FUN_00361490(*(undefined2 *)(iVar7 + 4),*(undefined2 *)(iVar7 + 2),
                                   *(undefined2 *)(DAT_002978f0 + param_2));
      local_a4[9] = fVar26 + (fVar19 - fVar26) * fVar15;
      local_a4[10] = fVar29 + (fVar17 - fVar29) * fVar15;
      local_a4[0xb] = fVar16 + (fVar18 - fVar16) * fVar15;
      local_5c[4] = *(float *)(param_1 + 0x1e8) * DAT_00297cd8;
      local_74[0] = local_5c[4] * 1.0;
      local_74[4] = local_5c[4] * 0.0;
      local_5c[2] = local_5c[4] * 0.0;
      local_74[1] = local_5c[4] * 0.0;
      local_74[5] = local_5c[4] * 1.0;
      local_5c[3] = local_5c[4] * 0.0;
      local_74[2] = local_5c[4] * 0.0;
      local_5c[0] = local_5c[4] * 0.0;
      local_5c[4] = local_5c[4] * 1.0;
      local_74[3] = local_a4[9];
      local_5c[1] = local_a4[10];
      local_5c[5] = local_a4[0xb];
      iVar7 = FUN_003695f8();
      iVar11 = *(int *)(*(int *)(param_1 + 0x170c) + 0xc);
      if (iVar7 == 0) {
        *(undefined4 *)(iVar11 + 0xc) = uVar27;
      }
      else {
        *(float *)(iVar11 + 0xc) = fVar14;
      }
      FUN_0035e240(param_1 + 0x16e4,local_74,0,DAT_00297cdc,param_1,0);
      return;
    }
    break;
  case 5:
    local_5c[0] = *DAT_00297ce0;
    local_5c[1] = DAT_00297ce0[1];
    local_5c[2] = DAT_00297ce0[2];
    local_5c[3] = DAT_00297ce0[3];
    local_5c[4] = DAT_00297ce0[4];
    local_5c[5] = DAT_00297ce0[5];
    local_74[0] = DAT_00297ce0[6];
    local_74[1] = DAT_00297ce0[7];
    local_74[2] = DAT_00297ce0[8];
    local_74[3] = DAT_00297ce0[9];
    local_74[4] = DAT_00297ce0[10];
    local_74[5] = DAT_00297ce0[0xb];
    local_a4[6] = DAT_00297ce0[0xc];
    local_a4[7] = DAT_00297ce0[0xd];
    local_a4[8] = DAT_00297ce0[0xe];
    local_a4[9] = DAT_00297ce0[0xf];
    local_a4[10] = DAT_00297ce0[0x10];
    local_a4[0xb] = DAT_00297ce0[0x11];
    local_a4[0] = DAT_00297ce0[0x12];
    local_a4[1] = DAT_00297ce0[0x13];
    local_a4[2] = DAT_00297ce0[0x14];
    local_a4[3] = DAT_00297ce0[0x15];
    local_a4[4] = DAT_00297ce0[0x16];
    local_a4[5] = DAT_00297ce0[0x17];
    local_bc[0] = DAT_00297ce0[0x18];
    local_bc[1] = DAT_00297ce0[0x19];
    local_bc[2] = DAT_00297ce0[0x1a];
    local_b0 = (float *)DAT_00297ce0[0x1b];
    local_ac = DAT_00297ce0[0x1c];
    local_a8 = DAT_00297ce0[0x1d];
    if (*(char *)(param_1 + 0x16b1) != '\0') {
      iVar7 = FUN_003695f8();
      if (iVar7 != 0) {
        fVar13 = fVar14;
      }
      if (*(char *)(DAT_00297ce8 + param_2) != '\0') {
        uVar30 = *(undefined4 *)(param_1 + 0x18a0);
        uVar2 = *(undefined8 *)(param_1 + 0x18a4);
        uVar28 = *(undefined4 *)(param_1 + 0x18b0);
        uVar27 = *(undefined4 *)(param_1 + 0x18b4);
        if (*(char *)(DAT_00297cec + param_2) == '\x01') {
          FUN_003695cc(fVar14,fVar14,fVar14,*(undefined4 *)(param_1 + 0x18ac),
                       *(undefined4 *)(param_2 + 0x4c3c),0x13,4,2);
          FUN_003695cc(fVar14,fVar14,fVar14,(int)((ulonglong)uVar2 >> 0x20),
                       *(undefined4 *)(param_2 + 0x4c3c),0x14,4,2);
          FUN_003695cc(fVar14,fVar14,fVar14,(int)uVar2,*(undefined4 *)(param_2 + 0x4c3c),0x15,4,2);
          FUN_003695cc(fVar14,fVar14,fVar14,uVar30,*(undefined4 *)(param_2 + 0x4c3c),0x16,4,2);
          FUN_003695cc(fVar14,fVar14,fVar14,uVar27,*(undefined4 *)(param_2 + 0x4c3c),0x17,4,2);
          FUN_003695cc(fVar14,fVar14,fVar14,uVar28,*(undefined4 *)(param_2 + 0x4c3c),0x18,4,2);
        }
      }
      fVar26 = DAT_00297cf8;
      fVar15 = DAT_00297cf4;
      iVar7 = DAT_00297cf0;
      iVar11 = 0;
      do {
        iVar12 = param_1 + iVar11 * 0x54;
        if (iVar7 < *(int *)(iVar12 + 0x1e8)) {
          local_e0 = local_5c[iVar11];
          local_d0 = local_74[iVar11];
          local_c0 = local_a4[iVar11 + 6];
          local_e4 = 0.0;
          local_e8 = 0.0;
          local_ec = 1.0;
          local_dc = 0.0;
          local_d8 = 1.0;
          local_c8 = 0.0;
          local_c4 = 1.0;
          local_d4 = 0.0;
          local_cc = 0.0;
          fVar29 = local_bc[iVar11 + 6] * fVar15;
          if (fVar29 != fVar14) {
            fVar16 = (float)FUN_003727f0(fVar29);
            fVar29 = (float)FUN_00372674(fVar29);
            fVar19 = local_ec * fVar16;
            local_ec = local_ec * fVar29 - local_e4 * fVar16;
            local_e4 = fVar19 + local_e4 * fVar29;
            fVar19 = local_dc * fVar16;
            local_dc = local_dc * fVar29 - local_d4 * fVar16;
            local_d4 = fVar19 + local_d4 * fVar29;
            fVar19 = local_cc * fVar16;
            local_cc = local_cc * fVar29 - local_c4 * fVar16;
            local_c4 = fVar19 + local_c4 * fVar29;
          }
          fVar29 = local_bc[iVar11] * fVar15;
          if (fVar29 != fVar14) {
            fVar17 = (float)FUN_003727f0(fVar29);
            fVar18 = (float)FUN_00372674(fVar29);
            fVar29 = local_e4 * fVar17;
            local_e4 = local_e4 * fVar18 - local_e8 * fVar17;
            fVar16 = local_d4 * fVar17;
            local_d4 = local_d4 * fVar18 - local_d8 * fVar17;
            fVar19 = local_c4 * fVar17;
            local_c4 = local_c4 * fVar18 - local_c8 * fVar17;
            local_e8 = local_e8 * fVar18 + fVar29;
            local_d8 = local_d8 * fVar18 + fVar16;
            local_c8 = local_c8 * fVar18 + fVar19;
          }
          fVar29 = *(float *)(iVar12 + 0x1e8);
          iVar12 = param_1 + iVar11 * 4;
          local_ec = local_ec * fVar29;
          local_dc = local_dc * fVar29;
          local_cc = local_cc * fVar29;
          local_e8 = local_e8 * fVar26;
          local_d8 = local_d8 * fVar26;
          local_c8 = local_c8 * fVar26;
          local_e4 = local_e4 * fVar29;
          local_d4 = local_d4 * fVar29;
          local_c4 = local_c4 * fVar29;
          *(float *)(*(int *)(*(int *)(iVar12 + 0x16cc) + 0xc) + 0xc) = fVar13;
          *(undefined1 *)(*(int *)(iVar12 + 0x16cc) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(iVar12 + 0x16cc),&local_ec);
          *(undefined1 *)(*(int *)(iVar12 + 0x16cc) + 0xad) = 1;
          FUN_00372170(*(undefined4 *)(iVar12 + 0x16cc),0);
        }
        iVar11 = (int)(short)((short)iVar11 + 1);
      } while (iVar11 < 6);
      return;
    }
  }
  return;
}
