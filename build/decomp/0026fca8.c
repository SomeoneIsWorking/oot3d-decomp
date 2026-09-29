// OoT3D decomp @ 0026fca8  name=FUN_0026fca8  size=112

void FUN_0026fca8(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  FUN_003695cc(DAT_0026fd18,DAT_0026fd20,DAT_0026fd1c,DAT_0026fd18,*(undefined4 *)(param_1 + 0x20c),
               0,4);
  if (*(int *)(param_1 + 0x20c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x20c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x20c),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x20c),0);
  }
  return;
}
