// OoT3D decomp @ 0028b730  name=FUN_0028b730  size=76

void FUN_0028b730(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x21c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x21c),1);
  }
  return;
}
