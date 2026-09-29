// OoT3D decomp @ 003ce660  name=FUN_003ce660  size=104

void FUN_003ce660(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar1 = DAT_003ce6c8;
  FUN_00342714(*(float *)(param_1 + 0x438) + DAT_003ce6cc,param_2,param_1,param_1 + 0x450,
               DAT_003ce6d0);
  iVar2 = *(int *)(DAT_003ce6d4 + param_2);
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  *(undefined4 *)(param_1 + 0x470) = uVar4;
  FUN_00343414(param_1,param_1 + 0x450,2,uVar1);
  return;
}
