// OoT3D decomp @ 001a60d0  name=FUN_001a60d0  size=184

void FUN_001a60d0(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  FUN_003510b0(param_1,DAT_001a6188);
  FUN_003532e8(param_1,0);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if ((*(ushort *)(param_1 + 0x1c) & 0x8000) != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x7fff;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,param_1 + 0x1c4,1,0,uVar1);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_001a618c;
  return;
}
