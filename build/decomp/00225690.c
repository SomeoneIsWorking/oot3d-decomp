// OoT3D decomp @ 00225690  name=FUN_00225690  size=84

void FUN_00225690(int param_1,int param_2)

{
  int iVar1;

  FUN_0034be04(1);
  FUN_00338cd8(0);
  iVar1 = FUN_003705a0(DAT_002256e4,DAT_002256e8,param_2 + 0x1c);
  if (iVar1 != 0) {
    FUN_0033d13c(1);
    *(char *)(param_1 + 0x22a0) = *(char *)(param_1 + 0x22a0) + '\x01';
  }
  return;
}
