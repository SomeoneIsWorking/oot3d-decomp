// OoT3D decomp @ 0030f964  name=FUN_0030f964  size=136

void FUN_0030f964(undefined4 *param_1)

{
  undefined4 uVar1;

  *(undefined1 *)((int)param_1 + 0x77) = 1;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  param_1[8] = 0;
  uVar1 = DAT_0030f9ec;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  uVar1 = DAT_0030f9f0;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[3] = 0;
    param_1[2] = uVar1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
