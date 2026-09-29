// OoT3D decomp @ 002a6388  name=FUN_002a6388  size=1400

void FUN_002a6388(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int *piVar10;
  short sVar11;
  char *pcVar12;
  short sVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;

  fVar4 = DAT_002a66f4;
  fVar22 = DAT_002a66f0;
  fVar3 = DAT_002a66ec;
  uVar2 = DAT_002a66e0;
  sVar13 = 0;
  pcVar12 = (char *)(param_1 + 0x6d4);
  do {
    if (*pcVar12 != '\0') {
      pcVar12[0x34] = pcVar12[0x34] + '\x01';
      *(float *)(pcVar12 + 4) = *(float *)(pcVar12 + 4) + *(float *)(pcVar12 + 0x10);
      *(float *)(pcVar12 + 8) = *(float *)(pcVar12 + 8) + *(float *)(pcVar12 + 0x14);
      *(float *)(pcVar12 + 0xc) = *(float *)(pcVar12 + 0xc) + *(float *)(pcVar12 + 0x18);
      *(float *)(pcVar12 + 0x10) = *(float *)(pcVar12 + 0x10) + *(float *)(pcVar12 + 0x1c);
      *(float *)(pcVar12 + 0x14) = *(float *)(pcVar12 + 0x14) + *(float *)(pcVar12 + 0x20);
      *(float *)(pcVar12 + 0x18) = *(float *)(pcVar12 + 0x18) + *(float *)(pcVar12 + 0x24);
      if (*pcVar12 == '\x01') {
        *(short *)(pcVar12 + 0x2a) = *(short *)(pcVar12 + 0x2a) + 1;
        FUN_00373500(pcVar12 + 0x10);
        FUN_00373500(pcVar12 + 0x18);
        uVar5 = DAT_002a66f8;
        if (0xbf000000 < *(uint *)(pcVar12 + 0x14)) {
          *(float *)(pcVar12 + 0x14) = fVar4;
        }
        fVar14 = (float)FUN_002cfca0((int)(short)(*(short *)(pcVar12 + 0x2a) * (short)uVar5));
        *(float *)(pcVar12 + 0x30) = fVar14 * fVar3 * fVar22;
        if (*(short *)(pcVar12 + 0x28) < (short)(ushort)(byte)pcVar12[0x34]) {
          *pcVar12 = '\0';
        }
      }
    }
    uVar5 = DAT_002a66fc;
    sVar13 = sVar13 + 1;
    pcVar12 = pcVar12 + 0x3c;
  } while (sVar13 < 5);
  *(short *)(param_1 + 0x60c) = *(short *)(param_1 + 0x60c) + 1;
  if (*(short *)(param_1 + 0x5d4) != 0) {
    *(short *)(param_1 + 0x5d4) = *(short *)(param_1 + 0x5d4) + -1;
  }
  if (*(short *)(param_1 + 0x5d8) != 0) {
    *(short *)(param_1 + 0x5d8) = *(short *)(param_1 + 0x5d8) + -1;
  }
  if (*(short *)(param_1 + 0x5da) != 0) {
    *(short *)(param_1 + 0x5da) = *(short *)(param_1 + 0x5da) + -1;
  }
  if (*(short *)(param_1 + 0x5dc) != 0) {
    *(short *)(param_1 + 0x5dc) = *(short *)(param_1 + 0x5dc) + -1;
  }
  if (*(short *)(param_1 + 0x5de) != 0) {
    *(short *)(param_1 + 0x5de) = *(short *)(param_1 + 0x5de) + -1;
  }
  if (*(short *)(param_1 + 0x5e2) != 0) {
    *(short *)(param_1 + 0x5e2) = *(short *)(param_1 + 0x5e2) + -1;
  }
  if (*(short *)(param_1 + 0x5e0) != 0) {
    *(short *)(param_1 + 0x5e0) = *(short *)(param_1 + 0x5e0) + -1;
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  (**(code **)(param_1 + 0x5d0))(param_1,param_2);
  FUN_00376864(param_1);
  fVar3 = DAT_002a6704;
  FUN_00376340(DAT_002a6704,DAT_002a6704,DAT_002a6700,param_2,param_1,0x1d);
  uVar9 = DAT_002a6720;
  fVar8 = DAT_002a671c;
  fVar14 = DAT_002a6718;
  uVar7 = DAT_002a6714;
  fVar22 = DAT_002a6710;
  uVar6 = DAT_002a670c;
  uVar5 = DAT_002a6708;
  if (*(short *)(param_1 + 0x620) != 0) {
    sVar13 = 0;
    do {
      fVar15 = (float)FUN_003738a8(uVar5);
      fVar23 = *(float *)(param_1 + 0x28);
      fVar16 = (float)FUN_003738a8(uVar5);
      fVar24 = *(float *)(param_1 + 0x2c);
      fVar17 = (float)FUN_003738a8(uVar5);
      fVar25 = *(float *)(param_1 + 0x30);
      uVar18 = FUN_003738a8(uVar6);
      fVar19 = (float)FUN_00371e50(fVar22);
      uVar20 = FUN_003738a8(uVar6);
      fVar21 = (float)FUN_00371e50(fVar14);
      sVar11 = 0;
      pcVar12 = (char *)(param_1 + 0x6d4);
      do {
        if (*pcVar12 == '\0') {
          *pcVar12 = '\x01';
          *(float *)(pcVar12 + 4) = fVar15 + fVar23;
          *(float *)(pcVar12 + 8) = fVar16 + fVar3 + fVar24;
          *(float *)(pcVar12 + 0xc) = fVar17 + fVar25;
          *(undefined4 *)(pcVar12 + 0x10) = uVar18;
          *(float *)(pcVar12 + 0x14) = fVar22 + fVar19 * fVar4;
          *(undefined4 *)(pcVar12 + 0x18) = uVar20;
          *(undefined4 *)(pcVar12 + 0x1c) = uVar2;
          *(undefined4 *)(pcVar12 + 0x20) = uVar7;
          *(undefined4 *)(pcVar12 + 0x24) = uVar2;
          pcVar12[0x34] = '\0';
          *(float *)(pcVar12 + 0x2c) = (fVar21 + fVar14) * fVar8;
          fVar15 = (float)FUN_00371e50(fVar3);
          *(short *)(pcVar12 + 0x28) = (short)(int)fVar15 + 0x28;
          fVar15 = (float)FUN_00371e50(uVar9);
          *(short *)(pcVar12 + 0x2a) = (short)(int)fVar15;
          break;
        }
        sVar11 = sVar11 + 1;
        pcVar12 = pcVar12 + 0x3c;
      } while (sVar11 < 5);
      sVar13 = sVar13 + 1;
    } while (sVar13 < 0x14);
    *(undefined2 *)(param_1 + 0x620) = 0;
  }
  uVar2 = DAT_002a694c;
  fVar3 = DAT_002a6948;
  piVar10 = DAT_002a6944;
  if ((*(byte *)(param_1 + 0x68d) & 2) != 0) {
    *(byte *)(param_1 + 0x68d) = *(byte *)(param_1 + 0x68d) & 0xfd;
    if (*(short *)(param_1 + 0x61e) == 0) {
      if (*(short *)(param_1 + 0x61c) == 0) {
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(*piVar10 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5e2) = (short)(int)(fVar3 / fVar22 + fVar4);
        FUN_00375bcc(param_1,uVar2);
        uVar5 = DAT_002a6964;
        *(undefined4 *)(param_1 + 0x70) = DAT_002a6960;
        *(undefined2 *)(param_1 + 0x61c) = 1;
        *(undefined2 *)(param_1 + 0x620) = 1;
        *(undefined4 *)(param_1 + 0x5d0) = uVar5;
      }
    }
    else if (*(short *)(param_1 + 0x61e) == 1) {
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(*piVar10 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5e2) = (short)(int)(fVar3 / fVar22 + fVar4);
      *(undefined1 *)(param_1 + 0x678) = 1;
      FUN_00375bcc(param_1,uVar2);
      *(undefined2 *)(param_1 + 0x620) = 1;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(*piVar10 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar1 = (undefined2)(int)(DAT_002a6950 / fVar22 + fVar4);
      *(undefined2 *)(param_1 + 0x5e0) = uVar1;
      *(undefined2 *)(param_1 + 0x5de) = uVar1;
    }
  }
  uVar5 = DAT_002a695c;
  if (*(short *)(param_1 + 0x5e2) == 0) {
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(*piVar10 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(int *)(param_1 + 0x5d0) == DAT_002a6954) {
      *(short *)(param_1 + 0x5e2) = (short)(int)(DAT_002a6958 / fVar22 + fVar4);
      FUN_00375bcc(param_1,uVar5);
    }
    else {
      *(short *)(param_1 + 0x5e2) = (short)(int)(fVar3 / fVar22 + fVar4);
      FUN_00375bcc(param_1,uVar2);
    }
  }
  if (*(short *)(param_1 + 0x61e) == 0) {
    if (*(char *)(param_2 + 0x5c74) == '\0') {
      return;
    }
  }
  else if (*(short *)(param_1 + 0x61e) != 1) {
    return;
  }
  FUN_0037632c(param_1);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x67c);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x67c);
  return;
}
