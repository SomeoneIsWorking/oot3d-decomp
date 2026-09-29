// OoT3D decomp @ 00328428  name=FUN_00328428  size=40

void FUN_00328428(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;

  iVar1 = FUN_00423010(param_1 + 0x18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_003123c0();
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}
