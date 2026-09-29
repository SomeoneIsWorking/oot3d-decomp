// OoT3D decomp @ 0019cc20  name=FUN_0019cc20  size=68

void FUN_0019cc20(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0019cc6c,DAT_0019cc68,uVar1,DAT_0019cc64,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_0019cc70;
  return;
}
