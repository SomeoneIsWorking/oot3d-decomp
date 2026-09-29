// OoT3D decomp @ 00357a28  name=FUN_00357a28  size=40

void FUN_00357a28(int param_1,int param_2,undefined4 *param_3)

{
  param_1 = param_1 + param_2 * 0x10;
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  param_3[1] = *(undefined4 *)(param_1 + 0x10);
  param_3[2] = *(undefined4 *)(param_1 + 0x14);
  param_3[3] = *(undefined4 *)(param_1 + 0x18);
  return;
}
