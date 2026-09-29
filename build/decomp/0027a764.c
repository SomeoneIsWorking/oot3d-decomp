// OoT3D decomp @ 0027a764  name=FUN_0027a764  size=264

void FUN_0027a764(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  *(ushort *)(param_1 + 0x1c4) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1d8,0,param_1 + 0x1d0,1,0,uVar2);
  uVar1 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1d8) + 0xc) + 0x10) = 1;
  uVar2 = FUN_00372f0c(uVar2,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xc) + 0x10) = 1;
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_003510b0(param_1,DAT_0027a86c);
  uVar2 = DAT_0027a874;
  *(undefined4 *)(param_1 + 0x1c8) = DAT_0027a870;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
