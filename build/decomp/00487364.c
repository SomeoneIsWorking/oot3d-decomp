// OoT3D decomp @ 00487364  name=FUN_00487364  size=88

undefined4 FUN_00487364(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0xe10) = param_2;
  *(undefined1 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_4;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(int *)(param_1 + 0xec) = param_1;
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xf8) = param_4;
  *(int *)(param_1 + 0xe8) = param_1;
  uVar1 = FUN_0030c8bc();
  FUN_0030ab9c(uVar1,param_1 + 0xd4,1);
  return 1;
}
