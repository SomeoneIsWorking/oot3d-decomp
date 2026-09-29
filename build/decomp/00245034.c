// OoT3D decomp @ 00245034  name=FUN_00245034  size=96

void FUN_00245034(int param_1,int param_2)

{
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  FUN_0036c174(auStack_3c,auStack_3c,param_2 + 0x2fc);
  FUN_00373bec(*(undefined4 *)(param_1 + 0x2c0));
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),auStack_3c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x2a8),0);
  return;
}
