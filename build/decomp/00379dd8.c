// OoT3D decomp @ 00379dd8  name=FUN_00379dd8  size=156

void FUN_00379dd8(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x1c4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + *(short *)(param_1 + 0x1c) * 4 + 0x1c4);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x1c) * 4 + 0x1c4),auStack_38);
      FUN_00372170(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x1c) * 4 + 0x1c4),0);
      return;
    }
  }
  return;
}
