// OoT3D decomp @ 00240b48  name=FUN_00240b48  size=184

void FUN_00240b48(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0x1a,0);
  uVar1 = FUN_00353fd4(param_1,param_2,1);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_00240c00);
  if ((*(int *)(DAT_00240c04 + 4) == 0) ||
     (iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f), iVar2 == 0)) {
    FUN_00374428(param_1);
  }
  return;
}
