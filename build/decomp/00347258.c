// OoT3D decomp @ 00347258  name=FUN_00347258  size=712

int FUN_00347258(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  
  uVar1 = DAT_00347520;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  iVar7 = FUN_00350820(param_1 + 0x22,uVar1,0x60,3);
  uVar2 = DAT_00347528;
  uVar1 = DAT_00347524;
  *(undefined4 *)(iVar7 + 0x120) = 0;
  *(undefined4 *)(iVar7 + 0x124) = uVar1;
  *(undefined4 *)(iVar7 + 0x128) = uVar2;
  *(undefined1 *)(iVar7 + 300) = 0;
  *(undefined1 *)(iVar7 + 0x12d) = 0;
  *(undefined1 *)(iVar7 + 0x12e) = 1;
  *(undefined1 *)(iVar7 + 0x130) = 0;
  *(undefined1 *)(iVar7 + 0x131) = 0;
  *(undefined1 *)(iVar7 + 0x132) = 1;
  *(undefined4 *)(iVar7 + 0x134) = 2;
  uVar2 = DAT_0034752c;
  *(undefined2 *)(iVar7 + 0x1a8) = 0;
  *(undefined4 *)(iVar7 + -0xc) = 0;
  *(undefined4 *)(iVar7 + -8) = 0;
  *(undefined4 *)(iVar7 + -4) = 0;
  *(undefined4 *)(iVar7 + -0x1c) = uVar2;
  uVar3 = DAT_00347530;
  *(undefined4 *)(iVar7 + -0x18) = uVar2;
  uVar6 = DAT_0034753c;
  uVar5 = DAT_00347538;
  uVar4 = DAT_00347534;
  *(undefined4 *)(iVar7 + -0x14) = uVar3;
  iVar10 = 0;
  do {
    iVar8 = iVar7 + -0x88 + iVar10 * 0x60;
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar8 + 0x90) = uVar4;
    *(undefined4 *)(iVar8 + 0x8c) = uVar4;
    *(undefined4 *)(iVar8 + 0x88) = uVar4;
    *(undefined4 *)(iVar8 + 0x94) = uVar1;
    *(undefined4 *)(iVar8 + 0xa0) = uVar5;
    *(undefined4 *)(iVar8 + 0x9c) = uVar5;
    *(undefined4 *)(iVar8 + 0x98) = uVar5;
    *(undefined4 *)(iVar8 + 0xa4) = uVar1;
    *(undefined4 *)(iVar8 + 0xb0) = uVar1;
    *(undefined4 *)(iVar8 + 0xac) = uVar1;
    *(undefined4 *)(iVar8 + 0xa8) = uVar1;
    *(undefined4 *)(iVar8 + 0xb4) = uVar1;
    *(undefined4 *)(iVar8 + 0xc0) = uVar1;
    *(undefined4 *)(iVar8 + 0xbc) = uVar1;
    *(undefined4 *)(iVar8 + 0xb8) = uVar1;
    *(undefined4 *)(iVar8 + 0xc4) = uVar1;
    *(undefined4 *)(iVar8 + 0xd0) = uVar2;
    *(undefined4 *)(iVar8 + 200) = uVar2;
    *(undefined4 *)(iVar8 + 0xcc) = uVar6;
    *(undefined4 *)(iVar8 + 0xd4) = uVar2;
  } while (iVar10 < 3);
  puVar9 = (undefined4 *)(iVar7 + -0x70);
  puVar11 = (undefined4 *)(iVar7 + -0x74);
  puVar12 = (undefined4 *)(iVar7 + -0x78);
  puVar13 = (undefined4 *)(iVar7 + -0x7c);
  iVar10 = 6;
  puVar14 = (undefined1 *)(iVar7 + -0x84);
  do {
    iVar10 = iVar10 + -1;
    *puVar9 = uVar1;
    *puVar11 = uVar1;
    *puVar12 = uVar1;
    *puVar13 = uVar1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    puVar12 = puVar12 + 4;
    puVar13 = puVar13 + 4;
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  } while (iVar10 != 0);
  if (((*DAT_00347540 & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_00347540), puVar9 = DAT_00347544, iVar10 != 0)) {
    *DAT_00347544 = uVar1;
    puVar9[1] = uVar2;
    puVar9[2] = uVar2;
    puVar9[3] = uVar2;
    puVar9[4] = uVar2;
    puVar9[5] = uVar1;
    puVar9[6] = uVar2;
    puVar9[7] = uVar2;
    puVar9[8] = uVar2;
    puVar9[9] = uVar2;
    puVar9[10] = uVar1;
    puVar9[0xb] = uVar2;
    puVar9[0xc] = uVar2;
    puVar9[0xd] = uVar2;
    puVar9[0xe] = uVar2;
    puVar9[0xf] = uVar1;
  }
  FUN_00324744(iVar7 + 0x138,DAT_00347544);
  if (((*DAT_00347548 & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_00347548), puVar9 = DAT_0034754c, iVar10 != 0)) {
    *DAT_0034754c = uVar1;
    puVar9[1] = uVar2;
    puVar9[2] = uVar2;
    puVar9[3] = uVar2;
    puVar9[4] = uVar2;
    puVar9[5] = uVar1;
    puVar9[6] = uVar2;
    puVar9[7] = uVar2;
    puVar9[8] = uVar2;
    puVar9[9] = uVar2;
    puVar9[10] = uVar1;
    puVar9[0xb] = uVar2;
  }
  FUN_00372224(iVar7 + 0x178,DAT_0034754c);
  return iVar7 + -0x88;
}

