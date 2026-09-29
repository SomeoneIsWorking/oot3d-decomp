// OoT3D decomp @ 0038b92c  name=FUN_0038b92c  size=128

void FUN_0038b92c(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if ((*(ushort *)(param_1 + 0x1c) & 0x200) != 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x200) == 0x200) {
      *(undefined1 *)(*(int *)(param_1 + 0x1f8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1f8),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1f8),0);
    }
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 500) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 500),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 500),0);
  return;
}
