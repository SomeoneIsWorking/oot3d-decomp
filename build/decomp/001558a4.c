// OoT3D decomp @ 001558a4  name=FUN_001558a4  size=2624

void FUN_001558a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  short sVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [48];
  int iStack_78;
  undefined4 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;

  uVar16 = uRam00155bd4;
  iVar5 = iRam00155bd0;
  fVar4 = fRam00155bcc;
  fVar3 = fRam00155bc8;
  uVar2 = uRam00155bc4;
  uVar1 = uRam00155bc0;
  iVar14 = iRam00155bbc;
  uVar21 = uRam00155bb8;
  uVar17 = uRam00155bb4;
  iStack_68 = param_1 + 0x88c;
  iVar20 = *(int *)(param_2 + 0x20ac);
  sVar19 = *(short *)(param_1 + 0x7da);
  iStack_6c = param_1 + 0x884;
  iStack_70 = param_2 + 0x2298;
  if (sVar19 == 0) {
    *(undefined2 *)(param_1 + 0x7da) = 1;
    FUN_00367494(param_2,iStack_70);
    FUN_0036e980(param_2,param_1,0x39);
    iVar15 = iRam00155bf8;
    piVar6 = piRam00155bf0;
    *(undefined2 *)((int)piRam00155bf0 + 10) = 0;
    *(undefined1 *)(piVar6 + 2) = 1;
    piVar6[1] = iRam00155bf4;
    *(undefined1 *)((int)piVar6 + 9) = 0;
    piVar6[6] = iVar14;
    piVar6[7] = iVar15;
    uVar12 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x7dc) = uVar12;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x7dc),7);
    *(undefined4 *)(param_1 + 0x884) = uRam00155bfc;
    *(undefined4 *)(param_1 + 0x88c) = uRam00155c00;
    uVar22 = uRam00155c04;
    iVar15 = *(int *)(iVar5 + 0x90);
    *(undefined2 *)(iVar15 + 0x34) = 0;
    *(undefined2 *)(iVar15 + 0xbc) = 0;
    iVar15 = *(int *)(iVar5 + 0x8c);
    *(undefined2 *)(iVar15 + 0x34) = 0;
    *(undefined2 *)(iVar15 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x208) = uVar22;
    *(float *)(param_1 + 0x200) = fVar3;
    *(float *)(param_1 + 0x204) = fVar3;
    FUN_003655d0(0,200);
    *(undefined2 *)(param_1 + 0x1aa) = 0;
LAB_00155abc:
    if (*(short *)(param_1 + 0x1aa) == 0x1e) {
      FUN_00367c7c(param_2,uRam00155c08,0);
    }
    if (*(short *)(param_1 + 0x1aa) == 0x78) {
      FUN_00367c7c(param_2,uRam00155c0c,0);
    }
    uVar22 = uRam00155c10;
    *(float *)(param_1 + 0x7ec) = fVar3;
    *(undefined4 *)(param_1 + 0x7f0) = uVar22;
    *(float *)(param_1 + 0x7f4) = fVar3;
    fStack_b4 = fVar3;
    fStack_b0 = fVar3;
    fStack_ac = *(float *)(param_1 + 0x884);
    FUN_003735e8(*(undefined4 *)(param_1 + 0x88c),auStack_a8,0);
    FUN_003735ac(&fStack_c0,auStack_a8,&fStack_b4);
    *(float *)(param_1 + 0x7e0) = fStack_c0;
    *(undefined4 *)(param_1 + 0x7e4) = uRam00155c14;
    *(float *)(param_1 + 0x7e8) = fStack_b8;
    FUN_00373500(uRam00155c18,uVar21,uVar17,iStack_68);
    iVar15 = iStack_6c;
    uVar17 = uRam00155c1c;
    uVar21 = uVar1;
    uVar22 = uVar2;
  }
  else {
    if (sVar19 == 1) goto LAB_00155abc;
    if (sVar19 != 2) goto LAB_00155b74;
    fStack_b4 = fRam00155bc8;
    fStack_b0 = fRam00155bc8;
    fStack_ac = *(float *)(param_1 + 0x884);
    FUN_003735e8(*(undefined4 *)(param_1 + 0x88c),auStack_a8,0);
    FUN_003735ac(&fStack_c0,auStack_a8,&fStack_b4);
    *(float *)(param_1 + 0x7e0) = fStack_c0;
    *(float *)(param_1 + 0x7e8) = fStack_b8;
    FUN_00373500(uRam00155bd8,uVar1,*(float *)(param_1 + 0x87c) * fVar4,param_1 + 0x7e4);
    FUN_00373500(uRam00155be0,uVar1,*(float *)(param_1 + 0x87c) * fRam00155bdc,param_1 + 0x7f0);
    FUN_00373500(uRam00155be4,uVar21,uVar17,iStack_68);
    FUN_00373500(uRam00155bec,uVar1,*(float *)(param_1 + 0x87c) * fRam00155be8,iStack_6c);
    iVar15 = param_1 + 0x87c;
    uVar17 = uVar16;
    uVar21 = uVar16;
    uVar22 = uVar1;
  }
  FUN_00373500(uVar17,uVar21,uVar22,iVar15);
LAB_00155b74:
  iVar15 = (int)*(short *)(param_1 + 0x7dc);
  puStack_74 = (undefined4 *)(param_1 + 0x7ec);
  if (iVar15 != 0) {
    if (*(char *)(param_1 + 0x7d9) == '\0') {
      FUN_00367b14(param_2,iVar15,puStack_74,param_1 + 0x7e0);
    }
    else {
      FUN_00367b14(param_2,iVar15,param_1 + 0x810,param_1 + 0x804);
    }
  }
  iVar15 = iRam00156044;
  sVar19 = *(short *)(param_1 + 0x498);
  if (sVar19 == 0) {
    FUN_00375bcc(*(undefined4 *)(iVar5 + 0x8c),iRam00156044);
    FUN_00375bcc(*(undefined4 *)(iVar5 + 0x90),iVar15);
    fVar7 = fRam00156048;
    fStack_b4 = *(float *)(param_1 + 0x208);
    fStack_b0 = fRam00156048;
    fStack_ac = fVar3;
    FUN_003735e8(*(undefined4 *)(param_1 + 0x200),auStack_a8,0);
    FUN_003735ac(&fStack_c0,auStack_a8,&fStack_b4);
    fVar27 = fRam0015604c;
    iVar14 = *(int *)(iVar5 + 0x90);
    *(float *)(iVar14 + 0x28) = fStack_c0;
    *(undefined4 *)(iVar14 + 0x2c) = uStack_bc;
    *(float *)(iVar14 + 0x30) = fStack_b8;
    fVar8 = fRam00156050;
    *(short *)(iVar14 + 0xbe) = (short)(int)(*(float *)(param_1 + 0x200) * fRam00156050);
    iVar14 = *(int *)(iVar5 + 0x8c);
    *(float *)(iVar14 + 0x28) = -fStack_c0;
    *(undefined4 *)(iVar14 + 0x2c) = uStack_bc;
    *(float *)(iVar14 + 0x30) = -fStack_b8;
    uVar17 = uRam00156054;
    *(short *)(iVar14 + 0xbe) = (short)(int)(fVar27 + *(float *)(param_1 + 0x200) * fVar8);
    FUN_00373500(fVar3,uVar1,uVar17,param_1 + 0x208);
    uVar17 = uRam00156058;
    *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) - *(float *)(param_1 + 0x204);
    FUN_00373500(uRam0015605c,uVar16,uVar17,param_1 + 0x204);
    if (*(int *)(param_1 + 0x208) < iRam00156060) {
      if (*(short *)(param_1 + 0x1be) == 0) {
        FUN_00375bcc(*(undefined4 *)(iVar5 + 0x90),iVar15 + -0xf);
        *(undefined2 *)(param_1 + 0x1be) = 1;
      }
      FUN_00373500(uRam00156068,uVar16,uRam00156064,*(int *)(iVar5 + 0x90) + 0x54);
      fVar10 = fRam00156084;
      uVar1 = uRam00156080;
      uVar21 = uRam0015607c;
      fVar9 = fRam00156078;
      uVar17 = uRam00156074;
      fVar8 = fRam00156070;
      fVar27 = fRam0015606c;
      iStack_78 = param_2 + 0x5000;
      sVar19 = 0;
      do {
        fVar28 = *(float *)(*(int *)(iVar5 + 0x90) + 0x54) * fVar27;
        fVar24 = (float)FUN_003738a8(fVar28 * fVar8);
        fStack_c8 = fVar24 + fVar7;
        fStack_cc = fVar27;
        fStack_c4 = fVar3;
        fVar25 = (float)FUN_00371e50(uVar2);
        fVar26 = (float)FUN_00371e50(uVar17);
        pcVar18 = *(char **)(iStack_78 + 0xc28);
        sVar13 = 0;
        do {
          if (*pcVar18 == '\0') {
            *pcVar18 = '\a';
            puVar11 = puRam00156088;
            *(float *)(pcVar18 + 4) = fStack_cc;
            *(float *)(pcVar18 + 8) = fStack_c8;
            *(float *)(pcVar18 + 0xc) = fStack_c4;
            uVar16 = puVar11[1];
            uVar22 = puVar11[2];
            *(undefined4 *)(pcVar18 + 0x10) = *puVar11;
            *(undefined4 *)(pcVar18 + 0x14) = uVar16;
            *(undefined4 *)(pcVar18 + 0x18) = uVar22;
            uVar16 = puVar11[1];
            uVar22 = puVar11[2];
            *(undefined4 *)(pcVar18 + 0x1c) = *puVar11;
            *(undefined4 *)(pcVar18 + 0x20) = uVar16;
            *(undefined4 *)(pcVar18 + 0x24) = uVar22;
            *(float *)(pcVar18 + 0x30) = (fVar25 + fVar10) * fVar9;
            *(short *)(pcVar18 + 0x2c) = (short)(int)fVar26;
            pcVar18[0x2e] = '\0';
            pcVar18[0x2f] = '\0';
            *(float *)(pcVar18 + 0x34) = SQRT(fVar28 * fVar28 - fVar24 * fVar24);
            uVar16 = FUN_00371e50(uVar21);
            *(undefined4 *)(pcVar18 + 0x38) = uVar16;
            pcVar18[2] = '\0';
            pcVar18[3] = '\0';
            fVar24 = (float)FUN_00371e50(uVar1);
            uVar16 = 6;
            if ((short)(int)fVar26 == 0) {
              uVar16 = 4;
            }
            pcVar18[1] = (char)(int)fVar24;
            uVar16 = FUN_00371178(*(undefined4 *)(iVar5 + 0x20),0,uVar16);
            *(undefined4 *)(pcVar18 + 0x44) = uVar16;
            break;
          }
          sVar13 = sVar13 + 1;
          pcVar18 = pcVar18 + 0x48;
        } while (sVar13 < 0x96);
        sVar19 = sVar19 + 1;
      } while (sVar19 < 4);
      if (*(int *)(*(int *)(iVar5 + 0x90) + 0x54) <= iRam0015608c) {
        *(float *)(param_1 + 0x2c) = fVar7;
        fVar7 = fRam00156090;
        sVar19 = 0;
        do {
          fStack_d8 = *(float *)(param_1 + 0x28);
          fStack_d4 = *(float *)(param_1 + 0x2c);
          fStack_d0 = *(float *)(param_1 + 0x30);
          fStack_e4 = (float)FUN_003738a8(fVar4);
          fStack_e0 = (float)FUN_003738a8(fVar4);
          fStack_dc = (float)FUN_003738a8(fVar4);
          fStack_d8 = fStack_d8 + fStack_e4;
          fStack_d4 = fStack_d4 + fStack_e0;
          fStack_d0 = fStack_d0 + fStack_dc;
          fStack_f0 = fVar3;
          fStack_ec = fVar3;
          fStack_e8 = fVar3;
          fVar27 = (float)FUN_00371e50(fVar10);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar3 <= fStack_e4) << 0x1d;
          FUN_00368498(fVar27 + fVar7,param_2,&fStack_d8,&fStack_e4,&fStack_f0,
                       !SUB41(in_fpscr >> 0x1d,0));
          sVar19 = sVar19 + 1;
        } while (sVar19 < 0x32);
        *(undefined2 *)(param_1 + 0x498) = 1;
        *(undefined1 *)(param_1 + 0x5bc) = 1;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        *(undefined2 *)(param_1 + 0xbe) = 0;
        func_0x00353c6c(*(undefined4 *)(iVar5 + 0x8c),param_2);
        func_0x00353c6c(*(undefined4 *)(iVar5 + 0x90),param_2);
        FUN_0037572c(fVar3,param_1);
        FUN_00374a58(fVar3,param_1 + 0x5c0,0x1b);
        uVar17 = FUN_0036ae14(param_1 + 0x5c0,0x1b);
        uVar17 = VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x1fc) = uVar17;
        *(undefined2 *)(param_1 + 0x1d0) = 0x4b;
        FUN_0036e980(param_2,param_1,0x68);
        FUN_00375bcc(param_1,uRam001563a0);
        FUN_0036ec40(0,uRam001563a4);
      }
    }
    iVar14 = *(int *)(iVar5 + 0x90);
    uVar17 = *(undefined4 *)(iVar14 + 0x54);
    *(undefined4 *)(iVar14 + 0x5c) = uVar17;
    *(undefined4 *)(iVar14 + 0x58) = uVar17;
    iVar14 = *(int *)(iVar5 + 0x8c);
    *(undefined4 *)(iVar14 + 0x5c) = uVar17;
    *(undefined4 *)(iVar14 + 0x58) = uVar17;
    *(undefined4 *)(iVar14 + 0x54) = uVar17;
  }
  else {
    if (sVar19 == 1) {
      iVar15 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar16,param_1 + 0x5c0);
      if (iVar15 != 0) {
        FUN_00370350(uRam001563a8,param_1 + 0x5c0,0x15);
      }
      *(undefined1 *)(iVar5 + 2) = 0xff;
      *(undefined1 *)(param_2 + 0x3235) = 4;
      FUN_00373500(uVar16,uVar16,uVar1,param_2 + 0x3258);
    }
    else if (sVar19 != 2) {
      return;
    }
    FUN_003731e0(param_1 + 0x5c0);
    FUN_00373500(uRam001563b0,uVar16,uRam001563ac,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
    if (*(short *)(param_1 + 0x1d0) == 1) {
      *(undefined2 *)(param_1 + 0x7da) = 2;
      *(float *)(param_1 + 0x87c) = fVar3;
      *(undefined2 *)(param_1 + 0x1d2) = 0x62;
      *(undefined2 *)(param_1 + 0x1d4) = 0x87;
      uVar17 = uRam001563b4;
      *(undefined2 *)(param_1 + 0x1d6) = 0x4b;
      *(float *)(iVar20 + 0x28) = fVar3;
      *(undefined4 *)(iVar20 + 0x2c) = uVar17;
      *(undefined4 *)(iVar20 + 0x30) = uRam001563b8;
      *(undefined2 *)(iVar20 + 0xbe) = 0x8000;
      uVar17 = uRam001563bc;
      *(undefined2 *)(iVar20 + 0x36) = 0x8000;
      uVar21 = uRam001563c0;
      *(float *)(param_1 + 0x804) = fVar3;
      *(undefined4 *)(param_1 + 0x808) = uVar17;
      *(undefined4 *)(param_1 + 0x80c) = uVar21;
      fVar3 = fRam001563c4;
      *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(iVar20 + 0x28);
      *(float *)(param_1 + 0x814) = *(float *)(iVar20 + 0x2c) + fVar3;
      *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(iVar20 + 0x30);
    }
    if (*(short *)(param_1 + 0x1d6) == 0x1d) {
      FUN_0036e980(param_2,param_1,5);
    }
    if (*(short *)(param_1 + 0x1d6) == 0x18) {
      FUN_0036f59c(iVar20,(uint)*(ushort *)(*(int *)(iRam001563c8 + iVar20) + 0xf4) - iRam001563cc);
    }
    iVar15 = (int)*(short *)(param_1 + 0x1d6);
    iVar20 = iVar15;
    if (iVar15 != 0) {
      iVar20 = iVar15 + -0x1e;
    }
    if (iVar20 < 0 == (iVar15 != 0 && SBORROW4(iVar15,0x1e))) {
      *(undefined1 *)(param_1 + 0x7d9) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x7d9) = 1;
      FUN_00373500(uRam001563d4,uRam001563d0,iVar14,param_1 + 0x80c);
    }
    uVar21 = uRam001563dc;
    uVar17 = uRam001563d8;
    if (*(short *)(param_1 + 0x1d2) == 0xc) {
      *(undefined2 *)(param_1 + 0x1ba) = 0xc;
      FUN_0037547c(uRam001563e0,0,4,uVar21,uVar21,uVar17);
    }
    if (*(short *)(param_1 + 0x1d4) == 6) {
      *(undefined1 *)(iVar5 + 2) = 0;
      *(undefined1 *)(param_2 + 0x3236) = 5;
    }
    if (*(short *)(param_1 + 0x1d4) == 1) {
      iVar14 = FUN_0036c5bc(param_2,0);
      uVar17 = *(undefined4 *)(param_1 + 0x7e4);
      uVar21 = *(undefined4 *)(param_1 + 0x7e8);
      *(undefined4 *)(iVar14 + 0x8c) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 *)(iVar14 + 0x90) = uVar17;
      *(undefined4 *)(iVar14 + 0x94) = uVar21;
      uVar17 = *(undefined4 *)(param_1 + 0x7e4);
      uVar21 = *(undefined4 *)(param_1 + 0x7e8);
      *(undefined4 *)(iVar14 + 0xa4) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 *)(iVar14 + 0xa8) = uVar17;
      *(undefined4 *)(iVar14 + 0xac) = uVar21;
      uVar17 = puStack_74[1];
      uVar21 = puStack_74[2];
      *(undefined4 *)(iVar14 + 0x80) = *puStack_74;
      *(undefined4 *)(iVar14 + 0x84) = uVar17;
      *(undefined4 *)(iVar14 + 0x88) = uVar21;
      FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x7dc),0);
      piVar6 = piRam00155bf0;
      *(undefined2 *)(param_1 + 0x7dc) = 0;
      *(undefined2 *)(param_1 + 0x7da) = 0;
      bVar23 = (char)piVar6[2] != '\0';
      iVar14 = 0;
      if (bVar23) {
        iVar14 = *piVar6;
      }
      if (bVar23 && iVar14 != 0) {
        iVar14 = FUN_0036c5bc(iVar14,0xffffffff);
        FUN_00367c48();
        *(undefined4 *)(iVar14 + 0x144) = uRam001563e4;
        *(undefined1 *)(piVar6 + 2) = 0;
      }
      FUN_00367374(param_2,iStack_70);
      FUN_0036e980(param_2,param_1,7);
      puVar11 = puRam001563e8;
      *(undefined2 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x508) = *puVar11;
      *(undefined4 *)(param_1 + 0x50c) = puVar11[1];
      *(undefined4 *)(param_1 + 0x510) = puVar11[2];
      func_0x0035a6f4(param_1,param_2);
    }
  }
  return;
}
