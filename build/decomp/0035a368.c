// OoT3D decomp @ 0035a368  name=FUN_0035a368  size=76

void FUN_0035a368(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1e0,6);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035a3bc,DAT_0035a3b8,uVar1,DAT_0035a3b4,param_1 + 0x1e0,6,1);
  *(undefined4 *)(param_1 + 0xbe8) = 8;
  *(undefined4 *)(param_1 + 0xbf0) = DAT_0035a3c0;
  return;
}
