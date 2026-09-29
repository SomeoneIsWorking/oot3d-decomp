// OoT3D decomp @ 0039e790  name=FUN_0039e790  size=116

void FUN_0039e790(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  FUN_00357750(0,param_1 + 0x1bc,auStack_38);
  FUN_00357750(1,param_1 + 0x1bc,auStack_38);
  FUN_00357750(2,param_1 + 0x1bc,auStack_38);
  *(undefined1 *)(*(int *)(param_1 + 0x2cc) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x2cc),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x2cc),0);
  return;
}
