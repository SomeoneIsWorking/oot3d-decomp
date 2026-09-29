// OoT3D decomp @ 001e0394  name=FUN_001e0394  size=140

void FUN_001e0394(int param_1)

{
  int iVar1;

  iVar1 = DAT_001e0420;
  FUN_0035e3a4(param_1 + 0x228,0,*(undefined1 *)(DAT_001e0420 + (uint)*(byte *)(param_1 + 0x47a)));
  FUN_0035e3a4(param_1 + 0x228,2,*(undefined1 *)(iVar1 + (uint)*(byte *)(param_1 + 0x47b)));
  FUN_0035e3a4(param_1 + 0x228,1,*(undefined1 *)(iVar1 + -4 + (uint)*(byte *)(param_1 + 0x47c)));
  FUN_0035e330(param_1 + 0x228);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001e0428,DAT_001e0424,param_1,0);
  return;
}
