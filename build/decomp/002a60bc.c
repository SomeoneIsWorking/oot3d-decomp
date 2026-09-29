// OoT3D decomp @ 002a60bc  name=FUN_002a60bc  size=128

void FUN_002a60bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x582) != 0) {
    *(short *)(param_1 + 0x582) = *(short *)(param_1 + 0x582) + -1;
  }
  (**(code **)(param_1 + 0x568))(param_1,param_2,*(code **)(param_1 + 0x568),param_4,param_4);
  (**(code **)(param_1 + 0x590))(param_1);
  *(undefined4 *)(param_1 + 0x40) = DAT_002a613c;
  FUN_0037322c(param_1);
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x56c,param_1 + 0x572,
               0x4300);
  return;
}
