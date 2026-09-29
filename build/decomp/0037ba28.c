// OoT3D decomp @ 0037ba28  name=FUN_0037ba28  size=108

void FUN_0037ba28(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  FUN_00357750(0,param_1 + 0x1bc,auStack_38);
  FUN_00357750(1,param_1 + 0x1bc,auStack_38);
  if (*(int *)(param_1 + 0x294) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x294) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x294),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x294),0);
  }
  return;
}
