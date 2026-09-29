// OoT3D decomp @ 004024a8  name=FUN_004024a8  size=164

undefined4 * FUN_004024a8(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = DAT_0040254c;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  piVar1 = DAT_00402550;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar3 = *piVar1;
  param_1[7] = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0x30) + 0x1c) = piVar1[3];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xd] = param_2;
  uVar2 = (**(code **)(*param_2 + 0x24))();
  param_1[5] = uVar2;
  FUN_0030d634(param_1 + 5,0);
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = param_3;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}
