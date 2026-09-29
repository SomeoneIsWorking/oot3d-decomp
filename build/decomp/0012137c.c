// OoT3D decomp @ 0012137c  name=FUN_0012137c  size=84

void FUN_0012137c(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_00370734(param_1 + 0x228);
  FUN_0036fc20(DAT_001213d4,DAT_001213d0,param_1 + 0x6c);
  iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x88c),DAT_001213d8,param_1 + 0x228);
  if (iVar1 != 0) {
    FUN_0036c9f0(param_1,param_2);
    return;
  }
  return;
}
