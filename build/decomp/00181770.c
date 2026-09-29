// OoT3D decomp @ 00181770  name=FUN_00181770  size=120

void FUN_00181770(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_001817e8 + 8));
  uVar1 = DAT_001817f0;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_001817f4,DAT_001817f0,uVar2,DAT_001817ec,param_1 + 0x1a4,DAT_001817f8,2);
  uVar2 = DAT_001817fc;
  *(undefined2 *)(param_1 + 0x77a) = 0;
  *(undefined4 *)(param_1 + 0x760) = uVar2;
  *(undefined2 *)(param_1 + 0x7aa) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return;
}
