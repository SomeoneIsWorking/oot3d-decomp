// OoT3D decomp @ 001d5f70  name=FUN_001d5f70  size=168

void FUN_001d5f70(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x128);
  if (iVar1 != 0) {
    FUN_0033ddbc(param_1 + 0x49c,iVar1 + 0x49c);
    FUN_0033ddbc(param_1 + 0x4d0,iVar1 + 0x4d0);
    FUN_0033ddbc(param_1 + 0x504,iVar1 + 0x504);
    FUN_0033ddbc(param_1 + 0x538,iVar1 + 0x538);
    FUN_0033ddbc(param_1 + 0x56c,iVar1 + 0x56c);
  }
  FUN_0037572c(DAT_001d6018,param_1);
  FUN_0035e240(param_1 + 0x314,param_1 + 0x148,DAT_001d6020,DAT_001d601c,param_1,0);
  return;
}
