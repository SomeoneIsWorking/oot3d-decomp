// OoT3D decomp @ 0041baac  name=FUN_0041baac  size=112

void FUN_0041baac(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = 0x28;
  *(undefined2 *)((int)param_1 + 0xe) = 0x24;
  *(undefined2 *)(param_1 + 4) = 0x28;
  *(undefined2 *)((int)param_1 + 0x12) = 0x91;
  *(undefined2 *)(param_1 + 5) = 0x91;
  *(undefined2 *)((int)param_1 + 0x16) = 0x91;
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = DAT_0041bb1c;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0x8d;
  param_1[7] = uVar1;
  param_1[8] = DAT_0041bb20;
  uVar1 = DAT_0041bb24;
  param_1[9] = DAT_0041bb24;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  return;
}
