// OoT3D decomp @ 002ea0a8  name=FUN_002ea0a8  size=160

undefined4 * FUN_002ea0a8(undefined4 *param_1)

{
  undefined4 uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = DAT_002ea148;
  param_1[5] = DAT_002ea148;
  param_1[4] = uVar1;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  FUN_00343280(param_1 + 6,0x194);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0xffffffff;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = param_1 + 0x72;
  param_1[0x73] = param_1 + 0x72;
  param_1[0x74] = 0;
  param_1[0x75] = param_1 + 0x75;
  param_1[0x76] = param_1 + 0x75;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  *(undefined1 *)((int)param_1 + 0x1ea) = 0;
  *(undefined1 *)((int)param_1 + 0x1eb) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  return param_1;
}
