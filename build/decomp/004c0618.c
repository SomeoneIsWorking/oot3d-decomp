// OoT3D decomp @ 004c0618  name=FUN_004c0618  size=20

void FUN_004c0618(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}
