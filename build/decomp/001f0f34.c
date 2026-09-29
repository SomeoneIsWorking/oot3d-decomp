// OoT3D decomp @ 001f0f34  name=FUN_001f0f34  size=108

void FUN_001f0f34(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_001f0fa0,param_3,param_4,0);
  FUN_003532e8(param_1,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
