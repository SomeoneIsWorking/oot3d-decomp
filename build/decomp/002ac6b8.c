// OoT3D decomp @ 002ac6b8  name=FUN_002ac6b8  size=68

void FUN_002ac6b8(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1b8),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b8),0);
  return;
}
