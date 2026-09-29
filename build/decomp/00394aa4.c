// OoT3D decomp @ 00394aa4  name=FUN_00394aa4  size=224

void FUN_00394aa4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x2cc,2,0,uVar2);
  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  FUN_00350eb8(param_2,param_1 + 0x1bc);
  FUN_00350d48(param_2,param_1 + 0x1bc,param_1,DAT_00394b84,param_1 + 0x1dc);
  uVar2 = FUN_00353fd4(param_1,param_2,2);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_003510b0(param_1,DAT_00394b88);
  return;
}
