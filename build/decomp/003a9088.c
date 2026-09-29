// OoT3D decomp @ 003a9088  name=FUN_003a9088  size=92

void FUN_003a9088(int param_1,undefined4 param_2)

{
  FUN_0033526c();
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(DAT_003a90e4,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_003a90ec,DAT_003a90e8,DAT_003a90e8,param_2,param_1,4);
  FUN_00318010(param_1,param_2);
  return;
}
