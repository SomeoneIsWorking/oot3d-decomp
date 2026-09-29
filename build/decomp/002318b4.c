// OoT3D decomp @ 002318b4  name=FUN_002318b4  size=60

void FUN_002318b4(int param_1)

{
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_003721e0(*(int *)(param_1 + 0x1a8),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1a8),0);
    return;
  }
  return;
}
