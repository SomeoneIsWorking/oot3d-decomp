// OoT3D decomp @ 001cd658  name=FUN_001cd658  size=132

void FUN_001cd658(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x26e) == 0) {
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,0xe);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001cd6e4,DAT_001cd6e0,uVar1,DAT_001cd6dc,param_1 + 0x1a4,0xe,0);
    *(undefined4 *)(param_1 + 0x1050) = DAT_001cd6e8;
    *(undefined4 *)(param_1 + 0x1054) = DAT_001cd6ec;
    *(undefined4 *)(param_1 + 0x22c) = DAT_001cd6f0;
    *(undefined2 *)(param_1 + 0x24e) = 0;
  }
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined2 *)(param_1 + 0x254) = 0;
  return;
}
