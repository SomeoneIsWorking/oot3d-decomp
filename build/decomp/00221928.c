// OoT3D decomp @ 00221928  name=FUN_00221928  size=176

void FUN_00221928(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_002219d8,param_3,param_4,param_4);
  uVar3 = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x200,4);
  uVar1 = DAT_002219e0;
  *(undefined4 *)(param_1 + 0xc4) = DAT_002219dc;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  iVar2 = DAT_002219e8;
  if (*(int *)(DAT_002219e4 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if (*(int *)(iVar2 + 0x4e8) == 5) {
    *(undefined2 *)(DAT_002219ec + param_2) = 0xff;
  }
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_002219f0);
  FUN_0037632c(param_1,param_1 + 0x1a8);
  FUN_00350d20(param_1 + 0xa0,0,DAT_002219f4,uVar3);
  return;
}
