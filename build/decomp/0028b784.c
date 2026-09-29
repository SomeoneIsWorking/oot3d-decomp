// OoT3D decomp @ 0028b784  name=FUN_0028b784  size=104

void FUN_0028b784(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_00357fd0(*(undefined4 *)(DAT_0028b7ec + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0x220) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x220),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x220),0);
  }
  return;
}
