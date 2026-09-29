// OoT3D decomp @ 0029c7cc  name=FUN_0029c7cc  size=76

void FUN_0029c7cc(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x218) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x218) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x218),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x218),0);
  }
  return;
}
