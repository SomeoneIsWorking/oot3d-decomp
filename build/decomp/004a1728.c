// OoT3D decomp @ 004a1728  name=FUN_004a1728  size=188

undefined4 * FUN_004a1728(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;

  *param_1 = DAT_004a17e4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0x40;
  param_1[10] = 0x10000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = *(undefined1 *)(param_1 + 0x18);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  iVar1 = FUN_002bedd4(param_1 + 0xc);
  param_1[0x11] = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  *(undefined4 *)(param_1[0x11] + 0xc) = param_1[0x11];
  param_1[0x15] = 0;
  param_1[0x14] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}
