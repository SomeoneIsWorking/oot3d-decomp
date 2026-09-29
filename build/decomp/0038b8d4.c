// OoT3D decomp @ 0038b8d4  name=FUN_0038b8d4  size=80

void FUN_0038b8d4(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  param_1 = param_1 + (*(ushort *)(param_1 + 0x1c) & 7) * 4;
  *(undefined1 *)(*(int *)(param_1 + 0x1d8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1d8),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1d8),0);
  return;
}
