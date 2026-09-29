// OoT3D decomp @ 00298d90  name=FUN_00298d90  size=68

void FUN_00298d90(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,4);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00298ddc,DAT_00298dd8,uVar1,DAT_00298dd4,param_1 + 0x1a4,4,0);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_00298de0;
  return;
}
