// OoT3D decomp @ 0028c890  name=FUN_0028c890  size=120

void FUN_0028c890(int param_1)

{
  int iVar1;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  iVar1 = param_1 + *(short *)(param_1 + 0x1c) * 4;
  *(undefined1 *)(*(int *)(iVar1 + 0x1c0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(iVar1 + 0x1c0),auStack_40);
  FUN_00372170(*(undefined4 *)(iVar1 + 0x1c0),0);
  if (*(short *)(param_1 + 0x1c) == 3) {
    *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
  }
  return;
}
