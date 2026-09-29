// OoT3D decomp @ 002ad270  name=FUN_002ad270  size=104

void FUN_002ad270(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_002ad2d8;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_002ad2dc;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0xc) = uVar2;
  *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),auStack_40);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),0);
  return;
}
