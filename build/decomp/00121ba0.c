// OoT3D decomp @ 00121ba0  name=FUN_00121ba0  size=196

void FUN_00121ba0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;

  FUN_00370734(param_1 + 0x1a4);
  uVar1 = DAT_00121c70;
  FUN_0036e168(DAT_00121c70,DAT_00121c6c,DAT_00121c68,DAT_00121c64,param_1 + 0x7c8);
  uVar2 = DAT_00121c74;
  FUN_0036e168(DAT_00121c7c,uVar1,DAT_00121c78,DAT_00121c74,param_1 + 0x7d8);
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00121c80 + 0x20));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = FUN_0036e5e0(uVar3,uVar1,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00353020(uVar1,uVar2,DAT_00121c88,DAT_00121c84,param_1 + 0x1a4,DAT_00121c8c,2);
    *(undefined4 *)(param_1 + 0x760) = DAT_00121c90;
    *(undefined2 *)(param_1 + 0x778) = 0;
    *(undefined2 *)(param_1 + 0x7aa) = 0x29;
  }
  return;
}
