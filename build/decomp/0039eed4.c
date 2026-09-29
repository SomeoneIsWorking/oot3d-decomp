// OoT3D decomp @ 0039eed4  name=FUN_0039eed4  size=76

void FUN_0039eed4(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1bc),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1bc),0);
  }
  return;
}
