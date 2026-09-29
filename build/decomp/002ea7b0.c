// OoT3D decomp @ 002ea7b0  name=FUN_002ea7b0  size=164

void FUN_002ea7b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;

  *(undefined4 *)(param_1 + 0x14) = param_6;
  iVar1 = FUN_00339384(param_2 + param_5 + -1,param_5);
  *(int *)(param_1 + 0x18) = iVar1 * param_5;
  iVar2 = FUN_00339384(param_3 + param_5 + -1,param_5);
  uVar6 = iVar2 * param_5;
  *(uint *)(param_1 + 0x1c) = uVar6;
  iVar2 = FUN_00339384(param_4,param_2);
  puVar4 = (uint *)0x0;
  *(int *)(param_1 + 0x20) = iVar2 * param_2;
  puVar3 = (uint *)((iVar2 * param_2 + uVar6) - iVar1 * param_5);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = param_5;
  puVar5 = puVar4;
  if (uVar6 < puVar3 || uVar6 - (int)puVar3 == 0) {
    do {
      puVar4 = puVar3;
      *puVar4 = (uint)puVar5;
      puVar3 = (uint *)((int)puVar4 - *(int *)(param_1 + 0x18));
      puVar5 = puVar4;
    } while (*(uint **)(param_1 + 0x1c) <= puVar3);
  }
  *(uint **)(param_1 + 0x24) = puVar4;
  return;
}
