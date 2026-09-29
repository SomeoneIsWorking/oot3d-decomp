// OoT3D decomp @ 002dd070  name=FUN_002dd070  size=764

/* WARNING: Type propagation algorithm not settling */

void FUN_002dd070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_618;
  undefined4 auStack_614 [383];

  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_00485dbc(*(int *)(param_1 + 0x24) + (uVar4 & 0xffffff) * 0x48);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  piVar5 = (int *)(param_1 + 0x28);
  if (1 < *(uint *)(param_1 + 0x28)) {
    FUN_00350820(&local_618,DAT_002dd36c,0xc,0x80);
    while (*piVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      FUN_0030c964(piVar5);
      iVar1 = (uint)*(byte *)(iVar3 + -0x3c) + *(int *)(iVar3 + -0x84);
      iVar6 = UnsignedSaturate(iVar1,7);
      UnsignedDoesSaturate(iVar1,7);
      FUN_0030cab0(&local_618 + iVar6 * 3,(int)auStack_614 + iVar6 * 0xc,iVar3);
    }
    iVar6 = 0;
    do {
      while ((&local_618)[iVar6 * 3] != 0) {
        uVar2 = *(undefined4 *)((int)auStack_614 + iVar6 * 0xc);
        FUN_0030c964();
        FUN_0030cab0(piVar5,param_1 + 0x2c,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x80);
    FUN_00377d38(&local_618,DAT_002dd370,0xc,0x80);
  }
  piVar5 = (int *)(param_1 + 0x40);
  if (1 < *(uint *)(param_1 + 0x40)) {
    FUN_00350820(&local_618,DAT_002dd374,0xc,0x80);
    while (*piVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x44);
      FUN_0030c964(piVar5);
      iVar1 = (uint)*(byte *)(iVar3 + -0x3c) + *(int *)(iVar3 + -0x84);
      iVar6 = UnsignedSaturate(iVar1,7);
      UnsignedDoesSaturate(iVar1,7);
      FUN_0030cab0(&local_618 + iVar6 * 3,(int)auStack_614 + iVar6 * 0xc,iVar3);
    }
    iVar6 = 0;
    do {
      while ((&local_618)[iVar6 * 3] != 0) {
        uVar2 = *(undefined4 *)((int)auStack_614 + iVar6 * 0xc);
        FUN_0030c964();
        FUN_0030cab0(piVar5,param_1 + 0x44,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x80);
    FUN_00377d38(&local_618,DAT_002dd378,0xc,0x80);
  }
  piVar5 = (int *)(param_1 + 0x58);
  if (1 < *(uint *)(param_1 + 0x58)) {
    FUN_00350820(&local_618,DAT_002dd37c,0xc,0x80);
    while (*piVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
      FUN_0030c964(piVar5);
      iVar1 = (uint)*(byte *)(iVar3 + -0x3c) + *(int *)(iVar3 + -0x84);
      iVar6 = UnsignedSaturate(iVar1,7);
      UnsignedDoesSaturate(iVar1,7);
      FUN_0030cab0(&local_618 + iVar6 * 3,(int)auStack_614 + iVar6 * 0xc,iVar3);
    }
    iVar6 = 0;
    do {
      while ((&local_618)[iVar6 * 3] != 0) {
        uVar2 = *(undefined4 *)((int)auStack_614 + iVar6 * 0xc);
        FUN_0030c964();
        FUN_0030cab0(piVar5,param_1 + 0x5c,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x80);
    FUN_00377d38(&local_618,DAT_002dd380,0xc,0x80);
  }
  uVar2 = FUN_0030c550();
  FUN_002dbde0();
  FUN_0030c0dc(uVar2,0);
  return;
}
