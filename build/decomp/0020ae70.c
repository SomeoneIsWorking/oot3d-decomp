// OoT3D decomp @ 0020ae70  name=FUN_0020ae70  size=3540

void FUN_0020ae70(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  int iStack_1a8;
  undefined4 local_1a4;
  int iStack_1a0;
  undefined4 local_19c;
  int iStack_198;
  undefined4 local_194;
  int iStack_190;
  undefined4 local_18c;
  int local_188 [10];
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [160];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;

  uVar12 = DAT_0020b23c;
  uVar13 = DAT_0020b238;
  uVar17 = 1;
  piVar18 = &local_1c0;
  piVar19 = &local_1c0;
  uVar26 = CONCAT44(DAT_0020b238,DAT_0020b23c);
  iVar14 = *(int *)(DAT_0020b234 + param_2);
  if (*(short *)(param_1 + 0x1c) < 100) {
    local_188[0] = param_1 + 0x5e8;
    local_18c = 0x13;
    local_188[1] = 0x13;
    local_188[2] = 0;
    iStack_198 = param_1 + 0x5e0;
    local_19c = 0xf;
    iStack_190 = param_1 + 0x5e4;
    local_194 = 0xe;
    iStack_1a8 = param_1 + 0x59c;
    local_1ac = (undefined4 *)0x5;
    iStack_1a0 = param_1 + 0x5dc;
    local_1a4 = 7;
    local_1b0 = (undefined4 *)(param_1 + 0x55c);
    local_1b8 = param_1 + 0x558;
    local_1bc = 9;
    local_1b4 = 10;
    local_1c0 = param_1 + 0x554;
    local_48 = FUN_00372f38(param_1,param_2,param_1 + 0x550,8);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,3);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x4f0) = uVar6;
    } while (iVar14 < 0x18);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,0xd);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x5a0) = uVar6;
    } while (iVar14 < 0xf);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,4);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x560) = uVar6;
    } while (iVar14 < 0xf);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,0x14);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x5ec) = uVar6;
    } while (iVar14 < 100);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,3);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x77c) = uVar6;
    } while (iVar14 < 0xe);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,3);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x7b4) = uVar6;
    } while (iVar14 < 0xe);
    iVar14 = 0;
    do {
      uVar6 = FUN_0036a924(param_1,param_2,0xe1,0x15);
      iVar9 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + iVar9 + 0x7ec) = uVar6;
    } while (iVar14 < 0x28);
    local_78 = *DAT_0020b240;
    uStack_74 = DAT_0020b240[1];
    uStack_70 = DAT_0020b240[2];
    uStack_6c = DAT_0020b240[3];
    uStack_68 = DAT_0020b240[4];
    uStack_64 = DAT_0020b240[5];
    uStack_60 = DAT_0020b240[6];
    uStack_5c = DAT_0020b240[7];
    uStack_58 = DAT_0020b240[8];
    local_54 = DAT_0020b240[9];
    uStack_50 = DAT_0020b240[10];
    uStack_4c = DAT_0020b240[0xb];
    local_98 = *DAT_0020b244;
    uStack_94 = DAT_0020b244[1];
    uStack_90 = DAT_0020b244[2];
    uStack_8c = DAT_0020b244[3];
    uStack_88 = DAT_0020b244[4];
    uStack_84 = DAT_0020b244[5];
    uStack_80 = DAT_0020b244[6];
    uStack_7c = DAT_0020b244[7];
    FUN_00371738(&local_1b0,DAT_0020b244 + 8,0x118);
    local_1b0 = &local_78;
    local_1ac = &local_98;
    FUN_0034338c(local_188,DAT_0020b248,0x28);
    FUN_0034338c(auStack_160,DAT_0020b24c,0x28);
    FUN_0034338c(auStack_138,DAT_0020b250,0x28);
    local_1b4 = ObjectBankArchive_00372c90(local_48,0xb);
    iVar11 = DAT_0020b25c;
    iVar9 = DAT_0020b258;
    iVar14 = DAT_0020b254;
    iVar15 = 0;
    do {
      iVar7 = (**(code **)(*(int *)*DAT_0020b260 + 8))((int *)*DAT_0020b260,0x1b8);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_00348f34(iVar7,&local_1b0);
      }
      iVar7 = param_1 + iVar15 * 4;
      *(undefined4 *)(iVar7 + 0x88c) = uVar6;
      local_1bc = iVar14;
      local_1c0 = iVar9;
      local_1b8 = iVar14;
      FUN_00348a64(uVar6,0,local_1b4,iVar9);
      FUN_00348be4(*(undefined4 *)(iVar7 + 0x88c));
      if (((*DAT_0020b264 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_0020b264), iVar8 != 0)) {
        FUN_0036788c(DAT_0020b268);
      }
      uVar6 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar11 + 0x47c),*(undefined4 *)(iVar7 + 0x88c),0);
      iVar15 = iVar15 + 1;
      *(undefined4 *)(iVar7 + 0x8b8) = uVar6;
    } while (iVar15 < 0xb);
    iVar14 = 0;
    do {
      iVar9 = FUN_0036a924(param_1,param_2,0xe1,0xc);
      *(int *)(param_1 + iVar14 * 4 + 0x8e4) = iVar9;
      iVar9 = *(int *)(iVar9 + 0xc);
      uVar6 = FUN_00372f0c(local_48,7);
      FUN_00372d94(iVar9,uVar6);
      iVar14 = iVar14 + 1;
      *(undefined1 *)(iVar9 + 0x10) = 1;
      *(undefined4 *)(iVar9 + 0xc) = uVar12;
    } while (iVar14 < 2);
    iVar14 = 0;
    do {
      iVar9 = FUN_0036a924(param_1,param_2,0xe1,6);
      *(int *)(param_1 + iVar14 * 4 + 0x8ec) = iVar9;
      iVar9 = *(int *)(iVar9 + 0xc);
      uVar6 = FUN_00372f0c(local_48,1);
      FUN_00372d94(iVar9,uVar6);
      iVar14 = iVar14 + 1;
      *(undefined1 *)(iVar9 + 0x10) = 1;
      *(undefined4 *)(iVar9 + 0xc) = uVar12;
    } while (iVar14 < 3);
    iVar14 = 0;
    do {
      iVar9 = FUN_0036a924(param_1,param_2,0xe1,0xb);
      *(int *)(param_1 + iVar14 * 4 + 0x8f8) = iVar9;
      iVar9 = *(int *)(iVar9 + 0xc);
      uVar6 = FUN_00372f0c(local_48,6);
      FUN_00372d94(iVar9,uVar6);
      iVar14 = iVar14 + 1;
      *(undefined1 *)(iVar9 + 0x10) = 1;
      *(undefined4 *)(iVar9 + 0xc) = uVar12;
    } while (iVar14 < 1);
    iVar14 = 0;
    do {
      iVar9 = FUN_0036a924(param_1,param_2,0xe1,10);
      *(int *)(param_1 + iVar14 * 4 + 0x8fc) = iVar9;
      iVar9 = *(int *)(iVar9 + 0xc);
      uVar6 = FUN_00372f0c(local_48,5);
      FUN_00372d94(iVar9,uVar6);
      iVar14 = iVar14 + 1;
      *(undefined1 *)(iVar9 + 0x10) = 1;
      *(undefined4 *)(iVar9 + 0xc) = uVar12;
    } while (iVar14 < 0x1f);
    FUN_00375c10(param_2,0x14);
    iVar14 = DAT_0020b6f4;
    iVar9 = 0;
    *(int *)(DAT_0020b6f8 + param_2) = DAT_0020b6f4;
    puVar10 = (undefined1 *)(iVar14 + -0x4c);
    iVar14 = 100;
    do {
      puVar10[0x4c] = 0;
      iVar14 = iVar14 + -1;
      puVar10 = puVar10 + 0x98;
      *puVar10 = 0;
      iVar11 = DAT_0020b6fc;
    } while (iVar14 != 0);
    *(int *)(DAT_0020b6fc + 0x48) = param_1;
    *(undefined1 *)(param_1 + 0xb7) = 0x28;
    FUN_003510b0(param_1,iVar11 + 0x218);
    FUN_00372d4c(uVar13,uVar13,param_1 + 0xbc,0);
    FUN_0037572c(DAT_0020b700,param_1);
    local_1b8 = 0;
    local_1c0 = 0;
    local_1bc = 0;
    local_1b4 = 0;
    FUN_0034fe20(param_1,param_2,param_1 + 0x1a8,2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),9);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),6);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1d0),5);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1d0),7);
    FUN_00353dd0(param_2);
    FUN_00353d24(param_2,param_1 + 0xf8c,param_1,DAT_0020b704);
    if (*(short *)(param_1 + 0x1c) == 1) {
      iVar14 = FUN_0036e864(param_2,0x37);
      uVar17 = 1;
      if (iVar14 != 0) {
        iVar14 = (int)*(short *)(param_2 + 0x104);
        bVar20 = iVar14 == 0x4f;
        bVar21 = iVar14 == 0x1a;
        bVar22 = iVar14 == 0xe;
        bVar23 = iVar14 == 0xf;
        piVar18 = &local_1c0;
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          piVar18 = (int *)&stack0xffffffbc;
        }
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          iVar14 = param_1;
        }
        piVar19 = piVar18;
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          piVar19 = (int *)((int)piVar18 + 0x18);
          uVar26 = *(undefined8 *)piVar18;
        }
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          piVar19 = (int *)((int)piVar19 + 8);
        }
        uVar17 = 1;
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          param_1 = *piVar19;
          iVar9 = piVar19[1];
          param_2 = piVar19[4];
          uVar17 = (undefined1)piVar19[5];
          piVar19 = piVar19 + 9;
        }
        if (((bVar20 || bVar21) || bVar22) || bVar23) {
          *(undefined4 *)(iVar14 + 0x140) = 0;
          *(undefined4 *)(iVar14 + 0x13c) = 0;
          *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) & 0xfffffffe;
          return;
        }
      }
      iVar15 = param_2 + 0x3a58;
      uVar13 = FUN_00363c10(iVar15,DAT_0020b70c);
      *(undefined4 *)((int)piVar19 + 0x174) = uVar13;
      iVar11 = FUN_00373074(iVar15,uVar13);
      iVar14 = DAT_0020b710;
      uVar13 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0xac0) = DAT_0020b714;
      }
      else {
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)((int)piVar19 + 0x174);
        FUN_00374a58(uVar13,param_1 + 0x1a8,2);
        uVar6 = FUN_0036ae14(param_1 + 0x1a8,2);
        uVar12 = DAT_0020b718;
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xaf8) = uVar6;
        *(undefined4 *)(param_1 + 0xac0) = uVar12;
        *(int *)(param_1 + 0xffc) = iVar9;
        *(undefined2 *)(param_1 + 0x1000) = 100;
        *(undefined1 *)(param_1 + 0xac4) = uVar17;
        *(char *)(iVar14 + 0x47) = (char)*(undefined2 *)(iVar14 + 0x1584);
        *(undefined2 *)(iVar14 + 0x44) = *(undefined2 *)(iVar14 + 0x42);
      }
      *(int *)((int)piVar19 + 0x174) = iVar15;
      uVar12 = FUN_00363c10(iVar15,DAT_0020b70c);
      iVar11 = FUN_00373074(*(undefined4 *)((int)piVar19 + 0x174),uVar12);
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0xac0) = DAT_0020b714;
      }
      else {
        *(undefined4 *)(param_1 + 0x1a4) = uVar12;
        FUN_00374a58(uVar13,param_1 + 0x1a8,2);
        uVar12 = FUN_0036ae14(param_1 + 0x1a8,2);
        uVar13 = DAT_0020b718;
        uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xaf8) = uVar12;
        *(undefined4 *)(param_1 + 0xac0) = uVar13;
        *(int *)(param_1 + 0xffc) = iVar9;
        *(undefined2 *)(param_1 + 0x1000) = 100;
        *(undefined1 *)(param_1 + 0xac4) = uVar17;
        *(char *)(iVar14 + 0x47) = (char)*(undefined2 *)(iVar14 + 0x1584);
        *(undefined2 *)(iVar14 + 0x44) = *(undefined2 *)(iVar14 + 0x42);
      }
    }
    else {
      FUN_0021d6bc(param_1,param_2);
      *(undefined2 *)(DAT_0020b708 + param_1) = 0xff;
      piVar19 = &local_1c0;
      uVar17 = 1;
    }
    uVar13 = (undefined4)((ulonglong)uVar26 >> 0x20);
    piVar19[2] = 0;
    piVar19[3] = 1;
    *piVar19 = 0;
    piVar19[1] = 0;
    iVar14 = FUN_0036aa20(uVar13,uVar13,uVar13,param_2 + 0x208c,param_1,param_2,DAT_0020b71c);
    *(int *)(DAT_0020b6fc + 0x44) = iVar14;
    *(undefined4 *)(iVar14 + 0x17e0) = *(undefined4 *)(param_1 + 0x178);
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,9);
    piVar18 = piVar19;
  }
  else {
    *(undefined4 *)(param_1 + 0x97c) = 0;
    uVar6 = DAT_0020b720;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0xaf8) = uVar6;
    uVar3 = DAT_0020bc2c;
    uVar2 = DAT_0020bc04;
    uVar1 = DAT_0020b72c;
    uVar6 = DAT_0020b728;
    sVar4 = *(short *)(param_1 + 0x1c);
    if (sVar4 < 200) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_0020b724;
      *(undefined4 *)(param_1 + 0x140) = uVar6;
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      fVar28 = *(float *)(iVar14 + 0x28) - *(float *)(param_1 + 0x28);
      fVar24 = *(float *)(iVar14 + 0x2c) + DAT_0020bc30;
      fVar27 = *(float *)(param_1 + 0x2c);
      fVar25 = *(float *)(iVar14 + 0x30) - *(float *)(param_1 + 0x30);
      uVar5 = FUN_003758b0(fVar25,fVar28);
      *(undefined2 *)(param_1 + 0x36) = uVar5;
      uVar5 = FUN_003758b0(SQRT(fVar28 * fVar28 + fVar25 * fVar25),fVar24 - fVar27);
      *(undefined2 *)(param_1 + 0x34) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (sVar4 == 300) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_0020b724;
      *(undefined4 *)(param_1 + 0x140) = uVar6;
      *(undefined2 *)(param_1 + 0xad4) = 2;
      *(undefined4 *)(param_1 + 0x980) = 0xf;
      sVar4 = 0;
      *(undefined4 *)(param_1 + 0x97c) = 1;
      do {
        sVar4 = sVar4 + 2;
        *(undefined4 *)(param_1 + *(int *)(param_1 + 0x97c) * 4 + 0x980) = 3;
        iVar14 = *(int *)(param_1 + 0x97c) + 1;
        *(int *)(param_1 + 0x97c) = iVar14;
        *(undefined4 *)(param_1 + iVar14 * 4 + 0x980) = 3;
        *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x97c) + 1;
      } while (sVar4 < 8);
    }
    else if (sVar4 == 400) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_0020b724;
      *(undefined4 *)(param_1 + 0x140) = uVar6;
      *(undefined2 *)(param_1 + 0xad4) = 1;
      *(undefined4 *)(param_1 + 0x980) = 0xf;
      sVar4 = 0;
      *(undefined4 *)(param_1 + 0x97c) = 1;
      do {
        sVar4 = sVar4 + 2;
        *(undefined4 *)(param_1 + *(int *)(param_1 + 0x97c) * 4 + 0x980) = 3;
        iVar14 = *(int *)(param_1 + 0x97c) + 1;
        *(int *)(param_1 + 0x97c) = iVar14;
        *(undefined4 *)(param_1 + iVar14 * 4 + 0x980) = 3;
        *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x97c) + 1;
      } while (sVar4 < 8);
    }
    else {
      puVar16 = (undefined4 *)(param_1 + 0x28);
      if (sVar4 < 0x104) {
        if (sVar4 < 0xfa) {
          sVar4 = 0;
          *(undefined4 *)(param_1 + 0x13c) = DAT_0020bc14;
          *(undefined4 *)(param_1 + 0x140) = DAT_0020bc18;
          do {
            sVar4 = sVar4 + 2;
            *(undefined4 *)(param_1 + *(int *)(param_1 + 0x97c) * 4 + 0x980) = 3;
            iVar14 = *(int *)(param_1 + 0x97c) + 1;
            *(int *)(param_1 + 0x97c) = iVar14;
            *(undefined4 *)(param_1 + iVar14 * 4 + 0x980) = 3;
            *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x97c) + 1;
          } while (sVar4 < 0x18);
          *(undefined4 *)(param_1 + 0x6c) = DAT_0020bc1c;
          fVar24 = DAT_0020bc24;
          if (*(short *)(param_1 + 0x1c) == 200) {
            *(undefined2 *)(DAT_0020bc20 + param_1) = 0xb;
          }
          else {
            fVar25 = (float)FUN_00371e50(DAT_0020bc24);
            fVar27 = DAT_0020bc28;
            uVar26 = CONCAT44(DAT_0020bc28,uVar12);
            if ((short)(int)fVar25 + 3 < 1) {
              fVar25 = (float)FUN_00371e50(fVar24);
              fVar25 = (float)VectorSignedToFloat((short)(int)fVar25 + 3,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar27 = fVar25 * fVar24 * fVar27 - fVar27;
            }
            else {
              fVar25 = (float)FUN_00371e50(fVar24);
              fVar25 = (float)VectorSignedToFloat((short)(int)fVar25 + 3,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar27 = fVar27 + fVar25 * fVar24 * fVar27;
            }
            *(short *)(DAT_0020bc20 + param_1) = (short)(int)fVar27;
          }
          puVar16 = (undefined4 *)(param_1 + 0xc18);
          iVar14 = 0xc;
          do {
            puVar16[3] = uVar1;
            puVar16 = puVar16 + 6;
            iVar14 = iVar14 + -1;
            *puVar16 = uVar1;
          } while (iVar14 != 0);
        }
        else {
          *(undefined4 *)(param_1 + 0x140) = DAT_0020bc08;
          *(undefined4 *)(param_1 + 0x13c) = uVar2;
          *(undefined4 *)(param_1 + 0x980) = 3;
          *(undefined4 *)(param_1 + 0x97c) = 1;
          local_1b8 = 0;
          local_1c0 = 0;
          local_1bc = 0;
          local_1b4 = 0;
          FUN_0034fe20(param_1,param_2,param_1 + 0x22c,0x16);
          fVar24 = (float)FUN_00371e50(DAT_0020bc10);
          *(short *)(param_1 + 0xace) = (short)(int)fVar24;
          *(undefined4 *)(param_1 + 0xc20) = *puVar16;
          *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_1 + 0x30);
          iVar9 = 1;
          iVar14 = 1;
          do {
            iVar11 = iVar9 + 1;
            iVar15 = param_1 + iVar9 * 0xc;
            uVar12 = *(undefined4 *)(param_1 + 0x2c);
            uVar6 = *(undefined4 *)(param_1 + 0x30);
            iVar14 = iVar14 + 2;
            *(undefined4 *)(iVar15 + 0xc20) = *puVar16;
            *(undefined4 *)(iVar15 + 0xc24) = uVar12;
            *(undefined4 *)(iVar15 + 0xc28) = uVar6;
            iVar9 = iVar9 + 2;
            iVar11 = param_1 + iVar11 * 0xc;
            uVar12 = *(undefined4 *)(param_1 + 0x2c);
            uVar6 = *(undefined4 *)(param_1 + 0x30);
            *(undefined4 *)(iVar11 + 0xc20) = *puVar16;
            *(undefined4 *)(iVar11 + 0xc24) = uVar12;
            *(undefined4 *)(iVar11 + 0xc28) = uVar6;
          } while (iVar14 < 0xf);
          *(undefined4 *)(param_1 + 0xaf8) = uVar13;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x140) = DAT_0020bc08;
        *(undefined4 *)(param_1 + 0x13c) = uVar2;
        *(undefined4 *)(param_1 + 0x980) = 3;
        *(undefined4 *)(param_1 + 0x97c) = 1;
        local_1b8 = 0;
        local_1c0 = 0;
        local_1bc = 0;
        local_1b4 = 0;
        FUN_0034fe20(param_1,param_2,param_1 + 0x22c,0x16);
        *(undefined2 *)(param_1 + 0xaee) = 10;
        *(short *)(param_1 + 0xace) = (0x104 - *(short *)(param_1 + 0x1c)) * 2;
        *(undefined4 *)(param_1 + 0xc20) = *puVar16;
        *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_1 + 0x30);
        iVar9 = 1;
        iVar14 = 1;
        do {
          iVar11 = iVar9 + 1;
          iVar15 = param_1 + iVar9 * 0xc;
          uVar13 = *(undefined4 *)(param_1 + 0x2c);
          uVar12 = *(undefined4 *)(param_1 + 0x30);
          iVar14 = iVar14 + 2;
          *(undefined4 *)(iVar15 + 0xc20) = *puVar16;
          *(undefined4 *)(iVar15 + 0xc24) = uVar13;
          *(undefined4 *)(iVar15 + 0xc28) = uVar12;
          iVar9 = iVar9 + 2;
          iVar11 = param_1 + iVar11 * 0xc;
          uVar13 = *(undefined4 *)(param_1 + 0x2c);
          uVar12 = *(undefined4 *)(param_1 + 0x30);
          *(undefined4 *)(iVar11 + 0xc20) = *puVar16;
          *(undefined4 *)(iVar11 + 0xc24) = uVar13;
          *(undefined4 *)(iVar11 + 0xc28) = uVar12;
        } while (iVar14 < 0xf);
        *(undefined2 *)(param_1 + 0xae4) = 5;
        FUN_00353dd0(param_2);
        FUN_00353d24(param_2,param_1 + 0xf8c,param_1,DAT_0020bc0c);
      }
    }
    iVar15 = *(int *)(param_1 + 0x97c);
    iVar11 = param_1 + 0xa20;
    local_1c0 = param_1 + 0x980;
    local_48 = FUN_00352ee0(param_1,param_2,iVar15,iVar11);
    iVar9 = 0;
    iVar14 = 0;
    if (0 < iVar15) {
      do {
        switch(*(undefined4 *)(param_1 + 0x980 + iVar14 * 4)) {
        case 3:
          iVar7 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(undefined4 *)(param_1 + iVar7 + 0x4f0) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 5:
          *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 8:
          *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 9:
          *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 10:
          *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 0xe:
          *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(iVar11 + iVar14 * 4);
          break;
        case 0xf:
          *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(iVar11 + iVar14 * 4);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar15);
    }
  }
  uVar13 = (undefined4)uVar26;
  if (*(int *)(param_1 + 0x59c) != 0) {
    iVar14 = *(int *)(*(int *)(param_1 + 0x59c) + 0xc);
    uVar12 = FUN_00372f0c(*(undefined4 *)((int)piVar18 + 0x178),3);
    FUN_00372d94(iVar14,uVar12);
    *(undefined1 *)(iVar14 + 0x10) = uVar17;
    *(undefined4 *)(iVar14 + 0xc) = uVar13;
  }
  if (*(int *)(param_1 + 0x550) != 0) {
    iVar14 = *(int *)(*(int *)(param_1 + 0x550) + 0xc);
    uVar12 = FUN_00372f0c(*(undefined4 *)((int)piVar18 + 0x178),4);
    FUN_00372d94(iVar14,uVar12);
    *(undefined1 *)(iVar14 + 0x10) = uVar17;
    *(undefined4 *)(iVar14 + 0xc) = uVar13;
  }
  if (*(int *)(param_1 + 0x558) != 0) {
    iVar14 = *(int *)(*(int *)(param_1 + 0x558) + 0xc);
    uVar12 = FUN_00372f0c(*(undefined4 *)((int)piVar18 + 0x178),5);
    FUN_00372d94(iVar14,uVar12);
    *(undefined1 *)(iVar14 + 0x10) = uVar17;
    *(undefined4 *)(iVar14 + 0xc) = uVar13;
  }
  iVar14 = 0;
  do {
    iVar9 = *(int *)(param_1 + iVar14 * 4 + 0x5a0);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0xc);
      uVar12 = FUN_00372f0c(*(undefined4 *)((int)piVar18 + 0x178),8);
      FUN_00372d94(iVar9,uVar12);
      *(undefined1 *)(iVar9 + 0x10) = uVar17;
      *(undefined4 *)(iVar9 + 0xc) = uVar13;
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0xf);
  if (((*DAT_0020b264 & 1) == 0) && (iVar14 = FUN_003679b4(DAT_0020b264), iVar14 != 0)) {
    FUN_0036788c(DAT_0020b268);
  }
  uVar13 = ObjectBankArchive_00372c90
                     (*(undefined4 *)((int)piVar18 + 0x178),*(undefined4 *)(DAT_0020bdec + 0xf3c));
  *(undefined4 *)(param_1 + 0x978) = uVar13;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}
