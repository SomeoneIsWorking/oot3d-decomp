// OoT3D decomp @ 0028488c  name=FUN_0028488c  size=76

void FUN_0028488c(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x210) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x210),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
  }
  return;
}
