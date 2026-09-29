// OoT3D decomp @ 00240254  name=FUN_00240254  size=200

void FUN_00240254(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_003510b0(param_1,DAT_0024031c);
  FUN_003532e8(param_1,1);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,1,0,uVar2);
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(ushort *)(param_1 + 0x1c2) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  iVar1 = FUN_0036e864(param_2);
  uVar2 = DAT_00240320;
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x1c0) = 0xffff;
    uVar2 = DAT_00240324;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
