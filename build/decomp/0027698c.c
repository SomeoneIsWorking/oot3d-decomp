// OoT3D decomp @ 0027698c  name=FUN_0027698c  size=224

void FUN_0027698c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_00276a6c);
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,0);
  uVar2 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c0) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0xc) + 0x10) = 1;
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  iVar1 = DAT_00276a70;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  uVar2 = DAT_00276a74;
  if ((*(ushort *)(iVar1 + 0xf4) & 0x2000) == 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_0036b940(param_2,param_2 + 0xae8,uVar3);
    uVar2 = DAT_00276a78;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
