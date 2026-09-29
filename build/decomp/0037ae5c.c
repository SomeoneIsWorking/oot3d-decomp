// OoT3D decomp @ 0037ae5c  name=FUN_0037ae5c  size=120

void FUN_0037ae5c(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
  return;
}
