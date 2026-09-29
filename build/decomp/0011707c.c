// OoT3D decomp @ 0011707c  name=FUN_0011707c  size=60

void FUN_0011707c(int param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_003721e0(*(int *)(param_1 + 0x1b0),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),0);
    return;
  }
  return;
}
