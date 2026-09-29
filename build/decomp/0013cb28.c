// OoT3D decomp @ 0013cb28  name=FUN_0013cb28  size=188

void FUN_0013cb28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;

  uVar1 = DAT_0013cbec;
  *(undefined2 *)(param_1 + 0x78e) = 10;
  FUN_0036e168(DAT_0013cbf0,uVar1,DAT_0013cbe8,DAT_0013cbe4,param_1 + 0x7c8);
  FUN_00370734(param_1 + 0x1a4);
  iVar2 = DAT_0013cbf4;
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_0013cbf4 + 0x2c));
  uVar5 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar2 + 0x24));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = FUN_0036e5e0(uVar5,uVar1,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00353020(uVar1,DAT_0013cbfc,uVar3,DAT_0013cbf8,param_1 + 0x1a4,iVar2 + 0x24,0);
    *(undefined4 *)(param_1 + 0x760) = DAT_0013cc00;
    *(undefined2 *)(param_1 + 0x7aa) = 0x96;
  }
  return;
}
