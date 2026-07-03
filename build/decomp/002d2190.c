// OoT3D decomp @ 002d2190  name=FUN_002d2190  size=532

undefined4 * FUN_002d2190(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  undefined4 local_1f8;
  undefined4 local_1f4;
  short *local_1e8;
  short local_e0 [96];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  param_1[3] = param_2;
  iVar2 = FUN_00313ce0(0x20);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002fc694(DAT_002d23a4,DAT_002d23a4,iVar2,0x10);
  }
  param_1[2] = uVar3;
  iVar2 = DAT_002d23a8;
  if (param_1[3] == 0) {
    iVar2 = DAT_002d23ac;
  }
  FUN_002fc534(uVar3,iVar2 + -0x100,iVar2,0x10,0);
  FUN_002fc40c(param_1[2],DAT_002d23ac + 0x100,DAT_002d23ac,0x10,0);
  local_20 = 0;
  uStack_1c = 0;
  iVar2 = 0;
  do {
    FUN_002f9430(param_1[2],&local_20,1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  psVar4 = local_e0;
  sVar5 = 0;
  iVar2 = 0x10;
  do {
    *psVar4 = sVar5 << 2;
    sVar1 = sVar5 * 4 + 2;
    sVar7 = sVar5 * 4 + 1;
    psVar4[1] = sVar1;
    psVar4[2] = sVar7;
    psVar4[3] = sVar7;
    psVar4[4] = sVar1;
    psVar4[5] = sVar5 * 4 + 3;
    iVar2 = iVar2 + -1;
    psVar4 = psVar4 + 6;
    sVar5 = sVar5 + 1;
  } while (iVar2 != 0);
  FUN_00371738(&local_1f8,DAT_002d23b0,0x118);
  local_1f8 = FUN_002fc3fc(param_1[2],0);
  local_1f4 = FUN_002fc3f0(param_1[2],0);
  local_1e8 = local_e0;
  iVar2 = (**(code **)(*(int *)*DAT_002d23b4 + 8))((int *)*DAT_002d23b4,0x1b8);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00348f34(iVar2,&local_1f8);
  }
  *param_1 = uVar3;
  uVar3 = FUN_002e11d0(8);
  FUN_00348a64(*param_1,0,uVar3,DAT_002d23bc,DAT_002d23bc,DAT_002d23b8,DAT_002d23b8);
  if (((*DAT_002d23c0 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002d23c0), iVar2 != 0)) {
    FUN_0036788c(DAT_002d23c4);
  }
  iVar2 = FUN_0034897c(*(undefined4 *)(DAT_002d23d0 + 0x47c),*param_1,0);
  param_1[1] = iVar2;
  uVar6 = *(uint *)(iVar2 + 0x178);
  *(uint *)(iVar2 + 0x178) = uVar6 | 0x10;
  *(uint *)(param_1[1] + 0x178) = uVar6 | 0x12;
  return param_1;
}

