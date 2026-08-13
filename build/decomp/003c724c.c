// OoT3D decomp @ 003c724c  name=FUN_003c724c  size=3980

void FUN_003c724c(int param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float afStack_dc [8];
  float fStack_bc;
  float afStack_b8 [8];
  float fStack_98;
  float fStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  int iStack_70;

  iStack_90 = 0;
  iVar21 = *(int *)(param_2 + 0x20ac);
  FUN_003731e0(param_1 + 0x228);
  FUN_003731e0(param_1 + 0x2ac);
  FUN_003731e0(param_1 + 0x330);
  fVar30 = *(float *)(param_1 + 0x28);
  fVar23 = *(float *)(param_1 + 0x924);
  fVar24 = *(float *)(param_1 + 0x928);
  fVar31 = *(float *)(param_1 + 0x2c);
  fVar25 = *(float *)(param_1 + 0x92c);
  fVar32 = *(float *)(param_1 + 0x30);
  fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar26 = (float)func_0x002cfca0((int)(short)(int)(fVar26 * (*(float *)(param_1 + 0x91c) +
                                                             fRam003c769c)));
  fVar34 = (fVar23 - fVar30) + fVar26 * *(float *)(param_1 + 0x918);
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar23 = (float)func_0x002cfca0((int)(short)(int)(fVar23 * (*(float *)(param_1 + 0x91c) +
                                                             fRam003c76a0)));
  fVar35 = (fVar24 - fVar31) + fVar23 * *(float *)(param_1 + 0x918);
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar23 = (float)func_0x002cfca0((int)(short)(int)(fVar23 * (*(float *)(param_1 + 0x91c) +
                                                             fRam003c76a4)));
  fVar33 = (fVar25 - fVar32) + fVar23 * *(float *)(param_1 + 0x918);
  fVar23 = (float)func_0x003696ec(fVar34,fVar33);
  fVar34 = fVar34 * fVar34;
  fStack_94 = (float)VectorSignedToFloat((int)(short)(int)(fVar23 * fRam003c76a8),
                                         (byte)(in_fpscr >> 0x15) & 3);
  fVar24 = (float)func_0x003696ec(fVar35);
  fVar23 = fRam003c76b0;
  iStack_70 = param_1 + 0x8e8;
  fVar36 = (float)VectorSignedToFloat((int)(short)(int)(fVar24 * fRam003c76a8),
                                      (byte)(in_fpscr >> 0x15) & 3);
  func_0x00373500(uRam003c76b4);
  fVar32 = fRam003c76cc;
  fVar31 = fRam003c76c8;
  fVar30 = fRam003c76c4;
  fVar26 = fRam003c76c0;
  fVar25 = fRam003c76bc;
  fVar24 = fRam003c76b8;
  puStack_74 = (undefined4 *)(param_1 + 0x28);
  puStack_78 = (undefined4 *)(param_1 + 0x924);
  if (*(short *)(param_1 + 0x229e) == 0) {
    *(undefined4 *)(param_1 + 0x90c) = uRam003c76d0;
  }
  else {
    iVar19 = *(int *)(param_2 + 0x20ac);
    fStack_98 = (float)FUN_0036c5bc(param_2,0);
    iVar18 = iRam003c76e4;
    uVar17 = uRam003c76e0;
    uVar29 = uRam003c76dc;
    fVar28 = fRam003c76d8;
    uVar15 = uRam003c76d4;
    iStack_7c = param_2 + 0x2298;
    iStack_80 = param_1 + 0x2310;
    puStack_84 = (undefined4 *)(param_1 + 0x22b0);
    puStack_88 = (undefined4 *)(param_1 + 0x22a4);
    iStack_8c = iRam003c76e8;
    switch(*(undefined2 *)(param_1 + 0x229e)) {
    case 1:
      *(undefined1 *)(param_1 + 0x888) = 3;
      uVar20 = uRam003c76ec;
      *(float *)(param_1 + 0x924) = fVar31;
      *(undefined4 *)(param_1 + 0x928) = uVar20;
      uVar20 = uRam003c76f0;
      *(float *)(param_1 + 0x92c) = fVar31;
      *(undefined4 *)(param_1 + 0x914) = uVar20;
      *(undefined2 *)(param_1 + 0x88a) = 0xffff;
      puVar3 = puRam003c76fc;
      if (((int)ABS(*(float *)(iVar19 + 0x30)) < iRam003c76f4) &&
         ((int)ABS(*(float *)(iVar19 + 0x28) - fRam003c76f8) < iRam003c76f4 + -0x300000)) {
        *(undefined2 *)(puRam003c76fc + 2) = 0;
        *puVar3 = 1;
        *(undefined2 *)(param_1 + 0x229e) = 2;
        func_0x00367494(param_2,iStack_7c);
        func_0x0036e980(param_2,param_1,8);
        uVar7 = func_0x00367d74(param_2);
        *(undefined2 *)(param_1 + 0x22a0) = uVar7;
        FUN_00320d7c(param_2,0,1);
        FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x22a0),7);
        *(undefined4 *)(iVar19 + 0x28) = uVar15;
        uVar15 = uRam003c7700;
        *(float *)(iVar19 + 0x2c) = fVar32;
        *(float *)(iVar19 + 0x30) = fVar31;
        *(float *)(iVar19 + 0x6c) = fVar31;
        uVar20 = uRam003c7708;
        *(short *)(iVar19 + 0x36) = (short)uVar15;
        *(short *)(iVar19 + 0xbe) = (short)uVar15;
        *(undefined4 *)(param_1 + 0x22a4) = uVar20;
        fVar5 = fRam003c7710;
        fVar27 = fRam003c7704;
        *(float *)(param_1 + 0x22a8) = *(float *)(iVar19 + 0x2c) + fVar24;
        fVar4 = fRam003c770c;
        *(float *)(param_1 + 0x22ac) = *(float *)(iVar19 + 0x30) + fVar27;
        *(undefined4 *)(param_1 + 0x22b0) = *(undefined4 *)(iVar19 + 0x28);
        *(float *)(param_1 + 0x22b4) = *(float *)(iVar19 + 0x2c) + fVar4;
        *(undefined4 *)(param_1 + 0x22b8) = *(undefined4 *)(iVar19 + 0x30);
        fVar27 = fRam003c7714;
        *(float *)(param_1 + 0x22d4) = (*(float *)(iVar19 + 0x28) - fVar5) + fRam003c7714;
        *(float *)(param_1 + 0x22d8) = *(float *)(iVar19 + 0x2c) + fVar24;
        *(float *)(param_1 + 0x22dc) = (*(float *)(iVar19 + 0x30) + fVar5) - fVar27;
        *(undefined4 *)(param_1 + 0x22ec) = *(undefined4 *)(iVar19 + 0x28);
        *(float *)(param_1 + 0x22f0) = *(float *)(iVar19 + 0x2c) + fVar5;
        *(undefined4 *)(param_1 + 0x22f4) = *(undefined4 *)(iVar19 + 0x30);
        func_0x00315960(fVar23,param_1);
        *(float *)(param_1 + 0x2304) = fVar31;
        *(float *)(param_1 + 0x2308) = fVar31;
        uVar15 = uRam003c7718;
        *(undefined2 *)(param_1 + 0x8b0) = 0;
        *(undefined4 *)(param_1 + 0x2300) = uVar15;
        *(undefined4 *)(param_1 + 0x22fc) = uVar15;
        *(undefined4 *)(param_1 + 0x22f8) = uVar15;
        *(undefined4 *)(param_1 + 0x22e8) = uVar15;
        *(undefined4 *)(param_1 + 0x22e4) = uVar15;
        *(undefined4 *)(param_1 + 0x22e0) = uVar15;
        if ((*(ushort *)(iVar18 + 0xfa) & 8) != 0) {
          *(undefined2 *)(param_1 + 0x229e) = 6;
          *(float *)(param_1 + 0x22d4) = (*(float *)(iVar19 + 0x28) + fVar28) - fRam003c771c;
          *(float *)(param_1 + 0x22d8) = (*(float *)(iVar19 + 0x2c) + fVar32) - fVar5;
          *(float *)(param_1 + 0x22dc) = (*(float *)(iVar19 + 0x30) + fVar26) - fVar25;
          *(float *)(param_1 + 0x22ec) = fVar31;
          *(undefined4 *)(param_1 + 0x22f0) = uVar29;
          *(float *)(param_1 + 0x22f4) = fVar31;
          func_0x00315960(uRam003c7ad8,param_1);
          uVar15 = uRam003c76b4;
          *(undefined4 *)(param_1 + 0x2300) = uRam003c76b4;
          *(undefined4 *)(param_1 + 0x22fc) = uVar15;
          *(undefined4 *)(param_1 + 0x22f8) = uVar15;
          *(undefined4 *)(param_1 + 0x22e8) = uVar15;
          *(undefined4 *)(param_1 + 0x22e4) = uVar15;
          *(undefined4 *)(param_1 + 0x22e0) = uVar15;
          *(undefined4 *)(param_1 + 0x2308) = uVar17;
          *(undefined2 *)(param_1 + 0x8b0) = 0;
          *(undefined1 *)(param_1 + 0x93c) = 1;
          *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(iRam003c7adc + 0xc);
          *(float *)(param_1 + 0x928) = *(float *)(iStack_8c + 4) - fVar26;
          *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(iStack_8c + 8);
          *(undefined2 *)(param_1 + 0x8b0) = 0x4b;
          uVar15 = uRam003c76d0;
          *(undefined2 *)(param_1 + 0x88a) = 3;
          *(undefined4 *)(param_1 + 0x90c) = uVar15;
          *(undefined2 *)(param_1 + 0x34) = 0x4000;
          *(undefined2 *)(param_1 + 0x88c) = 0;
          *(undefined2 *)(param_1 + 0x8b6) = 0x177;
          *(short *)(param_1 + 0x8b4) = (short)uRam003c7ae0;
        }
      }
      break;
    case 2:
      if (*(short *)(param_1 + 0x8b0) == 0) {
        *(undefined4 *)(param_1 + 0x2308) = uRam003c7ae4;
        *(undefined2 *)(param_1 + 0x8b0) = 0x96;
        *(undefined2 *)(param_1 + 0x229e) = 3;
      }
    case 3:
      uVar29 = uRam003c7700;
      *(float *)(iVar19 + 0x6c) = fVar31;
      *(short *)(iVar19 + 0x36) = (short)uVar29;
      *(short *)(iVar19 + 0xbe) = (short)uVar29;
      *(undefined4 *)(iVar19 + 0x28) = uVar15;
      *(float *)(iVar19 + 0x2c) = fVar32;
      *(float *)(iVar19 + 0x30) = fVar31;
      if (*(short *)(param_1 + 0x8b0) == 0x4b) {
        *(undefined1 *)(param_1 + 0x888) = 1;
      }
      else if (*(short *)(param_1 + 0x8b0) < 0x4b) {
        afStack_dc[0] = fRam003c7ae8;
        FUN_0037547c(uRam003c7af0,param_1 + 0x28,4,uRam003c7aec,uRam003c7aec);
        fVar28 = (float)func_0x00338f60((int)(short)(*(short *)(param_1 + 0x88c) << 0xf));
        uVar15 = uRam003c7af4;
        *(float *)(param_1 + 0x230c) = fVar28 * *(float *)(param_1 + 0x2310);
        func_0x00373500(uRam003c7af8,fVar23,uVar15,iStack_80);
      }
      if (*(short *)(param_1 + 0x8b0) == 0x3c) {
        func_0x0036e980(param_2,param_1,0x13);
      }
      if (*(short *)(param_1 + 0x8b0) == 0) {
        *(undefined2 *)(param_1 + 0x229e) = 4;
        uVar15 = uRam003c7afc;
        *(float *)(param_1 + 0x22f0) = *(float *)(iVar19 + 0x2c) + fVar30;
        *(undefined4 *)(param_1 + 0x22fc) = uVar15;
        uVar15 = uRam003c76ac;
        *(float *)(param_1 + 0x2304) = fVar31;
        *(undefined4 *)(param_1 + 0x2308) = uVar15;
        *(undefined2 *)(param_1 + 0x8b0) = 0x69;
        *(undefined2 *)(param_1 + 0x88c) = 0;
      }
      break;
    case 4:
      fVar27 = (float)func_0x00338f60((int)(short)(*(short *)(param_1 + 0x88c) << 0xf));
      uVar15 = uRam003c7af4;
      *(float *)(param_1 + 0x230c) = fVar27 * *(float *)(param_1 + 0x2310);
      func_0x00373500(uRam003c7af8,fVar23,uVar15,iStack_80);
      afStack_dc[0] = fRam003c7ae8;
      FUN_0037547c(uRam003c7af0,param_1 + 0x28,4,uRam003c7aec,uRam003c7aec);
      if (*(short *)(param_1 + 0x8b0) == 0) {
        *(undefined2 *)(param_1 + 0x229e) = 5;
        fVar27 = fRam003c7710;
        *(float *)(param_1 + 0x22d4) = *(float *)(iVar19 + 0x28) + fVar28;
        *(float *)(param_1 + 0x22d8) = *(float *)(iVar19 + 0x2c) + fVar32;
        *(float *)(param_1 + 0x22dc) = *(float *)(iVar19 + 0x30) + fVar26;
        *(undefined4 *)(param_1 + 0x22ec) = *(undefined4 *)(iVar19 + 0x28);
        *(float *)(param_1 + 0x22f0) = *(float *)(iVar19 + 0x2c) - fVar25;
        *(float *)(param_1 + 0x22f4) = *(float *)(iVar19 + 0x30) - fVar27;
        func_0x00315960(uRam003c76b4,param_1);
        *(float *)(param_1 + 0x2304) = fVar31;
        *(float *)(param_1 + 0x2308) = fVar31;
        *(undefined2 *)(param_1 + 0x8b0) = 0xff;
        FUN_0035af04(iVar19,1);
        func_0x0036e980(param_2,param_1,0x14);
      }
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x2308) = uRam003c76e0;
      fVar27 = (float)func_0x00338f60((int)(short)(*(short *)(param_1 + 0x88c) << 0xf));
      uVar15 = uRam003c7af4;
      *(float *)(param_1 + 0x230c) = fVar27 * *(float *)(param_1 + 0x2310);
      func_0x00373500(uRam003c7af8,fVar23,uVar15,iStack_80);
      afStack_dc[0] = fRam003c7ae8;
      FUN_0037547c(uRam003c7af0,param_1 + 0x28,4,uRam003c7aec,uRam003c7aec);
      if (*(short *)(param_1 + 0x8b0) == 0x96) {
        *(undefined1 *)(param_1 + 0x93e) = 1;
      }
      if (*(short *)(param_1 + 0x8b0) == 0) {
        *(undefined2 *)(param_1 + 0x229e) = 6;
        *(float *)(param_1 + 0x2304) = fVar31;
        fVar27 = fRam003c7710;
        *(float *)(param_1 + 0x22d4) = (*(float *)(iVar19 + 0x28) + fVar28) - fRam003c771c;
        *(float *)(param_1 + 0x22d8) = (*(float *)(iVar19 + 0x2c) + fVar32) - fVar27;
        *(float *)(param_1 + 0x22dc) = (*(float *)(iVar19 + 0x30) + fVar26) - fVar25;
        *(float *)(param_1 + 0x22ec) = fVar31;
        *(undefined4 *)(param_1 + 0x22f0) = uVar29;
        *(float *)(param_1 + 0x22f4) = fVar31;
        func_0x00315960(uRam003c7ad8,param_1);
        uVar15 = uRam003c76b4;
        *(undefined4 *)(param_1 + 0x2300) = uRam003c76b4;
        *(undefined4 *)(param_1 + 0x22fc) = uVar15;
        *(undefined4 *)(param_1 + 0x22f8) = uVar15;
        *(undefined4 *)(param_1 + 0x22e8) = uVar15;
        *(undefined4 *)(param_1 + 0x22e4) = uVar15;
        *(undefined4 *)(param_1 + 0x22e0) = uVar15;
        *(undefined4 *)(param_1 + 0x2308) = uVar17;
        *(undefined1 *)(param_1 + 0x93c) = 1;
        *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(iRam003c7adc + 0xc);
        *(float *)(param_1 + 0x928) = *(float *)(iStack_8c + 4) - fVar26;
        *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(iStack_8c + 8);
        *(undefined2 *)(param_1 + 0x8b0) = 0x4b;
        uVar15 = uRam003c7df4;
        *(undefined2 *)(param_1 + 0x88a) = 3;
        *(undefined4 *)(param_1 + 0x90c) = uVar15;
        *(undefined2 *)(param_1 + 0x34) = 0x4000;
        *(undefined2 *)(param_1 + 0x88c) = 0;
        *(undefined2 *)(param_1 + 0x8b6) = 0x177;
        *(short *)(param_1 + 0x8b4) = (short)uRam003c7ae0;
      }
      break;
    case 6:
      if ((iRam003c7df8 < *(short *)(param_1 + 0x8b6)) &&
         ((*(ushort *)(iRam003c76e4 + 0xfa) & 8) == 0)) {
        afStack_dc[0] = fRam003c7ae8;
        FUN_0037547c(uRam003c7af0,param_1 + 0x28,4,uRam003c7aec,uRam003c7aec);
      }
      uVar15 = uRam003c7dfc;
      if (*(short *)(param_1 + 0x8b6) == 0x11d) {
        *(undefined4 *)(param_1 + 0x2300) = uRam003c7dfc;
        *(undefined4 *)(param_1 + 0x22fc) = uVar15;
        *(undefined4 *)(param_1 + 0x22f8) = uVar15;
        *(undefined1 *)(param_1 + 0x93e) = 2;
        func_0x0036e980(param_2,param_1,1);
      }
      uVar15 = uRam003c7e04;
      if (iRam003c7e00 < *(int *)(param_1 + 0x2c)) {
        uVar29 = puStack_74[1];
        uVar17 = puStack_74[2];
        *(undefined4 *)(param_1 + 0x22ec) = *puStack_74;
        *(undefined4 *)(param_1 + 0x22f0) = uVar29;
        *(undefined4 *)(param_1 + 0x22f4) = uVar17;
        *(undefined4 *)(param_1 + 0x22c8) = uVar15;
        *(undefined4 *)(param_1 + 0x22cc) = uRam003c7e08;
        *(undefined4 *)(param_1 + 0x22d0) = uRam003c7e0c;
      }
      else {
        func_0x00373500(uRam003c7af8,fVar23,uRam003c7af4,iStack_80);
        fVar28 = (float)func_0x00338f60((int)(short)(*(short *)(param_1 + 0x88c) << 0xf));
        *(float *)(param_1 + 0x230c) = fVar28 * *(float *)(param_1 + 0x2310);
      }
      if (*(short *)(param_1 + 0x8b6) == 0xf0) {
        func_0x0036ec40(0,uRam003c7e10);
        iVar11 = func_0x0035b164();
        if ((iVar11 != 0) && (iVar11 = func_0x0035b0a0(), iVar11 == 0)) {
          if (((*puRam003c7e14 & 1) == 0) && (iVar11 = func_0x003679b4(puRam003c7e14), iVar11 != 0))
          {
            func_0x0036788c(uRam003c7e18);
          }
          func_0x003542c4(uRam003c7e24,1);
        }
      }
      uVar9 = *(ushort *)(param_1 + 0x8b6);
      bVar22 = uVar9 == 0xc3;
      if (bVar22) {
        uVar9 = *(ushort *)(iVar18 + 0xfa);
      }
      if (bVar22 && (uVar9 & 8) == 0) {
        afStack_dc[0] = 3.58732e-43;
        afStack_dc[1] = 8.96831e-44;
        func_0x00354248(fVar31,param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0x878),200,0xb4);
      }
      uVar15 = uRam003c7e28;
      if (*(short *)(param_1 + 0x8b6) < 0x97) {
        *(undefined4 *)(param_1 + 0x22c4) = uRam003c7e28;
        *(undefined4 *)(param_1 + 0x22c0) = uVar15;
        *(undefined4 *)(param_1 + 0x22bc) = uVar15;
        fVar28 = fRam003c7e2c;
        *(float *)(param_1 + 0x22d4) = *(float *)(iVar19 + 0x28) + fRam003c7e2c;
        *(float *)(param_1 + 0x22d8) = *(float *)(iVar19 + 0x2c) + fVar28;
        *(float *)(param_1 + 0x22dc) = *(float *)(iVar19 + 0x30) + fVar28;
      }
      if (*(short *)(param_1 + 0x88a) != 1) goto code_r0x003c7e4c;
      sVar10 = *(short *)(param_1 + 0x229c);
      if (sVar10 == 0) {
        *(undefined2 *)(param_1 + 0x8ba) = 0x87;
        *(undefined2 *)(param_1 + 0x229c) = 1;
code_r0x003c7dd4:
        if (*(short *)(param_1 + 0x8ba) == 0) {
          *(undefined2 *)(param_1 + 0x229c) = 2;
          *(undefined2 *)(param_1 + 0x8ba) = 0x71;
        }
      }
      else {
        if (sVar10 == 1) goto code_r0x003c7dd4;
        if (sVar10 == 2) {
          uVar15 = puStack_88[1];
          uVar29 = puStack_88[2];
          *puStack_78 = *puStack_88;
          puStack_78[1] = uVar15;
          puStack_78[2] = uVar29;
          if (*(short *)(param_1 + 0x8ba) != 0) {
            if (*(short *)(param_1 + 0x8ba) == 0x2d) {
              *(undefined2 *)(param_1 + 0x896) = 0x28;
              *(undefined2 *)(param_1 + 0x884) = 0x1e;
            }
            goto code_r0x003c7e4c;
          }
          *(undefined2 *)(param_1 + 0x8b0) = 0;
          *(undefined1 *)(param_1 + 0x93c) = 7;
          fVar28 = fRam003c7e30;
          iVar19 = iRam003c7adc;
          *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(iRam003c7adc + 0x54);
          *(float *)(param_1 + 0x928) = *(float *)(iVar19 + 0x58) + fVar28;
          *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(iVar19 + 0x5c);
          *(undefined2 *)(param_1 + 0x229c) = 3;
code_r0x003c7e58:
          if (*(short *)(param_1 + 0x8b4) == 0xa0) {
            func_0x0036e980(param_2,param_1,8);
          }
        }
        else {
code_r0x003c7e4c:
          if (*(short *)(param_1 + 0x229c) == 3) goto code_r0x003c7e58;
        }
      }
      if (*(short *)(param_1 + 0x8b4) == 0) {
        uVar15 = puStack_88[1];
        uVar29 = puStack_88[2];
        *(undefined4 *)((int)fStack_98 + 0x8c) = *puStack_88;
        *(undefined4 *)((int)fStack_98 + 0x90) = uVar15;
        *(undefined4 *)((int)fStack_98 + 0x94) = uVar29;
        uVar15 = puStack_88[1];
        uVar29 = puStack_88[2];
        *(undefined4 *)((int)fStack_98 + 0xa4) = *puStack_88;
        *(undefined4 *)((int)fStack_98 + 0xa8) = uVar15;
        *(undefined4 *)((int)fStack_98 + 0xac) = uVar29;
        uVar15 = puStack_84[1];
        uVar29 = puStack_84[2];
        *(undefined4 *)((int)fStack_98 + 0x80) = *puStack_84;
        *(undefined4 *)((int)fStack_98 + 0x84) = uVar15;
        *(undefined4 *)((int)fStack_98 + 0x88) = uVar29;
        func_0x0036e9b8(param_2,(int)*(short *)(param_1 + 0x22a0),0);
        *(undefined2 *)(param_1 + 0x22a0) = 0;
        *(undefined2 *)(param_1 + 0x229c) = 0;
        *(undefined2 *)(param_1 + 0x229e) = 0;
        func_0x00367374(param_2,iStack_7c);
        func_0x0036e980(param_2,param_1,7);
        *(undefined4 *)(param_1 + 0x880) = uRam003c834c;
        *(undefined1 *)(param_1 + 0x940) = 100;
        *(ushort *)(iVar18 + 0xfa) = *(ushort *)(iVar18 + 0xfa) | 8;
        *puRam003c76fc = 0;
      }
    }
    if (*(short *)(param_1 + 0x22a0) != 0) {
      func_0x00373500(*(undefined4 *)(param_1 + 0x22d4),*(undefined4 *)(param_1 + 0x22e0),
                      *(float *)(param_1 + 0x22bc) * *(float *)(param_1 + 0x2304),puStack_88);
      func_0x00373500(*(undefined4 *)(param_1 + 0x22d8),*(undefined4 *)(param_1 + 0x22e4),
                      *(float *)(param_1 + 0x22c0) * *(float *)(param_1 + 0x2304),param_1 + 0x22a8);
      func_0x00373500(*(undefined4 *)(param_1 + 0x22dc),*(undefined4 *)(param_1 + 0x22e8),
                      *(float *)(param_1 + 0x22c4) * *(float *)(param_1 + 0x2304),param_1 + 0x22ac);
      func_0x00373500(*(undefined4 *)(param_1 + 0x22ec),*(undefined4 *)(param_1 + 0x22f8),
                      *(float *)(param_1 + 0x22c8) * *(float *)(param_1 + 0x2304),puStack_84);
      func_0x00373500(*(undefined4 *)(param_1 + 0x22f0),*(undefined4 *)(param_1 + 0x22fc),
                      *(float *)(param_1 + 0x22cc) * *(float *)(param_1 + 0x2304),param_1 + 0x22b4);
      func_0x00373500(*(undefined4 *)(param_1 + 0x22f4),*(undefined4 *)(param_1 + 0x2300),
                      *(float *)(param_1 + 0x22d0) * *(float *)(param_1 + 0x2304),param_1 + 0x22b8);
      func_0x00373500(fVar23,fVar23,*(undefined4 *)(param_1 + 0x2308),param_1 + 0x2304);
      *(float *)(param_1 + 0x22b4) = *(float *)(param_1 + 0x22b4) + *(float *)(param_1 + 0x230c);
      FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x22a0),puStack_84,puStack_88);
      func_0x0036fc20(fVar23,uRam003c8350,param_1 + 0x230c);
    }
  }
  uVar20 = uRam003c8d60;
  uVar17 = uRam003c8398;
  fVar6 = fRam003c8394;
  fVar5 = fRam003c8390;
  fVar4 = fRam003c838c;
  uVar29 = uRam003c8388;
  fVar27 = fRam003c8360;
  iVar19 = iRam003c835c;
  fVar28 = fRam003c8358;
  uVar15 = uRam003c8354;
  iVar18 = iRam003c7adc;
  uVar12 = (uint)*(short *)(param_1 + 0x88a);
  if (uVar12 == 100) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar24 = (float)func_0x002cfca0((int)(short)(int)(fVar24 * fRam003c8860));
    iVar18 = iRam003c8868;
    fVar25 = fRam003c8864;
    fVar24 = fVar24 * fRam003c8864;
    *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(iVar21 + 0x28);
    *(float *)(param_1 + 0x928) =
         *(float *)(iVar21 + 0x2c) + *(float *)(param_1 + 0x8e0) + fVar24 + fVar25;
    *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(iVar21 + 0x30);
    *(float *)(param_1 + 0x918) = fVar31;
    uVar14 = (uint)*(short *)(param_1 + 0x8b0);
    lVar1 = (longlong)(int)uVar14 * (longlong)iVar18 + ((ulonglong)uVar14 << 0x20);
    iVar18 = (int)((ulonglong)lVar1 >> 0x20);
    uVar12 = (iVar18 >> 6) - (iVar18 >> 0x1f);
    if (((uVar12 * -0x5f + uVar14 == 0) && ((int)uVar14 < iRam003c886c)) &&
       (*(undefined2 *)(param_1 + 0x896) = 0x28, uVar12 = uRam003c8870,
       (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36)) + 0x1fffU <=
       uRam003c8870)) {
      *(undefined2 *)(param_1 + 0x884) = 0x1e;
    }
    if (((*(short *)(param_1 + 0x898) == 0) && (uVar14 != 0)) &&
       (iRam003c8874 <= *(int *)(iVar21 + 0x2c))) {
      func_0x00373500(uRam003c887c,fVar23,uRam003c8878,param_1 + 0x8e0,iRam003c8874,uVar12,
                      (int)lVar1);
      goto LAB_003c8e94;
    }
  }
  else {
    if (100 < (int)uVar12) {
      switch(uVar12) {
      case 200:
        if ((int)SQRT(fVar34 + fVar33 * fVar33) < iRam003c8880) {
          *(undefined2 *)(param_1 + 0x8b0) = 0;
        }
        if (*(short *)(param_1 + 0x8b0) == 0) {
          fVar24 = (float)func_0x00371e50(fVar30);
          *(short *)(param_1 + 0x8b0) = (short)(int)((fVar24 + fVar30) * fVar5 * fRam003c8884);
          do {
            uVar17 = func_0x003738a8(fVar26);
            *(undefined4 *)(param_1 + 0x924) = uVar17;
            *(undefined4 *)(param_1 + 0x928) = uVar29;
            fVar24 = (float)func_0x003738a8(fVar26);
            *(float *)(param_1 + 0x92c) = fVar24;
            fVar25 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x28);
            fVar24 = fVar24 - *(float *)(param_1 + 0x30);
          } while ((int)SQRT(fVar25 * fVar25 + fVar24 * fVar24) <= iVar19);
        }
        *(undefined4 *)(param_1 + 0x91c) = uVar15;
        *(float *)(param_1 + 0x918) = fVar26;
        uVar15 = uRam003c8888;
        *(float *)(param_1 + 0x914) = fVar27;
        func_0x00373500(fRam003c888c,fVar23,uVar15,iStack_70);
        if (*(short *)(param_1 + 0x8b2) == 0) {
          *(undefined2 *)(param_1 + 0x88a) = 0xc9;
          *(undefined2 *)(param_1 + 0x8b0) = 0x2d;
        }
        break;
      case 0xc9:
        *(float *)(param_1 + 0x924) = fVar31;
        *(undefined4 *)(param_1 + 0x928) = uVar29;
        *(float *)(param_1 + 0x92c) = fVar31;
        *(undefined4 *)(param_1 + 0x91c) = uVar15;
        uVar15 = uRam003c8890;
        *(float *)(param_1 + 0x918) = fVar26;
        *(undefined4 *)(param_1 + 0x914) = uVar15;
        func_0x00373500(fRam003c888c,fVar23,uRam003c8888,iStack_70);
        uVar9 = *(ushort *)(param_1 + 0x8b0);
        bVar22 = uVar9 == 0;
        if (bVar22) {
          uVar9 = *(ushort *)(param_1 + 0x88c);
        }
        if (bVar22 && (uVar9 & 3) == 0) {
          if (*(short *)(param_1 + 0x886) == 0) {
            *(undefined2 *)(param_1 + 0x88a) = 0xca;
            *(undefined2 *)(param_1 + 0x8b0) = 0x2d;
          }
          else {
            sVar10 = *(short *)(param_1 + 0x886) + -1;
            *(short *)(param_1 + 0x886) = sVar10;
            if (sVar10 == 0) {
              func_0x0036ec40(0,uRam003c8894);
            }
          }
        }
        if ((*(ushort *)(param_1 + 0x88c) & 0x1f) == 0) {
          *(undefined2 *)(param_1 + 0x896) = 0x28;
        }
        if (*(short *)(param_1 + 0x886) != 0) {
          afStack_b8[3] = fVar31;
          afStack_b8[4] = fVar31;
          afStack_b8[5] = fVar31;
          afStack_dc[6] = fVar31;
          afStack_dc[7] = fVar4;
          fStack_bc = fVar31;
          uVar12 = (uint)*(byte *)(param_1 + 0x888);
          bVar22 = uVar12 == 0;
          if (bVar22) {
            uVar12 = param_2 + 0x3000;
          }
          if (bVar22) {
            *(float *)(uVar12 + 600) = fVar31;
          }
          *(undefined1 *)(param_1 + 0x888) = 10;
          if ((*(ushort *)(param_1 + 0x88c) & 0x1c) != 0) {
            afStack_dc[0] = fRam003c7ae8;
            FUN_0037547c(uRam003c8898,param_1 + 0x28,4,uRam003c7aec,uRam003c7aec);
          }
          uVar17 = uRam003c88a4;
          uVar29 = uRam003c88a0;
          uVar15 = uRam003c889c;
          fVar24 = fRam003c8884;
          sVar10 = 0;
          do {
            fVar25 = (float)func_0x00371e50(uVar15);
            iVar21 = param_1 + (short)(int)fVar25 * 0xc;
            afStack_b8[6] = *(float *)(iVar21 + 0x104c);
            afStack_b8[7] = *(float *)(iVar21 + 0x1050) - fVar30;
            fStack_98 = *(float *)(iVar21 + 0x1054);
            afStack_dc[7] = fVar4;
            fVar25 = (float)func_0x00371e50(uVar29);
            afStack_dc[0] = 1.4013e-43;
            func_0x0035aea0(param_2,afStack_b8 + 6,afStack_b8 + 3,afStack_dc + 6,
                            (int)(short)((short)(int)fVar25 + 0x28));
            iVar21 = 0;
            do {
              afStack_b8[0] = (float)func_0x003738a8(uVar29);
              afStack_b8[1] = (float)func_0x003738a8(uVar29);
              afStack_b8[2] = (float)func_0x003738a8(uVar29);
              afStack_dc[4] = (float)uVar17;
              afStack_dc[3] = (float)func_0x003738a8(fVar24);
              afStack_dc[5] = (float)func_0x003738a8(fVar24);
              fVar25 = (float)func_0x00371e50(fVar5);
              uVar20 = VectorSignedToFloat((short)(int)fVar25 + 8,(byte)(in_fpscr >> 0x15) & 3);
              func_0x0036fde0(uVar20,param_1,afStack_b8 + 6,afStack_b8,afStack_dc + 3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < 6);
            sVar10 = sVar10 + 1;
          } while (sVar10 < 1);
        }
        break;
      case 0xca:
        *(undefined2 *)(param_1 + 0x8ac) = 1;
        *(undefined1 *)(param_1 + 0x888) = 3;
        if ((*(short *)(param_1 + 0x8b0) < 0x12) &&
           (*(undefined2 *)(param_1 + *(short *)(param_1 + 0x8b0) * 2 + 0x226c) = 1,
           *(short *)(param_1 + 0x8b0) == 0)) {
          *(undefined2 *)(param_1 + 0x88a) = 0xcb;
          *(undefined2 *)(param_1 + 0x8b0) = 0x17;
          uVar15 = uRam003c8d58;
          *(undefined2 *)(param_1 + 0x8a4) = 0;
          *(float *)(iVar21 + 0x28) = fVar24;
          *(undefined4 *)(iVar21 + 0x2c) = uVar15;
          *(float *)(iVar21 + 0x30) = fVar25;
        }
        break;
      case 0xcb:
        if (*(short *)(param_1 + 0x8b0) == 0) {
          *(undefined2 *)(param_1 + 0x88a) = 0xcc;
          *(undefined2 *)(param_1 + 0x8b0) = 0x1e;
          *(undefined2 *)(param_1 + 0x8ac) = 0;
        }
        break;
      case 0xcc:
        *(float *)(param_1 + 0x90c) = fVar31;
        *(float *)(param_1 + 0x6c) = fVar31;
        *(float *)(param_1 + 0x914) = fVar31;
        *(float *)(param_1 + 0x910) = fVar31;
        if (*(short *)(param_1 + 0x8b0) == 1) {
          *(float *)(param_1 + 0x2c) = fVar28;
          *(float *)(param_1 + 0x28) = fVar31;
          *(float *)(param_1 + 0x30) = fVar25;
          *(undefined2 *)(param_1 + 0x36) = 0;
          *(undefined2 *)(param_1 + 0x34) = 0;
          *(undefined2 *)(param_1 + 0xc0) = 0x1200;
          *(float *)(param_1 + 0x60) = fVar31;
          *(float *)(param_1 + 0x68) = fVar31;
        }
        if (*(short *)(param_1 + 0x8b0) == 0) {
          if (iRam003c8d5c < *(int *)(param_1 + 0x2c)) {
            *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar23;
          }
          else {
            *(undefined4 *)(param_1 + 0x2c) = uRam003c8d60;
            *(float *)(param_1 + 100) = fVar31;
            if (*(short *)(param_1 + 0x8a4) == 0) {
              *(undefined2 *)(param_1 + 0x8a4) = 1;
              *(undefined2 *)(param_1 + 0x8b2) = 0x5a;
              uVar15 = uRam003c7aec;
              afStack_dc[0] = fRam003c7ae8;
              *(undefined2 *)(param_1 + 0x8aa) = 0x14;
              FUN_0037547c(uRam003c8d64,param_1 + 0x28,4,uVar15,uVar15);
              func_0x0036e980(param_2,param_1,5);
              uVar29 = uRam003c8d6c;
              fVar25 = fRam003c8d68;
              fVar24 = fRam003c888c;
              uVar15 = uRam003c8878;
              sVar10 = 0;
              do {
                afStack_b8[6] = fVar31;
                afStack_b8[7] = fVar31;
                fStack_98 = fVar31;
                afStack_b8[3] = fVar31;
                afStack_b8[4] = fVar31;
                afStack_b8[5] = fVar31;
                afStack_b8[6] = (float)func_0x003738a8(uVar29);
                afStack_b8[7] = (float)func_0x00371e50(fVar23);
                fStack_98 = (float)func_0x003738a8(uVar29);
                afStack_b8[4] = fVar24;
                afStack_b8[0] = (float)func_0x003738a8(fVar30);
                afStack_b8[0] = afStack_b8[0] + *(float *)(param_1 + 0x28);
                afStack_b8[1] = (float)func_0x003738a8(fVar30);
                afStack_b8[1] = afStack_b8[1] + *(float *)(param_1 + 0x2c);
                afStack_b8[2] = (float)func_0x003738a8(fVar30);
                afStack_b8[2] = afStack_b8[2] + *(float *)(param_1 + 0x30);
                fVar33 = (float)func_0x00371e50(fVar26);
                iVar21 = 0x14;
                piVar16 = (int *)(param_1 + 0x2924);
code_r0x003c8b60:
                if ((char)piVar16[0xd] != '\0') goto code_r0x003c8c28;
                iVar18 = 0;
                if (*piVar16 != 0) {
                  iVar18 = *(int *)(param_1 + 0x86c);
                }
                if (*piVar16 == 0 || iVar18 == 0) goto code_r0x003c8c28;
                *(undefined1 *)(piVar16 + 0xd) = 3;
                piVar16[4] = (int)afStack_b8[0];
                piVar16[5] = (int)afStack_b8[1];
                piVar16[6] = (int)afStack_b8[2];
                piVar16[7] = (int)afStack_b8[6];
                piVar16[8] = (int)afStack_b8[7];
                piVar16[9] = (int)fStack_98;
                piVar16[10] = (int)afStack_b8[3];
                piVar16[0xb] = (int)afStack_b8[4];
                piVar16[0xc] = (int)afStack_b8[5];
                iVar21 = 0;
                *(undefined2 *)(piVar16 + 0xe) = 0;
                piVar16[1] = (int)((fVar33 + fVar25) * fVar6);
                do {
                  func_0x0036932c(*piVar16,iVar21);
                  iVar21 = iVar21 + 1;
                } while (iVar21 < 5);
                func_0x0037266c(*piVar16,4);
                *(undefined2 *)((int)piVar16 + 0x36) = 0xff;
                *(undefined1 *)((int)piVar16 + 0x43) = 0;
                *(undefined1 *)(piVar16 + 0xf) = 0;
                *(undefined1 *)((int)piVar16 + 0x3d) = 0;
                *(undefined1 *)((int)piVar16 + 0x3e) = 0;
                *(undefined1 *)((int)piVar16 + 0x42) = 0;
                iVar21 = *(int *)(*piVar16 + 0xc);
                func_0x00372d94(iVar21,*(undefined4 *)(param_1 + 0x86c));
                *(undefined1 *)(iVar21 + 0x10) = 1;
                *(undefined4 *)(iVar21 + 0xc) = uVar15;
code_r0x003c8c38:
                sVar10 = sVar10 + 1;
                if (5 < sVar10) break;
              } while( true );
            }
          }
        }
        else {
          *(float *)(param_1 + 100) = fVar31;
        }
        if (*(short *)(param_1 + 0x8b2) != 1) break;
        *(undefined2 *)(param_1 + 0x88a) = 0xcd;
        uVar7 = 0x69;
LAB_003c8c60:
        *(undefined2 *)(param_1 + 0x8b0) = uVar7;
        break;
      case 0xcd:
        *(float *)(param_1 + 100) = fVar31;
        *(undefined4 *)(param_1 + 0x2c) = uVar20;
        *(float *)(param_1 + 0x90c) = fVar31;
        *(float *)(param_1 + 0x6c) = fVar31;
        *(float *)(param_1 + 0x914) = fVar31;
        *(float *)(param_1 + 0x910) = fVar31;
        if ((int)*(short *)(param_1 + 0x8b0) - 1U < 0x4a) {
          afStack_b8[3] = fVar31;
          afStack_b8[4] = fVar31;
          afStack_b8[5] = fVar31;
          afStack_b8[0] = fVar31;
          afStack_b8[1] = fVar4;
          afStack_b8[2] = fVar31;
          afStack_dc[0] = fRam003c8d70;
          FUN_0037547c(uRam003c8d78,param_1 + 0x28,4,uRam003c8d74,uRam003c8d74);
          afStack_b8[6] = (float)func_0x003738a8(fVar24);
          afStack_b8[6] = afStack_b8[6] + *(float *)(param_1 + 0x28);
          fVar25 = (float)func_0x003738a8(fVar30);
          afStack_b8[7] = (fVar25 + *(float *)(param_1 + 0x2c)) - fVar30;
          fVar24 = (float)func_0x003738a8(fVar24);
          fStack_98 = fVar24 + fRam003c8d7c + *(float *)(param_1 + 0x30);
          afStack_b8[1] = fVar4;
          fVar24 = (float)func_0x00371e50(uRam003c8d80);
          afStack_dc[0] = 0.0;
          func_0x0035aea0(param_2,afStack_b8 + 6,afStack_b8 + 3,afStack_b8,
                          (int)(short)((short)(int)fVar24 + 0x1e));
        }
        if (*(short *)(param_1 + 0x8b0) < 0x1e) {
          func_0x0036fc20(fVar23,fVar6,param_1 + 0x54);
          func_0x0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
          fVar24 = fRam003c91b8;
          if (*(short *)(param_1 + 0x8b0) == 0) {
            *(undefined4 *)(param_1 + 0x880) = uRam003c834c;
            *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar24;
          }
        }
        if (*(short *)(param_1 + 0x8b0) == 0xb) {
          iVar18 = func_0x0035b164();
          if (iVar18 == 1) {
            iVar18 = func_0x0035b0a0();
            if (iVar18 != 0) {
              func_0x0035af20(fVar31,fVar32,uRam003c91c0,fVar31,fVar32,uRam003c91bc,param_2,4,0,
                              0x8000);
            }
          }
          else {
            afStack_dc[0] = 0.0;
            afStack_dc[1] = 0.0;
            afStack_dc[2] = 1.4013e-45;
            func_0x003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                            *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x5f,0,0);
          }
          FUN_0035af04(iVar21,0);
        }
      }
      goto LAB_003c8e94;
    }
    if (uVar12 == 2) {
      iStack_90 = 1;
      if (*(short *)(param_1 + 0x8b0) == 0) {
        *(undefined4 *)(param_1 + 0x880) = uRam003c834c;
        *(undefined1 *)(param_1 + 0x940) = 100;
      }
      goto LAB_003c8e94;
    }
    uVar7 = (undefined2)uRam003c8364;
    if ((int)uVar12 < 3) {
      if (uVar12 != 0xffffffff) {
        if (uVar12 == 0) {
          iStack_90 = 1;
          if (*(short *)(param_1 + 0x8b0) == 0) {
            if (*(char *)(param_1 + 0xb7) == '\0') {
              *(undefined2 *)(param_1 + 0x88a) = 200;
              *(undefined2 *)(param_1 + 0x8b2) = 0x96;
            }
            else {
              if (*(short *)(param_1 + 0x229e) == 0) {
                do {
                  uVar29 = func_0x00371e50(uVar17);
                  uVar12 = VectorFloatToUnsigned(uVar29,3);
                } while ((uint)*(byte *)(param_1 + 0x93c) == (uVar12 & 0xff));
                *(char *)(param_1 + 0x93c) = (char)uVar12;
              }
              else {
                *(undefined1 *)(param_1 + 0x93c) = 6;
              }
              puVar13 = (undefined4 *)(iVar18 + (uint)*(byte *)(param_1 + 0x93c) * 0xc);
              *(undefined4 *)(param_1 + 0x924) = *puVar13;
              *(float *)(param_1 + 0x928) = (float)puVar13[1] + fVar26;
              *(undefined4 *)(param_1 + 0x92c) = puVar13[2];
              *(float *)(param_1 + 0x910) = fVar31;
              *(undefined4 *)(param_1 + 0x914) = uVar15;
              if (*(short *)(param_1 + 0x229e) == 0) {
                uVar8 = 0x1e;
              }
              else {
                uVar8 = (undefined2)uRam003c839c;
              }
              *(undefined2 *)(param_1 + 0x8b0) = uVar8;
              *(float *)(param_1 + 0x918) = fVar32;
              *(undefined2 *)(param_1 + 0x88a) = 1;
              if (*(short *)(param_1 + 0x89a) != 0) {
                *(undefined2 *)(param_1 + 0x89a) = 0;
                uVar9 = *(short *)(param_1 + 0x8ae) + 1;
                *(ushort *)(param_1 + 0x8ae) = uVar9;
                uVar15 = uRam003c83a0;
                if ((uVar9 & 1) == 0) {
                  *(undefined2 *)(param_1 + 0x88a) = 0x32;
                }
                else {
                  *(undefined2 *)(param_1 + 0x88a) = 100;
                  *(undefined2 *)(param_1 + 0x8b0) = uVar7;
                  *(undefined4 *)(param_1 + 0x914) = uVar15;
                  *(undefined4 *)(param_1 + 0x8e0) = uRam003c83a4;
                  *(undefined2 *)(param_1 + 0x89e) = 0;
                  *(undefined2 *)(param_1 + 0x89c) = 0;
                }
              }
            }
          }
        }
        else {
          bVar22 = uVar12 == 1;
          if (bVar22) {
            uVar12 = (uint)*(ushort *)(param_1 + 0x8b0);
          }
          if ((bVar22 && uVar12 == 0) &&
             ((int)SQRT(fVar34 + fVar35 * fVar35 + fVar33 * fVar33) < iRam003c8368)) {
            *(undefined2 *)(param_1 + 0x88a) = 2;
            uVar29 = uRam003c8370;
            uVar15 = uRam003c836c;
            *(float *)(param_1 + 0x928) =
                 *(float *)(iVar18 + (uint)*(byte *)(param_1 + 0x93c) * 0xc + 4) - fVar24;
            *(undefined4 *)(param_1 + 0x914) = uVar15;
            *(short *)(param_1 + 0x8b0) = (short)uVar29;
            *(short *)(param_1 + 0x8b4) = (short)uVar29;
            *(float *)(param_1 + 0x918) = fVar31;
            *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x924);
            *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x92c);
            *(undefined2 *)(param_1 + 0x896) = 0x28;
          }
        }
      }
      goto LAB_003c8e94;
    }
    if (uVar12 == 3) {
      if ((*(short *)(param_1 + 0x8b0) != 0) ||
         (iRam003c835c <= (int)SQRT(fVar34 + fVar35 * fVar35 + fVar33 * fVar33))) goto LAB_003c8e94;
      *(undefined2 *)(param_1 + 0x88a) = 0;
      uVar29 = puStack_78[1];
      uVar17 = puStack_78[2];
      *puStack_74 = *puStack_78;
      puStack_74[1] = uVar29;
      puStack_74[2] = uVar17;
      *(undefined2 *)(param_1 + 0x34) = 0x4000;
      *(float *)(param_1 + 0x928) =
           *(float *)(iVar18 + (uint)*(byte *)(param_1 + 0x93c) * 0xc + 4) + fVar26;
      *(undefined4 *)(param_1 + 0x914) = uVar15;
      *(float *)(param_1 + 0x918) = fVar31;
      *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x924);
      *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x92c);
      *(undefined2 *)(param_1 + 0x8b8) = 0x78;
      func_0x0036f5d8(param_2,1,0x50,0x5000);
      uVar7 = 0x4b;
      if (*(short *)(param_1 + 0x229e) == 0) {
        *(undefined2 *)(param_1 + 0x8b0) = 0x4b;
        goto LAB_003c8e94;
      }
      goto LAB_003c8c60;
    }
    if (uVar12 == 0x32) {
      *(undefined4 *)(param_1 + 0x90c) = uRam003c8374;
      fVar24 = fRam003c8854;
      *(float *)(param_1 + 0x924) = fVar31;
      uVar15 = uRam003c8858;
      *(float *)(param_1 + 0x928) = fVar24;
      *(undefined4 *)(param_1 + 0x92c) = uVar15;
      *(float *)(param_1 + 0x918) = fVar26;
      *(float *)(param_1 + 0x914) = fVar27;
      fVar25 = *(float *)(param_1 + 0x2c);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar24) << 0x1f |
               (uint)(fVar25 == fVar24) << 0x1e;
      in_fpscr = uVar12 | (uint)(NAN(fVar25) || NAN(fVar24)) << 0x1c;
      bVar2 = (byte)(uVar12 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(undefined2 *)(param_1 + 0x88a) = 0x33;
        *(undefined2 *)(param_1 + 0x8b0) = 0x26;
        *(undefined2 *)(param_1 + 0x8b4) = 0xe1;
        *(undefined2 *)(param_1 + 0x8a4) = 0;
      }
      goto LAB_003c8e94;
    }
    if (uVar12 != 0x33) goto LAB_003c8e94;
    *(undefined4 *)(param_1 + 0x90c) = uRam003c8374;
    uVar15 = uRam003c836c;
    *(float *)(param_1 + 0x918) = fVar26;
    *(undefined4 *)(param_1 + 0x914) = uVar15;
    puVar13 = (undefined4 *)(iRam003c8378 + *(short *)(param_1 + 0x8a4) * 0xc);
    *(undefined4 *)(param_1 + 0x924) = *puVar13;
    *(float *)(param_1 + 0x928) = (float)puVar13[1] + fVar28;
    *(undefined4 *)(param_1 + 0x92c) = puVar13[2];
    if (*(short *)(param_1 + 0x8b0) == 0) {
      sVar10 = *(short *)(param_1 + 0x8a4) + 1;
      *(undefined2 *)(param_1 + 0x8b0) = 0x26;
      *(short *)(param_1 + 0x8a4) = sVar10;
      if (5 < sVar10) {
        *(undefined2 *)(param_1 + 0x8a4) = 0;
      }
    }
    func_0x00376340(fRam003c7e2c,fRam003c7e2c,fVar32,param_2,param_1,2);
    uVar15 = uRam003c7aec;
    fVar24 = fRam003c7ae8;
    if (*(short *)(param_1 + 0x8b2) == 0) {
      if ((*(ushort *)(param_1 + 0x90) & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x8e4) = uRam003c837c;
        *(undefined2 *)(param_1 + 0x8b2) = 0xf;
        afStack_dc[0] = fVar24;
        FUN_0037547c(uRam003c8380,param_1 + 0x28,4,uVar15,uVar15);
        func_0x0036f5d8(param_2,3,10,uRam003c8384);
        *(undefined2 *)(param_1 + 0x8a2) = uVar7;
      }
    }
    else {
      fVar36 = *(float *)(param_1 + 0x8e4);
      func_0x0036fc20(fVar23,uRam003c885c,param_1 + 0x8e4);
    }
    if (*(short *)(param_1 + 0x8b4) != 0) goto LAB_003c8e94;
  }
  *(undefined2 *)(param_1 + 0x88a) = 0;
  *(undefined2 *)(param_1 + 0x8b0) = 0;
  *(undefined2 *)(param_1 + 0x89a) = 0;
LAB_003c8e94:
  fVar24 = fRam003c91c4;
  if (*(short *)(param_1 + 0x8ac) == 0) {
    func_0x0031591c(param_1 + 0x36,(int)(short)(int)fStack_94,10,
                    (int)(short)(int)(*(float *)(param_1 + 0x910) * fRam003c91c4));
    if (((*(short *)(param_1 + 0x88a) == 100 || *(short *)(param_1 + 0x88a) == 0x65) &&
        (*(int *)(param_1 + 0x2c) < iRam003c8d5c)) &&
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar31 <= fVar36) << 0x1d,
       !SUB41(in_fpscr >> 0x1d,0))) {
      func_0x00373500(uRam003c8d60,fVar23,fRam003c8d7c,param_1 + 0x2c);
      fVar36 = fVar31;
    }
    func_0x0031591c(param_1 + 0x34,(int)(short)(int)fVar36,10,
                    (int)(short)(int)(*(float *)(param_1 + 0x910) * fVar24));
    func_0x00373500(*(undefined4 *)(param_1 + 0x914),fVar23,uRam003c91c8,param_1 + 0x910);
    uVar15 = uRam003c91cc;
    func_0x00373500(*(undefined4 *)(param_1 + 0x90c),fVar23,uRam003c91cc,param_1 + 0x6c);
    if (*(short *)(param_1 + 0x88a) < 0xcc) {
      func_0x00365860(param_1);
    }
    func_0x0036b96c(param_1);
    fVar26 = fRam003c91d8;
    fVar25 = fRam003c91d4;
    fVar24 = fRam003c91d0;
    sVar10 = *(short *)(param_1 + 0x890) + 1;
    *(short *)(param_1 + 0x890) = sVar10;
    if (0x95 < sVar10) {
      *(undefined2 *)(param_1 + 0x890) = 0;
    }
    iVar21 = param_1 + *(short *)(param_1 + 0x890) * 0xc;
    *(undefined4 *)(iVar21 + 0x104c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar21 + 0x1050) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar21 + 0x1054) = *(undefined4 *)(param_1 + 0x30);
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x944) = fVar30 * fVar24 * fVar25;
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x948) = fVar30 * fVar24 * fVar25;
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x94c) = fVar30 * fVar24 * fVar25;
    sVar10 = *(short *)(param_1 + 0x892) + 1;
    *(short *)(param_1 + 0x892) = sVar10;
    if (0x2c < sVar10) {
      *(undefined2 *)(param_1 + 0x892) = 0;
    }
    sVar10 = *(short *)(param_1 + 0x892);
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar36 = (float)func_0x002cfca0((int)(short)(int)(fVar30 * fVar26));
    fVar30 = fRam003c91e0;
    fVar26 = fRam003c91dc;
    iVar21 = param_1 + sVar10 * 4;
    *(float *)(iVar21 + 0x1bec) = fVar23 + fVar36 * fRam003c91dc;
    fVar36 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar30 = (float)func_0x002cfca0((int)(short)(int)(fVar36 * fVar30));
    *(float *)(iVar21 + 0x1ec8) = fVar23 + fVar30 * fVar26;
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar30 = (float)func_0x00338f60((int)(short)(int)(fVar30 * fRam003c91e4));
    uVar29 = uRam003c91ec;
    *(float *)(iVar21 + 0x21a4) = fVar23 + fVar30 * fVar26;
    uVar17 = *(undefined4 *)(param_1 + 0x1ca4);
    uVar20 = *(undefined4 *)(param_1 + 0x1ca8);
    iVar21 = param_1 + sVar10 * 0xc;
    *(undefined4 *)(iVar21 + 0x19d0) = *(undefined4 *)(param_1 + 0x1ca0);
    *(undefined4 *)(iVar21 + 0x19d4) = uVar17;
    *(undefined4 *)(iVar21 + 0x19d8) = uVar20;
    fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x17b4) = fVar26 * fVar24 * fVar25;
    fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x17b8) = fVar26 * fVar24 * fVar25;
    fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar21 + 0x17bc) = fVar26 * fVar24 * fVar25;
    uVar17 = *(undefined4 *)(param_1 + 0x1f80);
    uVar20 = *(undefined4 *)(param_1 + 0x1f84);
    *(undefined4 *)(iVar21 + 0x1cac) = *(undefined4 *)(param_1 + 0x1f7c);
    *(undefined4 *)(iVar21 + 0x1cb0) = uVar17;
    *(undefined4 *)(iVar21 + 0x1cb4) = uVar20;
    uVar17 = *(undefined4 *)(param_1 + 0x225c);
    uVar20 = *(undefined4 *)(param_1 + 0x2260);
    *(undefined4 *)(iVar21 + 0x1f88) = *(undefined4 *)(param_1 + 0x2258);
    *(undefined4 *)(iVar21 + 0x1f8c) = uVar17;
    *(undefined4 *)(iVar21 + 0x1f90) = uVar20;
    fVar24 = fRam003c91f0;
    if ((int)*(short *)(param_1 + 0x34) + 0x2fffU < uRam003c91e8) {
      fVar24 = fVar23;
    }
    func_0x00373500(fVar24,fVar23,uVar29,param_1 + 0x2264);
    iVar21 = iRam003c9594;
    if (*(short *)(param_1 + 0x88a) < 0xcc) {
      if ((*(int *)(param_1 + 0x10c) < iRam003c9594) && (iRam003c9594 <= *(int *)(param_1 + 0x2c)))
      {
        *(undefined2 *)(param_1 + 0x8b8) = 0x78;
        func_0x0036f5d8(param_2,1,0x50,0x5000);
        *(undefined2 *)(param_1 + 0x896) = 0x28;
        *(undefined2 *)(param_1 + 0x8a0) = 0x1e;
        *(undefined2 *)(param_1 + 0x8a8) = 10;
      }
      if ((iVar21 < *(int *)(param_1 + 0x10c)) && (*(int *)(param_1 + 0x2c) <= iVar21)) {
        *(undefined2 *)(param_1 + 0x8b8) = 0x78;
        func_0x0036f5d8(param_2,1,0x50,0x5000);
        *(undefined2 *)(param_1 + 0x8a0) = 0x1e;
        *(undefined2 *)(param_1 + 0x8a8) = 10;
      }
    }
    fVar25 = fRam003c959c;
    fVar24 = fRam003c9598;
    if (iStack_90 == 0) {
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_b8[0] = (float)func_0x002cfca0((int)(short)(int)(fVar26 * fRam003c959c));
      afStack_b8[0] = afStack_b8[0] * fRam003c95a0;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_b8[1] = afStack_b8[0];
      afStack_b8[3] = (float)func_0x002cfca0((int)(short)(int)(fVar26 * fVar27));
      fVar30 = fRam003c95a8;
      fVar26 = fRam003c95a4;
      afStack_b8[3] = afStack_b8[3] * fRam003c95a4;
      fVar31 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_b8[4] = (float)func_0x002cfca0((int)(short)(int)(fVar31 * fRam003c95a8));
      fVar31 = fRam003c95ac;
      afStack_b8[4] = afStack_b8[4] * fVar26;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_b8[6] = (float)func_0x002cfca0((int)(short)(int)(fVar26 * fRam003c95ac));
      fVar26 = fRam003c95b0;
      afStack_b8[6] = afStack_b8[6] * fVar27;
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_b8[7] = (float)func_0x002cfca0((int)(short)(int)(fVar32 * fRam003c95b0));
      afStack_b8[7] = afStack_b8[7] * fVar27;
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_dc[0] = (float)func_0x002cfca0((int)(short)(int)(fVar32 * fVar25));
      afStack_dc[0] = afStack_dc[0] * fVar24;
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_dc[1] = afStack_dc[0];
      afStack_dc[3] = (float)func_0x002cfca0((int)(short)(int)(fVar24 * fVar30));
      fVar24 = fRam003c95b4;
      afStack_dc[3] = afStack_dc[3] * fRam003c95b4;
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_dc[4] = (float)func_0x002cfca0((int)(short)(int)(fVar25 * fVar27));
      afStack_dc[4] = afStack_dc[4] * fVar24;
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      afStack_dc[6] = (float)func_0x002cfca0((int)(short)(int)(fVar24 * fVar26));
      fVar25 = fRam003c95b8;
      afStack_dc[6] = afStack_dc[6] * fRam003c95b8;
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x88c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar26 = (float)func_0x002cfca0((int)(short)(int)(fVar24 * fVar31));
      fVar24 = fRam003c91b8;
      iVar21 = 0;
      afStack_dc[7] = fVar26 * fVar25;
      do {
        iVar18 = param_1 + iVar21 * 0xc;
        func_0x00373500(afStack_b8[iVar21 * 3],fVar23,fVar24,iVar18 + 0x1754);
        func_0x00373500(afStack_b8[iVar21 * 3 + 1],fVar23,fVar24,iVar18 + 0x1758);
        func_0x00373500(afStack_dc[iVar21 * 3],fVar23,fVar24,iVar18 + 0x1784);
        func_0x00373500(afStack_dc[iVar21 * 3 + 1],fVar23,fVar24,iVar18 + 0x1788);
        iVar21 = iVar21 + 1;
      } while (iVar21 < 3);
    }
    else {
      iVar21 = 0;
      do {
        iVar18 = param_1 + iVar21 * 0xc;
        func_0x0036fc20(uVar15,fVar32,iVar18 + 0x1758);
        func_0x0036fc20(uVar15,fVar32,iVar18 + 0x1788);
        fVar23 = fVar31;
        if (iVar21 == 0) {
          fVar23 = fVar24;
        }
        func_0x00373500(fVar23,uVar15,fVar32,iVar18 + 0x1754);
        func_0x00373500(-fVar23,uVar15,fVar32,iVar18 + 0x1784);
        iVar21 = iVar21 + 1;
      } while (iVar21 < 3);
    }
  }
  return;
code_r0x003c8c28:
  iVar21 = iVar21 + 1;
  piVar16 = piVar16 + 0x13;
  if (0x6d < iVar21) goto code_r0x003c8c38;
  goto code_r0x003c8b60;
}
