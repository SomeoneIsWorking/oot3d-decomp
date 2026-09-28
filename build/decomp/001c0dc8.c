// OoT3D decomp @ 001c0dc8  name=FUN_001c0dc8  size=4024

void FUN_001c0dc8(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  char *pcVar19;
  int iVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int unaff_r5;
  undefined1 unaff_r6;
  undefined1 unaff_r8;
  int unaff_r10;
  ushort uVar25;
  bool in_ZR;
  uint in_fpscr;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 unaff_s16;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  ushort *in_stack_00000080;
  float in_stack_000001a8;
  undefined4 in_stack_000001ac;
  undefined4 in_stack_000001b0;
  float in_stack_000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001bc;
  float in_stack_000001c0;
  undefined4 in_stack_000001c4;
  float in_stack_000001c8;
  float in_stack_000001cc;
  undefined4 in_stack_000001d0;
  float in_stack_000001d4;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r5 + 0x480) = param_1;
  if (((*puRam001c0eec & 1) == 0) && (iVar9 = func_0x003679b4(puRam001c0eec), iVar9 != 0)) {
    func_0x0036788c(iRam001c0ef0);
  }
  **(undefined4 **)(unaff_r5 + 0x480) = *(undefined4 *)(iRam001c0ef0 + 0x174);
  func_0x0034fe20();
  func_0x00370350(unaff_r5 + 0x230,1);
  func_0x0035c358(unaff_r5 + 0x2b4,unaff_r5 + 0x230,0);
  uVar10 = func_0x00372f38();
  func_0x00340e14();
  uVar11 = func_0x00372f0c(uVar10,3);
  func_0x00372d94(*(undefined4 *)(*(int *)(unaff_r5 + 0x49c) + 0xc),uVar11);
  sVar21 = 0;
  *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x49c) + 0xc) + 0x10) = unaff_r6;
  do {
    func_0x00372f38();
    sVar21 = sVar21 + 1;
  } while (sVar21 < 4);
  iVar9 = 0;
  do {
    func_0x00340e14();
    iVar12 = FUN_003687a8(*(undefined4 *)(unaff_r5 + iVar9 * 4 + 0x4a0));
    *(undefined1 *)(iVar12 + 0x1ba) = unaff_r8;
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x20);
  iVar9 = 0;
  do {
    func_0x00340e14();
    iVar12 = FUN_003687a8(*(undefined4 *)(unaff_r5 + iVar9 * 4 + 0x520));
    *(undefined1 *)(iVar12 + 0x1ba) = unaff_r8;
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x47);
  uVar13 = func_0x00372f0c(uVar10,4);
  uVar11 = uRam001c13fc;
  piVar2 = piRam001c13f8;
  iVar9 = 0;
  do {
    iVar12 = unaff_r5 + iVar9 * 4;
    func_0x00372f38();
    func_0x00372d94(*(undefined4 *)(*(int *)(iVar12 + 0x63c) + 0xc),uVar13);
    *(undefined1 *)(*(int *)(*(int *)(iVar12 + 0x63c) + 0xc) + 0x10) = unaff_r6;
    iVar12 = *(int *)(*(int *)(iVar12 + 0x63c) + 0xc);
    uVar26 = func_0x00371e50();
    if (*piVar2 == 0) {
      *(undefined4 *)(iVar12 + 8) = uVar26;
      func_0x003586ec(iVar12);
    }
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x3c);
  uVar13 = func_0x00372f0c(uVar10,2);
  iVar9 = 0;
  do {
    iVar12 = unaff_r5 + iVar9 * 4;
    func_0x00372f38();
    func_0x00372d94(*(undefined4 *)(*(int *)(iVar12 + 0x7e0) + 0xc),uVar13);
    *(undefined1 *)(*(int *)(*(int *)(iVar12 + 0x7e0) + 0xc) + 0x10) = unaff_r6;
    *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x7e0) + 0xc) + 0xc) = unaff_s16;
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x1e);
  func_0x00371738(&stack0x00000360,uRam001c1400,0x120);
  fVar3 = fRam001c140c;
  iVar9 = 0;
  do {
    iVar12 = func_0x0035010c(0x28);
    uVar13 = 0;
    if (iVar12 != 0) {
      uVar13 = func_0x003500c4();
    }
    iVar24 = unaff_r5 + iVar9 * 4;
    *(undefined4 *)(iVar24 + 0x7d8) = uVar13;
    func_0x003fd018(uVar13,1,1,&stack0x00000360);
    func_0x0034ea6c(*(undefined4 *)(*(int *)(iVar24 + 0x7d8) + 8),&stack0x00000330);
    func_0x00340de8(*(undefined4 *)(*(int *)(iVar24 + 0x7d8) + 8),&stack0x00000300);
    iVar12 = *(int *)(*(int *)(iVar24 + 0x7d8) + 8);
    *(float *)(iVar12 + 0xf0) = fVar3;
    *(float *)(iVar12 + 0xf4) = fVar3;
    *(float *)(iVar12 + 0xf8) = fVar3;
    *(float *)(iVar12 + 0xfc) = fVar3;
    iVar12 = *(int *)(*(int *)(iVar24 + 0x7d8) + 8);
    *(uint *)(iVar12 + 0x178) = *(uint *)(iVar12 + 0x178) | 4;
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 2);
  iVar9 = func_0x0035010c(0x28);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x003500c4();
  }
  *(undefined4 *)(unaff_r5 + 0x870) = uVar13;
  func_0x0034ff2c(uVar13,2,1,0x1e);
  uVar26 = uRam001c1414;
  func_0x0034fea8(*(undefined4 *)(unaff_r5 + 0x870),0);
  func_0x00371738(&stack0x000001d8,uRam001c1418,0x118);
  func_0x0034338c(&stack0x00000200,uRam001c141c,0x28);
  func_0x0034338c(&stack0x00000228,uRam001c1420,0x28);
  func_0x0034338c(&stack0x00000250,uRam001c1424,0x28);
  fVar4 = fRam001c1430;
  in_stack_000001ac = 0;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001bc = 0;
  in_stack_000001c4 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001a8 = *pfRam001c1428 * fRam001c142c;
  in_stack_000001b4 = *pfRam001c1428 * fRam001c1430;
  in_stack_000001c0 = in_stack_000001a8;
  in_stack_000001c8 = in_stack_000001b4;
  in_stack_000001cc = in_stack_000001b4;
  in_stack_000001d4 = in_stack_000001b4;
  iVar9 = func_0x0035010c(0x28);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x003500c4();
  }
  *(undefined4 *)(unaff_r5 + 0x864) = uVar13;
  func_0x0034ff2c(uVar13,1,1,0x3c);
  func_0x0034fea8(*(undefined4 *)(unaff_r5 + 0x864),0);
  func_0x0034ea6c(*(undefined4 *)(*(int *)(unaff_r5 + 0x864) + 8),&stack0x000001a8);
  iVar9 = func_0x0035010c(0x28);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x003500c4();
  }
  *(undefined4 *)(unaff_r5 + 0x87c) = uVar13;
  func_0x0034ff2c(uVar13,1,1,0x3c);
  func_0x0034fea8(*(undefined4 *)(unaff_r5 + 0x87c),0);
  func_0x0034ea6c(*(undefined4 *)(*(int *)(unaff_r5 + 0x87c) + 8),&stack0x000001a8);
  iVar9 = func_0x0035010c(0x28);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x003500c4();
  }
  *(undefined4 *)(unaff_r5 + 0x880) = uVar13;
  func_0x0034ff2c(uVar13,1,1,0x1e);
  func_0x0034fea8(*(undefined4 *)(unaff_r5 + 0x880),(int)*(char *)(unaff_r5 + 0x1e));
  func_0x0034ea6c(*(undefined4 *)(*(int *)(unaff_r5 + 0x880) + 8),&stack0x000002c0);
  func_0x00371738(&stack0x00000070,uRam001c1aec,0x118);
  in_stack_00000080 = (ushort *)&stack0x00000188;
  in_stack_00000040 = *puRam001c1af0;
  in_stack_00000044 = puRam001c1af0[1];
  in_stack_00000048 = puRam001c1af0[2];
  in_stack_0000004c = puRam001c1af0[3];
  in_stack_00000050 = puRam001c1af0[4];
  in_stack_00000054 = puRam001c1af0[5];
  in_stack_00000058 = puRam001c1af0[6];
  in_stack_0000005c = puRam001c1af0[7];
  in_stack_00000060 = puRam001c1af0[8];
  in_stack_00000064 = puRam001c1af0[9];
  in_stack_00000068 = puRam001c1af0[10];
  in_stack_0000006c = puRam001c1af0[0xb];
  in_stack_00000020 = *puRam001c1af4;
  in_stack_00000024 = puRam001c1af4[1];
  in_stack_00000028 = puRam001c1af4[2];
  in_stack_0000002c = puRam001c1af4[3];
  in_stack_00000030 = puRam001c1af4[4];
  in_stack_00000034 = puRam001c1af4[5];
  in_stack_00000038 = puRam001c1af4[6];
  in_stack_0000003c = puRam001c1af4[7];
  sVar21 = 0;
  iVar9 = 0x1e;
  puVar14 = in_stack_00000080;
  do {
    *puVar14 = (ushort)uRam001c1af8 & sVar21 << 2;
    puVar14[1] = sVar21 * 4 + 2;
    uVar25 = sVar21 * 4 + 1;
    puVar14[2] = uVar25;
    puVar14[3] = uVar25;
    puVar14[4] = uVar25;
    puVar14[5] = sVar21 * 4 + 4;
    iVar9 = iVar9 + -1;
    puVar14 = puVar14 + 6;
    sVar21 = sVar21 + 1;
  } while (iVar9 != 0);
  uVar15 = func_0x00372c90(uVar10,0);
  iVar9 = (**(code **)(*(int *)*puRam001c1afc + 8))((int *)*puRam001c1afc,0x1b8);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x00348f34(iVar9,&stack0x00000070);
  }
  *(undefined4 *)(unaff_r5 + 0x858) = uVar13;
  FUN_00348a64(uVar13,0,uVar15,uVar26);
  if (((*puRam001c0eec & 1) == 0) && (iVar9 = func_0x003679b4(puRam001c0eec), iVar9 != 0)) {
    func_0x0036788c(iRam001c0ef0);
  }
  uVar13 = func_0x00340d00(*(undefined4 *)(iRam001c1b00 + 0x47c),*(undefined4 *)(unaff_r5 + 0x858),0
                          );
  *(undefined4 *)(unaff_r5 + 0x85c) = uVar13;
  func_0x0034ea6c(uVar13,&stack0x00000040);
  func_0x0034ea48(*(undefined4 *)(unaff_r5 + 0x85c),&stack0x00000020);
  iVar9 = func_0x0035010c(0x28);
  uVar13 = 0;
  if (iVar9 != 0) {
    uVar13 = func_0x003500c4();
  }
  *(undefined4 *)(unaff_r5 + 0x868) = uVar13;
  func_0x0034ff2c(uVar13,1,1,0x1e);
  func_0x0034fea8(*(undefined4 *)(unaff_r5 + 0x868),(int)*(char *)(unaff_r5 + 0x1e));
  uVar10 = func_0x00372f0c(uVar10,1);
  func_0x00371738(&stack0x00000480,uRam001c1b04,0x58);
  iVar9 = 0;
  do {
    iVar12 = unaff_r5 + iVar9 * 4;
    func_0x00372f38();
    func_0x00372d94(*(undefined4 *)(*(int *)(iVar12 + 0x730) + 0xc),uVar10);
    *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x730) + 0xc) + 0xc) = unaff_s16;
    if (*piVar2 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x730) + 0xc) + 8) =
           *(undefined4 *)(&stack0x00000480 + iVar9 * 4);
      func_0x003586ec();
    }
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x16);
  sVar21 = 0;
  do {
    func_0x00372f38();
    uVar10 = uRam001c1b10;
    sVar21 = sVar21 + 1;
  } while (sVar21 < 0x14);
  *(undefined4 *)(unaff_r5 + 0x13c) = uRam001c1b08;
  *(undefined4 *)(unaff_r5 + 0x140) = uRam001c1b0c;
  *(undefined4 *)(unaff_r5 + 0x28) = uVar10;
  *(undefined4 *)(unaff_r5 + 0x2c) = uRam001c1b14;
  *(undefined4 *)(unaff_r5 + 0x30) = uRam001c1b18;
  uVar10 = uRam001c1b1c;
  *(undefined2 *)(unaff_r5 + 0xbe) = 0xa000;
  FUN_0037572c(uVar10);
  fVar5 = fRam001c1b20;
  iVar9 = iRam001c0e98;
  *(undefined4 *)(unaff_r5 + 0x3c) = *(undefined4 *)(unaff_r5 + 0x28);
  *(undefined4 *)(unaff_r5 + 0x40) = *(undefined4 *)(unaff_r5 + 0x2c);
  *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x30);
  *(float *)(unaff_r5 + 0x40) = *(float *)(unaff_r5 + 0x40) + fVar5;
  *(uint *)(unaff_r5 + 4) = *(uint *)(unaff_r5 + 4) | 9;
  if (*(char *)(iVar9 + 0xd) == '\x01') {
    *(undefined1 *)(iVar9 + 4) = 2;
  }
  else if ((*(uint *)(iRam001c0e94 + 0xed8) & 0x1000) == 0) {
    *(undefined1 *)(iVar9 + 4) = 1;
  }
  else {
    *(undefined1 *)(iVar9 + 4) = 0;
  }
  *(undefined2 *)(iVar9 + 0x1c) = 0x14;
  iVar24 = iRam001c1b24;
  *(int *)(iRam001c1b28 + unaff_r10) = iRam001c1b24;
  *puRam001c1b2c = 1;
  *(undefined2 *)(iVar9 + 0x30) = 0;
  *(undefined2 *)(iVar9 + 0x2e) = 1;
  FUN_003655d0(0,1);
  iVar12 = iRam001c0e94;
  uVar16 = *(uint *)(iRam001c0e94 + 0xed8);
  if (*(char *)(iVar9 + 0xd) == '\x01') {
    uVar10 = uRam001c1b30;
    if ((uVar16 & 0x7f) != 0) {
      uVar10 = VectorUnsignedToFloat(uVar16 & 0x7f,(byte)(in_fpscr >> 0x15) & 3);
    }
  }
  else {
    uVar10 = uRam001c1b38;
    if ((uVar16 & 0x7f000000) != 0) {
      uVar10 = VectorUnsignedToFloat((uVar16 & 0x7f000000) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    }
  }
  *(undefined4 *)(iVar9 + 200) = uVar10;
  uVar16 = *(uint *)(iVar12 + 0xed8) >> 0x10;
  *(char *)(iVar9 + 0x11) = (char)(*(uint *)(iVar12 + 0xed8) >> 0x10);
  if ((~(uVar16 & 0xff) & 7) == 0) {
    *(undefined2 *)(iRam001c1b34 + unaff_r10) = 0xff;
    *(undefined1 *)(iVar9 + 0xe) = 1;
  }
  else {
    *(undefined2 *)(iRam001c1b34 + unaff_r10) = 0;
    *(undefined1 *)(iVar9 + 0xe) = 0;
  }
  if ((uVar16 & 7) == 6) {
    *(undefined1 *)(iVar9 + 0xf) = 100;
  }
  else {
    *(undefined1 *)(iVar9 + 0xf) = 0;
  }
  puVar17 = (undefined1 *)(iVar24 + -0x1c);
  iVar12 = 0x41;
  do {
    puVar17[0x40] = 0;
    iVar12 = iVar12 + -1;
    puVar17 = puVar17 + 0x80;
    *puVar17 = 0;
  } while (iVar12 != 0);
  iVar12 = 0x33;
  puVar18 = puRam001c1b3c + 0xc;
  *(undefined1 *)puVar18 = 0;
  do {
    iVar12 = iVar12 + -1;
    *(undefined1 *)(puVar18 + 0x10) = 0;
    puVar18 = puVar18 + 0x20;
    *(undefined1 *)puVar18 = 0;
    iVar24 = iRam001c1b54;
    fVar5 = fRam001c1b4c;
  } while (iVar12 != 0);
  *(undefined4 *)(iVar9 + 0x120) = uRam001c1b40;
  uVar10 = uRam001c1b50;
  *(undefined4 *)(iVar9 + 0x124) = uRam001c1b44;
  iVar12 = 0;
  *(undefined4 *)(iVar9 + 0x128) = uRam001c1b48;
  do {
    puVar17 = (undefined1 *)(iVar24 + iVar12 * 0x48);
    *puVar17 = 1;
    if (iVar12 < 0x15) {
      fVar27 = (float)func_0x003727f0(*(undefined4 *)(iVar9 + 0x120));
      *(float *)(puVar17 + 4) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x10) = fVar27 * fVar5;
      fVar27 = (float)func_0x00372674(*(undefined4 *)(iVar9 + 0x120));
      *(float *)(puVar17 + 0xc) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x18) = fVar27 * fVar5;
    }
    else if (iVar12 < 0x29) {
      fVar27 = (float)func_0x003727f0(*(undefined4 *)(iVar9 + 0x124));
      *(float *)(puVar17 + 4) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x10) = fVar27 * fVar5;
      fVar27 = (float)func_0x00372674(*(undefined4 *)(iVar9 + 0x124));
      *(float *)(puVar17 + 0xc) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x18) = fVar27 * fVar5;
    }
    else {
      fVar27 = (float)func_0x003727f0(*(undefined4 *)(iVar9 + 0x128));
      *(float *)(puVar17 + 4) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x10) = fVar27 * fVar5;
      fVar27 = (float)func_0x00372674(*(undefined4 *)(iVar9 + 0x128));
      *(float *)(puVar17 + 0xc) = fVar27 * fVar5;
      *(float *)(puVar17 + 0x18) = fVar27 * fVar5;
    }
    *(undefined4 *)(puVar17 + 8) = uVar10;
    *(undefined4 *)(puVar17 + 0x14) = uVar10;
    fVar27 = (float)func_0x00371e50();
    *(short *)(puVar17 + 2) = (short)(int)fVar27;
    *(undefined2 *)(puVar17 + 0x3c) = 0;
    *(undefined2 *)(puVar17 + 0x3e) = 0;
    *(undefined2 *)(puVar17 + 0x40) = 0;
    if (*(char *)(iVar9 + 0xd) != '\x01') {
      uVar16 = iVar12 - 0xf;
      if (4 < uVar16) {
        uVar16 = iVar12 - 0x23;
      }
      if (4 < uVar16) {
        uVar16 = iVar12 - 0x37;
      }
      if (uVar16 < 5) {
        *puVar17 = 0;
      }
    }
    uVar13 = uRam001c1b58;
    iVar12 = (int)(short)((short)iVar12 + 1);
  } while (iVar12 < 0x3c);
  *(undefined4 *)(iVar9 + 0x114) = 1;
  puVar18 = puRam001c1b3c;
  *(undefined4 *)(iVar9 + 0x118) = uVar13;
  uVar26 = uRam001c1b84;
  fVar8 = fRam001c1b80;
  fVar7 = fRam001c1b7c;
  fVar6 = fRam001c1b78;
  iVar24 = iRam001c1b74;
  iVar12 = iRam001c1b70;
  uVar13 = uRam001c1b6c;
  fVar27 = fRam001c1b68;
  fVar5 = fRam001c1b64;
  uVar10 = uRam001c1b60;
  uVar16 = 0;
  *(undefined4 *)(iVar9 + 0x11c) = uRam001c1b5c;
  do {
    pcVar19 = (char *)(iRam001c1b88 + uVar16 * 8);
    if (*pcVar19 == '#') break;
    *(char *)(puVar18 + 0xc) = *pcVar19;
    uVar15 = VectorSignedToFloat((int)*(short *)(pcVar19 + 2),(byte)(in_fpscr >> 0x15) & 3);
    *puVar18 = uVar15;
    uVar15 = VectorSignedToFloat((int)*(short *)(pcVar19 + 4),(byte)(in_fpscr >> 0x15) & 3);
    puVar18[1] = uVar15;
    uVar15 = VectorSignedToFloat((int)*(short *)(pcVar19 + 6),(byte)(in_fpscr >> 0x15) & 3);
    puVar18[2] = uVar15;
    puVar18[5] = unaff_s16;
    puVar18[3] = unaff_s16;
    fVar28 = (float)func_0x00371e50(uVar11);
    *(short *)((int)puVar18 + 0x32) = (short)(int)fVar28;
    puVar18[0xe] = uVar10;
    *(undefined1 *)(puVar18 + 0xd) = 0;
    puVar18[0xf] = fVar3;
    *(undefined1 *)((int)puVar18 + 0x2a) = 0;
    cVar1 = *(char *)(puVar18 + 0xc);
    if (cVar1 == '\x01') {
      iVar20 = *(int *)(iVar9 + 0x114) * 0xab;
      iVar22 = (int)((ulonglong)((longlong)iRam001c1fc4 * (longlong)iVar20) >> 0x20);
      iVar20 = iRam001c1fc8 * ((iVar22 >> 0xd) - (iVar22 >> 0x1f)) + iVar20;
      *(int *)(iVar9 + 0x114) = iVar20;
      iVar22 = *(int *)(iVar9 + 0x118) * 0xac;
      fVar28 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      iVar20 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar22) >> 0x20);
      iVar22 = iRam001c1fcc * ((iVar20 >> 0xd) - (iVar20 >> 0x1f)) + iVar22;
      *(int *)(iVar9 + 0x118) = iVar22;
      uVar23 = *(int *)(iVar9 + 0x11c) * 0xaa;
      fVar29 = (float)VectorSignedToFloat(iVar22,(byte)(in_fpscr >> 0x15) & 3);
      iVar20 = (int)((longlong)(int)uVar23 * (longlong)iVar24 + ((ulonglong)uVar23 << 0x20) >> 0x20)
      ;
      iVar20 = ((iVar20 >> 0xe) - (iVar20 >> 0x1f)) * iRam001c1fd0 + uVar23;
      *(int *)(iVar9 + 0x11c) = iVar20;
      fVar30 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      for (fVar28 = fVar28 * fVar6 + fVar29 * fVar7 + fVar30 * fVar8; 0x3f7fffff < (int)fVar28;
          fVar28 = fVar28 - fVar3) {
      }
      puVar18[9] = fVar27 + ABS(fVar28) * fVar5;
      uVar15 = func_0x00371e50(uVar26);
      puVar18[5] = uVar15;
      if (*(char *)(iVar9 + 0xd) == '\x01') {
        puVar18[9] = (float)puVar18[9] * fRam001c1fd4;
      }
      puVar18[0xe] = uVar13;
    }
    else if ((cVar1 == '\x04') || (cVar1 != '\x02')) {
LAB_001c1d90:
      *(undefined1 *)(puVar18 + 0xc) = 0;
    }
    else {
      iVar20 = *(int *)(iVar9 + 0x114) * 0xab;
      iVar22 = (int)((ulonglong)((longlong)iRam001c1fc4 * (longlong)iVar20) >> 0x20);
      iVar20 = iRam001c1fc8 * ((iVar22 >> 0xd) - (iVar22 >> 0x1f)) + iVar20;
      *(int *)(iVar9 + 0x114) = iVar20;
      iVar22 = *(int *)(iVar9 + 0x118) * 0xac;
      fVar28 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      iVar20 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar22) >> 0x20);
      iVar22 = iRam001c1fcc * ((iVar20 >> 0xd) - (iVar20 >> 0x1f)) + iVar22;
      *(int *)(iVar9 + 0x118) = iVar22;
      uVar23 = *(int *)(iVar9 + 0x11c) * 0xaa;
      fVar29 = (float)VectorSignedToFloat(iVar22,(byte)(in_fpscr >> 0x15) & 3);
      iVar20 = (int)((longlong)(int)uVar23 * (longlong)iVar24 + ((ulonglong)uVar23 << 0x20) >> 0x20)
      ;
      iVar20 = ((iVar20 >> 0xe) - (iVar20 >> 0x1f)) * iRam001c1fd0 + uVar23;
      *(int *)(iVar9 + 0x11c) = iVar20;
      fVar30 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      for (fVar28 = fVar28 * fVar6 + fVar29 * fVar7 + fVar30 * fVar8; 0x3f7fffff < (int)fVar28;
          fVar28 = fVar28 - fVar3) {
      }
      puVar18[9] = fVar4 + ABS(fVar28) * fRam001c1fd8;
      uVar15 = func_0x00371e50(uVar26);
      puVar18[4] = uVar15;
      if (*(char *)(iVar9 + 0xd) == '\x01') {
        if ((uVar16 & 3) == 0) goto LAB_001c1d90;
        puVar18[9] = (float)puVar18[9] * fRam001c1fd4;
      }
    }
    puVar18 = puVar18 + 0x10;
    uVar16 = (uint)(short)((short)uVar16 + 1);
  } while ((int)uVar16 < 0x67);
  func_0x0036aa20(uRam001c1fe4,uRam001c1fe0,uRam001c1fdc);
  func_0x003738d0(unaff_r10 + 0x208c);
  iVar12 = iRam001c1ff0;
  uVar10 = uRam001c1fec;
  if ((~*(byte *)(iVar9 + 0x11) & 3) == 0) {
    if (*(char *)(iVar9 + 0xd) == '\x01') {
      iVar9 = 0x11;
    }
    else {
      iVar9 = 0x10;
    }
  }
  else {
    iVar9 = 0xf;
  }
  iVar24 = 0;
  if (iVar9 != 0) {
    do {
      func_0x00371e50(uVar10);
      iVar20 = iVar12 + iVar24 * 0x10;
      uVar26 = VectorSignedToFloat((int)*(short *)(iVar20 + 6),(byte)(in_fpscr >> 0x15) & 3);
      uVar13 = VectorSignedToFloat((int)*(short *)(iVar20 + 4),(byte)(in_fpscr >> 0x15) & 3);
      uVar11 = VectorSignedToFloat((int)*(short *)(iVar20 + 2),(byte)(in_fpscr >> 0x15) & 3);
      func_0x003738d0(uVar11,uVar13,uVar26,unaff_r10 + 0x208c);
      iVar24 = (int)(short)((short)iVar24 + 1);
    } while (iVar24 < iVar9);
  }
  return;
}
