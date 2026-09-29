// OoT3D decomp @ 003815f8  name=FUN_003815f8  size=1080

void FUN_003815f8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [12];

  uVar7 = DAT_003819a8;
  iVar6 = DAT_003819a4;
  if (((*(uint *)(DAT_003819a4 + 0x20) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003819a4 + 0x20), puVar3 = DAT_003819b0, uVar2 = DAT_003819ac,
     iVar4 != 0)) {
    *DAT_003819b0 = uVar7;
    puVar3[1] = uVar7;
    puVar3[2] = uVar2;
  }
  uVar2 = DAT_003819b4;
  if (((*(uint *)(iVar6 + 0x1c) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003819b8), puVar3 = DAT_003819bc, iVar4 != 0)) {
    *DAT_003819bc = uVar7;
    puVar3[1] = uVar2;
    puVar3[2] = uVar7;
  }
  if (((*(uint *)(iVar6 + 0x18) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003819c0), puVar3 = DAT_003819c4, iVar4 != 0)) {
    *DAT_003819c4 = uVar7;
    puVar3[1] = uVar2;
    puVar3[2] = uVar7;
  }
  if (((*(uint *)(iVar6 + 0x14) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003819c8), puVar3 = DAT_003819d0, uVar2 = DAT_003819cc, iVar4 != 0))
  {
    *DAT_003819d0 = uVar7;
    puVar3[1] = uVar7;
    puVar3[2] = uVar2;
  }
  if (((*(uint *)(iVar6 + 0x10) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003819d4), puVar3 = DAT_003819dc, uVar2 = DAT_003819d8, iVar4 != 0))
  {
    *DAT_003819dc = uVar7;
    puVar3[1] = uVar7;
    puVar3[2] = uVar2;
  }
  FUN_00372224(auStack_60,param_3);
  cVar1 = *(char *)(DAT_003819e4 + param_2);
  if (-1 < *(char *)(DAT_003819e0 + param_2)) {
    FUN_003735ac(param_4 + *(char *)(DAT_003819e0 + param_2) * 0xc + 0x930,param_3,DAT_003819e8);
  }
  if (param_2 == 0xe) {
    local_6c = DAT_003819ec;
    local_68 = uVar7;
    local_64 = uVar7;
    FUN_003735ac(param_4 + 0x8b4,param_3,&local_6c);
  }
  else if (param_2 == 2) {
    FUN_003735ac(param_4 + 0x8f0,param_3,DAT_003819bc);
  }
  else if (param_2 == 8) {
    FUN_003735ac(param_4 + 0x8e4,param_3,DAT_003819c4);
  }
  else if (param_2 == 0x25) {
    FUN_003735ac(param_4 + 0x8d8,param_3,DAT_003819e8);
  }
  else if (param_2 == 0x28) {
    FUN_003735ac(param_4 + 0x8cc,param_3,DAT_003819e8);
  }
  else if (param_2 == 0x2c) {
    if (((*(uint *)(iVar6 + 0x24) & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_003819f0), puVar3 = DAT_003819f4, iVar6 != 0)) {
      *DAT_003819f4 = uVar7;
      puVar3[1] = uVar7;
      puVar3[2] = uVar7;
    }
    FUN_003735ac(param_4 + 0x8c0,param_3,DAT_003819f4);
  }
  if (-1 < cVar1) {
    FUN_003735ac(auStack_30,param_3,DAT_003819e8);
    FUN_0032d68c((int)cVar1,param_4 + 0xb20,auStack_30);
  }
  if (param_2 == 7 || param_2 == 0xd) {
    uVar7 = *(undefined4 *)(param_4 + 0x920);
    uVar5 = FUN_00371348(uVar7,uVar7,uVar7,param_3,1);
    iVar6 = param_4 + 0x914;
    if (param_2 == 7) {
      if (*(char *)(param_4 + 0xa0e) == '\x01') {
        FUN_003735ac(iVar6,param_3,DAT_003819b0);
        FUN_0032d68c(0,param_4 + 0xb40,iVar6);
        FUN_003735ac(param_4 + 0x8fc,param_3,DAT_003819d0);
        FUN_003735ac(param_4 + 0x908,param_3,DAT_003819dc);
      }
    }
    else {
      if (param_2 == 0xd) {
        uVar5 = (uint)*(byte *)(param_4 + 0xa0e);
      }
      if (param_2 == 0xd && uVar5 == 2) {
        FUN_003735ac(iVar6,param_3,DAT_003819b0);
        FUN_0032d68c(1,param_4 + 0xb40,iVar6);
        FUN_003735ac(param_4 + 0x8fc,param_3,DAT_003819d0);
        FUN_003735ac(param_4 + 0x908,param_3,DAT_003819dc);
        return;
      }
    }
  }
  else if (param_2 == 0x17 || param_2 == 0x18) {
    uVar7 = *(undefined4 *)(param_4 + 0x924);
    FUN_00371348(uVar7,uVar7,uVar7,param_3,1);
    return;
  }
  return;
}
