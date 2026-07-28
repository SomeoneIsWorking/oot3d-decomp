// OoT3D decomp @ 004bff2c  name=FUN_004bff2c  size=12

void FUN_004bff2c(undefined4 param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int unaff_r4;
  int iVar14;
  float *pfVar15;
  int unaff_r5;
  int unaff_r7;
  undefined4 *unaff_r9;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined4 uStack00000024;
  int in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_0000005c;
  float in_stack_00000060;
  float in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  float in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  float in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c0;
  float in_stack_000000c4;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  float in_stack_000000d4;
  float in_stack_000000d8;
  float in_stack_000000dc;
  float in_stack_000000e0;
  float in_stack_000000e4;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  
  uStack00000024 = param_1;
  uVar11 = func_0x003478bc(*(undefined4 *)(unaff_r4 + 0x27c),0xb);
  func_0x0036c174(&stack0x00000004,uVar11,&stack0x00000004);
  *(undefined1 *)(in_stack_00000034 + 0xac) = 1;
  func_0x003721e0(in_stack_00000034,&stack0x00000004);
  func_0x00372170(in_stack_00000034,0);
  func_0x002d5b2c();
  if ((*(uint *)(unaff_r7 + 0x714) & 0x4000) != 0) {
    fVar16 = (float)VectorSignedToFloat((int)*(char *)(iRam004c00a0 + unaff_r4) >> 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 * fRam004c00a4;
    func_0x00372224(&stack0x000000c8,unaff_r4 + 0x148);
    func_0x00371348(fVar16,fVar16,fVar16,&stack0x000000c8,1);
    *(undefined1 *)(*(int *)(unaff_r5 + 0x8ec) + 0xac) = 1;
    func_0x003721e0(*(undefined4 *)(unaff_r5 + 0x8ec),&stack0x000000c8);
    func_0x00372170(*(undefined4 *)(unaff_r5 + 0x8ec),0);
  }
  uVar7 = in_stack_00000124;
  uVar11 = in_stack_00000120;
  if (0 < *(short *)(iRam004c00a8 + unaff_r4)) {
    uVar2 = CONCAT44(in_stack_00000100,in_stack_000000fc);
    uVar3 = CONCAT44(in_stack_00000108,in_stack_00000104);
    in_stack_00000128 = in_stack_0000011c;
    in_stack_00000124 = in_stack_00000118;
    in_stack_00000120 = in_stack_00000114;
    in_stack_0000011c = in_stack_00000110;
    in_stack_00000118 = in_stack_0000010c;
    if ((*(int *)(unaff_r4 + 0x1d0) == 0) ||
       (iVar12 = func_0x0031b9c0(*(int *)(unaff_r4 + 0x1d0),0), iVar12 == 0)) {
      if (*(char *)(unaff_r4 + 0x250) != '\0') {
        return;
      }
    }
    else {
      func_0x0031b99c(*(undefined4 *)(unaff_r4 + 0x1d0));
      *(undefined4 *)(unaff_r4 + 0x1d0) = 0;
      if (*(int *)(unaff_r4 + 0x1cc) != 0) {
        iVar12 = (int)*(short *)(unaff_r4 + 0x224e);
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        func_0x004c60c0(*(undefined4 *)(iRam004c103c + unaff_r4),unaff_r4 + 0x1cc,iVar12 + -1);
      }
      *(undefined1 *)(unaff_r4 + 0x250) = 0;
    }
    uVar10 = in_stack_00000128;
    uVar9 = in_stack_00000124;
    uVar8 = in_stack_00000120;
    in_stack_00000114 = in_stack_0000011c;
    in_stack_00000110 = in_stack_00000118;
    pfVar4 = pfRam004c1040;
    iVar12 = (int)*(short *)(unaff_r4 + 0x224e);
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    in_stack_00000128 = uVar7;
    in_stack_00000124 = uVar11;
    in_stack_00000120 = uVar10;
    in_stack_0000011c = uVar9;
    in_stack_00000118 = uVar8;
    in_stack_000000f8 = (undefined4)unaff_d10;
    in_stack_000000fc = (undefined4)((ulonglong)unaff_d10 >> 0x20);
    in_stack_00000100 = (undefined4)unaff_d11;
    in_stack_00000104 = (undefined4)((ulonglong)unaff_d11 >> 0x20);
    in_stack_00000108 = (undefined4)unaff_d12;
    in_stack_0000010c = (undefined4)((ulonglong)unaff_d12 >> 0x20);
    sVar1 = *(short *)(unaff_r4 + 0xbe);
    fVar16 = fRam004c4ba8;
    if (*(char *)(unaff_r4 + 0x172b) != '\0') {
      fVar16 = fRam004c4bac;
    }
    if (*(int *)(unaff_r4 + 0x284) == 0x198) {
      sVar1 = sVar1 + -0x8000;
    }
    iVar14 = *(int *)(iRam004c4bb0 + 4);
    if (*(char *)(unaff_r4 + 0x172b) != '\0') {
      iVar14 = iVar14 + 2;
    }
    in_stack_000000e8 = uVar2;
    in_stack_000000f0 = uVar3;
    fVar17 = (float)func_0x002cfca0((int)sVar1,iRam004c4bb0,pfRam004c1040,iVar12);
    pfVar15 = (float *)(iRam004c4bb4 + iVar14 * 0xc);
    fVar26 = *pfVar4 + *pfVar15 * fVar17;
    fVar18 = pfVar4[1];
    fVar21 = pfVar15[1];
    fVar19 = (float)func_0x00338f60((int)sVar1);
    fVar5 = fRam004c4bc4;
    fVar17 = fRam004c4bc0;
    fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piRam004c4bb8 + 0x788),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = pfVar4[2] + (pfVar15[2] + fVar23 * fRam004c4bbc) * fVar19;
    if ((*(char *)(unaff_r4 + 0x172b) == '\0') &&
       (((iVar12 = FUN_0036c5bc(), *(short *)(iVar12 + 0x18a) == 0x28 ||
         (iVar12 = FUN_0036c5bc(), *(short *)(iVar12 + 0x18a) == 0x29)) ||
        (iVar12 = FUN_0036c5bc(), *(short *)(iVar12 + 0x18a) == 0x38)))) {
      iVar12 = FUN_0036c5bc();
      iVar14 = FUN_0036c5bc();
      fVar24 = *(float *)(iVar12 + 0x80) - *(float *)(iVar14 + 0x8c);
      fVar23 = *(float *)(iVar12 + 0x88) - *(float *)(iVar14 + 0x94);
      fVar22 = fVar17 / SQRT(fVar24 * fVar24 + fVar5 * fVar5 + fVar23 * fVar23);
      iVar12 = FUN_0036c5bc();
      fVar26 = fVar26 - *(float *)(iVar12 + 0x8c);
      fVar19 = fVar19 - *(float *)(iVar12 + 0x94);
      fVar25 = SQRT(fVar26 * fVar26 + fVar5 * fVar5 + fVar19 * fVar19);
      fVar20 = fVar17 / fVar25;
      iVar12 = FUN_0036c5bc();
      fVar25 = fVar25 * (fVar24 * fVar22 * fVar26 * fVar20 + fVar5 * fVar22 * fVar5 * fVar20 +
                        fVar23 * fVar22 * fVar19 * fVar20);
      fVar26 = *(float *)(iVar12 + 0x8c) + fVar24 * fVar22 * fVar25;
      iVar12 = FUN_0036c5bc();
      fVar19 = *(float *)(iVar12 + 0x94) + fVar23 * fVar22 * fVar25;
    }
    in_stack_000000dc = fVar26;
    in_stack_000000e0 = fVar18 + fVar21 + fVar16;
    in_stack_000000e4 = fVar19;
    iVar12 = func_0x0035bfb4(unaff_r9 + 0x29c,*unaff_r9);
    func_0x0035bf50(iVar12,unaff_r9[0x29c],&stack0x000000dc);
    fVar16 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar12 + 8),(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = VectorFloatToUnsigned(fVar16 * (float)unaff_r9[0xc87],3);
    *(char *)(iVar12 + 8) = (char)uVar11;
    fVar16 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar12 + 9),(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = VectorFloatToUnsigned(fVar16 * (float)unaff_r9[0xc87],3);
    *(char *)(iVar12 + 9) = (char)uVar11;
    fVar16 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar12 + 10),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar11 = VectorFloatToUnsigned(fVar16 * (float)unaff_r9[0xc87],3);
    *(char *)(iVar12 + 10) = (char)uVar11;
    func_0x0035bbe0(iVar12,*(undefined4 *)(unaff_r4 + 0x29d4));
    func_0x00368704(unaff_r9[0x17f2],*(undefined4 *)(unaff_r4 + 0x29d4));
    uVar7 = uRam004c4be0;
    uVar11 = uRam004c4bdc;
    puVar6 = puRam004c4bd8;
    fVar21 = fRam004c4bd4;
    fVar19 = fRam004c4bd0;
    fVar18 = fRam004c4bcc;
    fVar16 = fRam004c4bc8;
    iVar12 = 0;
    do {
      iVar14 = unaff_r4 + iVar12 * 4;
      if (*(int *)(iVar14 + 0x244) != 0) {
        in_stack_000000a0 = 0;
        in_stack_0000009c = 0;
        in_stack_000000a4 = in_stack_000000dc;
        in_stack_00000098 = 0x3f800000;
        in_stack_000000a8 = 0;
        in_stack_000000ac = 0x3f800000;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b4 = in_stack_000000e0;
        in_stack_000000bc = 0;
        in_stack_000000c0 = 0x3f800000;
        in_stack_000000c4 = in_stack_000000e4;
        if (((*puVar6 & 1) == 0) && (iVar13 = func_0x003679b4(puRam004c4bd8), iVar13 != 0)) {
          func_0x0036788c(iRam004c4be4);
        }
        if (*(int *)(iRam004c4be4 + 0xfc) != 0) {
          func_0x0036c174(&stack0x00000098,&stack0x00000098,*(int *)(iRam004c4be4 + 0xfc) + 0x174);
        }
        if (iVar12 == 0) {
          fVar23 = (float)VectorUnsignedToFloat
                                    (unaff_r9[0x16fd] * 1000,(byte)(in_fpscr >> 0x15) & 3);
          func_0x0036c258(fVar23 * fVar16 * fVar18 * fVar19 * fVar21 * fVar19,&stack0x000000d8,
                          &stack0x000000d4);
          fVar23 = fVar17 - in_stack_000000d4;
          in_stack_00000038 = in_stack_000000d4 + fVar23 * fVar5;
          in_stack_0000004c = in_stack_000000d4 + fVar23 * fVar17;
          in_stack_0000003c = fVar23 * fVar5 * fVar17;
          in_stack_00000058 = fVar23 * fVar5 * fVar5;
          in_stack_00000048 = in_stack_0000003c + in_stack_000000d8 * fVar5;
          in_stack_0000003c = in_stack_0000003c - in_stack_000000d8 * fVar5;
          in_stack_00000040 = in_stack_00000058 + in_stack_000000d8 * fVar17;
          in_stack_00000058 = in_stack_00000058 - in_stack_000000d8 * fVar17;
          in_stack_00000050 = fVar23 * fVar17 * fVar5;
          in_stack_0000005c = in_stack_00000050 + in_stack_000000d8 * fVar5;
          in_stack_00000050 = in_stack_00000050 - in_stack_000000d8 * fVar5;
          in_stack_00000044 = fVar5;
          in_stack_00000054 = fVar5;
          in_stack_00000060 = in_stack_00000038;
          in_stack_00000064 = fVar5;
          func_0x0036c174(&stack0x00000098,&stack0x00000098,&stack0x00000038);
        }
        in_stack_0000006c = 0;
        in_stack_00000080 = 0;
        in_stack_00000070 = 0;
        in_stack_00000074 = 0;
        in_stack_00000078 = 0;
        in_stack_00000084 = 0;
        in_stack_00000088 = 0;
        in_stack_0000008c = 0;
        in_stack_00000094 = 0;
        in_stack_00000068 = uVar11;
        in_stack_0000007c = uVar11;
        in_stack_00000090 = uVar11;
        in_stack_000000c8 = uVar11;
        in_stack_000000cc = uVar11;
        in_stack_000000d0 = uVar11;
        func_0x0036c174(&stack0x00000098,&stack0x00000098,&stack0x00000068);
        func_0x003721e0(*(undefined4 *)(iVar14 + 0x244),&stack0x00000098);
        *(undefined1 *)(*(int *)(iVar14 + 0x244) + 0xac) = 1;
        if (((*puVar6 & 1) == 0) && (iVar13 = func_0x003679b4(puRam004c4bd8), iVar13 != 0)) {
          func_0x0036788c(iRam004c4be4);
        }
        func_0x00330b98(uVar7,*(undefined4 *)(iVar14 + 0x244),1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    return;
  }
  return;
}

