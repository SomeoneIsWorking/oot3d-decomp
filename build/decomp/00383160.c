// OoT3D decomp @ 00383160  name=FUN_00383160  size=76

void FUN_00383160(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  param_1 = param_1 + *(short *)(param_1 + 0x1c) * 4;
  *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
  return;
}
