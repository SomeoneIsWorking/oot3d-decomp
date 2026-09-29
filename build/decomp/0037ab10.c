// OoT3D decomp @ 0037ab10  name=FUN_0037ab10  size=104

void FUN_0037ab10(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00357750(0,param_1 + 0x1a8,auStack_38);
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x21c),0);
  }
  return;
}
