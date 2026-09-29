// OoT3D decomp @ 001e7e34  name=FUN_001e7e34  size=52

void FUN_001e7e34(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00374a58(DAT_001e7e68,param_1 + 0x1a4,0xb);
    *(undefined4 *)(param_1 + 0x7d8) = DAT_001e7e6c;
  }
  return;
}
