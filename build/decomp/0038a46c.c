// OoT3D decomp @ 0038a46c  name=FUN_0038a46c  size=88

void FUN_0038a46c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = *param_3;
  FUN_00334d6c(param_2);
  uVar1 = DAT_0038a4c8;
  FUN_00360190(DAT_0038a4cc,DAT_0038a4c8,DAT_0038a4c8,DAT_0038a4c4,param_2 + 0x254,param_1,uVar2,0);
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x221c) = uVar1;
  return;
}
