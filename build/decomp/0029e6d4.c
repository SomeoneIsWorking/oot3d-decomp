// OoT3D decomp @ 0029e6d4  name=FUN_0029e6d4  size=60

void FUN_0029e6d4(int param_1)

{
  if (*(int *)(param_1 + 0x1c0) != 0) {
    FUN_003721e0(*(int *)(param_1 + 0x1c0),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
    return;
  }
  return;
}
