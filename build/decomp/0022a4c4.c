// OoT3D decomp @ 0022a4c4  name=FUN_0022a4c4  size=516

void FUN_0022a4c4(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  FUN_003510b0(param_1,DAT_0022a6c8);
  uVar2 = DAT_0022a6d4;
  FUN_00372d4c(DAT_0022a6d4,DAT_0022a6cc,param_1 + 0xbc,DAT_0022a6d0);
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x7e4,param_1,DAT_0022a6d8);
  FUN_00350d20(param_1 + 0xa0,DAT_0022a6dc + 0x40);
  *(short *)(param_1 + 0x7e0) = (short)DAT_0022a6e0;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = (ushort)(((uint)uVar1 << 0x11) >> 0x11);
  if ((uVar1 & 0x8000) != 0) {
    *(undefined4 *)(param_1 + 0x140) = DAT_0022a6e4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  }
  if ((uVar1 & 0x7fff) == 0x10) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    uVar4 = DAT_0022a6e8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    iVar3 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x8e,0);
    *(int *)(param_1 + 0x124) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    iVar3 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x8e,0);
    *(int *)(param_1 + 0x128) = iVar3;
    if (iVar3 == 0) {
      FUN_00374428();
      FUN_00374428(param_1);
      return;
    }
    *(int *)(*(int *)(param_1 + 0x124) + 0x128) = param_1;
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x124) = *(undefined4 *)(param_1 + 0x128);
    *(int *)(*(int *)(param_1 + 0x128) + 0x124) = param_1;
    *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x128) = *(undefined4 *)(param_1 + 0x124);
    FUN_00373d40(param_1 + 0x1a4,10);
    uVar4 = DAT_0022a6ec;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x7d8) = uVar4;
  return;
}
