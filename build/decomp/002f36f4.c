// OoT3D decomp @ 002f36f4  name=SaveDataMaintainer_002f36f4  size=2620

void SaveDataMaintainer_002f36f4(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  uint in_fpscr;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [6];
  undefined4 local_40;

  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(char *)(param_1 + 4) != '\0') {
    iVar18 = *(int *)(param_1 + 0x994);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    iVar18 = *(int *)(param_1 + 0x99c);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    iVar18 = *(int *)(param_1 + 0x998);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    iVar18 = *(int *)(param_1 + 0x9a0);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    iVar18 = *(int *)(param_1 + 0x9a4);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    iVar18 = *(int *)(param_1 + 0x9a8);
    *(undefined4 *)(iVar18 + 0x14) = 0;
    *(undefined4 *)(iVar18 + 0x18) = 0;
    *(undefined1 *)(iVar18 + 0x1c) = 0;
    return;
  }
  local_58[0] = *DAT_002f3b08;
  local_58[1] = DAT_002f3b08[1];
  local_58[2] = DAT_002f3b08[2];
  local_58[3] = DAT_002f3b08[3];
  local_58[4] = DAT_002f3b08[4];
  local_58[5] = DAT_002f3b08[5];
  puVar12 = (undefined4 *)FUN_0035010c(4);
  if (puVar12 != (undefined4 *)0x0) {
    *puVar12 = DAT_002f3b0c;
  }
  *(undefined4 **)(param_1 + 0x30) = puVar12;
  iVar18 = FUN_0035010c(0x1c4);
  uVar13 = 0;
  if (iVar18 != 0) {
    uVar13 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar13;
  FUN_002e76b8(uVar13,*(undefined4 *)(param_1 + 0x30),0x100,0x100,0x100);
  uVar20 = DAT_002f3b28;
  fVar3 = DAT_002f3b24;
  uVar13 = DAT_002f3b20;
  fVar2 = DAT_002f3b1c;
  iVar18 = DAT_002f3b18;
  puVar1 = DAT_002f3b14;
  puVar12 = DAT_002f3b10;
  iVar24 = 0;
  do {
    FUN_003446e8(uVar13,*(undefined4 *)(param_1 + 0x34),local_58[iVar24],0xffffff70,0,0x120);
    iVar14 = (**(code **)(*(int *)*DAT_002f3b30 + 0xc))
                       ((int *)*DAT_002f3b30,0x1b8,DAT_002f3b2c,0x51);
    uVar15 = 0;
    if (iVar14 != 0) {
      uVar15 = FUN_00348f34(iVar14,param_1 + iVar24 * 0x118 + 0x38);
    }
    uVar4 = DAT_002f3b2c;
    iVar22 = param_1 + iVar24 * 4;
    *(undefined4 *)(iVar22 + 0x6c8) = uVar15;
    piVar16 = (int *)*puVar12;
    iVar14 = (**(code **)(*piVar16 + 0xc))(piVar16,0x54,uVar4,0x52);
    if (iVar14 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_002ffa20();
    }
    *(undefined4 *)(iVar22 + 0x6e0) = uVar15;
    FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar15,0);
    FUN_00348a64(*(undefined4 *)(iVar22 + 0x6c8),0,*(undefined4 *)(iVar22 + 0x6e0),DAT_002f3b38,
                 DAT_002f3b38);
    iVar23 = param_1 + iVar24 * 8;
    iVar14 = 0;
    do {
      if (((*puVar1 & 1) == 0) && (iVar17 = FUN_003679b4(DAT_002f3b14), iVar17 != 0)) {
        FUN_0036788c(DAT_002f3b3c);
      }
      iVar17 = BoardModelFactory_0034897c
                         (*(undefined4 *)(iVar18 + 0x47c),*(undefined4 *)(iVar22 + 0x6c8),0);
      *(int *)(iVar23 + iVar14 * 4 + 0x6f8) = iVar17;
      fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      iVar21 = iVar14 + 1;
      fVar27 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar17 + 0x3c) = fVar26 + fVar3;
      *(float *)(iVar17 + 0x40) = fVar27 + fVar2;
      *(undefined4 *)(iVar17 + 0x44) = uVar13;
      iVar14 = iVar21;
    } while (iVar21 < 2);
    iVar24 = iVar24 + 1;
    iVar14 = *(int *)(iVar23 + 0x6fc);
    *(undefined4 *)(iVar14 + 0xf0) = uVar13;
    *(undefined4 *)(iVar14 + 0xf4) = uVar13;
    *(undefined4 *)(iVar14 + 0xf8) = uVar13;
    *(undefined4 *)(iVar14 + 0xfc) = uVar20;
  } while (iVar24 < 6);
  auStack_80[0] = *DAT_002f3b48;
  auStack_80[1] = DAT_002f3b48[1];
  auStack_80[2] = DAT_002f3b48[2];
  auStack_80[3] = DAT_002f3b48[3];
  uStack_70 = DAT_002f3b48[4];
  uStack_6c = DAT_002f3b48[5];
  uStack_68 = DAT_002f3b48[6];
  uStack_64 = DAT_002f3b48[7];
  uStack_60 = DAT_002f3b48[8];
  uStack_5c = DAT_002f3b48[9];
  if (((*puVar1 & 1) == 0) && (iVar18 = FUN_003679b4(DAT_002f3b14), iVar18 != 0)) {
    FUN_0036788c(DAT_002f3b3c);
  }
  uVar15 = DAT_002f3b50;
  iVar18 = *(int *)(DAT_002f3b4c + 0xf3c);
  if ((undefined4 *)(param_1 + 0x728) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined4 *)(param_1 + 0x728) = uVar15;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined1 *)(param_1 + 0x734) = 0;
  }
  piVar16 = (int *)*puVar12;
  uVar28 = (**(code **)(*piVar16 + 0xc))(piVar16,0x54,DAT_002f3b2c,0x71);
  uVar29 = uVar28 & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    uVar29 = FUN_002ffa20();
  }
  uVar19 = (uint)(uVar29 >> 0x20);
  *(int *)(param_1 + 0x738) = (int)uVar29;
  uVar15 = auStack_80[iVar18];
  bVar25 = *(int *)(param_1 + 0x72c) != 0;
  if (bVar25) {
    uVar19 = (uint)*(byte *)(param_1 + 0x734);
  }
  if (bVar25 && uVar19 != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined1 *)(param_1 + 0x734) = 0;
  iVar18 = FUN_00301300(uVar15,0,0,0);
  FUN_0031b9c0(iVar18,1);
  iVar24 = *(int *)(iVar18 + 4);
  *(int *)(param_1 + 0x730) = iVar24;
  if (iVar24 != 0) {
    iVar24 = thunk_FUN_0035010c(*(undefined4 *)(param_1 + 0x730),0x9c00000);
    *(int *)(param_1 + 0x72c) = iVar24;
    if (iVar24 != 0) {
      uVar15 = FUN_00303ea8(iVar18);
      FUN_0034338c(*(undefined4 *)(param_1 + 0x72c),uVar15,*(undefined4 *)(param_1 + 0x730));
      FUN_00301260(iVar18);
      FUN_0031b99c(iVar18);
      *(undefined1 *)(param_1 + 0x734) = 1;
      goto LAB_002f3b84;
    }
  }
  FUN_00301260(iVar18);
  FUN_0031b99c(iVar18);
LAB_002f3b84:
  FUN_002ff8e0(*(undefined4 *)(param_1 + 0x738),*(undefined4 *)(param_1 + 0x72c),0);
  *(undefined4 *)(param_1 + 0x20) = uVar13;
  *(undefined4 *)(param_1 + 0x24) = uVar13;
  *(undefined4 *)(param_1 + 0x28) = uVar13;
  uVar15 = DAT_002f3f80;
  *(undefined4 *)(param_1 + 0x2c) = uVar20;
  *(undefined4 *)(param_1 + 0x73c) = uVar15;
  uVar4 = DAT_002f3f88;
  uVar15 = DAT_002f3f84;
  *(undefined4 *)(param_1 + 0x740) = DAT_002f3f84;
  uVar5 = DAT_002f3f8c;
  *(undefined4 *)(param_1 + 0x744) = uVar4;
  *(undefined4 *)(param_1 + 0x748) = uVar5;
  uVar6 = DAT_002f3f90;
  *(undefined4 *)(param_1 + 0x74c) = uVar13;
  *(undefined4 *)(param_1 + 0x750) = uVar6;
  *(undefined4 *)(param_1 + 0x754) = uVar4;
  *(undefined4 *)(param_1 + 0x758) = uVar5;
  *(undefined4 *)(param_1 + 0x768) = uVar20;
  *(undefined4 *)(param_1 + 0x76c) = uVar20;
  uVar4 = DAT_002f3f94;
  *(undefined4 *)(param_1 + 0x770) = uVar20;
  uVar5 = DAT_002f3fa4;
  *(undefined4 *)(param_1 + 0x774) = uVar20;
  *(undefined4 *)(param_1 + 0x75c) = uVar4;
  *(undefined4 *)(param_1 + 0x760) = DAT_002f3f98;
  *(undefined4 *)(param_1 + 0x764) = uVar20;
  uVar4 = DAT_002f3f9c;
  *(undefined4 *)(param_1 + 0x778) = uVar13;
  *(undefined4 *)(param_1 + 0x77c) = uVar4;
  uVar4 = DAT_002f3fa0;
  *(undefined4 *)(param_1 + 0x780) = uVar6;
  *(undefined4 *)(param_1 + 0x784) = uVar4;
  *(undefined4 *)(param_1 + 0x788) = uVar5;
  *(undefined4 *)(param_1 + 0x78c) = uVar4;
  *(undefined4 *)(param_1 + 0x790) = uVar6;
  *(undefined4 *)(param_1 + 0x794) = uVar4;
  *(undefined4 *)(param_1 + 0x7a4) = uVar20;
  *(undefined4 *)(param_1 + 0x7a8) = uVar20;
  *(undefined4 *)(param_1 + 0x7ac) = uVar20;
  uVar5 = DAT_002f3fa8;
  *(undefined4 *)(param_1 + 0x7b0) = uVar20;
  *(undefined4 *)(param_1 + 0x798) = uVar5;
  *(undefined4 *)(param_1 + 0x79c) = DAT_002f3fac;
  *(undefined4 *)(param_1 + 0x7a0) = uVar20;
  uVar5 = DAT_002f3fb0;
  *(undefined4 *)(param_1 + 0x7b4) = uVar13;
  *(undefined4 *)(param_1 + 0x7b8) = uVar5;
  *(undefined4 *)(param_1 + 0x7bc) = uVar6;
  uVar5 = DAT_002f3fa4;
  *(undefined4 *)(param_1 + 0x7c0) = uVar4;
  *(undefined4 *)(param_1 + 0x7c4) = uVar5;
  *(undefined4 *)(param_1 + 0x7c8) = uVar13;
  *(undefined4 *)(param_1 + 0x7cc) = uVar6;
  *(undefined4 *)(param_1 + 2000) = uVar4;
  *(undefined4 *)(param_1 + 0x7e0) = uVar20;
  *(undefined4 *)(param_1 + 0x7e4) = uVar20;
  *(undefined4 *)(param_1 + 0x7e8) = uVar20;
  uVar4 = DAT_002f3fa8;
  *(undefined4 *)(param_1 + 0x7ec) = uVar13;
  *(undefined4 *)(param_1 + 0x7d4) = uVar4;
  uVar5 = DAT_002f3fb8;
  *(undefined4 *)(param_1 + 0x7d8) = DAT_002f3fac;
  uVar4 = DAT_002f3fb4;
  *(undefined4 *)(param_1 + 0x7dc) = uVar20;
  *(undefined4 *)(param_1 + 0x7f0) = uVar4;
  uVar4 = DAT_002f3fbc;
  *(undefined4 *)(param_1 + 0x7f4) = uVar5;
  uVar7 = DAT_002f3fc0;
  *(undefined4 *)(param_1 + 0x7f8) = uVar4;
  *(undefined4 *)(param_1 + 0x7fc) = uVar7;
  uVar9 = DAT_002f3fc8;
  uVar8 = DAT_002f3fc4;
  *(undefined4 *)(param_1 + 0x800) = DAT_002f3fc4;
  *(undefined4 *)(param_1 + 0x804) = uVar9;
  *(undefined4 *)(param_1 + 0x808) = uVar4;
  *(undefined4 *)(param_1 + 0x80c) = uVar7;
  *(undefined4 *)(param_1 + 0x81c) = uVar20;
  *(undefined4 *)(param_1 + 0x820) = uVar20;
  uVar10 = DAT_002f3fcc;
  *(undefined4 *)(param_1 + 0x824) = uVar20;
  uVar11 = DAT_002f3fd0;
  *(undefined4 *)(param_1 + 0x828) = uVar20;
  *(undefined4 *)(param_1 + 0x810) = uVar10;
  *(undefined4 *)(param_1 + 0x814) = uVar15;
  *(undefined4 *)(param_1 + 0x818) = uVar20;
  *(undefined4 *)(param_1 + 0x82c) = uVar11;
  *(undefined4 *)(param_1 + 0x830) = uVar5;
  *(undefined4 *)(param_1 + 0x834) = uVar4;
  *(undefined4 *)(param_1 + 0x838) = uVar7;
  *(undefined4 *)(param_1 + 0x83c) = uVar8;
  *(undefined4 *)(param_1 + 0x840) = uVar6;
  *(undefined4 *)(param_1 + 0x844) = uVar4;
  *(undefined4 *)(param_1 + 0x848) = uVar7;
  *(undefined4 *)(param_1 + 0x858) = uVar20;
  *(undefined4 *)(param_1 + 0x85c) = uVar20;
  *(undefined4 *)(param_1 + 0x860) = uVar20;
  *(undefined4 *)(param_1 + 0x864) = uVar20;
  *(undefined4 *)(param_1 + 0x84c) = uVar10;
  *(undefined4 *)(param_1 + 0x850) = uVar15;
  uVar6 = DAT_002f3fd0;
  *(undefined4 *)(param_1 + 0x854) = uVar20;
  *(undefined4 *)(param_1 + 0x868) = uVar6;
  *(undefined4 *)(param_1 + 0x86c) = uVar5;
  *(undefined4 *)(param_1 + 0x870) = uVar4;
  *(undefined4 *)(param_1 + 0x874) = uVar7;
  *(undefined4 *)(param_1 + 0x878) = uVar8;
  *(undefined4 *)(param_1 + 0x87c) = uVar9;
  *(undefined4 *)(param_1 + 0x880) = uVar4;
  *(undefined4 *)(param_1 + 0x884) = uVar7;
  *(undefined4 *)(param_1 + 0x894) = uVar20;
  *(undefined4 *)(param_1 + 0x898) = uVar20;
  *(undefined4 *)(param_1 + 0x89c) = uVar20;
  *(undefined4 *)(param_1 + 0x8a0) = uVar20;
  *(undefined4 *)(param_1 + 0x888) = uVar10;
  *(undefined4 *)(param_1 + 0x88c) = uVar15;
  uVar15 = DAT_002f3fb4;
  *(undefined4 *)(param_1 + 0x890) = uVar20;
  *(undefined4 *)(param_1 + 0x8a4) = uVar15;
  uVar6 = DAT_002f3fbc;
  uVar5 = DAT_002f3fb8;
  *(undefined4 *)(param_1 + 0x8a8) = DAT_002f3fb8;
  uVar7 = DAT_002f3fc0;
  *(undefined4 *)(param_1 + 0x8ac) = uVar6;
  uVar8 = DAT_002f3fc4;
  *(undefined4 *)(param_1 + 0x8b0) = uVar7;
  uVar4 = DAT_002f3f90;
  *(undefined4 *)(param_1 + 0x8b4) = uVar8;
  *(undefined4 *)(param_1 + 0x8b8) = uVar4;
  *(undefined4 *)(param_1 + 0x8bc) = uVar6;
  *(undefined4 *)(param_1 + 0x8c0) = uVar7;
  *(undefined4 *)(param_1 + 0x8d0) = uVar20;
  *(undefined4 *)(param_1 + 0x8d4) = uVar20;
  uVar9 = DAT_002f3fd0;
  *(undefined4 *)(param_1 + 0x8d8) = uVar20;
  uVar15 = DAT_002f3f84;
  *(undefined4 *)(param_1 + 0x8dc) = uVar20;
  *(undefined4 *)(param_1 + 0x8c4) = uVar10;
  *(undefined4 *)(param_1 + 0x8c8) = uVar15;
  *(undefined4 *)(param_1 + 0x8cc) = uVar20;
  *(undefined4 *)(param_1 + 0x8e0) = uVar9;
  *(undefined4 *)(param_1 + 0x8e4) = uVar5;
  *(undefined4 *)(param_1 + 0x8e8) = uVar6;
  *(undefined4 *)(param_1 + 0x8ec) = uVar7;
  uVar5 = DAT_002f3fd4;
  *(undefined4 *)(param_1 + 0x8f0) = uVar8;
  *(undefined4 *)(param_1 + 0x8f4) = uVar5;
  *(undefined4 *)(param_1 + 0x8f8) = uVar6;
  *(undefined4 *)(param_1 + 0x8fc) = uVar7;
  *(undefined4 *)(param_1 + 0x90c) = uVar20;
  *(undefined4 *)(param_1 + 0x910) = uVar20;
  uVar5 = DAT_002f3fd8;
  *(undefined4 *)(param_1 + 0x914) = uVar20;
  *(undefined4 *)(param_1 + 0x918) = uVar13;
  *(undefined4 *)(param_1 + 0x900) = uVar10;
  *(undefined4 *)(param_1 + 0x904) = uVar15;
  *(undefined4 *)(param_1 + 0x908) = uVar20;
  *(float *)(param_1 + 0x91c) = fVar3;
  uVar13 = DAT_002f3f94;
  *(undefined4 *)(param_1 + 0x920) = uVar5;
  uVar15 = DAT_002f3fdc;
  *(undefined4 *)(param_1 + 0x924) = uVar13;
  uVar6 = DAT_002f3fe0;
  *(undefined4 *)(param_1 + 0x928) = uVar15;
  uVar7 = DAT_002f3fe4;
  *(undefined4 *)(param_1 + 0x92c) = uVar6;
  *(undefined4 *)(param_1 + 0x930) = uVar7;
  *(undefined4 *)(param_1 + 0x934) = uVar13;
  *(undefined4 *)(param_1 + 0x938) = uVar15;
  *(undefined4 *)(param_1 + 0x948) = uVar20;
  *(undefined4 *)(param_1 + 0x94c) = uVar20;
  *(undefined4 *)(param_1 + 0x950) = uVar20;
  *(undefined4 *)(param_1 + 0x954) = uVar20;
  uVar7 = DAT_002f3fe8;
  *(undefined4 *)(param_1 + 0x93c) = uVar4;
  *(undefined4 *)(param_1 + 0x940) = uVar7;
  *(undefined4 *)(param_1 + 0x944) = uVar20;
  *(float *)(param_1 + 0x958) = fVar3;
  *(undefined4 *)(param_1 + 0x95c) = uVar5;
  *(undefined4 *)(param_1 + 0x960) = uVar13;
  *(undefined4 *)(param_1 + 0x964) = uVar15;
  uVar5 = DAT_002f3fec;
  *(undefined4 *)(param_1 + 0x968) = uVar6;
  *(undefined4 *)(param_1 + 0x96c) = uVar5;
  *(undefined4 *)(param_1 + 0x970) = uVar13;
  *(undefined4 *)(param_1 + 0x974) = uVar15;
  *(undefined4 *)(param_1 + 0x984) = uVar20;
  *(undefined4 *)(param_1 + 0x988) = uVar20;
  *(undefined4 *)(param_1 + 0x98c) = uVar20;
  *(undefined4 *)(param_1 + 0x990) = uVar20;
  *(undefined4 *)(param_1 + 0x978) = uVar4;
  *(undefined4 *)(param_1 + 0x97c) = uVar7;
  *(undefined4 *)(param_1 + 0x980) = uVar20;
  puVar12 = (undefined4 *)FUN_00313ce0(0x20,local_40);
  uVar13 = DAT_002f41ec;
  if (puVar12 != (undefined4 *)0x0) {
    uVar20 = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x7b4;
    puVar12[3] = uVar20;
    puVar12[1] = param_1 + 0x778;
    *puVar12 = uVar13;
    *(undefined1 *)(puVar12 + 4) = 6;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
  }
  *(undefined4 **)(param_1 + 0x994) = puVar12;
  puVar12 = (undefined4 *)FUN_00313ce0(0x20,local_40);
  if (puVar12 != (undefined4 *)0x0) {
    uVar20 = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x8e0;
    puVar12[3] = uVar20;
    puVar12[1] = param_1 + 0x7f0;
    *puVar12 = uVar13;
    *(undefined1 *)(puVar12 + 4) = 6;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
  }
  *(undefined4 **)(param_1 + 0x99c) = puVar12;
  puVar12 = (undefined4 *)FUN_00313ce0(0x20,local_40);
  if (puVar12 != (undefined4 *)0x0) {
    puVar12[3] = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x8e0;
    puVar12[1] = param_1 + 0x82c;
    *puVar12 = uVar13;
    *(undefined1 *)(puVar12 + 4) = 6;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
  }
  *(undefined4 **)(param_1 + 0x998) = puVar12;
  puVar12 = (undefined4 *)FUN_00313ce0(0x20,local_40);
  if (puVar12 != (undefined4 *)0x0) {
    uVar20 = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x8e0;
    puVar12[3] = uVar20;
    puVar12[1] = param_1 + 0x868;
    *puVar12 = uVar13;
    *(undefined1 *)(puVar12 + 4) = 6;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
  }
  *(undefined4 **)(param_1 + 0x9a0) = puVar12;
  puVar12 = (undefined4 *)FUN_00313ce0(0x20,local_40);
  if (puVar12 != (undefined4 *)0x0) {
    uVar20 = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x8e0;
    puVar12[3] = uVar20;
    puVar12[1] = param_1 + 0x8a4;
    *puVar12 = uVar13;
    *(undefined1 *)(puVar12 + 4) = 6;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
  }
  *(undefined4 **)(param_1 + 0x9a4) = puVar12;
  puVar12 = (undefined4 *)FUN_00313ce0(0x24,local_40);
  if (puVar12 != (undefined4 *)0x0) {
    uVar13 = *(undefined4 *)(param_1 + 0x738);
    puVar12[2] = param_1 + 0x958;
    puVar12[3] = uVar13;
    puVar12[1] = param_1 + 0x91c;
    *(undefined1 *)(puVar12 + 4) = 6;
    uVar13 = DAT_002f41f0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    uVar20 = DAT_002f41f4;
    *(undefined1 *)(puVar12 + 7) = 0;
    *puVar12 = uVar13;
    puVar12[8] = uVar20;
  }
  *(undefined4 **)(param_1 + 0x9a8) = puVar12;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}
