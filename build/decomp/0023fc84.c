// OoT3D decomp @ 0023fc84  name=FUN_0023fc84  size=76

void FUN_0023fc84(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x22c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x22c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x22c),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x22c),0);
  }
  return;
}
