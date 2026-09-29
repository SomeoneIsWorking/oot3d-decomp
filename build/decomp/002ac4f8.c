// OoT3D decomp @ 002ac4f8  name=FUN_002ac4f8  size=128

void FUN_002ac4f8(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) != -1) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x23c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x23c),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + 0x23c),0);
    }
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x238) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x238),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x238),0);
  return;
}
