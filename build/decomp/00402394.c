// OoT3D decomp @ 00402394  name=FUN_00402394  size=264

undefined4 * FUN_00402394(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_220 [524];

  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar1 = DAT_004024a0;
  *param_1 = DAT_0040249c;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar3 = *piVar1;
  param_1[7] = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0x30) + 0x1c) = piVar1[3];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  iVar3 = FUN_00324f44(0,param_2);
  uVar4 = iVar3 + 1U;
  if (DAT_004024a4 < iVar3 + 1U) {
    uVar4 = DAT_004024a4;
  }
  FUN_00324f44(auStack_220,param_2,uVar4);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar3 = FUN_0030d580(param_1 + 8,auStack_220,1);
  if (iVar3 < 0) {
    FUN_003351b4();
  }
  param_1[0xd] = param_1 + 7;
  uVar2 = (**(code **)(param_1[7] + 0x24))();
  param_1[5] = uVar2;
  FUN_0030d634(param_1 + 5,0);
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}
