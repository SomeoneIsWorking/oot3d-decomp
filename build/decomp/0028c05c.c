// OoT3D decomp @ 0028c05c  name=FUN_0028c05c  size=156

void FUN_0028c05c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_00372224(auStack_44,param_1 + 0x148);
  uVar2 = DAT_0028c0f8;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_0028c0fc;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    local_50 = *(undefined4 *)(param_1 + 0x1bc);
    local_4c = DAT_0028c0fc;
    local_48 = DAT_0028c0fc;
    FUN_00372070(auStack_44,auStack_44,&local_50);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b8) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1b8),auStack_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1b8),0);
  }
  return;
}
