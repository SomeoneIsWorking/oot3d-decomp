// OoT3D decomp @ 0029ac3c  name=FUN_0029ac3c  size=152

void FUN_0029ac3c(int param_1)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  }
  if ((*(short *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x1c8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
  }
  return;
}
