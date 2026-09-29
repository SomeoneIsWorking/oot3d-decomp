// OoT3D decomp @ 002ac3b8  name=FUN_002ac3b8  size=180

void FUN_002ac3b8(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_002ac46c);
  FUN_003532e8(param_1,3);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1bc,4,0);
  uVar1 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1bc) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
