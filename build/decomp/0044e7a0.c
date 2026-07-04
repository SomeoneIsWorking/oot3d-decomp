// OoT3D decomp @ 0044e7a0  name=FUN_0044e7a0  size=1972

void FUN_0044e7a0(int param_1,int param_2,short *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint in_fpscr;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 unaff_d8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = puRam0044ec90;
  uStack_2c = (undefined4)unaff_d8;
  uStack_28 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
  iVar5 = iRam0044ec8c + *(short *)(param_1 + 0x104) * 0x1c;
  if (((*puRam0044ec90 & 1) == 0) && (iVar6 = FUN_003679b4(puRam0044ec90), iVar6 != 0)) {
    FUN_0036788c(iRam0044ec94);
  }
  FUN_00464488(uRam0044eca0,param_1);
  FUN_00343280(param_2,0x20c);
  FUN_0045fe74();
  iVar6 = iRam0044eca8;
  iVar11 = 0;
  iVar7 = iRam0044eca4;
  do {
    *(undefined4 *)(iVar7 + 0x10) = 0;
    iVar11 = iVar11 + 1;
    *(undefined1 *)(iVar7 + 0x1e) = 0;
    iVar7 = iVar7 + 0x20;
  } while (iVar11 < iVar6);
  *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(iVar5 + 0xec);
  *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(iVar5 + 0xf0);
  *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(iVar5 + 0xf4);
  *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(iVar5 + 0xf8);
  *(undefined2 *)(param_2 + 0x1d6) = 0;
  *(undefined2 *)(param_2 + 0x1d2) = 0;
  *(undefined2 *)(param_2 + 0x1d4) = 0;
  *(undefined1 *)(param_2 + 0x1d1) = 0;
  *(undefined1 *)(param_2 + 0x1d0) = 0;
  *(undefined4 *)(param_2 + 0x1dc) = 0;
  uStack_3c = 1;
  uVar18 = VectorSignedToFloat((int)param_3[3],(byte)(in_fpscr >> 0x15) & 3);
  uVar17 = VectorSignedToFloat((int)param_3[2],(byte)(in_fpscr >> 0x15) & 3);
  uVar16 = VectorSignedToFloat((int)param_3[1],(byte)(in_fpscr >> 0x15) & 3);
  FUN_003738d0(uVar16,uVar17,uVar18,param_2,param_1,(int)*param_3,(int)param_3[4],(int)param_3[5],
               (int)param_3[6],(int)param_3[7]);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x114) = 0;
  *(undefined4 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  uVar16 = uRam0044ecac;
  *(undefined4 *)(param_2 + 0xa4) = 0;
  *(undefined1 *)(param_2 + 0xbb) = 0;
  *(undefined4 *)(param_2 + 0xac) = uVar16;
  *(undefined1 *)(param_2 + 0xc4) = 0;
  puVar13 = (undefined4 *)(param_2 + 0x6c);
  *(undefined1 *)(param_2 + 0xbc) = 1;
  uVar8 = FUN_00363c10(param_1 + 0x3a58,1);
  if (((uVar8 & 0xff) < 0x13) &&
     (iVar6 = param_1 + (uVar8 & 0xff) * 0x80, *(int *)(iRam0044ecb0 + iVar6) != 0)) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = iVar6 + 0x10;
  *(int *)(param_2 + 0x18c) = iVar6;
  uVar17 = FUN_00358ef8(iVar6,0x2d);
  *(undefined4 *)(param_2 + 0x184) = uVar17;
  if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(puRam0044ec90), iVar7 != 0)) {
    FUN_0036788c(iRam0044ec94);
  }
  uVar17 = (**(code **)(**(int **)(iRam0044ec94 + 0x17c) + 8))
                     (*(int **)(iRam0044ec94 + 0x17c),*(undefined4 *)(param_2 + 0x184),0);
  *(undefined4 *)(param_2 + 0x11c) = uVar17;
  uVar17 = FUN_00358ef8(iVar6,0x2e);
  if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(puRam0044ec90), iVar7 != 0)) {
    FUN_0036788c(iRam0044ec94);
  }
  uVar17 = (**(code **)(**(int **)(iRam0044ec94 + 0x17c) + 8))
                     (*(int **)(iRam0044ec94 + 0x17c),uVar17,0);
  *(undefined4 *)(param_2 + 0x150) = uVar17;
  FUN_0047d548(*(undefined4 *)(param_2 + 0x11c),2);
  *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x11c) + 0xc) + 0x10) = 1;
  FUN_0047d548(*(undefined4 *)(param_2 + 0x150),2);
  *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x150) + 0xc) + 0x10) = 1;
  uVar17 = FUN_00358ef8(iVar6,0x2b);
  *(undefined4 *)(param_2 + 0x188) = uVar17;
  uStack_30 = FUN_00358ef8(iVar6,0x2c);
  uVar17 = uRam0044ecb4;
  iVar6 = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(puRam0044ec90), iVar7 != 0)) {
      FUN_0036788c(iRam0044ec94);
    }
    uVar18 = (**(code **)(**(int **)(iRam0044ec94 + 0x17c) + 8))
                       (*(int **)(iRam0044ec94 + 0x17c),*(undefined4 *)(param_2 + 0x188),0);
    puVar13[iVar6 + 0x2d] = uVar18;
    FUN_0047d548(uVar18,2);
    *(undefined1 *)(*(int *)(puVar13[iVar6 + 0x2d] + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(puVar13[iVar6 + 0x2d] + 0xc) + 0xc) = uVar17;
    if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(puRam0044ec90), iVar7 != 0)) {
      FUN_0036788c(iRam0044ec94);
    }
    uVar18 = (**(code **)(**(int **)(iRam0044ec94 + 0x17c) + 8))
                       (*(int **)(iRam0044ec94 + 0x17c),uStack_30,0);
    puVar13[iVar6 + 0x3a] = uVar18;
    FUN_0047d548(uVar18,2);
    iVar7 = iVar6 + 1;
    *(undefined1 *)(*(int *)(puVar13[iVar6 + 0x3a] + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(puVar13[iVar6 + 0x3a] + 0xc) + 0xc) = uVar17;
    iVar6 = iVar7;
  } while (iVar7 < 0xc);
  *(undefined4 *)(param_2 + 400) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x194) = 0xffffffff;
  iVar6 = iRam0044ecb8;
  if (iVar5 != 0) {
    pbVar9 = (byte *)(iRam0044ecb8 + (uint)*(byte *)(iVar5 + 2) * 8);
    *puVar13 = *(undefined4 *)(iVar5 + 0x3c);
    *(float *)(param_2 + 0x70) =
         *(float *)(iVar5 + 0x40) + *(float *)(iVar5 + 0x50) * *(float *)(iVar5 + 0x58);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(iVar5 + 0x44);
    uVar17 = VectorUnsignedToFloat((uint)*pbVar9,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x84) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[1],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x88) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x8c) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[3],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x90) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[4],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x94) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[5],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x98) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[6],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x9c) = uVar17;
    uVar17 = VectorUnsignedToFloat((uint)pbVar9[7],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0xa0) = uVar17;
  }
  puVar14 = (undefined1 *)(iVar6 + (uint)*(byte *)(iVar5 + 2) * 8);
  uVar17 = *(undefined4 *)(param_1 + 0x1bc);
  uVar18 = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_2 + 0x7c) = uVar17;
  *(undefined4 *)(param_2 + 0x80) = uVar18;
  iVar5 = iRam0044ecbc;
  uVar17 = *(undefined4 *)(iRam0044ecbc + 4);
  *(undefined4 *)(param_2 + 0xb0) = uVar17;
  *(undefined4 *)(param_2 + 0xb4) = uVar17;
  *(char *)(param_2 + 0xc5) = (char)*(undefined4 *)(iVar5 + 0x18);
  *(undefined1 *)(param_2 + 0xbd) = 0;
  *(undefined2 *)(param_2 + 0xb8) = 0x100;
  uVar17 = *(undefined4 *)(iVar5 + 0x30);
  iVar6 = param_2 + 200;
  iVar7 = 0;
  do {
    uVar18 = *(undefined4 *)(param_2 + 0xb0);
    iVar12 = iVar7 + 1;
    puVar13[iVar7 * 6 + 0x17] = uVar16;
    puVar13[iVar7 * 6 + 0x18] = uVar16;
    puVar13[iVar7 * 6 + 0x19] = uVar16;
    puVar13[iVar7 * 6 + 0x1c] = uVar17;
    puVar13[iVar7 * 6 + 0x1a] = uVar18;
    *(undefined1 *)(iVar6 + 0x10) = *puVar14;
    *(undefined1 *)(iVar6 + 0x11) = puVar14[1];
    *(undefined1 *)(iVar6 + 0x12) = puVar14[2];
    iVar11 = iRam0044ec8c;
    iVar6 = iVar6 + 0x18;
    iVar7 = iVar12;
  } while (iVar12 < 3);
  if (*(int *)(iRam0044ec8c + 0xe98) == 0) {
    *(undefined1 *)(iRam0044ec8c + 0x153b) = 0;
    *(undefined4 *)(iVar11 + 0x1528) = uVar16;
    *(undefined4 *)(iVar11 + 0x152c) = uVar16;
    *(undefined4 *)(iVar11 + 0x1530) = uVar16;
  }
  else {
    *(undefined1 *)(iRam0044ec8c + 0x153b) = 0x28;
    uVar17 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0xe7c),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(iVar11 + 0x1528) = uVar17;
    uVar17 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0xe80),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(iVar11 + 0x152c) = uVar17;
    uVar17 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0xe84),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(iVar11 + 0x1530) = uVar17;
    *(short *)(iVar11 + 0x1534) = (short)*(undefined4 *)(iVar11 + 0xe88);
    *(short *)(iVar11 + 0x1536) = (short)*(undefined4 *)(iVar11 + 0xe8c);
    *(short *)(iVar11 + 0x1538) = (short)*(undefined4 *)(iVar11 + 0xe90);
    *(char *)(iVar11 + 0x153a) = (char)*(undefined4 *)(iVar11 + 0xe94);
    *(undefined4 *)(iVar11 + 0x153c) = *(undefined4 *)(iVar11 + 0xe9c);
    *(undefined4 *)(iVar11 + 0x1540) = *(undefined4 *)(iVar11 + 0xea0);
  }
  FUN_003591e4(*(undefined4 *)(iVar11 + 0x1528),*(float *)(iVar11 + 0x152c) + UNK_0044ef88,
               *(undefined4 *)(iVar11 + 0x1530),UNK_0044ef8c,0xff,0xff,0xff,0xffffffff,0);
  uVar17 = FUN_0034faa8(param_1,param_1 + 0xa70,UNK_0044ef8c);
  *(undefined4 *)(iVar5 + 0x90) = uVar17;
  *(undefined4 *)(iVar5 + 0x94) = 0;
  *(undefined4 *)(iVar5 + 0x98) = uVar16;
  uVar8 = FUN_00363c10(param_1 + 0x3a58,1);
  if (((uVar8 & 0xff) < 0x13) &&
     (iVar5 = param_1 + (uVar8 & 0xff) * 0x80, *(int *)(iRam0044ecb0 + iVar5) != 0)) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  uVar18 = FUN_00372c90(iVar5 + 0x10,2);
  iVar5 = (**(code **)(*(int *)*UNK_0044efc8 + 0xc))
                    ((int *)*UNK_0044efc8,0x1b8,s_d__home_queen_dailyBuild_game_us_0044ef90,
                     UNK_0044efcc);
  uVar17 = 0;
  if (iVar5 != 0) {
    uVar17 = FUN_00348f34(iVar5,UNK_0044efd0);
  }
  *(undefined4 *)(param_1 + 0x226c) = uVar17;
  FUN_00348be4();
  FUN_00348a64(*(undefined4 *)(param_1 + 0x226c),0,uVar18,UNK_0044efd8,UNK_0044efd8,UNK_0044efd4,
               UNK_0044efd4);
  iVar5 = UNK_0044efe8;
  uStack_34 = uVar16;
  uStack_3c = UNK_0044efdc;
  uStack_38 = UNK_0044efe0;
  iVar6 = 0;
  uStack_30 = UNK_0044efe4;
  do {
    if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(puRam0044ec90), iVar7 != 0)) {
      FUN_0036788c(iRam0044ec94);
    }
    iVar7 = FUN_0034897c(*(undefined4 *)(iVar5 + 0x47c),*(undefined4 *)(param_1 + 0x226c),0);
    iVar11 = param_1 + iVar6 * 4;
    *(int *)(iVar11 + 0x2270) = iVar7;
    *(undefined4 *)(iVar7 + 0x170) = 0;
    FUN_003429c8(*(undefined4 *)(iVar11 + 0x2270),1,&uStack_3c);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  uStack_30 = uStack_2c;
  uStack_2c = uStack_28;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  uVar8 = FUN_00363c10(param_1 + 0x3a58,1);
  if (((uVar8 & 0xff) < 0x13) &&
     (iVar5 = param_1 + (uVar8 & 0xff) * 0x80, *(int *)(DAT_00463400 + iVar5) != 0)) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  if (((*DAT_00463404 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00463404), iVar6 != 0)) {
    FUN_0036788c(DAT_00463408);
  }
  uVar4 = DAT_00463428;
  uVar3 = DAT_00463424;
  uVar2 = DAT_00463420;
  uVar18 = DAT_0046341c;
  uVar17 = DAT_00463418;
  uVar16 = DAT_00463414;
  piVar15 = *(int **)(DAT_00463408 + 0x17c);
  iVar6 = 0;
  do {
    uVar10 = FUN_00358ef8(iVar5 + 0x10,iVar6 + 0x60);
    iVar7 = (**(code **)(*piVar15 + 8))(piVar15,uVar10,0);
    iVar11 = param_1 + 0x208c + iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(int *)(iVar11 + 0x200) = iVar7;
    *(undefined4 *)(iVar7 + 0x24) = uVar16;
    *(undefined4 *)(iVar7 + 0x28) = uVar17;
    *(undefined4 *)(iVar7 + 0x2c) = uVar18;
    iVar7 = *(int *)(iVar11 + 0x200);
    *(undefined4 *)(iVar7 + 0x34) = uVar2;
    *(undefined4 *)(iVar7 + 0x38) = uVar2;
    *(undefined4 *)(iVar7 + 0x3c) = uVar3;
    iVar7 = *(int *)(iVar11 + 0x200);
    *(undefined4 *)(iVar7 + 0x40) = uVar4;
    *(undefined4 *)(iVar7 + 0x44) = uVar4;
    *(undefined4 *)(iVar7 + 0x48) = uVar4;
  } while (iVar6 < 3);
  uVar16 = FUN_00372f0c(iVar5 + 0x10,0x31);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x2294) + 0xc),uVar16);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2294) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2294) + 0xc) + 0xc) = uVar18;
  return;
}

