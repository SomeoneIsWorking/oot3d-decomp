// OoT3D decomp @ 002d1e30  name=FUN_002d1e30  size=796

undefined4 * FUN_002d1e30(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  short *local_450;
  short local_348 [150];
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 local_210 [22];
  undefined1 auStack_1b8 [8];
  float local_1b0 [50];
  undefined1 auStack_e8 [200];
  
  FUN_00371738(auStack_e8,DAT_002d214c,200);
  FUN_00371738(local_1b0,DAT_002d2150,200);
  iVar7 = 0xc;
  puVar4 = auStack_1b8;
  do {
    iVar7 = iVar7 + -1;
    *(float *)(puVar4 + 8) = *(float *)(puVar4 + 8) + DAT_002d2154;
    *(float *)(puVar4 + 0xc) = *(float *)(puVar4 + 0xc) + DAT_002d2158;
    *(float *)(puVar4 + 0x10) = *(float *)(puVar4 + 0x10) + DAT_002d2154;
    *(float *)(puVar4 + 0x14) = *(float *)(puVar4 + 0x14) + DAT_002d2158;
    puVar4 = puVar4 + 0x10;
  } while (iVar7 != 0);
  param_1[3] = param_2;
  iVar7 = FUN_00313ce0(0x20);
  uVar5 = 0;
  if (iVar7 != 0) {
    uVar5 = FUN_002fc694(DAT_002d215c,DAT_002d215c,iVar7,0x19);
  }
  param_1[2] = uVar5;
  if (param_1[3] == 0) {
    FUN_002fc534(uVar5,auStack_e8,DAT_002d2160,0x19,0);
    uVar5 = param_1[2];
    iVar7 = DAT_002d2160 + 200;
  }
  else {
    FUN_002fc534(uVar5,local_1b0,DAT_002d2160,0x19,0);
    uVar5 = param_1[2];
    iVar7 = DAT_002d2160 + 400;
  }
  FUN_002fc40c(uVar5,iVar7,DAT_002d2160,0x19,0);
  local_214 = DAT_002d2164;
  iVar7 = 0xc;
  puVar6 = &local_214;
  do {
    puVar6[1] = DAT_002d2164;
    puVar6 = puVar6 + 2;
    iVar7 = iVar7 + -1;
    *puVar6 = DAT_002d2164;
  } while (iVar7 != 0);
  FUN_002fcdec(param_1[2],&local_214,0x19,0);
  local_21c = 0;
  uStack_218 = 0;
  iVar7 = 0;
  do {
    FUN_002f9430(param_1[2],&local_21c,1,iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x19);
  local_450 = local_348;
  sVar3 = 0;
  iVar7 = 0x19;
  psVar9 = local_450;
  do {
    *psVar9 = sVar3 << 2;
    sVar1 = sVar3 * 4 + 2;
    sVar2 = sVar3 * 4 + 1;
    psVar9[1] = sVar1;
    psVar9[2] = sVar2;
    psVar9[3] = sVar2;
    psVar9[4] = sVar1;
    psVar9[5] = sVar3 * 4 + 3;
    iVar7 = iVar7 + -1;
    psVar9 = psVar9 + 6;
    sVar3 = sVar3 + 1;
  } while (iVar7 != 0);
  FUN_00371738(&local_460,DAT_002d2168,0x118);
  local_460 = FUN_002fc3fc(param_1[2],0);
  local_45c = FUN_002fc3f0(param_1[2],0);
  local_458 = FUN_002fc3e4(param_1[2],0);
  iVar7 = (**(code **)(*(int *)*DAT_002d216c + 8))((int *)*DAT_002d216c,0x1b8);
  uVar5 = 0;
  if (iVar7 != 0) {
    uVar5 = FUN_00348f34(iVar7,&local_460);
  }
  *param_1 = uVar5;
  uVar5 = FUN_002e11d0(0xd);
  FUN_00348a64(*param_1,0,uVar5,DAT_002d2174,DAT_002d2174,DAT_002d2170,DAT_002d2170);
  if (((*DAT_002d2178 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002d2178), iVar7 != 0)) {
    FUN_0036788c(DAT_002d217c);
  }
  iVar7 = FUN_0034897c(*(undefined4 *)(DAT_002d2188 + 0x47c),*param_1,0);
  param_1[1] = iVar7;
  uVar5 = DAT_002d218c;
  uVar8 = *(uint *)(iVar7 + 0x178);
  *(uint *)(iVar7 + 0x178) = uVar8 | 0x10;
  *(uint *)(param_1[1] + 0x178) = uVar8 | 0x12;
  param_1[4] = uVar5;
  param_1[5] = 0;
  param_1[0x13] = 0;
  return param_1;
}

