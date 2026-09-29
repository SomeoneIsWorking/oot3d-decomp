// OoT3D decomp @ 00303a94  name=FUN_00303a94  size=120

undefined4 * FUN_00303a94(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0x204;
  param_1[0x6d] = DAT_00303b0c;
  FUN_00343280(param_1 + 0x4f,0x60);
  FUN_00343280(param_1 + 1,0x120);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  return param_1;
}
