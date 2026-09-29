// OoT3D decomp @ 0036f410  name=FUN_0036f410  size=60

void FUN_0036f410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined2 param_8,
                 undefined1 param_9)

{
  *param_4 = 2;
  *(undefined4 *)(param_4 + 4) = param_1;
  *(undefined4 *)(param_4 + 8) = param_2;
  *(undefined4 *)(param_4 + 0xc) = param_3;
  param_4[0x10] = param_5;
  param_4[0x11] = param_6;
  param_4[0x12] = param_7;
  *(undefined2 *)(param_4 + 0x14) = param_8;
  param_4[0x16] = param_9;
  return;
}
