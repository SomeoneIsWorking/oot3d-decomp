// OoT3D decomp @ 002abb5c  name=FUN_002abb5c  size=76

void FUN_002abb5c(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  }
  return;
}
