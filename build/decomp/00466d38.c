// OoT3D decomp @ 00466d38  name=FUN_00466d38  size=204

void FUN_00466d38(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_00308474(*param_3 & 0xffff);
  param_1 = param_1 + param_2 * 0x30;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  uVar1 = FUN_003083fc(param_3[1] & 0xffff);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  uVar1 = FUN_00308390(param_3[2] & 0xffff);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar1 = FUN_00308390(param_3[3] & 0xffff);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  FUN_0030835c(param_1 + 0x13c,*(undefined4 *)(param_1 + 0x140),param_3[4]);
  FUN_00308328(param_1 + 0x13c,*(undefined4 *)(param_1 + 0x140),param_3[5]);
  FUN_0030828c(DAT_00466e04,param_1 + 0x13c);
  *(uint *)(param_1 + 0x158) = param_3[6];
  *(short *)(param_1 + 0x15c) = (short)param_3[7];
  *(undefined2 *)(param_1 + 0x15e) = *(undefined2 *)((int)param_3 + 0x1e);
  uVar1 = FUN_00308200(param_2,DAT_00466e08);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = FUN_0030807c(param_3[9] & 0xffff,param_3[10] & 0xffff);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  return;
}
