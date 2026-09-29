// OoT3D decomp @ 00382f78  name=FUN_00382f78  size=112

void FUN_00382f78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_00382fe8;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_00382fec;
  }
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1bc),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1bc),0);
  }
  return;
}
