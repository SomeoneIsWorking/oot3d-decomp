// OoT3D decomp @ 00209cec  name=FUN_00209cec  size=212

void FUN_00209cec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_00209dc0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0,0);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  if (*(short *)(param_1 + 0x1c) == 1) {
    iVar2 = FUN_00350cf4(0x18);
    if ((iVar2 != 0) || (*(short *)(*DAT_00209dc4 + 0x556) != 0)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
      return;
    }
    FUN_00374428(param_1);
  }
  return;
}
