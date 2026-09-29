// OoT3D decomp @ 00394da8  name=FUN_00394da8  size=176

void FUN_00394da8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0,0);
  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_003510b0(param_1,DAT_00394e58);
  return;
}
