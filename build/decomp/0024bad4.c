// OoT3D decomp @ 0024bad4  name=FUN_0024bad4  size=176

void FUN_0024bad4(int param_1,int param_2)

{
  FUN_0037322c(DAT_0024bb84);
  *(short *)(param_1 + 0x8c0) = *(short *)(param_1 + 0x8c0) + 1;
  if (*(short *)(param_1 + 0x8be) != 0) {
    *(short *)(param_1 + 0x8be) = *(short *)(param_1 + 0x8be) + -1;
  }
  (**(code **)(param_1 + 0x8a8))(param_1,param_2);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  FUN_00376864(param_1);
  FUN_00376340(DAT_0024bb8c,DAT_0024bb8c,DAT_0024bb88,param_2,param_1,0x1c);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x8c8);
  return;
}
