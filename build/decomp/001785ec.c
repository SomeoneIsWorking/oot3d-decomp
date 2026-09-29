// OoT3D decomp @ 001785ec  name=FUN_001785ec  size=80

void FUN_001785ec(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a8,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00178644,DAT_00178640,uVar1,DAT_0017863c,param_1 + 0x1a8,0);
  FUN_00375bcc(param_1,DAT_00178648);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0017864c;
  return;
}
