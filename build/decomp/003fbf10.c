// OoT3D decomp @ 003fbf10  name=FUN_003fbf10  size=296

void FUN_003fbf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_00311ee0(0x400);
  FUN_00311d78(2,param_1 + 0xc);
  FUN_00311c70(*(undefined4 *)(param_1 + 0xc));
  FUN_00311b88(param_2,param_3,param_4,param_5,iVar1,uVar2,uVar3);
  FUN_00311b30(0x600,param_1 + 0x40);
  FUN_00311c70(*(undefined4 *)(param_1 + 0x10));
  FUN_00311b88(param_2,param_3,param_4,param_5);
  FUN_00311b30(0x600,param_1 + 0x44);
  FUN_00311b0c(0);
  FUN_00311c70(0);
  uVar2 = DAT_003fc038;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00311ee0(uVar2);
  FUN_00311d78(2,param_1 + 0x14);
  FUN_00311c70(*(undefined4 *)(param_1 + 0x14));
  FUN_00311b88(param_6,param_7,param_8,param_9);
  FUN_00311b30(0x600,param_1 + 0x48);
  FUN_00311c70(*(undefined4 *)(param_1 + 0x18));
  FUN_00311b88(param_6,param_7,param_8,param_9);
  FUN_00311b30(0x600,param_1 + 0x4c);
  FUN_00311b0c(0);
  FUN_00311c70(0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

