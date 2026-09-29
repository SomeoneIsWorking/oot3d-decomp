// OoT3D decomp @ 00350d20  name=FUN_00350d20  size=40

void FUN_00350d20(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  *(undefined1 *)((int)param_1 + 0x17) = *param_3;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(param_3 + 4);
  *(undefined1 *)((int)param_1 + 0x16) = param_3[6];
  return;
}
