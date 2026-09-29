// OoT3D decomp @ 001c8db4  name=FUN_001c8db4  size=5356

void FUN_001c8db4(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  short sVar19;
  int iVar20;
  bool bVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;

  local_7c = 0;
  iVar20 = *(int *)(param_2 + 0x20ac);
  if ((int)*(short *)(param_1 + 0x7de) - 0xddU < 0x199) {
    uStack_c4 = DAT_001c923c;
    FUN_0037547c(DAT_001c9244,0,4,DAT_001c9240,DAT_001c9240);
  }
  if (*(short *)(param_1 + 0x7de) == 0xb4) {
    uStack_c4 = DAT_001c923c;
    FUN_0037547c(DAT_001c924c,DAT_001c9248,4,DAT_001c9240,DAT_001c9240);
    uStack_c4 = DAT_001c923c;
    FUN_0037547c(DAT_001c9250,DAT_001c9248,4,DAT_001c9240,DAT_001c9240);
    FUN_0036ec40(0,DAT_001c9254);
  }
  iVar17 = DAT_001c928c;
  uVar16 = DAT_001c9258;
  *(short *)(param_1 + 0x7de) = *(short *)(param_1 + 0x7de) + 1;
  uVar11 = DAT_001c92b0;
  uVar10 = DAT_001c92ac;
  fVar26 = DAT_001c9294;
  fVar24 = DAT_001c9290;
  fVar9 = DAT_001c9288;
  uVar8 = DAT_001c9284;
  uVar7 = DAT_001c9280;
  fVar25 = DAT_001c927c;
  uVar6 = DAT_001c9278;
  uVar5 = DAT_001c9274;
  uVar4 = DAT_001c9270;
  fVar22 = DAT_001c926c;
  uVar3 = DAT_001c9268;
  uVar18 = DAT_001c9264;
  fVar23 = DAT_001c9260;
  fVar2 = DAT_001c925c;
  sVar19 = *(short *)(param_1 + 0x7da);
  local_68 = param_2 + 0x2298;
  local_6c = param_1 + 0x87c;
  local_70 = param_2 + 0x3258;
  local_74 = param_1 + 0x7e8;
  local_78 = (undefined4 *)(param_1 + 0x7ec);
  if (sVar19 == 4) {
    local_7c = 1;
    FUN_003731e0(*(int *)(iVar17 + 0x90) + 0x5c0);
    iVar20 = *(int *)(iVar17 + 0x90);
    *(float *)(param_1 + 0x868) = *(float *)(iVar20 + 0x2c) + fVar25;
    FUN_00373500(DAT_001c9684,uVar6,*(undefined4 *)(param_1 + 0x6c),iVar20 + 0x2c);
    FUN_00373500(DAT_001c9a00,uVar7,DAT_001c99fc,param_1 + 0x6c);
    FUN_00373500(uVar7,uVar7,uVar4,local_6c);
    uVar1 = *(ushort *)(param_1 + 0x1a8);
    if ((short)uVar1 < 0x2d) {
      if ((uVar1 & 7) == 0) {
        FUN_00375bcc(*(undefined4 *)(iVar17 + 0x90),DAT_001c9e3c);
      }
      uVar18 = DAT_001c9e44;
      uVar16 = DAT_001c9e40;
      *(short *)(*(int *)(iVar17 + 0x90) + 0xbe) =
           *(short *)(*(int *)(iVar17 + 0x90) + 0xbe) + (short)(int)*(float *)(param_1 + 0x890);
      FUN_00373500(uVar18,uVar7,uVar16,param_1 + 0x890);
      iVar20 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar7,*(int *)(iVar17 + 0x90) + 0x5c0);
      if (iVar20 != 0) {
        FUN_00370350(fVar9,*(int *)(iVar17 + 0x90) + 0x5c0,0xb);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001c9a30;
      }
    }
    else {
      if ((short)uVar1 < 0x44) {
        *(undefined1 *)(param_2 + 0x3236) = 0;
        *(undefined1 *)(param_2 + 0x3235) = 2;
        *(undefined4 *)(param_2 + 0x3258) = uVar7;
      }
      else {
        FUN_0036fc20(uVar7,uVar6,local_70);
      }
      fVar23 = DAT_001c9a0c;
      uVar3 = DAT_001c9a08;
      uVar16 = DAT_001c9a04;
      if (*(short *)(param_1 + 0x1a8) == 0x2d) {
        sVar19 = 0;
        do {
          local_a0 = (float)FUN_003738a8(uVar16);
          local_a0 = local_a0 + *(float *)(*(int *)(iVar17 + 0x90) + 0x28);
          local_9c = (float)FUN_003738a8(uVar16);
          local_9c = local_9c + *(float *)(*(int *)(iVar17 + 0x90) + 0x2c);
          local_98 = (float)FUN_003738a8(uVar16);
          local_98 = local_98 + *(float *)(*(int *)(iVar17 + 0x90) + 0x30);
          local_ac = FUN_003738a8(fVar25);
          local_a8 = FUN_003738a8(fVar25);
          local_a4 = FUN_003738a8(fVar25);
          fVar24 = (float)FUN_00371e50(uVar3);
          FUN_00368498(fVar24 + fVar23,param_2,&local_a0,&local_ac,DAT_001c9a10,1);
          sVar19 = sVar19 + 1;
        } while (sVar19 < 0x32);
        FUN_00375bcc(*(undefined4 *)(iVar17 + 0x90),DAT_001c9a14);
        *(float *)(param_2 + 0x3258) = fVar9;
      }
      iVar20 = (int)*(short *)(param_1 + 0x1a8);
      if (iVar20 < 0x35) {
        *(short *)(*(int *)(iVar17 + 0x90) + 0xbe) =
             *(short *)(*(int *)(iVar17 + 0x90) + 0xbe) + (short)(int)*(float *)(param_1 + 0x890);
      }
      else {
        if (iVar20 < 0x4b) {
          fVar23 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
          fVar23 = (float)FUN_002cfca0((int)(short)((short)(int)(DAT_001c9a20 +
                                                                fVar23 * DAT_001c9a18 * DAT_001c9a1c
                                                                ) * 0x4200));
          FUN_00373500(DAT_001c9a24 + fVar23 * fVar25 * fVar2,uVar7,DAT_001c9a28,
                       *(int *)(iVar17 + 0x90) + 0x54);
        }
        else {
          if (iVar20 == 0x4b) {
            FUN_00374a58(DAT_001c9a2c,*(int *)(iVar17 + 0x90) + 0x5c0,0xe);
            uVar16 = FUN_0036ae14(param_1 + 0x5c0,0xe);
            uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x1fc) = uVar16;
          }
          if (*(short *)(param_1 + 0x1a8) == 0x5a) {
            FUN_00375bcc(*(undefined4 *)(iVar17 + 0x90),DAT_001c924c);
          }
          iVar20 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar7,
                                *(int *)(iVar17 + 0x90) + 0x5c0);
          if (iVar20 != 0) {
            FUN_00370350(fVar9,*(int *)(iVar17 + 0x90) + 0x5c0,0xb);
            *(undefined4 *)(param_1 + 0x1fc) = DAT_001c9a30;
          }
          FUN_00373500(DAT_001c9a24,uVar6,DAT_001c9a28,*(int *)(iVar17 + 0x90) + 0x54);
        }
        FUN_0037572c(*(undefined4 *)(*(int *)(iVar17 + 0x90) + 0x54));
        iVar20 = *(int *)(iVar17 + 0x90);
        *(undefined2 *)(iVar20 + 0xbe) = 0x8000;
        *(undefined1 *)(iVar20 + 0x7d8) = 1;
        if (*(short *)(param_1 + 0x1a8) == 0x96) {
          *(undefined2 *)(param_1 + 0x7da) = 10;
          *(float *)(param_1 + 0x890) = fVar9;
          *(undefined2 *)(param_1 + 0x1a8) = 0;
          iVar20 = *(int *)(iVar17 + 0x8c);
          *(undefined1 *)(iVar20 + 0x5bc) = 1;
          FUN_00370350(fVar9,iVar20 + 0x5c0,5);
          fVar2 = DAT_001c9a38;
          uVar3 = DAT_001c9a34;
          iVar20 = *(int *)(iVar17 + 0x8c);
          *(float *)(iVar20 + 0x28) = fVar9;
          *(undefined4 *)(iVar20 + 0x2c) = uVar18;
          *(undefined4 *)(iVar20 + 0x30) = uVar3;
          *(undefined2 *)(iVar20 + 0x36) = 0;
          *(undefined2 *)(iVar20 + 0xbe) = 0;
          *(float *)(param_1 + 0x7e0) = fVar2;
          uVar16 = DAT_001c9a3c;
          *(float *)(param_1 + 0x7e4) = fVar22;
          *(undefined4 *)(param_1 + 0x7e8) = uVar16;
          uVar16 = DAT_001c968c;
          *(float *)(param_1 + 0x7ec) = fVar9;
          *(undefined4 *)(param_1 + 0x7f0) = uVar16;
          *(undefined4 *)(param_1 + 0x7f4) = uVar3;
          uVar16 = DAT_001c96c4;
          *(undefined2 *)(param_1 + 0x1a8) = 0;
          FUN_0037572c(uVar16);
        }
      }
    }
  }
  else if (sVar19 < 5) {
    if (sVar19 == 0) {
      *(undefined2 *)(param_1 + 0x7de) = 0;
      if ((int)(*(float *)(iVar20 + 0x28) * *(float *)(iVar20 + 0x28) +
               *(float *)(iVar20 + 0x30) * *(float *)(iVar20 + 0x30)) < DAT_001c9670) {
        *(float *)(iVar20 + 0x30) = fVar9;
        *(float *)(iVar20 + 0x28) = fVar9;
        *(undefined2 *)(param_1 + 0x7da) = 1;
        FUN_00367494(param_2,local_68);
        FUN_0036e980(param_2,param_1,0x39);
        uVar15 = FUN_00367d74(param_2);
        *(undefined2 *)(param_1 + 0x7dc) = uVar15;
        FUN_00320d7c(param_2,0,1);
        FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x7dc),7);
        uVar3 = DAT_001c9694;
        iVar13 = DAT_001c967c;
        iVar17 = DAT_001c9678;
        piVar12 = DAT_001c9674;
        *(undefined2 *)((int)DAT_001c9674 + 10) = 0;
        *(undefined1 *)(piVar12 + 2) = 1;
        piVar12[1] = iVar17;
        *(undefined1 *)((int)piVar12 + 9) = 0;
        piVar12[6] = iVar13;
        piVar12[7] = DAT_001c9680;
        uVar18 = DAT_001c9684;
        *(float *)(param_1 + 0x7e0) = fVar9;
        *(undefined4 *)(param_1 + 0x7e4) = uVar18;
        *(undefined4 *)(param_1 + 0x7e8) = DAT_001c9688;
        uVar18 = DAT_001c968c;
        *(float *)(param_1 + 0x7ec) = fVar9;
        *(undefined4 *)(param_1 + 0x7f0) = uVar18;
        uVar18 = DAT_001c9690;
        *(float *)(param_1 + 0x7f4) = fVar9;
        *(undefined4 *)(param_1 + 0x84c) = uVar18;
        *(undefined4 *)(param_1 + 0x850) = uVar3;
        *(float *)(param_1 + 0x854) = fVar24;
        *(float *)(param_1 + 0x864) = fVar9;
        uVar3 = DAT_001c9698;
        *(undefined4 *)(param_1 + 0x868) = uVar16;
        *(undefined4 *)(param_1 + 0x86c) = uVar3;
        *(undefined4 *)(param_1 + 0x834) = uVar18;
        *(undefined4 *)(param_1 + 0x838) = DAT_001c969c;
        *(undefined4 *)(param_1 + 0x83c) = DAT_001c96a0;
        uVar16 = DAT_001c96a4;
        *(float *)(param_1 + 0x840) = fVar9;
        *(undefined4 *)(param_1 + 0x844) = uVar16;
        *(undefined4 *)(param_1 + 0x848) = uVar3;
        *(undefined4 *)(param_1 + 0x880) = uVar5;
        *(undefined2 *)(param_1 + 0x1a8) = 0;
        FUN_0035af04(iVar20,1);
      }
    }
    else if (sVar19 == 1) {
      local_7c = 1;
      if (*(short *)(param_1 + 0x1a8) == 0x2d) {
        FUN_00367c7c(param_2,DAT_001c96a8,0);
      }
      FUN_00373500(DAT_001c96ac,uVar7,fVar2,local_6c);
      if (0x96 < *(short *)(param_1 + 0x1a8)) {
        *(undefined1 *)(param_2 + 0x3235) = 0;
        FUN_00373500(uVar7,uVar7,DAT_001c96b0,local_70);
      }
      iVar20 = DAT_001c96b4;
      if (*(short *)(param_1 + 0x1a8) == DAT_001c96b4) {
        uStack_c4 = DAT_001c923c;
        FUN_0037547c(DAT_001c96b8,0,4,DAT_001c9240,DAT_001c9240);
      }
      if (iVar20 < *(short *)(param_1 + 0x1a8)) {
        *(undefined4 *)(param_1 + 0x538) = uVar5;
        FUN_00373500(fVar23,uVar7,uVar8,param_1 + 0x530);
        if (DAT_001c96bc < *(short *)(param_1 + 0x1a8)) {
          *(undefined2 *)(param_1 + 0x7da) = 2;
          iVar20 = *(int *)(iVar17 + 0x90);
          *(undefined1 *)(iVar20 + 0x5bc) = 1;
          FUN_00370350(fVar9,iVar20 + 0x5c0,5);
          fVar2 = DAT_001c929c;
          iVar20 = *(int *)(iVar17 + 0x90);
          *(float *)(iVar20 + 0x28) = fVar9;
          *(undefined4 *)(iVar20 + 0x2c) = uVar18;
          *(undefined4 *)(iVar20 + 0x30) = uVar3;
          *(undefined2 *)(iVar20 + 0x36) = 0x8000;
          *(undefined2 *)(iVar20 + 0xbe) = 0x8000;
          *(float *)(param_1 + 0x7e0) = fVar2;
          uVar16 = DAT_001c96c0;
          *(float *)(param_1 + 0x7e4) = fVar22;
          *(undefined4 *)(param_1 + 0x7e8) = uVar16;
          uVar16 = DAT_001c968c;
          *(float *)(param_1 + 0x7ec) = fVar9;
          *(undefined4 *)(param_1 + 0x7f0) = uVar16;
          *(undefined4 *)(param_1 + 0x7f4) = uVar3;
          uVar16 = DAT_001c96c4;
          *(undefined2 *)(param_1 + 0x1a8) = 0;
          FUN_0037572c(uVar16);
        }
      }
    }
    else if (sVar19 == 2) {
      FUN_003731e0(*(int *)(iVar17 + 0x90) + 0x5c0);
      FUN_00373500(uVar16,uVar5,uVar8,*(int *)(iVar17 + 0x90) + 0x2c);
      fVar23 = DAT_001c96c8;
      fVar25 = *(float *)(param_1 + 0x7e0) - DAT_001c96c8;
      *(float *)(param_1 + 0x7e0) = fVar25;
      fVar23 = *(float *)(param_1 + 0x7e8) + fVar23;
      *(float *)(param_1 + 0x7e8) = fVar23;
      fVar2 = DAT_001c929c;
      if (0x4b < *(short *)(param_1 + 0x1a8)) {
        *(undefined2 *)(param_1 + 0x7da) = 3;
        *(float *)(param_1 + 0x84c) = fVar2;
        *(float *)(param_1 + 0x850) = fVar22;
        *(float *)(param_1 + 0x854) = fVar24;
        fVar14 = DAT_001c96cc;
        *(float *)(param_1 + 0x864) = fVar9;
        *(float *)(param_1 + 0x868) = fVar14;
        *(float *)(param_1 + 0x86c) = fVar26;
        *(float *)(param_1 + 0x834) = ABS(fVar2 - fVar25);
        *(float *)(param_1 + 0x838) = ABS(fVar22 - *(float *)(param_1 + 0x7e4));
        *(float *)(param_1 + 0x83c) = ABS(fVar24 - fVar23);
        *(float *)(param_1 + 0x840) = ABS(fVar9 - *(float *)(param_1 + 0x7ec));
        *(float *)(param_1 + 0x844) = ABS(fVar14 - *(float *)(param_1 + 0x7f0));
        *(float *)(param_1 + 0x848) = ABS(fVar26 - *(float *)(param_1 + 0x7f4));
        *(float *)(param_1 + 0x87c) = fVar9;
        *(undefined4 *)(param_1 + 0x880) = uVar6;
        *(undefined2 *)(param_1 + 0x1a8) = 0;
      }
    }
    else if (sVar19 == 3) {
      FUN_003731e0(*(int *)(iVar17 + 0x90) + 0x5c0);
      local_7c = 1;
      FUN_00373500(uVar16,uVar5,uVar8,*(int *)(iVar17 + 0x90) + 0x2c);
      FUN_00373500(uVar7,uVar7,uVar4,local_6c);
      if (*(short *)(param_1 + 0x1a8) == 0x2d) {
        FUN_00367c7c(param_2,DAT_001c9298,0);
      }
      *(float *)(param_1 + 0x84c) = DAT_001c929c;
      *(undefined4 *)(param_1 + 0x850) = DAT_001c92a0;
      *(float *)(param_1 + 0x854) = fVar24;
      *(float *)(param_1 + 0x864) = fVar9;
      *(float *)(param_1 + 0x868) = fVar23;
      *(float *)(param_1 + 0x86c) = fVar26;
      fVar2 = DAT_001c92a4;
      if (0x78 < *(short *)(param_1 + 0x1a8)) {
        *(undefined2 *)(param_1 + 0x7da) = 4;
        *(float *)(param_1 + 0x6c) = fVar9;
        *(float *)(param_1 + 0x84c) = fVar2;
        fVar23 = DAT_001c92a8;
        *(float *)(param_1 + 0x850) = fVar22;
        *(float *)(param_1 + 0x854) = fVar23;
        iVar20 = *(int *)(iVar17 + 0x90);
        fVar24 = *(float *)(iVar20 + 0x28);
        *(float *)(param_1 + 0x864) = fVar24;
        fVar25 = *(float *)(iVar20 + 0x2c) + fVar25;
        *(float *)(param_1 + 0x868) = fVar25;
        fVar26 = *(float *)(iVar20 + 0x30);
        *(float *)(param_1 + 0x86c) = fVar26;
        *(float *)(param_1 + 0x834) = ABS(fVar2 - *(float *)(param_1 + 0x7e0));
        *(float *)(param_1 + 0x838) = ABS(fVar22 - *(float *)(param_1 + 0x7e4));
        *(float *)(param_1 + 0x83c) = ABS(fVar23 - *(float *)(param_1 + 0x7e8));
        *(float *)(param_1 + 0x840) = ABS(fVar24 - *(float *)(param_1 + 0x7ec));
        *(float *)(param_1 + 0x844) = ABS(fVar25 - *(float *)(param_1 + 0x7f0));
        *(float *)(param_1 + 0x848) = ABS(fVar26 - *(float *)(param_1 + 0x7f4));
        *(float *)(param_1 + 0x87c) = fVar9;
        *(undefined4 *)(param_1 + 0x880) = uVar5;
        FUN_00374a58(iVar20 + 0x5c0,6);
        uVar16 = FUN_0036ae14(param_1 + 0x5c0,6);
        uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x1fc) = uVar16;
        *(undefined2 *)(param_1 + 0x1a8) = 0;
      }
    }
  }
  else if (sVar19 == 10) {
    FUN_003731e0(*(int *)(iVar17 + 0x8c) + 0x5c0);
    FUN_00373500(uVar16,uVar5,uVar8,*(int *)(iVar17 + 0x8c) + 0x2c);
    fVar22 = DAT_001c9e48;
    fVar25 = *(float *)(param_1 + 0x7e0) - DAT_001c9e48;
    *(float *)(param_1 + 0x7e0) = fVar25;
    fVar22 = *(float *)(param_1 + 0x7e8) - fVar22;
    *(float *)(param_1 + 0x7e8) = fVar22;
    fVar2 = DAT_001c9a38;
    if (0x4b < *(short *)(param_1 + 0x1a8)) {
      *(undefined2 *)(param_1 + 0x7da) = 0xb;
      *(float *)(param_1 + 0x84c) = fVar2;
      fVar26 = DAT_001c9e50;
      fVar24 = DAT_001c9e4c;
      *(float *)(param_1 + 0x850) = DAT_001c9e4c;
      *(float *)(param_1 + 0x854) = fVar26;
      *(float *)(param_1 + 0x864) = fVar9;
      fVar14 = DAT_001c9e54;
      *(float *)(param_1 + 0x868) = fVar23;
      *(float *)(param_1 + 0x86c) = fVar14;
      *(float *)(param_1 + 0x834) = ABS(fVar2 - fVar25);
      *(float *)(param_1 + 0x838) = ABS(fVar24 - *(float *)(param_1 + 0x7e4));
      *(float *)(param_1 + 0x83c) = ABS(fVar26 - fVar22);
      *(float *)(param_1 + 0x840) = ABS(fVar9 - *(float *)(param_1 + 0x7ec));
      *(float *)(param_1 + 0x844) = ABS(fVar23 - *(float *)(param_1 + 0x7f0));
      *(float *)(param_1 + 0x848) = ABS(fVar14 - *(float *)(param_1 + 0x7f4));
      *(float *)(param_1 + 0x87c) = fVar9;
      *(undefined4 *)(param_1 + 0x880) = uVar6;
      *(undefined2 *)(param_1 + 0x1a8) = 0;
    }
  }
  else if (sVar19 == 0xb) {
    FUN_003731e0(*(int *)(iVar17 + 0x8c) + 0x5c0);
    local_7c = 1;
    FUN_00373500(uVar16,uVar5,uVar8,*(int *)(iVar17 + 0x8c) + 0x2c);
    FUN_00373500(uVar7,uVar7,uVar4,local_6c);
    if (*(short *)(param_1 + 0x1a8) == 0x2d) {
      FUN_00367c7c(param_2,DAT_001c9e58,0);
    }
    fVar2 = DAT_001c9e5c;
    if (0x78 < *(short *)(param_1 + 0x1a8)) {
      *(undefined2 *)(param_1 + 0x7da) = 0xc;
      fVar23 = DAT_001c9e60;
      *(float *)(param_1 + 0x6c) = fVar9;
      *(float *)(param_1 + 0x84c) = fVar2;
      *(float *)(param_1 + 0x850) = fVar22;
      *(float *)(param_1 + 0x854) = fVar23;
      iVar20 = *(int *)(iVar17 + 0x8c);
      fVar26 = *(float *)(iVar20 + 0x28);
      *(float *)(param_1 + 0x864) = fVar26;
      fVar25 = *(float *)(iVar20 + 0x2c) + fVar25;
      *(float *)(param_1 + 0x868) = fVar25;
      fVar24 = *(float *)(iVar20 + 0x30);
      *(float *)(param_1 + 0x86c) = fVar24;
      *(float *)(param_1 + 0x834) = ABS(fVar2 - *(float *)(param_1 + 0x7e0));
      *(float *)(param_1 + 0x838) = ABS(fVar22 - *(float *)(param_1 + 0x7e4));
      *(float *)(param_1 + 0x83c) = ABS(fVar23 - *(float *)(param_1 + 0x7e8));
      *(float *)(param_1 + 0x840) = ABS(fVar26 - *(float *)(param_1 + 0x7ec));
      *(float *)(param_1 + 0x844) = ABS(fVar25 - *(float *)(param_1 + 0x7f0));
      *(float *)(param_1 + 0x848) = ABS(fVar24 - *(float *)(param_1 + 0x7f4));
      *(float *)(param_1 + 0x87c) = fVar9;
      *(undefined4 *)(param_1 + 0x880) = uVar5;
      FUN_00374a58(iVar20 + 0x5c0,6);
      uVar16 = FUN_0036ae14(param_1 + 0x5c0,6);
      uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1fc) = uVar16;
      *(undefined2 *)(param_1 + 0x1a8) = 0;
    }
  }
  else if (sVar19 == 0xc) {
    local_7c = 1;
    FUN_003731e0(*(int *)(iVar17 + 0x8c) + 0x5c0);
    iVar20 = *(int *)(iVar17 + 0x8c);
    *(float *)(param_1 + 0x868) = *(float *)(iVar20 + 0x2c) + fVar25;
    FUN_00373500(DAT_001c9e64,uVar6,*(undefined4 *)(param_1 + 0x6c),iVar20 + 0x2c);
    FUN_00373500(DAT_001c9a00,uVar7,DAT_001c99fc,param_1 + 0x6c);
    FUN_00373500(uVar7,uVar7,uVar4,local_6c);
    uVar1 = *(ushort *)(param_1 + 0x1a8);
    if ((short)uVar1 < 0x2d) {
      if ((uVar1 & 7) == 0) {
        FUN_00375bcc(*(undefined4 *)(iVar17 + 0x8c),DAT_001c9e3c);
      }
      uVar18 = DAT_001c9e44;
      uVar16 = DAT_001c9e40;
      *(short *)(*(int *)(iVar17 + 0x8c) + 0xbe) =
           *(short *)(*(int *)(iVar17 + 0x8c) + 0xbe) + (short)(int)*(float *)(param_1 + 0x890);
      FUN_00373500(uVar18,uVar7,uVar16,param_1 + 0x890);
      iVar20 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar7,*(int *)(iVar17 + 0x8c) + 0x5c0);
      if (iVar20 != 0) {
        FUN_00370350(fVar9,*(int *)(iVar17 + 0x8c) + 0x5c0,0xb);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001ca278;
      }
    }
    else {
      if ((short)uVar1 < 0x44) {
        *(undefined1 *)(param_2 + 0x3235) = 3;
        *(undefined4 *)(param_2 + 0x3258) = uVar7;
      }
      else {
        FUN_0036fc20(uVar7,uVar6,local_70);
      }
      fVar23 = DAT_001c9a0c;
      uVar18 = DAT_001c9a08;
      uVar16 = DAT_001c9a04;
      if (*(short *)(param_1 + 0x1a8) == 0x2d) {
        sVar19 = 0;
        do {
          local_a0 = (float)FUN_003738a8(uVar16);
          local_a0 = local_a0 + *(float *)(*(int *)(iVar17 + 0x8c) + 0x28);
          local_9c = (float)FUN_003738a8(uVar16);
          local_9c = local_9c + *(float *)(*(int *)(iVar17 + 0x8c) + 0x2c);
          local_98 = (float)FUN_003738a8(uVar16);
          local_98 = local_98 + *(float *)(*(int *)(iVar17 + 0x8c) + 0x30);
          local_ac = FUN_003738a8(fVar25);
          local_a8 = FUN_003738a8(fVar25);
          local_a4 = FUN_003738a8(fVar25);
          fVar22 = (float)FUN_00371e50(uVar18);
          FUN_00368498(fVar22 + fVar23,param_2,&local_a0,&local_ac,DAT_001c9a10,0);
          sVar19 = sVar19 + 1;
        } while (sVar19 < 0x32);
        FUN_00375bcc(*(undefined4 *)(iVar17 + 0x8c),DAT_001c9a14);
        *(float *)(param_2 + 0x3258) = fVar9;
      }
      iVar20 = (int)*(short *)(param_1 + 0x1a8);
      if (iVar20 < 0x35) {
        *(short *)(*(int *)(iVar17 + 0x8c) + 0xbe) =
             *(short *)(*(int *)(iVar17 + 0x8c) + 0xbe) + (short)(int)*(float *)(param_1 + 0x890);
      }
      else {
        if (iVar20 < 0x4b) {
          fVar23 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
          fVar23 = (float)FUN_002cfca0((int)(short)((short)(int)(DAT_001ca268 +
                                                                fVar23 * DAT_001ca260 * DAT_001ca264
                                                                ) * 0x4200));
          FUN_00373500(DAT_001ca26c + fVar23 * fVar25 * fVar2,uVar7,DAT_001ca270,
                       *(int *)(iVar17 + 0x8c) + 0x54);
        }
        else {
          if (iVar20 == 0x4b) {
            FUN_00374a58(DAT_001ca274,*(int *)(iVar17 + 0x8c) + 0x5c0,0xe);
            uVar16 = FUN_0036ae14(param_1 + 0x5c0,0xe);
            uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x1fc) = uVar16;
          }
          if (*(short *)(param_1 + 0x1a8) == 0x5a) {
            FUN_00375bcc(*(undefined4 *)(iVar17 + 0x8c),DAT_001c9250);
          }
          iVar20 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar7,
                                *(int *)(iVar17 + 0x8c) + 0x5c0);
          if (iVar20 != 0) {
            FUN_00370350(fVar9,*(int *)(iVar17 + 0x8c) + 0x5c0,0xb);
            *(undefined4 *)(param_1 + 0x1fc) = DAT_001ca278;
          }
          FUN_00373500(DAT_001ca26c,uVar6,DAT_001ca270,*(int *)(iVar17 + 0x8c) + 0x54);
        }
        FUN_0037572c(*(undefined4 *)(*(int *)(iVar17 + 0x8c) + 0x54));
        iVar20 = *(int *)(iVar17 + 0x8c);
        *(undefined2 *)(iVar20 + 0xbe) = 0;
        *(undefined1 *)(iVar20 + 0x7d8) = 1;
        uVar16 = DAT_001ca27c;
        if (*(short *)(param_1 + 0x1a8) == 0x96) {
          *(undefined2 *)(param_1 + 0x7da) = 0x14;
          *(undefined2 *)(param_1 + 0x1a8) = 0;
          *(undefined4 *)(param_1 + 0x7e0) = uVar16;
          *(undefined4 *)(param_1 + 0x7e4) = uVar10;
          *(float *)(param_1 + 0x7e8) = fVar9;
          *(float *)(param_1 + 0x7ec) = fVar9;
          *(undefined4 *)(param_1 + 0x7f0) = uVar11;
          *(float *)(param_1 + 0x7f4) = fVar9;
          uVar16 = DAT_001ca280;
          *(undefined4 *)(param_1 + 0x208) = uVar3;
          *(undefined4 *)(param_1 + 0x200) = uVar16;
          *(float *)(param_1 + 0x204) = fVar9;
          *(float *)(param_1 + 0x834) = fVar9;
          *(float *)(param_1 + 0x530) = fVar9;
        }
      }
    }
  }
  else if (sVar19 == 0x14) {
    if ((int)*(short *)(param_1 + 0x1a8) - 0x1fU < 0x95) {
      *(undefined1 *)(param_2 + 0x3235) = 1;
      FUN_00373500(uVar7,uVar7,DAT_001c92b4,local_70);
    }
    if (*(short *)(param_1 + 0x1a8) == 0x87) {
      FUN_003655d0(0,0x5a);
    }
    if (*(short *)(param_1 + 0x1a8) == 0xb4) {
      *(undefined1 *)(iVar17 + 2) = 0;
      *(undefined1 *)(param_2 + 0x3236) = 1;
      *(undefined1 *)(param_2 + 0x3235) = 1;
      *(float *)(param_2 + 0x3258) = fVar9;
      uStack_c4 = 0x100;
      uStack_c0 = 0x40;
      FUN_00354248(param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0x648),200,0xb4);
      *(ushort *)(DAT_001c92b8 + 0xfa) = *(ushort *)(DAT_001c92b8 + 0xfa) | 0x20;
      FUN_0036ec40(0,DAT_001c92bc);
      iVar20 = FUN_0035b164();
      if ((iVar20 != 0) && (iVar20 = FUN_0035b0a0(), iVar20 == 0)) {
        if (((*DAT_001c92c0 & 1) == 0) && (iVar20 = FUN_003679b4(DAT_001c92c0), iVar20 != 0)) {
          FUN_0036788c(DAT_001c92c4);
        }
        FUN_003542c4(DAT_001c92d0,1);
      }
    }
    if (*(short *)(param_1 + 0x1a8) < 0xf0) {
      FUN_00373500(uVar10,uVar5,*(undefined4 *)(param_1 + 0x834),param_1 + 0x7e0);
      FUN_00373500(uVar8,uVar7,DAT_001ca268,param_1 + 0x834);
    }
    else {
      if (*(short *)(param_1 + 0x1a8) == 0xf0) {
        *(float *)(param_1 + 0x834) = fVar9;
      }
      FUN_00373500(fVar9,uVar5,*(float *)(param_1 + 0x834) * DAT_001c92d4,param_1 + 0x7e0);
      FUN_00373500(DAT_001c92d8,uVar5,*(undefined4 *)(param_1 + 0x834),local_74);
      FUN_00373500(DAT_001c966c,uVar7,uVar7,param_1 + 0x834);
    }
    uVar16 = DAT_001ca284;
    if (*(short *)(param_1 + 0x1a8) < 300) {
      FUN_00375bcc(*(undefined4 *)(iVar17 + 0x90),DAT_001ca284);
      FUN_00375bcc(*(undefined4 *)(iVar17 + 0x8c),uVar16);
      local_88 = *(undefined4 *)(param_1 + 0x208);
      local_84 = uVar11;
      local_80 = fVar9;
      FUN_003735e8(*(undefined4 *)(param_1 + 0x200),&uStack_c4,0);
      FUN_003735ac(&local_94,&uStack_c4,&local_88);
      fVar2 = DAT_001ca288;
      iVar20 = *(int *)(iVar17 + 0x90);
      *(float *)(iVar20 + 0x28) = local_94;
      *(undefined4 *)(iVar20 + 0x2c) = local_90;
      *(float *)(iVar20 + 0x30) = local_8c;
      fVar23 = DAT_001ca28c;
      uVar15 = (undefined2)(int)(*(float *)(param_1 + 0x200) * DAT_001ca28c);
      *(undefined2 *)(iVar20 + 0xbe) = uVar15;
      *(undefined2 *)(iVar20 + 0x36) = uVar15;
      iVar20 = *(int *)(iVar17 + 0x8c);
      *(float *)(iVar20 + 0x28) = -local_94;
      *(undefined4 *)(iVar20 + 0x2c) = local_90;
      *(float *)(iVar20 + 0x30) = -local_8c;
      uVar15 = (undefined2)(int)(fVar2 + *(float *)(param_1 + 0x200) * fVar23);
      *(undefined2 *)(iVar20 + 0x36) = uVar15;
      *(undefined2 *)(iVar20 + 0xbe) = uVar15;
      FUN_00373500(uVar18,uVar6,uVar8,param_1 + 0x208);
      uVar16 = DAT_001ca290;
      *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) - *(float *)(param_1 + 0x204);
      FUN_00373500(DAT_001ca294,uVar7,uVar16,param_1 + 0x204);
    }
    uVar18 = DAT_001ca29c;
    uVar16 = DAT_001ca298;
    if (*(short *)(param_1 + 0x1a8) == 300) {
      iVar20 = *(int *)(iVar17 + 0x90);
      *(undefined4 *)(iVar20 + 0x1a4) = DAT_001ca298;
      iVar17 = *(int *)(iVar17 + 0x8c);
      *(undefined4 *)(iVar17 + 0x1a4) = uVar16;
      *(undefined4 *)(iVar20 + 0x508) = uVar3;
      *(undefined4 *)(iVar20 + 0x50c) = uVar11;
      *(float *)(iVar20 + 0x510) = fVar9;
      *(undefined2 *)(iVar20 + 0x1d0) = 0x96;
      *(undefined4 *)(iVar17 + 0x508) = uVar18;
      *(undefined4 *)(iVar17 + 0x50c) = uVar11;
      *(float *)(iVar17 + 0x510) = fVar9;
      *(undefined2 *)(iVar17 + 0x1d0) = 0x96;
    }
    if (*(short *)(param_1 + 0x1a8) == 0x186) {
      iVar20 = FUN_0036c5bc(param_2,0);
      uVar16 = *(undefined4 *)(param_1 + 0x7e4);
      uVar18 = *(undefined4 *)(param_1 + 0x7e8);
      *(undefined4 *)(iVar20 + 0x8c) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 *)(iVar20 + 0x90) = uVar16;
      *(undefined4 *)(iVar20 + 0x94) = uVar18;
      uVar16 = *(undefined4 *)(param_1 + 0x7e4);
      uVar18 = *(undefined4 *)(param_1 + 0x7e8);
      *(undefined4 *)(iVar20 + 0xa4) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 *)(iVar20 + 0xa8) = uVar16;
      *(undefined4 *)(iVar20 + 0xac) = uVar18;
      uVar16 = local_78[1];
      uVar18 = local_78[2];
      *(undefined4 *)(iVar20 + 0x80) = *local_78;
      *(undefined4 *)(iVar20 + 0x84) = uVar16;
      *(undefined4 *)(iVar20 + 0x88) = uVar18;
      FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x7dc),0);
      piVar12 = DAT_001c9674;
      bVar21 = (char)DAT_001c9674[2] != '\0';
      iVar20 = 0;
      if (bVar21) {
        iVar20 = *DAT_001c9674;
      }
      if (bVar21 && iVar20 != 0) {
        iVar20 = FUN_0036c5bc(iVar20,0xffffffff);
        FUN_00367c48();
        *(undefined4 *)(iVar20 + 0x144) = DAT_001ca454;
        *(undefined1 *)(piVar12 + 2) = 0;
      }
      *(undefined2 *)(param_1 + 0x7dc) = 0;
      *(undefined2 *)(param_1 + 0x7da) = 0;
      FUN_00367374(param_2,local_68);
      FUN_0036e980(param_2,param_1,7);
      uVar16 = DAT_001ca45c;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_001ca458;
      *(undefined4 *)(param_1 + 0x2c) = uVar16;
      *(undefined1 *)(param_1 + 0x5bc) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    }
  }
  if (*(short *)(param_1 + 0x7dc) != 0) {
    if (local_7c != 0) {
      FUN_00373500(*(undefined4 *)(param_1 + 0x84c),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x834) * *(float *)(param_1 + 0x87c),param_1 + 0x7e0);
      FUN_00373500(*(undefined4 *)(param_1 + 0x850),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x838) * *(float *)(param_1 + 0x87c),param_1 + 0x7e4);
      FUN_00373500(*(undefined4 *)(param_1 + 0x854),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x83c) * *(float *)(param_1 + 0x87c),local_74);
      FUN_00373500(*(undefined4 *)(param_1 + 0x864),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x840) * *(float *)(param_1 + 0x87c),local_78);
      FUN_00373500(*(undefined4 *)(param_1 + 0x868),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x87c),param_1 + 0x7f0);
      FUN_00373500(*(undefined4 *)(param_1 + 0x86c),*(undefined4 *)(param_1 + 0x880),
                   *(float *)(param_1 + 0x848) * *(float *)(param_1 + 0x87c),param_1 + 0x7f4);
    }
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x7dc),local_78,param_1 + 0x7e0);
  }
  return;
}
