// OoT3D decomp @ 0042a7b0  name=FUN_0042a7b0  size=2404

void FUN_0042a7b0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ushort uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  float local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  float local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 uStack_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  undefined4 local_208;
  float local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float afStack_1dc [48];
  float afStack_11c [24];
  float afStack_bc [24];
  uint local_5c;
  int local_58;

  iVar7 = DAT_0042ab0c;
  fVar22 = DAT_0042ab04;
  fVar20 = DAT_0042ab00;
  fVar21 = DAT_0042aaf4;
  cVar1 = *(char *)(param_1 + 0x100);
  bVar19 = cVar1 != '\x03';
  if (!bVar19) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (bVar19 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar17 = *(int *)(DAT_0042aaf0 + param_1);
  if (iVar17 == 0) {
    return;
  }
  fVar32 = *(float *)(iVar17 + 0x28);
  fVar33 = *(float *)(iVar17 + 0x30);
  bVar19 = false;
  fVar34 = (float)VectorSignedToFloat((int)*DAT_0042aaf8,(byte)(in_fpscr >> 0x15) & 3);
  local_58 = (int)DAT_0042aaf8[2];
  local_5c = (uint)*(ushort *)(DAT_0042aafc + 0x92);
  fVar35 = (float)VectorSignedToFloat((int)DAT_0042aaf8[1],(byte)(in_fpscr >> 0x15) & 3);
  uVar16 = (uint)*(short *)(param_1 + 0x104);
  uVar15 = uVar16 - 0x51;
  if (uVar16 == 0x53) {
    if ((*(uint *)(DAT_0042ab08 + 0xbc) & *(uint *)(DAT_0042ab0c + 0x28)) != 0) {
      uVar15 = 0x14;
    }
  }
  else {
    iVar11 = *(int *)(DAT_0042ab08 + 4);
    if (uVar16 == 0x57) {
      uVar8 = DAT_0042ab08;
      if (iVar11 == 0) {
        uVar8 = *(uint *)(DAT_0042ab0c + 8);
      }
      if (iVar11 == 0 && (*(uint *)(DAT_0042ab08 + 0xbc) & uVar8) == 0) {
        uVar15 = 0x15;
      }
    }
    else {
      uVar5 = ~*(ushort *)(DAT_0042ab10 + 0xfe) & 0xf;
      if (uVar16 == 0x5a) {
        if ((iVar11 == 0) && (uVar5 != 0)) {
          uVar15 = 0x16;
        }
      }
      else if (uVar16 == 0x5d && uVar5 == 0) {
        uVar15 = 0x17;
      }
    }
  }
  FUN_00371738(afStack_bc,DAT_0042ab14,0x60);
  FUN_00371738(afStack_11c,DAT_0042ab18,0x60);
  FUN_00371738(afStack_1dc,DAT_0042ab1c,0xc0);
  iVar4 = DAT_0042ae64;
  fVar3 = DAT_0042ab2c;
  fVar2 = DAT_0042ab28;
  iVar11 = DAT_0042ab24;
  fVar23 = fVar21;
  if (uVar16 != 0x56) {
    if ((int)uVar16 < 0x57) {
      if (uVar16 != 7) {
        if (7 < (int)uVar16) {
          if (uVar16 != 0x52) {
            if ((int)uVar16 < 0x53) {
              if (uVar16 == 8 || uVar16 == 9) goto LAB_0042ab48;
              if (uVar16 == 0x51) goto LAB_0042a988;
            }
            else if ((uVar16 == 0x53 || uVar16 == 0x54) || uVar16 == 0x55) goto LAB_0042a988;
LAB_0042ac48:
            uVar15 = 0;
            local_26c = DAT_0042ab20;
            local_25c = DAT_0042ab20;
            fVar32 = DAT_0042ab20;
            fVar33 = DAT_0042ab20;
            goto LAB_0042ac5c;
          }
          goto LAB_0042a988;
        }
        if (6 < uVar16) goto LAB_0042ac48;
      }
LAB_0042ab48:
      iVar9 = (int)*(short *)(param_1 + 0x2e3c);
      psVar13 = (short *)(DAT_0042ae54 + -0x3c0 + uVar16 * 8);
      iVar18 = (int)*psVar13;
      iVar10 = (int)*(short *)(DAT_0042ae58 + uVar16 * 0x58 + iVar9 * 2);
      iVar14 = (int)psVar13[1];
      iVar12 = (int)*(short *)(DAT_0042ae54 + uVar16 * 0x58 + iVar9 * 2);
      fVar20 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar22 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar30 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar27 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar24 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar25 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
      fVar31 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      if ((*(int *)(DAT_0042ab24 + 0x68) == 0) ||
         (fVar20 = fVar23 + fVar32 / fVar20, fVar22 = fVar33 / fVar22 - fVar24,
         fVar32 = fVar30 + fVar34 / fVar25, fVar33 = fVar35 / fVar27 - fVar31,
         ((uint)*(byte *)(DAT_0042ab08 + local_5c + 0xc0) & *(uint *)(iVar7 + 4)) == 0)) {
        fVar20 = DAT_0042ab20;
        fVar22 = DAT_0042ab20;
        fVar32 = DAT_0042ab20;
        fVar33 = DAT_0042ab20;
      }
      uVar15 = uVar16;
      local_26c = fVar20 * DAT_0042ab28;
      local_25c = fVar22 * DAT_0042ab28;
      fVar22 = DAT_0042ae4c;
      fVar20 = DAT_0042ae48;
      fVar23 = *(float *)(*(int *)(DAT_0042ae50 + uVar16 * 4) + iVar9 * 4);
      fVar32 = fVar32 * DAT_0042ab28;
      fVar33 = fVar33 * DAT_0042ab28;
      goto LAB_0042ac5c;
    }
    if (0xd < uVar16 - 0x57) goto LAB_0042ac48;
  }
LAB_0042a988:
  bVar19 = true;
  if (*(int *)(DAT_0042ab24 + 0x3c) == 0) {
    fVar20 = (DAT_0042ab40 - afStack_bc[uVar15]) + afStack_1dc[uVar15 * 2];
    psVar13 = (short *)(DAT_0042ab44 + uVar15 * 8);
    fVar22 = (fVar22 - afStack_11c[uVar15]) + afStack_1dc[uVar15 * 2 + 1];
    fVar27 = (float)VectorSignedToFloat((int)psVar13[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar28 = (float)VectorSignedToFloat((int)psVar13[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = (float)VectorSignedToFloat((int)psVar13[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = (float)VectorSignedToFloat((int)*psVar13,(byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)VectorSignedToFloat((int)psVar13[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar30 = (float)VectorSignedToFloat((int)psVar13[3],(byte)(in_fpscr >> 0x15) & 3);
    fVar31 = (float)VectorSignedToFloat((int)*psVar13,(byte)(in_fpscr >> 0x15) & 3);
    fVar29 = (float)VectorSignedToFloat((int)psVar13[3],(byte)(in_fpscr >> 0x15) & 3);
    local_26c = (fVar27 + fVar32 / fVar24) * DAT_0042ab28;
    local_25c = (fVar33 / fVar25 - fVar30) * DAT_0042ab28;
    fVar32 = (fVar28 + fVar34 / fVar31) * DAT_0042ab28;
    fVar33 = (fVar35 / fVar26 - fVar29) * DAT_0042ab28;
    if (*(int *)(DAT_0042ab24 + 0x68) == 0) {
      local_26c = DAT_0042ab20;
      local_25c = DAT_0042ab20;
      fVar32 = DAT_0042ab20;
      fVar33 = DAT_0042ab20;
    }
  }
  else {
    pfVar6 = (float *)(DAT_0042ab30 + uVar15 * 0xc);
    fVar24 = pfVar6[2];
    local_26c = ((fVar32 - *pfVar6) * DAT_0042ab2c) / fVar24 + DAT_0042ab34;
    local_25c = ((fVar33 - pfVar6[1]) * DAT_0042ab2c) / fVar24 + DAT_0042ab38 + DAT_0042ab3c;
    fVar22 = fVar21;
    fVar20 = fVar21;
    fVar32 = ((fVar34 - *pfVar6) * DAT_0042ab2c) / fVar24 + DAT_0042ab34;
    fVar33 = ((fVar35 - pfVar6[1]) * DAT_0042ab2c) / fVar24 + DAT_0042ab38 + DAT_0042ab3c;
  }
LAB_0042ac5c:
  local_1e8 = DAT_0042ae5c;
  local_1e4 = DAT_0042ae5c;
  local_1e0 = fVar21;
  local_1f4 = DAT_0042ae60;
  local_1f0 = DAT_0042ae5c;
  local_1ec = fVar21;
  local_200 = DAT_0042ae5c;
  local_1fc = DAT_0042ae60;
  local_1f8 = fVar21;
  local_20c = DAT_0042ae60;
  local_208 = DAT_0042ae60;
  local_204 = fVar21;
  local_270 = 0;
  local_274 = 0;
  local_278 = 0x3f800000;
  local_268 = 0;
  uStack_264 = 0x3f800000;
  local_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_250 = 0x3f800000;
  local_24c = fVar21;
  iVar7 = DAT_0042ae64 - *(short *)(iVar17 + 0xbe);
  fVar34 = (float)VectorSignedToFloat((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x16)) >> 10,
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar34 * DAT_0042ab28,&local_278,1);
  FUN_003735ac(&local_248,&local_278,&local_1e8);
  fVar20 = fVar20 + fVar23;
  local_23c = local_248 + fVar20;
  local_238 = local_244 + fVar22;
  local_234 = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_1f4);
  local_230 = local_248 + fVar20;
  local_22c = local_244 + fVar22;
  local_228 = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_200);
  local_224 = local_248 + fVar20;
  local_220 = local_244 + fVar22;
  local_21c = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_20c);
  iVar7 = DAT_0042ae6c;
  fVar34 = DAT_0042ae68;
  uVar16 = DAT_0042ab08;
  local_218 = local_248 + fVar20;
  iVar17 = DAT_0042ae6c + -0x28;
  local_214 = local_244 + fVar22;
  local_210 = fVar21;
  if (*(char *)(DAT_0042ab08 + 0xe) == '\x01') {
    if (bVar19) {
      if (*(int *)(iVar11 + 0x3c) == 0) {
        fVar35 = *(float *)(DAT_0042ae6c + uVar15 * 4);
        local_23c = (fVar35 - local_23c) + fVar3;
        local_218 = (fVar35 - local_218) + fVar3;
        local_230 = (fVar35 - local_230) + fVar3;
        local_224 = (fVar35 - local_224) + fVar3;
      }
      else {
        local_218 = DAT_0042ae68 - local_218;
        local_23c = DAT_0042ae68 - local_23c;
        local_230 = DAT_0042ae68 - local_230;
        local_224 = DAT_0042ae68 - local_224;
      }
    }
    else {
      iVar9 = *(int *)(iVar17 + uVar15 * 4);
      fVar35 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_23c = (fVar35 - local_23c) + fVar3;
      fVar35 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_230 = (fVar35 - local_230) + fVar3;
      fVar35 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_224 = (fVar35 - local_224) + fVar3;
      fVar35 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_218 = (fVar35 - local_218) + fVar3;
    }
  }
  FUN_002f2c54(*(undefined4 *)(iVar11 + 0x18),&local_23c,2);
  local_270 = 0;
  local_274 = 0;
  local_278 = 0x3f800000;
  local_268 = 0;
  uStack_264 = 0x3f800000;
  local_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_250 = 0x3f800000;
  local_24c = fVar21;
  fVar35 = (float)VectorSignedToFloat((int)((iVar4 - local_58) +
                                           ((uint)(iVar4 - local_58 >> 0x1f) >> 0x16)) >> 10,
                                      (byte)(in_fpscr >> 0x15) & 3);
  local_26c = fVar32;
  local_25c = fVar33;
  FUN_00371234(fVar35 * fVar2,&local_278,1);
  FUN_003735ac(&local_248,&local_278,&local_1e8);
  local_23c = local_248 + fVar20;
  local_238 = local_244 + fVar22;
  local_234 = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_1f4);
  local_230 = local_248 + fVar20;
  local_22c = local_244 + fVar22;
  local_228 = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_200);
  local_224 = local_248 + fVar20;
  local_220 = local_244 + fVar22;
  local_21c = fVar21;
  FUN_003735ac(&local_248,&local_278,&local_20c);
  local_218 = local_248 + fVar20;
  local_214 = local_244 + fVar22;
  local_210 = fVar21;
  if (*(char *)(uVar16 + 0xe) == '\x01') {
    if (bVar19) {
      if (*(int *)(iVar11 + 0x3c) == 0) {
        fVar21 = *(float *)(iVar7 + uVar15 * 4);
        local_23c = (fVar21 - local_23c) + fVar3;
        local_218 = (fVar21 - local_218) + fVar3;
        local_230 = (fVar21 - local_230) + fVar3;
        local_224 = (fVar21 - local_224) + fVar3;
      }
      else {
        local_218 = fVar34 - local_218;
        local_23c = fVar34 - local_23c;
        local_230 = fVar34 - local_230;
        local_224 = fVar34 - local_224;
      }
    }
    else {
      iVar7 = *(int *)(iVar17 + uVar15 * 4);
      fVar21 = (float)VectorSignedToFloat((int)*(char *)(iVar7 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_23c = (fVar21 - local_23c) + fVar3;
      fVar21 = (float)VectorSignedToFloat((int)*(char *)(iVar7 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_230 = (fVar21 - local_230) + fVar3;
      fVar21 = (float)VectorSignedToFloat((int)*(char *)(iVar7 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_224 = (fVar21 - local_224) + fVar3;
      fVar21 = (float)VectorSignedToFloat((int)*(char *)(iVar7 + *(short *)(param_1 + 0x2e3c)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_218 = (fVar21 - local_218) + fVar3;
    }
  }
  FUN_002f2c54(*(undefined4 *)(iVar11 + 0x18),&local_23c,3);
  return;
}
