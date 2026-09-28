// OoT3D decomp @ 001fe3dc  name=FUN_001fe3dc  size=2480

void FUN_001fe3dc(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  int iStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined1 auStack_264 [36];
  undefined1 auStack_240 [48];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [60];
  float afStack_1a4 [87];
  undefined4 uStack_48;

  uStack_48 = *(undefined4 *)(param_2 + 0x20ac);
  FUN_00350820(auStack_1e0,uRam001fe7e8,0x44,6);
  pcVar5 = pcRam001fe7f0;
  fVar20 = fRam001fe7ec;
  *(float *)(param_1 + 0x294) = fRam001fe7ec;
  cVar1 = *pcVar5;
  bVar13 = cVar1 == '\0';
  if (bVar13) {
    cVar1 = *(char *)(param_1 + 800);
  }
  if (bVar13 && cVar1 == '\0') {
    iVar9 = func_0x00288394(param_2);
    if (iVar9 != 0) {
      func_0x00359450(*(undefined4 *)(param_2 + 0x20ac),&fStack_2a0);
      *(float *)(param_1 + 0x294) = fVar20;
      iVar9 = func_0x00339474(fStack_294,fStack_284,fStack_274,param_1 + 0x2e4,param_1 + 0x2f0,
                              (int)*(short *)(param_1 + 0x2fc),(int)*(short *)(param_1 + 0x2fe));
      fVar21 = fRam001fe7f4;
      if (iVar9 != 0) {
        fVar14 = SQRT(fStack_298 * fStack_298 + fStack_288 * fStack_288 + fStack_278 * fStack_278);
        uVar12 = in_fpscr & 0xfffffff;
        in_fpscr = uVar12 | (uint)(fVar14 == fVar20) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          *(float *)(param_1 + 0x2e0) = fRam001fe7f4;
        }
        else {
          *(float *)(param_1 + 0x2e0) = fRam001fe7f4 / fVar14;
        }
        if ((*(byte *)(iRam001fe7f8 + *(short *)(param_1 + 0x1c) * 0x20 + 0x1f) & 1) == 0) {
          fVar19 = *(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2e4);
          fVar18 = *(float *)(param_1 + 0x2f4) - *(float *)(param_1 + 0x2e8);
          fVar17 = *(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x2ec);
          fVar16 = (-fStack_298 * fVar19 - fStack_288 * fVar18) - fStack_278 * fVar17;
          in_fpscr = uVar12 | (uint)(fVar20 <= fVar16) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            in_fpscr = uVar12 | (uint)(fVar14 == fVar20) << 0x1e;
            fVar17 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17);
            bVar13 = SUB41(in_fpscr >> 0x1e,0);
            if (!bVar13) {
              in_fpscr = uVar12 | (uint)(fVar17 == fVar20) << 0x1e;
              bVar13 = SUB41(in_fpscr >> 0x1e,0);
            }
            if (!bVar13) {
              *(float *)(param_1 + 0x294) = -fVar16 / (fVar14 * fVar17);
            }
          }
        }
        else {
          *(float *)(param_1 + 0x294) = fVar21;
        }
      }
      uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x294) == fVar20) << 0x1e |
               (uint)(fVar20 <= *(float *)(param_1 + 0x294)) << 0x1d;
      bVar4 = (byte)(uVar12 >> 0x18);
      if ((bool)(bVar4 >> 5 & 1) && !(bool)(bVar4 >> 6)) {
        func_0x00359450(uStack_48,auStack_240);
        if (((*(uint *)(pcVar5 + 8) & 1) == 0) &&
           (iVar9 = func_0x003679b4(uRam001fe7fc), puVar8 = puRam001fe80c, uVar7 = uRam001fe808,
           uVar6 = uRam001fe804, iVar9 != 0)) {
          *puRam001fe80c = uRam001fe800;
          puVar8[1] = uVar6;
          puVar8[2] = uVar7;
        }
        func_0x0010004c(auStack_264,auStack_240);
        func_0x0034e0f0(&fStack_270,auStack_264,puRam001fe80c);
        fStack_27c = fStack_270;
        fStack_278 = (float)uStack_26c;
        fStack_274 = (float)uStack_268;
        fStack_210 = 1.0;
        fStack_1fc = 1.0;
        fStack_204 = fStack_270;
        fStack_200 = 0.0;
        fStack_1e8 = 1.0;
        fStack_20c = 0.0;
        fStack_208 = 0.0;
        fStack_1f8 = 0.0;
        uStack_1f4 = uStack_26c;
        uStack_1e4 = uStack_268;
        fStack_1f0 = 0.0;
        fStack_1ec = 0.0;
        func_0x0036c174(&fStack_210,&fStack_210,auStack_240);
        fVar14 = fRam001fe810;
        sVar2 = *(short *)(pcVar5 + 2);
        sVar3 = *(short *)(pcVar5 + 4);
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),(byte)(uVar12 >> 0x15) & 3);
        fVar16 = fVar16 * fRam001fe810;
        uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 == fVar20) << 0x1e;
        if (!SUB41(uVar12 >> 0x1e,0)) {
          fVar19 = (float)func_0x003727f0(fVar16);
          fVar15 = (float)func_0x00372674(fVar16);
          fVar16 = fStack_20c * fVar19;
          fStack_20c = fStack_20c * fVar15 - fStack_210 * fVar19;
          fVar17 = fStack_1fc * fVar19;
          fStack_1fc = fStack_1fc * fVar15 - fStack_200 * fVar19;
          fVar18 = fStack_1ec * fVar19;
          fStack_1ec = fStack_1ec * fVar15 - fStack_1f0 * fVar19;
          fStack_210 = fStack_210 * fVar15 + fVar16;
          fStack_200 = fStack_200 * fVar15 + fVar17;
          fStack_1f0 = fStack_1f0 * fVar15 + fVar18;
        }
        if (sVar3 != 0) {
          fVar16 = (float)VectorSignedToFloat((int)sVar3,(byte)(uVar12 >> 0x15) & 3);
          fVar16 = fVar16 * fVar14;
          uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 == fVar20) << 0x1e;
          if (!SUB41(uVar12 >> 0x1e,0)) {
            fVar17 = (float)func_0x003727f0(fVar16);
            fVar16 = (float)func_0x00372674(fVar16);
            fVar18 = fStack_210 * fVar17;
            fStack_210 = fStack_210 * fVar16 - fStack_208 * fVar17;
            fStack_208 = fVar18 + fStack_208 * fVar16;
            fVar18 = fStack_200 * fVar17;
            fStack_200 = fStack_200 * fVar16 - fStack_1f8 * fVar17;
            fStack_1f8 = fVar18 + fStack_1f8 * fVar16;
            fVar18 = fStack_1f0 * fVar17;
            fStack_1f0 = fStack_1f0 * fVar16 - fStack_1e8 * fVar17;
            fStack_1e8 = fVar18 + fStack_1e8 * fVar16;
          }
        }
        if (sVar2 != 0) {
          fVar16 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar12 >> 0x15) & 3);
          fVar16 = fVar16 * fVar14;
          if (fVar16 != fVar20) {
            fVar18 = (float)func_0x003727f0(fVar16);
            fVar19 = (float)func_0x00372674(fVar16);
            fVar14 = fStack_208 * fVar18;
            fStack_208 = fStack_208 * fVar19 - fStack_20c * fVar18;
            fVar16 = fStack_1f8 * fVar18;
            fStack_1f8 = fStack_1f8 * fVar19 - fStack_1fc * fVar18;
            fVar17 = fStack_1e8 * fVar18;
            fStack_1e8 = fStack_1e8 * fVar19 - fStack_1ec * fVar18;
            fStack_20c = fStack_20c * fVar19 + fVar14;
            fStack_1fc = fStack_1fc * fVar19 + fVar16;
            fStack_1ec = fStack_1ec * fVar19 + fVar17;
          }
        }
        fVar14 = *(float *)(param_1 + 0x294) * fRam001fec38;
        fStack_210 = fStack_210 * fVar21;
        fStack_200 = fStack_200 * fVar21;
        fStack_1f0 = fStack_1f0 * fVar21;
        fStack_20c = fStack_20c * fVar21;
        fStack_1fc = fStack_1fc * fVar21;
        fStack_1ec = fStack_1ec * fVar21;
        fStack_208 = fStack_208 * fVar14;
        fStack_1f8 = fStack_1f8 * fVar14;
        fStack_1e8 = fStack_1e8 * fVar14;
        *(undefined1 *)(*(int *)(param_1 + 0x328) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x328),&fStack_210);
        iVar9 = *(int *)(param_1 + 0x328);
        *(float *)(iVar9 + 0x24) = fStack_204;
        *(undefined4 *)(iVar9 + 0x28) = uStack_1f4;
        *(undefined4 *)(iVar9 + 0x2c) = uStack_1e4;
        func_0x003695cc(fVar21,fVar21,fVar21,*(float *)(param_1 + 0x294) * fRam001fec3c,
                        *(undefined4 *)(param_1 + 0x328),0,4,2);
        func_0x00372170(*(undefined4 *)(param_1 + 0x328),0);
        func_0x00359450(*(undefined4 *)(param_2 + 0x20ac),&fStack_2cc);
        fVar14 = fRam001fec48;
        iVar9 = iRam001fec44;
        fVar18 = *(float *)(param_1 + 0x2e0);
        fVar19 = *(float *)(param_1 + 0x294) * fRam001fec40;
        iVar11 = 0;
        fVar16 = fVar20;
        fVar17 = fVar20;
        do {
          iVar10 = param_1 + iVar11 * 0xc;
          fStack_27c = *(float *)(iVar10 + 0x298) * fStack_2cc +
                       *(float *)(iVar10 + 0x29c) * fStack_2c8 + fStack_2c0;
          fStack_288 = fStack_27c + fStack_2c4 * fVar18 * fVar19;
          fStack_278 = *(float *)(iVar10 + 0x298) * fStack_2bc +
                       *(float *)(iVar10 + 0x29c) * fStack_2b8 + fStack_2b0;
          fStack_274 = *(float *)(iVar10 + 0x298) * fStack_2ac +
                       *(float *)(iVar10 + 0x29c) * fStack_2a8 + fStack_2a0;
          fStack_284 = fStack_278 + fStack_2b4 * fVar18 * fVar19;
          fStack_280 = fStack_274 + fStack_2a4 * fVar18 * fVar19;
          iVar10 = func_0x003393ec(param_2 + 0xa98,&fStack_27c,&fStack_288,&fStack_294,&fStack_298,1
                                   ,1,1,1,&iStack_29c);
          if (iVar10 == 0) {
            afStack_1a4[iVar11 * 0x11] = 0.0;
          }
          else {
            afStack_1a4[iVar11 * 0x11] = fStack_298;
            if (iStack_29c == 0x32) {
              fVar16 = fVar16 + fVar21;
              fVar15 = SQRT((fStack_27c - fStack_294) * (fStack_27c - fStack_294) +
                            (fStack_278 - fStack_290) * (fStack_278 - fStack_290) +
                            (fStack_274 - fStack_28c) * (fStack_274 - fStack_28c));
              if (iVar9 < (int)fVar15) {
                fVar15 = fVar14;
              }
              fVar17 = fVar17 + fVar15;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
        if (fVar16 != fVar20) {
          fVar18 = fVar17 / fVar16;
          if (iVar9 < (int)(fVar17 / fVar16)) {
            fVar18 = fVar14;
          }
          *(short *)(iRam001fec4c + param_2) = (short)(int)fVar18;
        }
        iVar9 = 0;
        iVar11 = iVar9;
        do {
          while (iVar9 = iVar9 + 1, iVar9 < 6) {
            fVar14 = afStack_1a4[iVar11 * 0x11];
            if ((((fVar14 != 0.0) && (fVar16 = afStack_1a4[iVar9 * 0x11], fVar16 != 0.0)) &&
                (((int)*(short *)((int)fVar14 + 10) - (int)*(short *)((int)fVar16 + 10)) + 99U < 199
                )) && (((int)*(short *)((int)fVar14 + 0xc) - (int)*(short *)((int)fVar16 + 0xc)) +
                       99U < 199)) {
              uVar12 = ((int)*(short *)((int)fVar14 + 0xe) - (int)*(short *)((int)fVar16 + 0xe)) +
                       99;
              bVar13 = uVar12 == 0xc6;
              if (uVar12 < 199) {
                bVar13 = *(float *)((int)fVar14 + 0x10) == *(float *)((int)fVar16 + 0x10);
              }
              if (bVar13) {
                afStack_1a4[iVar9 * 0x11] = 0.0;
              }
            }
          }
          iVar9 = iVar11 + 1;
          iVar11 = iVar9;
        } while (iVar9 < 6);
        func_0x00150d58(param_1,param_2,auStack_1e0);
        func_0x00359450(uStack_48,&fStack_2a0);
        fStack_2ac = fStack_294;
        fStack_2a8 = fStack_284;
        fStack_2a4 = fStack_274;
        fVar16 = *(float *)(param_1 + 0x2e0);
        fVar14 = *(float *)(param_1 + 0x294) * *(float *)(pcVar5 + 0xc);
        fStack_2b8 = fStack_294 - fStack_298 * fVar16 * fVar14;
        fStack_2b4 = fStack_284 - fStack_288 * fVar16 * fVar14;
        fStack_2b0 = fStack_274 - fStack_278 * fVar16 * fVar14;
        if (*(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x294) == fVar20) {
          func_0x00340ac8(fVar20,uStack_48,0,0);
        }
        else {
          fVar14 = fStack_294 - fStack_2b8;
          fVar17 = fStack_274 - fStack_2b0;
          fVar16 = fStack_284 - fStack_2b4;
          fVar18 = fVar21 / SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
          fVar17 = fVar17 * fVar18;
          fVar14 = fVar14 * fVar18;
          fVar16 = fVar16 * fVar18;
          fVar18 = fVar21 * fVar17 - fVar20 * fVar16;
          fVar19 = fVar20 * fVar14 - fVar20 * fVar17;
          fVar20 = fVar20 * fVar16 - fVar21 * fVar14;
          fVar21 = fVar21 / SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20);
          fVar20 = fVar20 * fVar21;
          fVar18 = fVar18 * fVar21;
          fVar19 = fVar19 * fVar21;
          *(float *)(param_1 + 0x32c) = fVar18;
          *(float *)(param_1 + 0x330) = fVar19;
          *(float *)(param_1 + 0x334) = fVar20;
          fVar21 = fVar16 * fVar20 - fVar17 * fVar19;
          fVar15 = fVar17 * fVar18 - fVar14 * fVar20;
          fVar22 = fVar14 * fVar19 - fVar16 * fVar18;
          *(float *)(param_1 + 0x33c) = fVar21;
          *(float *)(param_1 + 0x340) = fVar15;
          *(float *)(param_1 + 0x344) = fVar22;
          *(float *)(param_1 + 0x34c) = fVar14;
          *(float *)(param_1 + 0x350) = fVar16;
          *(float *)(param_1 + 0x354) = fVar17;
          *(float *)(param_1 + 0x338) =
               -(fStack_294 * fVar18 + fStack_284 * fVar19) + -(fStack_274 * fVar20);
          fStack_2c4 = fRam001fedd0;
          *(float *)(param_1 + 0x348) =
               -(fStack_294 * fVar21 + fStack_284 * fVar15) + -(fStack_274 * fVar22);
          *(float *)(param_1 + 0x358) =
               -(fStack_294 * fVar14 + fStack_284 * fVar16) + -(fStack_274 * fVar17);
          fStack_2c0 = fStack_2c4;
          fStack_2bc = fStack_2c4;
          func_0x003393ac(param_1 + 0x32c,&fStack_2c4,param_1 + 0x32c);
          func_0x00340ac8(*(float *)(param_1 + 0x294) * *(float *)(pcVar5 + 0xc),uStack_48,
                          param_1 + 0x32c,&fStack_2ac,&fStack_2b8);
        }
        *pcVar5 = '\x01';
        return;
      }
    }
    func_0x00340ac8(uStack_48,0,0);
  }
  return;
}
