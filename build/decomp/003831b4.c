// OoT3D decomp @ 003831b4  name=FUN_003831b4  size=548

void FUN_003831b4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];

  FUN_00372224(auStack_50,param_1 + 0x148);
  uVar4 = DAT_003833d8;
  iVar3 = FUN_003695f8();
  uVar2 = DAT_003833dc;
  sVar1 = *(short *)(param_1 + 0x1c);
  uVar5 = uVar4;
  if (iVar3 != 0) {
    uVar5 = DAT_003833dc;
  }
  if (sVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x238);
  }
  else {
    if (sVar1 == 1) {
      if (*(int *)(param_1 + 0x238) != 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x238) + 0xc) + 0xc) = uVar5;
        *(undefined1 *)(*(int *)(param_1 + 0x238) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x238),auStack_50);
        FUN_00372170(*(undefined4 *)(param_1 + 0x238),0);
      }
      if (*(int *)(param_1 + 0x1bc) != DAT_003833e0) {
        return;
      }
      FUN_00357750(1,param_1 + 0x1c8,auStack_50);
      return;
    }
    if (sVar1 == 2) {
      FUN_00372224(auStack_80,param_1 + 0x148);
      iVar3 = FUN_003695f8();
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      if ((DAT_003833e4 < *(uint *)(param_1 + 0x1c4)) && (*(int *)(DAT_003833e8 + 0x4e8) < 4)) {
        if (*(int *)(param_1 + 0x23c) != 0) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x23c) + 0xc) + 0xc) = uVar4;
          *(undefined1 *)(*(int *)(param_1 + 0x23c) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(param_1 + 0x23c),auStack_80);
          FUN_00372170(*(undefined4 *)(param_1 + 0x23c),0);
        }
      }
      else if (*(int *)(param_1 + 0x240) != 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x240) + 0xc) + 0xc) = uVar4;
        *(undefined1 *)(*(int *)(param_1 + 0x240) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x240),auStack_80);
        FUN_00372170(*(undefined4 *)(param_1 + 0x240),0);
      }
      if (*(char *)(DAT_003833ec + param_2) != '\0') {
        return;
      }
      if (*(char *)(DAT_003833f0 + param_2) == '\0') {
        return;
      }
      local_90 = *DAT_003833f4;
      uStack_8c = DAT_003833f4[1];
      uStack_88 = DAT_003833f4[2];
      local_84 = *(undefined4 *)(param_1 + 0x244);
      FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),0x15,0,&local_90,2);
      return;
    }
    if (sVar1 != 3) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x238);
  }
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x238),auStack_50);
    FUN_00372170(*(undefined4 *)(param_1 + 0x238),0);
  }
  return;
}
