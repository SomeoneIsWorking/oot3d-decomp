// OoT3D decomp @ 002a9f68  name=FUN_002a9f68  size=88

void FUN_002a9f68(int param_1,int param_2)

{
  int iVar1;

  FUN_00321f50();
  FUN_0034be04(1);
  FUN_00338cd8(0);
  iVar1 = FUN_003705a0(DAT_002a9fc0,DAT_002a9fc4,param_2 + 0x1c);
  if (iVar1 != 0) {
    FUN_0033d13c(1);
    *(char *)(param_1 + 0x22a0) = *(char *)(param_1 + 0x22a0) + '\x01';
  }
  return;
}
