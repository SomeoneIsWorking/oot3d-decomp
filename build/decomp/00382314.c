// OoT3D decomp @ 00382314  name=FUN_00382314  size=76

void FUN_00382314(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
  }
  return;
}
