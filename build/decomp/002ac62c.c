// OoT3D decomp @ 002ac62c  name=FUN_002ac62c  size=136

void FUN_002ac62c(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 1) {
    if (*(int *)(param_1 + 0x1bc) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1bc),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1bc),0);
    }
  }
  else if (*(int *)(param_1 + 0x1c0) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c0),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
    return;
  }
  return;
}
