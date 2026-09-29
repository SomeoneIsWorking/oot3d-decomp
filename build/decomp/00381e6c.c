// OoT3D decomp @ 00381e6c  name=FUN_00381e6c  size=88

void FUN_00381e6c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  FUN_00334d6c(param_2);
  uVar1 = DAT_00381ec4;
  FUN_00360190(DAT_00381ec8,DAT_00381ec4,DAT_00381ec4,DAT_00381ec4,param_2 + 0x254,param_1,*param_3,
               2);
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x221c) = uVar1;
  return;
}
