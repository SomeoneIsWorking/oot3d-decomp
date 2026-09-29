// OoT3D decomp @ 0023173c  name=FUN_0023173c  size=228

void FUN_0023173c(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  FUN_003532e8(param_1,0);
  FUN_003510b0(param_1,DAT_00231820);
  FUN_00372f38(param_1,param_2,param_1 + 0x21c,1,0,uVar1);
  FUN_00353dd0(param_2,param_1 + 0x1bc);
  FUN_00353d24(param_2,param_1 + 0x1bc,param_1,DAT_00231824);
  FUN_0037632c(param_1,param_1 + 0x1bc);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(ushort *)(param_1 + 0x218) = *(ushort *)(param_1 + 0x18) & 0x3f;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  uVar1 = DAT_00231828;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  return;
}
