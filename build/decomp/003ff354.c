// OoT3D decomp @ 003ff354  name=FUN_003ff354  size=40

void FUN_003ff354(undefined4 *param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_003ff37c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = DAT_003ff380;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}
