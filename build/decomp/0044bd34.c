// OoT3D decomp @ 0044bd34  name=FUN_0044bd34  size=1364

undefined4 * FUN_0044bd34(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 local_314;
  undefined4 local_310;
  undefined2 *local_304;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 *local_168;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  puVar1 = DAT_0044c190;
  local_34 = *DAT_0044c18c;
  local_30 = DAT_0044c18c[1];
  local_3c = DAT_0044c18c[2];
  local_38 = DAT_0044c18c[3];
  local_40 = DAT_0044c18c[5];
  local_44 = DAT_0044c18c[4];
  local_4c = 0;
  uStack_48 = 0;
  if (((*DAT_0044c190 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0044c190), iVar4 != 0)) {
    FUN_0036788c(DAT_0044c194);
  }
  iVar4 = DAT_0044c1a0;
  if ((*(int *)(DAT_0044c1a0 + 0xf3c) == 6 || *(int *)(DAT_0044c1a0 + 0xf3c) == 7) &&
     (*(short *)(param_2 + 0x104) == 0x60 || *(short *)(param_2 + 0x104) == 0x61)) {
    local_34 = DAT_0044c1a4;
    local_30 = DAT_0044c1a8;
    local_3c = DAT_0044c1ac;
    local_38 = DAT_0044c1b0;
  }
  iVar5 = FUN_00313ce0(0x20,param_1);
  uVar8 = DAT_0044c1b4;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_002fc694(DAT_0044c1b4,DAT_0044c1b8,iVar5,1);
  }
  param_1[2] = uVar6;
  FUN_002fc534(uVar6,&local_34,&local_3c,1,0);
  FUN_002fc40c(param_1[2],&local_4c,&local_44,1,0);
  local_54 = 0;
  uStack_50 = 0;
  iVar5 = 0;
  do {
    FUN_002f9430(param_1[2],&local_54,1,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  local_60 = 0;
  local_5e = 2;
  local_5c = 1;
  local_5a = 1;
  local_58 = 2;
  local_56 = 3;
  FUN_00371738(&local_178,DAT_0044c1bc,0x118);
  local_178 = FUN_002fc3fc(param_1[2],0);
  local_174 = FUN_002fc3f0(param_1[2],0);
  puVar2 = DAT_0044c1c0;
  local_168 = &local_60;
  param_1[1] = 0;
  iVar5 = (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2,0x1b8);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_00348f34(iVar5,&local_178);
  }
  *param_1 = uVar6;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0044c190), iVar5 != 0)) {
    FUN_0036788c(DAT_0044c194);
  }
  iVar4 = ObjectBankArchive_00372c90(param_2 + 0x118,*(undefined4 *)(iVar4 + 0xf3c));
  uVar3 = DAT_0044c1c8;
  uVar6 = DAT_0044c1c4;
  if (iVar4 != 0) {
    FUN_00348a64(*param_1,0,iVar4,DAT_0044c1c8,DAT_0044c1c8,DAT_0044c1c4,DAT_0044c1c4);
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0044c190), iVar4 != 0)) {
      FUN_0036788c(DAT_0044c194);
    }
    iVar4 = DAT_0044c1cc;
    iVar5 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_0044c1cc + 0x47c),*param_1,0);
    param_1[1] = iVar5;
    uVar9 = *(uint *)(iVar5 + 0x178);
    *(uint *)(iVar5 + 0x178) = uVar9 | 0x10;
    *(uint *)(param_1[1] + 0x178) = uVar9 | 0x12;
    local_190 = *DAT_0044c1d0;
    uStack_18c = DAT_0044c1d0[1];
    uStack_188 = DAT_0044c1d0[2];
    uStack_184 = DAT_0044c1d0[3];
    uStack_180 = DAT_0044c1d0[4];
    uStack_17c = DAT_0044c1d0[5];
    local_1a8 = *DAT_0044c1d4;
    uStack_1a4 = DAT_0044c1d4[1];
    uStack_1a0 = DAT_0044c1d4[2];
    uStack_19c = DAT_0044c1d4[3];
    uStack_198 = DAT_0044c1d4[4];
    uStack_194 = DAT_0044c1d4[5];
    local_1c0 = *DAT_0044c1d8;
    uStack_1bc = DAT_0044c1d8[1];
    uStack_1b8 = DAT_0044c1d8[2];
    uStack_1b4 = DAT_0044c1d8[3];
    uStack_1b0 = DAT_0044c1d8[4];
    uStack_1ac = DAT_0044c1d8[5];
    local_1d8 = *DAT_0044c1dc;
    uStack_1d4 = DAT_0044c1dc[1];
    uStack_1d0 = DAT_0044c1dc[2];
    uStack_1cc = DAT_0044c1dc[3];
    uStack_1c8 = DAT_0044c1dc[4];
    uStack_1c4 = DAT_0044c1dc[5];
    iVar5 = FUN_00313ce0(0x20,param_1);
    uVar7 = 0;
    if (iVar5 != 0) {
      uVar7 = FUN_002fc694(uVar8,uVar8,iVar5,3);
    }
    param_1[5] = uVar7;
    FUN_002fc534(uVar7,&local_190,&local_1a8,3,0);
    FUN_002fc40c(param_1[5],&local_1d8,&local_1c0,3,0);
    iVar5 = 0;
    do {
      FUN_002f9430(param_1[5],&local_54,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    local_1fc = 0;
    local_1fa = 2;
    local_1f8 = 1;
    local_1f6 = 1;
    local_1f4 = 2;
    local_1f2 = 3;
    local_1f0 = 4;
    local_1ee = 6;
    local_1ec = 5;
    local_1ea = 5;
    local_1e8 = 6;
    local_1e6 = 7;
    local_1e4 = 8;
    local_1e2 = 10;
    local_1e0 = 9;
    local_1de = 9;
    local_1dc = 10;
    local_1da = 0xb;
    FUN_00371738(&local_314,DAT_0044c1e0,0x118);
    local_314 = FUN_002fc3fc(param_1[5],0);
    local_310 = FUN_002fc3f0(param_1[5],0);
    puVar2 = DAT_0044c1c0;
    local_304 = &local_1fc;
    param_1[4] = 0;
    iVar5 = (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2,0x1b8);
    uVar8 = 0;
    if (iVar5 != 0) {
      uVar8 = FUN_00348f34(iVar5,&local_314);
    }
    param_1[3] = uVar8;
    uVar8 = FUN_002e11d0(0xb);
    FUN_00348a64(param_1[3],0,uVar8,uVar3,uVar3,uVar6,uVar6);
    if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0044c190), iVar5 != 0)) {
      FUN_0036788c(DAT_0044c194);
    }
    iVar4 = BoardModelFactory_0034897c(*(undefined4 *)(iVar4 + 0x47c),param_1[3],0);
    param_1[4] = iVar4;
    uVar9 = *(uint *)(iVar4 + 0x178);
    *(uint *)(iVar4 + 0x178) = uVar9 | 0x10;
    *(uint *)(param_1[4] + 0x178) = uVar9 | 0x12;
    return param_1;
  }
  return param_1;
}
