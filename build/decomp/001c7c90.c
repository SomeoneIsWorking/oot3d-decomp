// OoT3D decomp @ 001c7c90  name=FUN_001c7c90  size=88

void FUN_001c7c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  FUN_0034c3e4(param_1 + 0x1a4,DAT_001c7ce8,param_3,param_4,param_4);
  iVar1 = DAT_001c7cf0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_001c7cec;
  *(undefined2 *)(iVar1 + param_1) = 0x15;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
  *(undefined4 *)(param_1 + 0x4a0) = DAT_001c7cf4;
  return;
}
