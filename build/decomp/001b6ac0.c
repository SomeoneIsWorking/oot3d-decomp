// OoT3D decomp @ 001b6ac0  name=FUN_001b6ac0  size=648

void FUN_001b6ac0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  int iStack_2c;
  undefined4 local_28;

  local_ec = 0;
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_0035e240(param_1 + 0x1e4,param_1 + 0x148,0,DAT_001b6d48,param_1);
  if (*(short *)(param_1 + 0x1c) != 0) {
    local_98[0] = *DAT_001b6d4c;
    local_98[1] = DAT_001b6d4c[1];
    local_98[2] = DAT_001b6d4c[2];
    local_98[3] = DAT_001b6d4c[3];
    uStack_88 = DAT_001b6d4c[4];
    uStack_84 = DAT_001b6d4c[5];
    uStack_80 = DAT_001b6d4c[6];
    uStack_7c = DAT_001b6d4c[7];
    uStack_78 = DAT_001b6d4c[8];
    local_bc[0] = DAT_001b6d4c[9];
    local_bc[1] = DAT_001b6d4c[10];
    local_bc[2] = DAT_001b6d4c[0xb];
    local_bc[3] = DAT_001b6d4c[0xc];
    uStack_ac = DAT_001b6d4c[0xd];
    uStack_a8 = DAT_001b6d4c[0xe];
    uStack_a4 = DAT_001b6d4c[0xf];
    uStack_a0 = DAT_001b6d4c[0x10];
    uStack_9c = DAT_001b6d4c[0x11];
    if (0 < *(short *)(DAT_001b6d50 + param_1)) {
      iVar1 = param_1 + 0x148;
      local_c8 = DAT_001b6d54;
      local_c4 = DAT_001b6d58;
      local_c0 = DAT_001b6d5c;
      local_d4 = DAT_001b6d60;
      local_d0 = DAT_001b6d58;
      local_dc = DAT_001b6d58;
      local_d8 = DAT_001b6d64;
      local_e8 = DAT_001b6d58;
      if (0 < *(short *)(param_1 + 0x1c)) {
        local_c8 = DAT_001b6d68;
        local_d4 = DAT_001b6d6c;
        local_c0 = DAT_001b6d70;
        local_d8 = DAT_001b6d74;
      }
      local_ec = local_d4;
      local_e4 = local_d8;
      local_e0 = local_c8;
      local_cc = local_c0;
      FUN_003735ac(param_1 + 0x9d8,iVar1,&local_c8);
      FUN_003735ac(param_1 + 0x9cc,iVar1,&local_d4);
      FUN_003735ac(param_1 + 0x9f0,iVar1,&local_e0);
      FUN_003735ac(param_1 + 0x9e4,iVar1,&local_ec);
      FUN_0035479c(param_1 + 0x98c,param_1 + 0x9cc,param_1 + 0x9d8,param_1 + 0x9e4,param_1 + 0x9f0);
    }
    iVar1 = 0;
    do {
      FUN_003735ac(auStack_50 + iVar1 * 0xc,param_1 + 0x148,local_98 + iVar1 * 3);
      FUN_003735ac(auStack_74 + iVar1 * 0xc,param_1 + 0x148,local_bc + iVar1 * 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    FUN_00362434(param_1 + 0xa0c,0,auStack_50,auStack_44,auStack_38);
    FUN_00362434(param_1 + 0xa0c,1,auStack_74,auStack_68,auStack_5c);
  }
  if (*(short *)(param_1 + 0x8f4) != 0) {
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    if (-1 < *(short *)(param_1 + 0x8f4)) {
      *(short *)(param_1 + 0x8f4) = *(short *)(param_1 + 0x8f4) + -1;
    }
    if (((int)*(short *)(param_1 + 0x8f4) & 5U) == 0) {
      local_e8 = 0xfa;
      local_e4 = 0xeb;
      local_e0 = 0xf5;
      local_dc = 0xff;
      uVar2 = DAT_001b6d78;
      if (*(short *)(param_1 + 0x1c) == 0) {
        uVar2 = DAT_001b6d7c;
      }
      local_ec = 0x96;
      FUN_00347d24(uVar2,local_28,param_1,
                   param_1 + ((int)*(short *)(param_1 + 0x8f4) >> 2) * 6 + 0x1a4,0x96,0x96);
    }
  }
  return;
}
