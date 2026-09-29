// OoT3D decomp @ 00109cfc  name=FUN_00109cfc  size=136

void FUN_00109cfc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;

  FUN_00370734(param_1 + 0x1a4);
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00109d84 + 0x28));
  uVar1 = DAT_00109d88;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = FUN_0036e5e0(uVar2,DAT_00109d88,param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_00353020(uVar1,DAT_00109d94,DAT_00109d90,DAT_00109d8c,param_1 + 0x1a4,DAT_00109d98,2);
    *(undefined4 *)(param_1 + 0x760) = DAT_00109d9c;
    *(undefined2 *)(param_1 + 0x778) = 0;
    *(undefined2 *)(param_1 + 0x7aa) = 0x29;
  }
  return;
}
