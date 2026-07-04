// OoT3D decomp @ 0045d018  name=FUN_0045d018  size=2876

void FUN_0045d018(undefined4 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_fpscr;
  short sVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack_168;
  undefined4 uStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  
  piVar3 = piRam0045d450;
  iVar9 = *piRam0045d450;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x7b0),(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x7b2),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * fVar19;
  fVar14 = (float)FUN_00338f60((int)*(short *)(iVar9 + 0x7aa));
  fVar15 = (float)FUN_002cfca0((int)*(short *)(*piVar3 + 0x7aa));
  fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x7ae),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar16 = (float)FUN_002cfca0((int)*(short *)(*piVar3 + 0x7aa));
  fVar17 = (float)FUN_00338f60((int)*(short *)(*piVar3 + 0x7aa));
  fVar4 = fRam0045d458;
  fVar19 = fRam0045d454;
  fStack_6c = fVar16 * fVar13 + fVar13 * fVar17;
  fStack_78 = fRam0045d454;
  fStack_7c = fRam0045d454;
  fStack_80 = fRam0045d454;
  fStack_84 = fRam0045d454;
  fStack_8c = fRam0045d454;
  fStack_88 = fRam0045d458;
  fStack_74 = fVar14 * fVar13 - fVar13 * fVar15;
  fStack_70 = fVar21;
  FUN_002d77dc(param_1 + 0x41,&fStack_74,&fStack_80,&fStack_8c);
  FUN_00471b84(param_1 + 0x41,0x7f);
  fVar14 = fRam0045d46c;
  iVar9 = iRam0045d468;
  fVar13 = fRam0045d464;
  piVar5 = piRam0045d45c;
  iVar18 = *piRam0045d45c;
  param_1[0x4b] = iVar18;
  if (iVar18 < 0x34000001) {
    iVar18 = iRam0045d460;
  }
  param_1[0x4b] = iVar18;
  param_1[0x4c] = piVar5[1];
  iVar18 = iRam0045d474;
  if (*(short *)(param_1 + 0xc0) == 0) {
    if (*puRam0045d470 == 0) {
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      sVar12 = (short)(int)(fVar15 * fVar19 * fVar13 - fVar14);
    }
    else {
      fVar15 = (float)VectorUnsignedToFloat((uint)*puRam0045d470,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      sVar12 = (short)(int)(fVar14 + fVar16 * fVar15 * fVar13);
    }
    sVar12 = sVar12 + *(short *)(param_1 + 0x1fd);
    *(short *)(iVar9 + 0xc) = sVar12;
    *(short *)(iVar18 + 0xa8) = sVar12;
    *(short *)(param_1 + 0x1fd) = sVar12;
  }
  fVar15 = fRam0045d47c;
  pcVar6 = pcRam0045d478;
  if (param_1[0x1fb] == 0) {
    param_1[0x1fc] = 1;
  }
  else {
    param_1[0x1fb] = param_1[0x1fb] + -1;
  }
  fVar17 = fRam0045d488;
  fVar16 = fRam0045d484;
  puVar7 = puRam0045d480;
  if (-1 < (int)param_1[0x1fa]) {
    cVar1 = *pcVar6;
    if (param_1[0x1fa] == 0) {
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = *(char *)((int)param_1 + 0x2fe);
      }
      if ((bVar11 && cVar1 == '\0') && (param_1[0x1fc] != 0)) {
        *(undefined1 *)((int)param_1 + 0x2fe) = 1;
        *(undefined1 *)(param_1 + 0xbf) = 0;
        *(undefined1 *)((int)param_1 + 0x2fd) = 1;
        iVar18 = *piVar3;
        fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xc0) = (short)(int)(fVar15 / fVar20 + fVar14);
        *(undefined1 *)((int)param_1 + 0x307) = 1;
        *(undefined1 *)((int)param_1 + 0x305) = 0;
        *(undefined1 *)((int)param_1 + 0x306) = 2;
        *puVar7 = 2;
        fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar2 = (undefined2)(int)(fVar15 / fVar20 + fVar14);
        *(undefined2 *)((int)param_1 + 0x30a) = uVar2;
        *(undefined2 *)(param_1 + 0xc2) = uVar2;
        param_1[0x1fa] = 1;
        param_1[0x1fc] = 0;
        fVar15 = (float)FUN_003759d0();
        param_1[0x1fb] = (int)(fRam0045d49c + fVar15 * fVar17 * fVar16);
      }
    }
    else {
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = *(char *)((int)param_1 + 0x2fe);
      }
      if ((bVar11 && cVar1 == '\0') && (param_1[0x1fc] != 0)) {
        *puRam0045d48c = 0;
        *puRam0045d490 = 0;
        *(undefined1 *)((int)param_1 + 0x2fe) = 1;
        *(undefined1 *)(param_1 + 0xbf) = 1;
        *(undefined1 *)((int)param_1 + 0x2fd) = 0;
        iVar18 = *piVar3;
        fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xc0) = (short)(int)(fVar15 / fVar20 + fVar14);
        *(undefined1 *)((int)param_1 + 0x307) = 1;
        *(undefined1 *)((int)param_1 + 0x305) = 2;
        *(undefined1 *)((int)param_1 + 0x306) = 0;
        *puVar7 = 0;
        fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar2 = (undefined2)(int)(fVar15 / fVar20 + fVar14);
        *(undefined2 *)((int)param_1 + 0x30a) = uVar2;
        *(undefined2 *)(param_1 + 0xc2) = uVar2;
        param_1[0x1fc] = 0;
        param_1[0x1fa] = 0;
        fVar15 = (float)FUN_003759d0();
        param_1[0x1fb] = (int)(fRam0045d498 + fVar15 * fRam0045d494 * fVar17 * fVar16);
      }
    }
  }
  puStack_48 = param_1 + 0x159;
  fStack_168 = 0.0;
  FUN_002de22c(1,param_1 + 0xb9,puStack_48,param_1 + 0x41);
  FUN_002d9664(fVar19,fVar21 - (float)piVar5[2],fVar19,puStack_48,*param_1,1,
               *(undefined1 *)((int)param_1 + 0x2f7));
  puVar8 = puRam0045d4a0;
  iVar18 = *piVar3;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x7a8),(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(iVar18 + 0x7a8) < 1) {
    fVar13 = fVar15 * fVar16 * fVar13 - fVar14;
  }
  else {
    fVar13 = fVar14 + fVar15 * fVar16 * fVar13;
  }
  *(short *)(iVar18 + 0x7aa) = (short)(int)fVar13 + *(short *)(iVar18 + 0x7aa);
  fVar15 = fRam0045d870;
  fVar13 = fRam0045d4a4;
  if (param_1[0x21d] != 0) {
    if (param_1[0x223] == 0) {
      *(short *)(iVar18 + 0x7ae) = (short)uRam0045d4a8;
      iVar18 = param_1[0x226] + 1;
      param_1[0x226] = iVar18;
      uVar10 = uRam0045d86c;
      if (iVar18 < 0x1f) {
        param_1[0x220] = fVar19;
      }
      else if (iVar18 < 0x3d) {
        param_1[0x220] = uRam0045d868;
        param_1[0x222] = (float)param_1[0x222] + fVar13;
      }
      else {
        param_1[0x221] = fVar19;
        param_1[0x21f] = uVar10;
        param_1[0x220] = fVar19;
        param_1[0x223] = 2;
        param_1[0x226] = 0;
      }
      param_1[0x221] = (float)param_1[0x221] + (float)param_1[0x222];
      fVar15 = (float)param_1[0x21f];
      param_1[0x21f] = fVar15 + (float)param_1[0x220];
      param_1[0x21e] = (float)param_1[0x21e] + fVar15 + (float)param_1[0x220];
    }
    else if (param_1[0x223] == 2) {
      fVar16 = (float)param_1[0x21f];
      param_1[0x21f] = fVar16 + (float)param_1[0x220];
      fVar16 = (float)param_1[0x21e] + fVar16 + (float)param_1[0x220];
      param_1[0x21e] = fVar16;
      if ((uint)fVar15 < (uint)fVar16) {
        param_1[0x21e] = fVar16 + fRam0045d874;
      }
      else if (iRam0045d878 < (int)fVar16) {
        param_1[0x21e] = fVar16 + fRam0045d87c;
      }
    }
    FUN_00372224(&fStack_98,param_1 + 0x86);
    FUN_0034a80c(&fStack_98,&fStack_98);
    fStack_8c = fVar19;
    fStack_7c = fVar19;
    fStack_6c = fVar19;
    FUN_002d75dc(fVar19,param_1[0x21e],fVar19,auStack_c8);
    FUN_002d75dc(uRam0045d880,fVar19,fVar19,auStack_f8);
    fStack_104 = fVar4;
    fStack_100 = fVar4;
    fStack_fc = fVar4;
    fStack_10c = (float)param_1[0x221] + fRam0045d884;
    fStack_110 = fVar19;
    uStack_108 = uRam0045d888;
    FUN_003283a0(auStack_c8,auStack_c8,&fStack_104);
    FUN_0036c174(auStack_c8,auStack_f8,auStack_c8);
    FUN_0032c78c(auStack_c8,&fStack_110,auStack_c8);
    FUN_0036c174(auStack_c8,&fStack_98,auStack_c8);
    *(undefined1 *)(param_1[0x21d] + 0xac) = 1;
    FUN_003721e0(param_1[0x21d],auStack_c8);
    fStack_114 = fVar13;
    uStack_12c = *puRam0045d88c;
    uStack_128 = puRam0045d88c[1];
    fStack_124 = (float)puRam0045d88c[2];
    uStack_120 = puRam0045d88c[3];
    fStack_13c = (float)puRam0045d88c[4];
    fStack_138 = (float)puRam0045d88c[5];
    uStack_134 = puRam0045d88c[6];
    uStack_130 = puRam0045d88c[7];
    fStack_148 = fVar4;
    fStack_144 = fVar4;
    fStack_140 = fVar4;
    fStack_158 = (float)puRam0045d88c[8];
    fStack_154 = (float)puRam0045d88c[9];
    fStack_150 = (float)puRam0045d88c[10];
    uStack_14c = puRam0045d88c[0xb];
    fStack_168 = (float)puRam0045d88c[0xc];
    uStack_164 = puRam0045d88c[0xd];
    fStack_160 = (float)puRam0045d88c[0xe];
    uStack_15c = puRam0045d88c[0xf];
    if (*(char *)(iVar9 + 0xe) != '\0') {
      fStack_114 = fVar19;
      uStack_12c = uRam0045d890;
      uStack_128 = uRam0045d890;
      fStack_124 = fVar14;
      fStack_13c = fVar4;
      fStack_138 = fVar4;
      uStack_134 = uRam0045d894;
      fStack_140 = fVar19;
      fStack_158 = fVar19;
      fStack_154 = fVar19;
      fStack_150 = fVar19;
      fStack_168 = fVar4;
      uStack_164 = uRam0045d890;
      fStack_160 = fVar19;
    }
    fStack_11c = fStack_98 * fVar13 + fStack_94 * fStack_114 + fStack_90 * fStack_114;
    fStack_118 = fStack_88 * fVar13 + fStack_84 * fStack_114 + fStack_80 * fStack_114;
    fStack_114 = fStack_78 * fVar13 + fStack_74 * fStack_114 + fStack_70 * fStack_114;
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_002d75b0(uVar10,0,&uStack_12c);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_002d7568(uVar10,0,&fStack_13c);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_0033d14c(uVar10,0,&fStack_11c);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_0033d200(uVar10,0);
    fStack_90 = fStack_90 * fStack_140;
    fVar14 = fStack_88 * fStack_148;
    fVar13 = fStack_80 * fStack_140;
    fStack_140 = fStack_78 * fStack_148 + fStack_74 * fStack_144 + fStack_70 * fStack_140;
    fStack_148 = fStack_98 * fStack_148 + fStack_94 * fStack_144 + fStack_90;
    fStack_144 = fVar14 + fStack_84 * fStack_144 + fVar13;
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_002d75b0(uVar10,1,&fStack_158);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_002d7568(uVar10,1,&fStack_168);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_0033d14c(uVar10,1,&fStack_148);
    uVar10 = FUN_003687a8(param_1[0x21d]);
    FUN_0033d200(uVar10,1);
    if (((*puVar8 & 1) == 0) && (iVar9 = FUN_003679b4(puRam0045d4a0), iVar9 != 0)) {
      FUN_0036788c(UNK_0045dbe0);
    }
    FUN_00330b98(UNK_0045dbec,param_1[0x21d],0);
  }
  uStack_58 = *UNK_0045dbf0;
  uStack_54 = UNK_0045dbf0[1];
  uStack_50 = UNK_0045dbf0[2];
  uStack_4c = UNK_0045dbf0[3];
  if (param_1[0x22c] != 0) {
    fVar13 = (float)param_1[0x298] + UNK_0045dbf4;
    param_1[0x298] = fVar13;
    if (0x3f800000 < (int)fVar13) {
      fVar13 = fVar4;
    }
    param_1[0x298] = fVar13;
    iVar9 = UNK_0045dbfc;
    iVar18 = param_1[0x225];
    if (iVar18 == 0) {
      param_1[0x298] = fVar19;
      param_1[0x225] = 1;
    }
    else if (iVar18 == 1) {
      iVar9 = param_1[0x227];
joined_r0x0045da38:
      if (iVar9 == 0) {
        param_1[0x225] = 2;
      }
    }
    else {
      if (iVar18 == 2) {
        fVar13 = (float)param_1[0x28b] + UNK_0045dbf8;
        param_1[0x28b] = fVar13;
        if (iVar9 <= (int)fVar13) {
          param_1[0x28b] = UNK_0045dc00;
          param_1[0x225] = 3;
        }
        iVar9 = param_1[0x227];
      }
      else {
        if (iVar18 != 3) {
          if (iVar18 != 4) goto LAB_0045da40;
          fVar13 = (float)param_1[0x28b] + UNK_0045dc04;
          param_1[0x28b] = fVar13;
          if ((int)fVar13 < 0x43000001) {
            param_1[0x28b] = UNK_0045dc08;
            param_1[0x225] = 1;
          }
          iVar9 = param_1[0x227];
          goto joined_r0x0045da38;
        }
        iVar9 = param_1[0x227];
      }
      if (iVar9 == 1) {
        param_1[0x225] = 4;
      }
    }
LAB_0045da40:
    FUN_002d7354(param_1 + 0x28a,param_1[0x22c],&uStack_58,4);
  }
  if (param_1[0x278] == 0) goto code_r0x0045db08;
  iVar9 = param_1[0x224];
  if (iVar9 == 0) {
    param_1[0x285] = fVar19;
    param_1[0x224] = 1;
  }
  else if (iVar9 == 1) {
    fVar13 = (float)param_1[0x285] + UNK_0045dc0c;
    param_1[0x285] = fVar13;
    if (0x3f800000 < (int)fVar13) {
      param_1[0x285] = fVar4;
      param_1[0x224] = 2;
    }
    if (param_1[0x227] == 0) {
      param_1[0x285] = fVar19;
      param_1[0x224] = 3;
    }
  }
  else if (iVar9 == 2) {
    if (param_1[0x227] == 0) {
      param_1[0x224] = 3;
LAB_0045dae8:
      param_1[0x285] = fVar19;
    }
  }
  else {
    bVar11 = iVar9 == 3;
    if (bVar11) {
      iVar9 = param_1[0x227];
    }
    if (bVar11 && iVar9 == 1) {
      param_1[0x224] = 1;
      goto LAB_0045dae8;
    }
  }
  FUN_002d7354(param_1 + 0x27b,param_1[0x278],&uStack_58,3);
code_r0x0045db08:
  uStack_5c = FUN_004814dc();
  fStack_68 = fVar19;
  fStack_64 = fVar19;
  fStack_60 = fVar19;
  if (((*puVar8 & 1) == 0) && (iVar9 = FUN_003679b4(puRam0045d4a0), iVar9 != 0)) {
    FUN_0036788c(UNK_0045dbe0);
  }
  uVar10 = UNK_0045dc10;
  FUN_003339e8(UNK_0045dc10,6,&fStack_68,0);
  if (((*puVar8 & 1) == 0) && (iVar9 = FUN_003679b4(puRam0045d4a0), iVar9 != 0)) {
    FUN_0036788c(UNK_0045dbe0);
  }
  FUN_003339e8(uVar10,4,&fStack_68,0);
  return;
}

