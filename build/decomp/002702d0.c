// OoT3D decomp @ 002702d0  name=FUN_002702d0  size=92

void FUN_002702d0(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  FUN_00357fd0(*(undefined4 *)(DAT_0027032c + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),auStack_3c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x21c),0);
  return;
}
