// OoT3D decomp @ 00180488  name=FUN_00180488  size=68

void FUN_00180488(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a8,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001804d0,DAT_001804d0,uVar1,DAT_001804cc,param_1 + 0x1a8,0,2);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001804d4;
  return;
}
