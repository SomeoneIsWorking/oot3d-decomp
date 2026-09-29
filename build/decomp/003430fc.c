// OoT3D decomp @ 003430fc  name=FUN_003430fc  size=144

undefined4 FUN_003430fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;

  if (*(int *)(DAT_0034318c + 0x4e8) < 4) {
    FUN_00374428(param_1);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1bc) = param_3;
  *(undefined4 *)(param_1 + 0x1c0) = param_4;
  if (param_5 != 0) {
    FUN_003510b0(param_1,DAT_00343190,param_3,param_4,param_4);
    FUN_003532e8(param_1,0);
    uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,param_5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return 1;
}
