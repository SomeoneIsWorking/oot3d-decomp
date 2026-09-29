// OoT3D decomp @ 001eedf0  name=FUN_001eedf0  size=2576

void FUN_001eedf0(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_94 [12];
  undefined1 auStack_64 [32];
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;

  fVar16 = DAT_001ef1d4;
  iVar3 = DAT_001ef1d0;
  if (((*(uint *)(DAT_001ef1d0 + 0x74) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_001ef1d0 + 0x74), pfVar5 = DAT_001ef1e0, fVar12 = DAT_001ef1dc,
     fVar4 = DAT_001ef1d8, iVar7 != 0)) {
    *DAT_001ef1e0 = fVar16;
    pfVar5[1] = fVar4;
    pfVar5[2] = fVar12;
  }
  iVar7 = DAT_001ef1f0;
  fVar4 = DAT_001ef1ec;
  uVar6 = DAT_001ef1e8;
  iVar9 = *(int *)(DAT_001ef1e4 + param_2);
  if (*(char *)(param_1 + 0x5bc) == '\0') goto LAB_001ef0a0;
  *(float *)(param_1 + 0x658) = fVar16;
  uVar11 = VectorSignedToFloat((int)*(short *)(iVar7 + param_1),(byte)(in_fpscr >> 0x15) & 3);
  if (*DAT_001ef1f4 == 0) {
    *(undefined4 *)(param_1 + 0x654) = uVar11;
    FUN_003586ec();
  }
  FUN_00373bec(param_1 + 0x64c);
  *(undefined4 *)(param_1 + 0x6f0) = uVar6;
  FUN_00373bec();
  FUN_003687a8(*(undefined4 *)(param_1 + 0x5e8));
  if ((*(ushort *)(param_1 + 0x1b4) & 2) == 0) {
    fStack_38 = *(float *)(DAT_001ef1fc + 0xc);
    local_44 = *(float *)(param_1 + 0x22c) * DAT_001ef200;
    local_40 = *(float *)(param_1 + 0x230) * DAT_001ef200;
    local_3c = *(float *)(param_1 + 0x234) * DAT_001ef200;
    FUN_0033af6c(param_1,&local_44);
  }
  else {
    local_44 = *DAT_001ef1f8;
    local_40 = DAT_001ef1f8[1];
    local_3c = DAT_001ef1f8[2];
    fStack_38 = DAT_001ef1f8[3];
    FUN_0033af6c(param_1,&local_44);
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),3);
    if (*(int *)(param_1 + 0x1a4) != DAT_001ef204) {
      fVar12 = *(float *)(param_1 + 0x528);
      uVar11 = *(undefined4 *)(param_1 + 0x5e8);
      uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar16) << 0x1f |
               (uint)(fVar12 == fVar16) << 0x1e;
      in_fpscr = uVar10 | (uint)(NAN(fVar12) || NAN(fVar16)) << 0x1c;
      bVar2 = (byte)(uVar10 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        uVar8 = 3;
      }
      else {
        FUN_0037266c(uVar11,2);
        uVar11 = *(undefined4 *)(param_1 + 0x5e8);
        uVar8 = 1;
      }
      FUN_0037266c(uVar11,uVar8);
    }
    if (*(char *)(param_1 + 0x7d8) != '\0') goto LAB_001ef02c;
LAB_001ef05c:
    FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),4);
  }
  else {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),3);
    if (*(int *)(param_1 + 0x1a4) != DAT_001ef204) {
      fVar12 = *(float *)(param_1 + 0x528);
      uVar11 = *(undefined4 *)(param_1 + 0x5e8);
      uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar16) << 0x1f |
               (uint)(fVar12 == fVar16) << 0x1e;
      in_fpscr = uVar10 | (uint)(NAN(fVar12) || NAN(fVar16)) << 0x1c;
      bVar2 = (byte)(uVar10 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        uVar8 = 3;
      }
      else {
        FUN_0037266c(uVar11,1);
        uVar11 = *(undefined4 *)(param_1 + 0x5e8);
        uVar8 = 2;
      }
      FUN_0037266c(uVar11,uVar8);
    }
    if (*(char *)(param_1 + 0x7d8) == '\0') goto LAB_001ef05c;
LAB_001ef02c:
    FUN_0036932c(*(undefined4 *)(param_1 + 0x5e8),6);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),5);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x5e8),4);
  }
  local_94[0] = 0;
  FUN_0035e240(param_1 + 0x5c0,param_1 + 0x148,DAT_001ef20c,DAT_001ef208,param_1);
LAB_001ef0a0:
  fVar12 = DAT_001ef210;
  if (*(short *)(param_1 + 0x1c) == 0) {
    fVar13 = *(float *)(param_1 + 0x200);
    uVar10 = in_fpscr & 0xfffffff;
    uVar1 = uVar10 | (uint)(fVar13 < fVar16) << 0x1f | (uint)(fVar13 == fVar16) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar16)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar13 = *(float *)(param_1 + 0x208);
      uVar1 = uVar10 | (uint)(fVar13 < fVar16) << 0x1f | (uint)(fVar13 == fVar16) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar16)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar15 = *(float *)(param_1 + 0x514) - *(float *)(iVar9 + 0x28);
        fVar14 = *(float *)(param_1 + 0x51c) - *(float *)(iVar9 + 0x30);
        if (((((int)ABS(*(float *)(param_1 + 0x518) - *(float *)(iVar9 + 0x2c)) < DAT_001ef214) &&
             ((*(ushort *)(iVar9 + 0x90) & 1) != 0)) &&
            (in_fpscr = uVar10 | (uint)(*(float *)(param_1 + 0x20c) * DAT_001ef218 <=
                                       SQRT(fVar15 * fVar15 + fVar14 * fVar14)) << 0x1d,
            !SUB41(in_fpscr >> 0x1d,0))) &&
           ((*(char *)(iVar3 + 9) == '\0' && (DAT_001ef214 + 0x2280000 < (int)fVar13)))) {
          *(undefined1 *)(iVar3 + 9) = 1;
          *(undefined2 *)(*(int *)(iVar3 + 0x94) + 0x1d4) = 0x96;
        }
      }
      FUN_003713fc(*(undefined4 *)(param_1 + 0x514),*(float *)(param_1 + 0x518) + fVar12,
                   *(undefined4 *)(param_1 + 0x51c),auStack_64,0);
      uVar11 = *(undefined4 *)(param_1 + 0x20c);
      FUN_00371348(uVar11,uVar11,uVar11,auStack_64,1);
      FUN_00372224(local_94,auStack_64);
      FUN_003735e8(*(undefined4 *)(param_1 + 0x218),local_94,1);
      iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),1,0xe);
      if (iVar7 != 0) {
        fVar12 = *(float *)(param_1 + 0x208);
        *(undefined4 *)(iVar7 + 0x10) = uVar6;
        *(undefined4 *)(iVar7 + 0x14) = uVar6;
        *(undefined4 *)(iVar7 + 0x18) = uVar6;
        *(float *)(iVar7 + 0x1c) = fVar12 * fVar4;
        *(undefined4 *)(iVar7 + 0x30) = 0;
        *(undefined4 *)(iVar7 + 0x38) = 0;
        *(undefined1 *)(iVar7 + 0xc) = 1;
        fVar12 = *(float *)(param_1 + 0x208);
        fVar13 = *(float *)(param_1 + 0x214);
        *(undefined4 *)(iVar7 + 0x20) = uVar6;
        *(undefined4 *)(iVar7 + 0x24) = uVar6;
        *(undefined4 *)(iVar7 + 0x28) = uVar6;
        *(float *)(iVar7 + 0x2c) = fVar12 * fVar13 * fVar4;
        *(undefined4 *)(iVar7 + 0x3c) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 4;
        *(undefined1 *)(iVar7 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
      }
      iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),2,5);
      uVar8 = DAT_001ef5c8;
      uVar11 = DAT_001ef5c4;
      if (iVar7 != 0) {
        fVar12 = *(float *)(param_1 + 0x200) * fVar4;
        *(undefined4 *)(iVar7 + 0x10) = DAT_001ef5c4;
        *(undefined4 *)(iVar7 + 0x14) = uVar8;
        *(undefined4 *)(iVar7 + 0x18) = uVar6;
        *(float *)(iVar7 + 0x1c) = fVar12;
        *(undefined4 *)(iVar7 + 0x30) = 0;
        *(undefined4 *)(iVar7 + 0x38) = 0;
        *(undefined1 *)(iVar7 + 0xc) = 1;
        *(undefined4 *)(iVar7 + 0x20) = uVar11;
        *(undefined4 *)(iVar7 + 0x24) = uVar8;
        *(undefined4 *)(iVar7 + 0x28) = uVar6;
        *(float *)(iVar7 + 0x2c) = fVar12;
        *(undefined4 *)(iVar7 + 0x3c) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 4;
        *(undefined1 *)(iVar7 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
      }
    }
  }
  else {
    FUN_003713fc(*(undefined4 *)(param_1 + 0x514),*(float *)(param_1 + 0x518) + DAT_001ef210,
                 *(undefined4 *)(param_1 + 0x51c),auStack_64,0);
    uVar11 = *(undefined4 *)(param_1 + 0x210);
    FUN_00371348(uVar11,uVar11,uVar11,auStack_64,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),3,8);
    uVar11 = DAT_001ef5cc;
    if (iVar7 != 0) {
      fVar12 = *(float *)(param_1 + 0x208) * fVar4;
      *(undefined4 *)(iVar7 + 0x10) = uVar6;
      *(undefined4 *)(iVar7 + 0x14) = uVar11;
      *(float *)(iVar7 + 0x18) = fVar16;
      *(float *)(iVar7 + 0x1c) = fVar12;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(undefined4 *)(iVar7 + 0x20) = uVar6;
      *(undefined4 *)(iVar7 + 0x24) = uVar11;
      *(float *)(iVar7 + 0x28) = fVar16;
      *(float *)(iVar7 + 0x2c) = fVar12;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
    }
    FUN_00371fac(auStack_64,param_2 + 0x2fc);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),4,9);
    uVar11 = DAT_001ef5d0;
    if (iVar7 != 0) {
      fVar12 = *(float *)(param_1 + 0x204) * fVar4;
      *(undefined4 *)(iVar7 + 0x10) = DAT_001ef5d0;
      *(float *)(iVar7 + 0x14) = fVar16;
      *(float *)(iVar7 + 0x18) = fVar16;
      *(float *)(iVar7 + 0x1c) = fVar12;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(undefined4 *)(iVar7 + 0x20) = uVar11;
      *(float *)(iVar7 + 0x24) = fVar16;
      *(float *)(iVar7 + 0x28) = fVar16;
      *(float *)(iVar7 + 0x2c) = fVar12;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
    }
    uVar11 = *(undefined4 *)(param_1 + 0x20c);
    FUN_00371348(uVar11,uVar11,uVar11,auStack_64,1);
    iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),5,10);
    uVar8 = DAT_001ef5d8;
    uVar11 = DAT_001ef5d4;
    if (iVar7 != 0) {
      fVar12 = *(float *)(param_1 + 0x200) * DAT_001ef5dc;
      *(undefined4 *)(iVar7 + 0x10) = DAT_001ef5d4;
      *(undefined4 *)(iVar7 + 0x14) = uVar8;
      *(float *)(iVar7 + 0x18) = fVar16;
      *(float *)(iVar7 + 0x1c) = fVar12;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(undefined4 *)(iVar7 + 0x20) = uVar11;
      *(undefined4 *)(iVar7 + 0x24) = uVar8;
      *(float *)(iVar7 + 0x28) = fVar16;
      *(float *)(iVar7 + 0x2c) = fVar12;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 4;
      *(undefined1 *)(iVar7 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
    }
  }
  if (*(char *)(param_1 + 0x5bc) != '\0') {
    if (*(int *)(param_1 + 0x1a4) == DAT_001ef204) {
      FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_001ef5e0,
                   *(undefined4 *)(param_1 + 0x30),auStack_64,0);
      uVar11 = *(undefined4 *)(param_1 + 0x220);
      FUN_00371348(uVar11,uVar11,uVar11,auStack_64,1);
      uVar11 = 0x3a;
      if (*(short *)(param_1 + 0x1c) == 0) {
        uVar11 = 0x3b;
      }
      iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),uVar11,2);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x10) = uVar6;
        *(undefined4 *)(iVar7 + 0x14) = uVar6;
        *(undefined4 *)(iVar7 + 0x18) = uVar6;
        *(undefined4 *)(iVar7 + 0x1c) = uVar6;
        *(undefined4 *)(iVar7 + 0x30) = 0;
        *(undefined4 *)(iVar7 + 0x38) = 0;
        *(undefined1 *)(iVar7 + 0xc) = 1;
        *(undefined4 *)(iVar7 + 0x20) = uVar6;
        *(undefined4 *)(iVar7 + 0x24) = uVar6;
        *(undefined4 *)(iVar7 + 0x28) = uVar6;
        *(undefined4 *)(iVar7 + 0x2c) = uVar6;
        *(undefined4 *)(iVar7 + 0x3c) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 4;
        *(undefined1 *)(iVar7 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
      }
    }
    else {
      FUN_00105508(param_1,param_2);
      FUN_003735ac(param_1 + 0x4e4,param_1 + 0x148,DAT_001ef1e0);
      uVar10 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x584) == fVar16) << 0x1e;
      if (!SUB41(uVar10 >> 0x1e,0)) {
        iVar9 = (int)(short)(int)(*(float *)(param_1 + 0x550) * DAT_001ef86c);
        FUN_003713fc(*(undefined4 *)(param_1 + 0x4e4),*(undefined4 *)(param_1 + 0x4e8),
                     *(undefined4 *)(param_1 + 0x4ec),auStack_64,0);
        FUN_003735e8(*(undefined4 *)(param_1 + 0x574),auStack_64,1);
        FUN_00369014(*(undefined4 *)(param_1 + 0x570),auStack_64,1);
        FUN_00371234(*(undefined4 *)(param_1 + 0x578),auStack_64,1);
        fVar16 = DAT_001ef870;
        FUN_00371348(*(undefined4 *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x550),
                     *(float *)(param_1 + 0x584) * DAT_001ef870 * DAT_001ef874,auStack_64,1);
        iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),0x10,7);
        uVar11 = DAT_001ef878;
        if (iVar7 != 0) {
          if (*(short *)(param_1 + 0x1c) == 1) {
            fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
            uVar8 = DAT_001ef878;
          }
          else {
            fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
            uVar8 = uVar6;
          }
          *(undefined4 *)(iVar7 + 0x10) = uVar6;
          *(undefined4 *)(iVar7 + 0x14) = uVar6;
          *(undefined4 *)(iVar7 + 0x18) = uVar8;
          *(float *)(iVar7 + 0x1c) = fVar12 * fVar4;
          *(undefined4 *)(iVar7 + 0x30) = 0;
          *(undefined4 *)(iVar7 + 0x38) = 0;
          *(undefined1 *)(iVar7 + 0xc) = 1;
          *(undefined4 *)(iVar7 + 0x20) = uVar6;
          *(undefined4 *)(iVar7 + 0x24) = uVar6;
          *(undefined4 *)(iVar7 + 0x28) = uVar8;
          *(float *)(iVar7 + 0x2c) = fVar12 * fVar4;
          *(undefined4 *)(iVar7 + 0x3c) = 0;
          *(undefined4 *)(iVar7 + 0x34) = 4;
          *(undefined1 *)(iVar7 + 0xd) = 1;
          FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
        }
        if (DAT_001ef214 < *(int *)(param_1 + 0x5a0)) {
          FUN_003713fc(*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568),
                       *(undefined4 *)(param_1 + 0x56c),auStack_64,0);
          FUN_003735e8(*(undefined4 *)(param_1 + 0x598),auStack_64,1);
          FUN_00369014(*(undefined4 *)(param_1 + 0x594),auStack_64,1);
          FUN_00371234(*(undefined4 *)(param_1 + 0x578),auStack_64,1);
          FUN_00371348(*(undefined4 *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x550),
                       *(float *)(param_1 + 0x5a0) * fVar16 * DAT_001ef87c,auStack_64,1);
          iVar7 = FUN_00371178(*(undefined4 *)(iVar3 + 0x20),0x11,7);
          if (iVar7 != 0) {
            if (*(short *)(param_1 + 0x1c) == 1) {
              fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
            }
            else {
              fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
              uVar11 = uVar6;
            }
            *(undefined4 *)(iVar7 + 0x10) = uVar6;
            *(undefined4 *)(iVar7 + 0x14) = uVar6;
            *(undefined4 *)(iVar7 + 0x18) = uVar11;
            *(float *)(iVar7 + 0x1c) = fVar16 * fVar4;
            *(undefined4 *)(iVar7 + 0x30) = 0;
            *(undefined4 *)(iVar7 + 0x38) = 0;
            *(undefined1 *)(iVar7 + 0xc) = 1;
            *(undefined4 *)(iVar7 + 0x20) = uVar6;
            *(undefined4 *)(iVar7 + 0x24) = uVar6;
            *(undefined4 *)(iVar7 + 0x28) = uVar11;
            *(float *)(iVar7 + 0x2c) = fVar16 * fVar4;
            *(undefined4 *)(iVar7 + 0x3c) = 0;
            *(undefined4 *)(iVar7 + 0x34) = 4;
            *(undefined1 *)(iVar7 + 0xd) = 1;
            FUN_003710bc(*(undefined4 *)(iVar3 + 0x20),iVar7,auStack_64);
            return;
          }
        }
      }
    }
  }
  return;
}
