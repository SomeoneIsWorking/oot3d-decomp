// OoT3D decomp @ 00174660  name=FUN_00174660  size=100

void FUN_00174660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0034c3e4(param_1 + 0x1a4,DAT_001746c4,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x6c) = DAT_001746c8;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
  *(undefined2 *)(DAT_001746cc + param_1) = 0x15;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x4a0) = DAT_001746d0;
  return;
}
