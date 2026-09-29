// OoT3D decomp @ 00209b2c  name=FUN_00209b2c  size=328

void FUN_00209b2c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_003510b0(param_1,DAT_00209c74);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x2cc,2,0,uVar3);
  uVar3 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  uVar3 = DAT_00209c78;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_00372d4c(uVar3,uVar3,param_1 + 0xbc,0);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c8) = DAT_00209c7c;
    *(short *)(param_1 + 0xbc) = (short)DAT_00209c80;
    *(undefined2 *)(param_2 + 0x53f2) = 0xff;
    *(undefined2 *)(param_2 + 0x53f0) = 0xff;
    return;
  }
  FUN_00353dd0(param_2,param_1 + 0x1c0);
  FUN_00353dd0(param_2,param_1 + 0x218);
  FUN_00353dd0(param_2,param_1 + 0x270);
  FUN_00353d24(param_2,param_1 + 0x1c0,param_1,DAT_00209c84);
  FUN_00353d24(param_2,param_1 + 0x218,param_1,DAT_00209c88);
  FUN_00353d24(param_2,param_1 + 0x270,param_1,DAT_00209c88);
  *(undefined4 *)(param_1 + 0x2c8) = DAT_00209c8c;
  *DAT_00209c90 = 0;
  return;
}
