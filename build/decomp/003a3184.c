// OoT3D decomp @ 003a3184  name=FUN_003a3184  size=96

void FUN_003a3184(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_003a31e4,param_3,param_4,param_4);
  FUN_003532e8(param_1,1);
  uVar1 = FUN_00353fd4(param_1,param_2,7);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
