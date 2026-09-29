// OoT3D decomp @ 00382da8  name=FUN_00382da8  size=104

void FUN_00382da8(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_00357fd0(*(undefined4 *)(DAT_00382e10 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
  }
  return;
}
