// OoT3D decomp @ 0029e718  name=FUN_0029e718  size=204

void FUN_0029e718(int param_1,int param_2)

{
  undefined4 uVar1;

  *(undefined1 *)(param_1 + 0x1c2) = 0;
  uVar1 = DAT_0029e7e4;
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  FUN_003510b0(param_1,uVar1);
  if ((*(uint *)(DAT_0029e7e8 + 0x360) & 1 << (*(ushort *)(param_1 + 0x1c) & 0xff)) == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0xb,0);
    FUN_003532e8(param_1,0);
    *(undefined1 *)(param_1 + 0x1c3) = 1;
    uVar1 = FUN_00353fd4(param_1,param_2,5);
    uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
    return;
  }
  FUN_00374428(param_1);
  return;
}
