// OoT3D decomp @ 001c7dac  name=FUN_001c7dac  size=68

void FUN_001c7dac(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001c7df8,DAT_001c7df4,uVar1,DAT_001c7df0,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_001c7dfc;
  return;
}
