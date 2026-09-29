// OoT3D decomp @ 002701e4  name=FUN_002701e4  size=176

void FUN_002701e4(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if ((*(ushort *)(param_1 + 0x1c) & 3) != 0) {
    FUN_00357fd0(*(undefined4 *)(DAT_00270294 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
  }
  if (1 < (*(ushort *)(param_1 + 0x1c) & 3)) {
    if ((*(ushort *)(param_1 + 0x1c) & 3) == 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_3c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
    }
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c0),auStack_3c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
  return;
}
