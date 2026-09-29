// OoT3D decomp @ 0037a0f4  name=FUN_0037a0f4  size=136

void FUN_0037a0f4(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    if (*(int *)(param_1 + 0x2a0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2a0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2a0),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2a0),0);
    }
  }
  else if (*(int *)(param_1 + 0x2a4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2a4),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2a4),0);
    return;
  }
  return;
}
