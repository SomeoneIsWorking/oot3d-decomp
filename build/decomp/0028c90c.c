// OoT3D decomp @ 0028c90c  name=FUN_0028c90c  size=124

void FUN_0028c90c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_0028c988,param_3,param_4,param_4);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1ac,0,0);
  uVar1 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0xc),uVar1);
  uVar1 = DAT_0028c990;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0028c98c;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined2 *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2) = 0xff9c;
  return;
}
