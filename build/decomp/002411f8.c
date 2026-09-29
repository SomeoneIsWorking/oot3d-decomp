// OoT3D decomp @ 002411f8  name=FUN_002411f8  size=136

void FUN_002411f8(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_00241280);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
