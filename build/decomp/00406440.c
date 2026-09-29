// OoT3D decomp @ 00406440  name=FUN_00406440  size=384

undefined4 FUN_00406440(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 auStack_88 [4];
  int local_84;
  int local_80;
  uint local_78;

  bVar1 = *(byte *)(param_1 + 0x5c);
  local_98 = 0;
  local_97 = 0;
  local_96 = 0;
  local_95 = 0;
  local_94 = 0;
  uStack_ac = 0;
  local_b4 = *(undefined4 *)(param_1 + 0x68);
  local_b0 = *(undefined4 *)(param_1 + 0x6c);
  local_a4 = *(undefined4 *)(param_1 + 0x38);
  local_a8 = param_3;
  iVar3 = (**(code **)(*param_2 + 8))(param_2,param_1 + 0x88,auStack_a0,auStack_88,&local_b4);
  if (iVar3 != 0) {
    uVar4 = 0;
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x74);
    }
    else if (*(char *)(param_1 + 0x70) == '\x01') {
      lVar2 = (longlong)*(int *)(param_1 + 0x74) * (longlong)local_80;
      uVar4 = FUN_00332754((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    }
    if (uVar4 <= local_78) {
      if (2 < local_84) {
        local_84 = 2;
      }
      iVar3 = FUN_00309c74(local_84,bVar1 + 0x40,DAT_004065c0,param_1);
      if (iVar3 != 0) {
        FUN_00309f90(iVar3 + 0x90,*(undefined1 *)(param_1 + 0x8c));
        FUN_00309efc(iVar3 + 0x90,*(undefined1 *)(param_1 + 0x8f));
        FUN_00309f1c(iVar3 + 0x90,*(undefined1 *)(param_1 + 0x8d));
        *(undefined1 *)(iVar3 + 0xa8) = *(undefined1 *)(param_1 + 0x8e);
        FUN_0030a074(iVar3 + 0x90,*(undefined1 *)(param_1 + 0x90));
        *(undefined1 *)(iVar3 + 0xc9) = *(undefined1 *)(param_1 + 0x55);
        FUN_00309ea4(*(undefined4 *)(iVar3 + 0x134),(int)*(char *)(param_1 + 0x26));
        FUN_00309be8(iVar3,auStack_88,0xffffffff,uVar4);
        *(int *)(param_1 + 0x98) = iVar3;
        *(undefined1 *)(param_1 + 0x54) = 1;
        return 1;
      }
    }
  }
  return 0;
}
