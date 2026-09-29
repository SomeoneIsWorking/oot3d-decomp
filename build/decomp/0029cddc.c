// OoT3D decomp @ 0029cddc  name=FUN_0029cddc  size=300

void FUN_0029cddc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_74 [48];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;

  FUN_00372224(&local_44,param_1 + 0x148);
  uVar5 = DAT_0029cf08;
  iVar2 = FUN_003695f8();
  uVar1 = DAT_0029cf0c;
  iVar3 = *(int *)(param_1 + 0x1e4);
  if (iVar2 != 0) {
    uVar5 = DAT_0029cf0c;
  }
  if (iVar3 != 0) {
    uVar4 = *(uint *)(DAT_0029cf10 + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4);
    if (uVar4 < 0x80000000) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    if (-1 < (int)uVar4) {
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x1e4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1e4),&local_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1e4),0);
    if (*(int *)(param_1 + 0x1dc) != 0) {
      FUN_00372224(auStack_74,&local_44);
      local_28 = *(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x2c);
      local_44 = 0x3f800000;
      local_40 = 0;
      local_3c = 0;
      local_34 = 0;
      uStack_30 = 0x3f800000;
      local_38 = uVar1;
      local_2c = 0;
      local_20 = 0;
      uStack_1c = 0x3f800000;
      local_24 = 0;
      local_18 = uVar1;
      FUN_0036c174(&local_44,&local_44,auStack_74);
      *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1e8),&local_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1e8),0);
    }
  }
  return;
}
