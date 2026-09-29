// OoT3D decomp @ 00418a58  name=FUN_00418a58  size=960

void FUN_00418a58(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined1 auStack_48c [524];
  undefined1 auStack_280 [256];
  undefined4 auStack_180 [4];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined2 *local_148;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  iVar4 = DAT_00418b08;
  puVar1 = DAT_00418b04;
  iVar7 = 8;
  DAT_00418b04[0xc] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x11] = 0xffffffff;
  puVar1[0x14] = 0xffffffff;
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar3 = 0;
  puVar1[2] = 0;
  do {
    *(undefined4 *)(iVar4 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar4 + 0x20 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar4 + 0x40 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar4 + 0x60 + iVar3 * 4) = 0;
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar7 != 0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  uVar5 = DAT_00418b0c;
  puVar1[0xb] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = uVar5;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x15] = 0;
  FUN_002fc748(0);
  local_20 = *(undefined4 *)(DAT_0041e5c0 + 0x24);
  local_1c = *(undefined4 *)(DAT_0041e5c0 + 0x28);
  local_28 = *(undefined4 *)(DAT_0041e5c0 + 0x2c);
  local_24 = *(undefined4 *)(DAT_0041e5c0 + 0x30);
  local_30 = 0;
  uStack_2c = 0;
  local_34 = DAT_0041e5c4;
  iVar4 = FUN_00313ce0(0x20,unaff_r4);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002fc694(DAT_0041e5c8,DAT_0041e5c8,iVar4,1);
  }
  iVar4 = DAT_0041e5cc;
  *(undefined4 *)(DAT_0041e5cc + 0x1c) = uVar5;
  FUN_002fc534(uVar5,&local_20,&local_28,1,0);
  FUN_002fc40c(*(undefined4 *)(iVar4 + 0x1c),&local_30,&local_28,1,0);
  FUN_002fcdec(*(undefined4 *)(iVar4 + 0x1c),&local_34,1,0);
  local_40 = 0;
  local_3e = 2;
  local_3c = 1;
  local_3a = 1;
  local_38 = 2;
  local_36 = 3;
  FUN_00371738(&local_158,DAT_0041e5d0,0x118);
  local_158 = FUN_002fc3fc(*(undefined4 *)(iVar4 + 0x1c),0);
  local_154 = FUN_002fc3f0(*(undefined4 *)(iVar4 + 0x1c),0);
  local_150 = FUN_002fc3e4(*(undefined4 *)(iVar4 + 0x1c),0);
  local_148 = &local_40;
  iVar3 = (**(code **)(*(int *)*DAT_0041e5d4 + 8))((int *)*DAT_0041e5d4,0x1b8);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = FUN_00348f34(iVar3,&local_158);
  }
  *(undefined4 *)(iVar4 + 0x10) = uVar5;
  puVar2 = DAT_0041e5dc;
  auStack_180[0] = *DAT_0041e5d8;
  auStack_180[1] = DAT_0041e5d8[1];
  auStack_180[2] = DAT_0041e5d8[2];
  auStack_180[3] = DAT_0041e5d8[3];
  uStack_170 = DAT_0041e5d8[4];
  uStack_16c = DAT_0041e5d8[5];
  uStack_168 = DAT_0041e5d8[6];
  uStack_164 = DAT_0041e5d8[7];
  uStack_160 = DAT_0041e5d8[8];
  uStack_15c = DAT_0041e5d8[9];
  if (((*DAT_0041e5dc & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0041e5dc), iVar3 != 0)) {
    FUN_0036788c(DAT_0041e5e0);
  }
  FUN_002fc3a8(auStack_280,s__smenu_top_map00_ctxb_0041e5f0,
               auStack_180[*(int *)(DAT_0041e5ec + 0xf3c)]);
  FUN_00324f44(auStack_48c,auStack_280,DAT_0041e608);
  uVar6 = FUN_00301300(auStack_48c,0,0);
  FUN_0031b9c0(uVar6,1);
  iVar3 = (**(code **)(*(int *)*DAT_0041e60c + 8))((int *)*DAT_0041e60c,0x54);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = FUN_00303ea8(uVar6);
    uVar5 = FUN_003012b4(iVar3,uVar5,0);
  }
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  FUN_00303ea8(uVar6);
  FUN_0034fc6c();
  FUN_0031b99c(uVar6);
  FUN_00348a64(*(undefined4 *)(iVar4 + 0x10),0,*(undefined4 *)(iVar4 + 0xc),DAT_0041e614,
               DAT_0041e614,DAT_0041e610,DAT_0041e610);
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0041e5dc), iVar3 != 0)) {
    FUN_0036788c(DAT_0041e5e0);
  }
  iVar3 = BoardModelFactory_0034897c
                    (*(undefined4 *)(DAT_0041e618 + 0x47c),*(undefined4 *)(iVar4 + 0x10),0);
  *(int *)(iVar4 + 0x14) = iVar3;
  *(uint *)(iVar3 + 0x178) = *(uint *)(iVar3 + 0x178) | 2;
  return;
}
