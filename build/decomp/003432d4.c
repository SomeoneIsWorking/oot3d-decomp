// OoT3D decomp @ 003432d4  name=FUN_003432d4  size=168

undefined4 * FUN_003432d4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0x204;
  param_1[0x6d] = DAT_0034337c;
  FUN_00343280(param_1 + 0x4f,0x60);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_00371738(param_1 + 1,param_2,0x120);
  *param_1 = param_1 + 1;
  if (param_1[0x67] != 0) {
    FUN_003445d4(param_1);
    param_1[0x67] = 0;
  }
  FUN_00348be4(param_1);
  return param_1;
}
