// OoT3D decomp @ 0027afd4  name=FUN_0027afd4  size=132

void FUN_0027afd4(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_0027b058);
  return;
}
