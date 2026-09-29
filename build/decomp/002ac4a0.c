// OoT3D decomp @ 002ac4a0  name=FUN_002ac4a0  size=80

void FUN_002ac4a0(int param_1)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1e4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1e4),auStack_3c);
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1e4),0);
  }
  return;
}
