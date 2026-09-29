// OoT3D decomp @ 00186974  name=FUN_00186974  size=2572

void FUN_00186974(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float extraout_s0;
  undefined4 uVar17;
  float fVar18;
  int local_a0;
  undefined4 local_9c;
  undefined1 auStack_70 [48];

  fVar18 = DAT_00186c74;
  iVar2 = DAT_00186c70;
  if (((*(uint *)(DAT_00186c70 + 0x88) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_00186c70 + 0x88), pfVar4 = DAT_00186c80, fVar16 = DAT_00186c7c,
     fVar3 = DAT_00186c78, iVar7 != 0)) {
    *DAT_00186c80 = fVar18;
    pfVar4[1] = fVar3;
    pfVar4[2] = fVar16;
  }
  iVar7 = DAT_00186c88;
  fVar3 = DAT_00186c84;
  if (*(char *)(param_1 + 0x5bc) != '\0') {
    *(float *)(param_1 + 0x658) = fVar18;
    uVar14 = VectorSignedToFloat((int)*(short *)(iVar7 + param_1),(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_00186c8c == 0) {
      *(undefined4 *)(param_1 + 0x654) = uVar14;
      FUN_003586ec(param_1 + 0x64c);
    }
    FUN_00373bec(param_1 + 0x64c);
    if (*(char *)(param_1 + 0x7d8) == '\0') {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),0xc);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),0xd);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),3);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),4);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),5);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),6);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),7);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),8);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),9);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),10);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),0xb);
    }
    else {
      FUN_0037266c();
      FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),0xd);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),3);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),4);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),5);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),6);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),7);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),8);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),9);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),10);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),0xb);
    }
    *(float *)(param_1 + 0x6f0) = fVar3;
    FUN_00373bec();
    local_9c = 0;
    local_a0 = param_1;
    FUN_0035e240(param_1 + 0x5c0,param_1 + 0x148,DAT_00186c94,DAT_00186c90);
    FUN_003735ac(param_1 + 0x4e4,param_1 + 0x148,DAT_00186c80);
  }
  FUN_0011503c(param_1,param_2);
  uVar17 = DAT_00186ca0;
  uVar14 = DAT_00186c9c;
  uVar10 = *(undefined4 *)(DAT_00186c98 + param_2);
  uVar9 = (uint)(*(byte *)(iVar2 + 4) | *(byte *)(iVar2 + 5));
  if (uVar9 == 1) {
    local_a0 = DAT_00186ca8;
    local_9c = DAT_00186ca4;
    FUN_0037547c(DAT_00186cac,0,4,DAT_00186ca8);
  }
  else {
    uVar8 = DAT_00186cb0;
    if ((uVar9 == 2) || (uVar8 = DAT_00186cb4, uVar9 == 3)) {
      local_9c = DAT_00186ca4;
      local_a0 = DAT_00186ca8;
      FUN_0037547c(uVar8,0,4,DAT_00186ca8);
    }
    else {
      if (uVar9 == 0) {
        *(float *)(iVar2 + 0x98) = fVar18;
        goto LAB_00186ce8;
      }
      if (3 < uVar9) {
        FUN_00373500(fVar18,DAT_00186cb8);
        uVar9 = 1;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar2 + 0x98) == fVar18) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          *(undefined1 *)(iVar2 + 5) = 0;
          *(undefined1 *)(iVar2 + 4) = 0;
        }
        goto LAB_00186ce8;
      }
    }
  }
  FUN_00373500(uVar17,DAT_00186cb8);
  if (uVar9 == 3) {
    uVar9 = 9;
  }
LAB_00186ce8:
  iVar7 = FUN_00351388(param_2);
  fVar5 = DAT_0018707c;
  uVar8 = DAT_00187078;
  fVar16 = DAT_00187074;
  if (iVar7 != 0 && uVar9 != 0) {
    FUN_00359450(uVar10,auStack_70);
    FUN_00369014(auStack_70,1);
    fVar15 = (float)FUN_002cfca0((int)((int)*(short *)(param_1 + 0x1a8) * uVar9 * DAT_00187080) >>
                                 0x10);
    fVar16 = (float)VectorSignedToFloat((int)(short)(int)(fVar15 * *(float *)(iVar2 + 0x98) * fVar16
                                                         + *(float *)(iVar2 + 0x98) * fVar16),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(char *)(iVar2 + 4) == '\0') {
      FUN_00349490(fVar3,fVar16 * fVar5,uVar10,1);
    }
    else {
      FUN_00349490(fVar3,fVar16 * fVar5,uVar10,0);
    }
  }
  if (*(char *)(iVar2 + 0xb) == '\0') {
    if (0 < *(short *)(iVar2 + 0x14)) {
      uVar14 = DAT_00187090;
    }
    FUN_00373500(fVar18,fVar3,uVar14,DAT_0018708c);
  }
  else {
    *(char *)(iVar2 + 0xb) = *(char *)(iVar2 + 0xb) + -1;
    uVar14 = DAT_00187084;
    if (0 < *(short *)(iVar2 + 0x14)) {
      uVar14 = DAT_00187088;
    }
    FUN_00373500(uVar17,fVar3,uVar14,DAT_0018708c);
  }
  iVar7 = FUN_00351388(param_2);
  bVar12 = iVar7 < 0;
  bVar13 = iVar7 == 0;
  bVar11 = false;
  fVar16 = extraout_s0;
  if (!bVar13) {
    fVar16 = *(float *)(iVar2 + 0x9c);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar18) << 0x1f |
               (uint)(fVar16 == fVar18) << 0x1e | (uint)(NAN(fVar16) || NAN(fVar18)) << 0x1c;
    bVar1 = (byte)(in_fpscr >> 0x18);
    bVar12 = (bool)(bVar1 >> 7);
    bVar13 = (bool)(bVar1 >> 6 & 1);
    bVar11 = (bool)(bVar1 >> 4 & 1);
  }
  if (!bVar13 && bVar12 == bVar11) {
    fVar15 = fVar3;
    if (0 < *(short *)(iVar2 + 0x14)) {
      fVar15 = DAT_00187094;
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      FUN_00349490(fVar15,fVar16 * fVar5,uVar10,1);
    }
    else {
      FUN_00349490(fVar15,fVar16 * fVar5,uVar10,0);
    }
    FUN_00359450(uVar10,auStack_70);
    FUN_00369014(auStack_70,1);
    FUN_00371348(fVar15,fVar15,fVar15,auStack_70,1);
    fVar16 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar2 + 0x9c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(char *)(iVar2 + 4) == '\0') {
      iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),9,0x12);
    }
    else {
      iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),8,0x12);
    }
    if (iVar7 != 0) {
      *(float *)(iVar7 + 0x20) = fVar18;
      *(float *)(iVar7 + 0x24) = fVar18;
      *(float *)(iVar7 + 0x28) = fVar18;
      *(float *)(iVar7 + 0x2c) = fVar16 * fVar5;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
  }
  uVar14 = DAT_0018709c;
  if (fVar18 < *(float *)(param_1 + 0x530)) {
    FUN_003713fc(fVar18,DAT_0018709c,DAT_00187098,auStack_70,0);
    uVar17 = *(undefined4 *)(param_1 + 0x538);
    FUN_00371348(uVar17,uVar17,uVar17,auStack_70,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x12,0xf);
    if (iVar7 != 0) {
      fVar16 = *(float *)(param_1 + 0x530) * fVar5;
      *(float *)(iVar7 + 0x10) = fVar18;
      *(float *)(iVar7 + 0x14) = fVar18;
      *(float *)(iVar7 + 0x18) = fVar18;
      *(float *)(iVar7 + 0x1c) = fVar16;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(float *)(iVar7 + 0x20) = fVar18;
      *(float *)(iVar7 + 0x24) = fVar18;
      *(float *)(iVar7 + 0x28) = fVar18;
      *(float *)(iVar7 + 0x2c) = fVar16;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
    uVar17 = DAT_001870a0;
    FUN_003713fc(fVar18,DAT_001870a0,fVar18,auStack_70,1);
    FUN_00369014(uVar8,auStack_70,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x13,0x10);
    uVar6 = DAT_001870a8;
    uVar10 = DAT_001870a4;
    if (iVar7 != 0) {
      fVar16 = *(float *)(param_1 + 0x530) * fVar5;
      *(undefined4 *)(iVar7 + 0x10) = DAT_001870a8;
      *(undefined4 *)(iVar7 + 0x14) = uVar10;
      *(float *)(iVar7 + 0x18) = fVar3;
      *(float *)(iVar7 + 0x1c) = fVar16;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(undefined4 *)(iVar7 + 0x20) = uVar6;
      *(undefined4 *)(iVar7 + 0x24) = uVar10;
      *(float *)(iVar7 + 0x28) = fVar3;
      *(float *)(iVar7 + 0x2c) = fVar16;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
    FUN_003713fc(fVar18,uVar14,DAT_00187408,auStack_70,0);
    uVar14 = *(undefined4 *)(param_1 + 0x538);
    FUN_00371348(uVar14,uVar14,uVar14,auStack_70,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x23,0xf);
    if (iVar7 != 0) {
      fVar16 = *(float *)(param_1 + 0x530) * fVar5;
      *(float *)(iVar7 + 0x10) = fVar18;
      *(float *)(iVar7 + 0x14) = fVar18;
      *(float *)(iVar7 + 0x18) = fVar18;
      *(float *)(iVar7 + 0x1c) = fVar16;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(float *)(iVar7 + 0x20) = fVar18;
      *(float *)(iVar7 + 0x24) = fVar18;
      *(float *)(iVar7 + 0x28) = fVar18;
      *(float *)(iVar7 + 0x2c) = fVar16;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
    FUN_003713fc(fVar18,uVar17,fVar18,auStack_70,1);
    FUN_00369014(uVar8,auStack_70,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x24,0x11);
    if (iVar7 != 0) {
      fVar16 = *(float *)(param_1 + 0x530) * fVar5;
      *(float *)(iVar7 + 0x10) = fVar3;
      *(undefined4 *)(iVar7 + 0x14) = uVar10;
      *(float *)(iVar7 + 0x18) = fVar18;
      *(float *)(iVar7 + 0x1c) = fVar16;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(float *)(iVar7 + 0x20) = fVar3;
      *(undefined4 *)(iVar7 + 0x24) = uVar10;
      *(float *)(iVar7 + 0x28) = fVar18;
      *(float *)(iVar7 + 0x2c) = fVar16;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
  }
  if (fVar18 < *(float *)(param_1 + 0x224)) {
    FUN_003713fc(fVar18,DAT_0018740c,fVar18,auStack_70,0);
    FUN_00371348(DAT_00187410,DAT_00187410,DAT_00187410,auStack_70,1);
    FUN_00372224(&local_a0,auStack_70);
    uVar14 = *(undefined4 *)(param_1 + 0x228);
    FUN_00371348(uVar14,uVar14,uVar14,&local_a0,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x37,0x13);
    if (iVar7 != 0) {
      *(float *)(iVar7 + 0x10) = fVar3;
      *(float *)(iVar7 + 0x14) = fVar3;
      *(float *)(iVar7 + 0x18) = fVar3;
      *(float *)(iVar7 + 0x1c) = fVar3;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(float *)(iVar7 + 0x20) = fVar3;
      *(float *)(iVar7 + 0x24) = fVar3;
      *(float *)(iVar7 + 0x28) = fVar3;
      *(float *)(iVar7 + 0x2c) = fVar3;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,&local_a0);
    }
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x38,0xb);
    if (iVar7 != 0) {
      fVar18 = *(float *)(param_1 + 0x224) * DAT_00187414;
      *(float *)(iVar7 + 0x10) = fVar3;
      *(float *)(iVar7 + 0x14) = fVar3;
      *(float *)(iVar7 + 0x18) = fVar3;
      *(float *)(iVar7 + 0x1c) = fVar18;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(float *)(iVar7 + 0x20) = fVar3;
      *(float *)(iVar7 + 0x24) = fVar3;
      *(float *)(iVar7 + 0x28) = fVar3;
      *(float *)(iVar7 + 0x2c) = fVar18;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,&local_a0);
    }
    fVar18 = *(float *)(param_1 + 0x224) * DAT_00187418;
    if (0x3f800000 < (int)fVar18) {
      fVar18 = fVar3;
    }
    FUN_00371348(fVar18,fVar3,fVar18,auStack_70,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0x39,0xc);
    if (iVar7 != 0) {
      fVar18 = *(float *)(param_1 + 0x224);
      *(float *)(iVar7 + 0x20) = fVar3;
      *(float *)(iVar7 + 0x24) = fVar3;
      *(float *)(iVar7 + 0x28) = fVar3;
      *(float *)(iVar7 + 0x2c) = fVar18 * fVar5;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar2 + 0x20),iVar7,auStack_70);
    }
  }
  return;
}
