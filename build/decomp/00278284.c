// OoT3D decomp @ 00278284  name=FUN_00278284  size=196

void FUN_00278284(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  FUN_003510b0(param_1,DAT_00278348);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1cc,0,0,uVar1);
  uVar1 = FUN_00372f0c(uVar1,2);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  FUN_0036df4c(param_1 + 0x1c0,param_1 + 8);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0027834c;
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}
