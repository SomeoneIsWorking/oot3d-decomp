// OoT3D decomp @ 00362de8  name=FUN_00362de8  size=68

void FUN_00362de8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1e0,1);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_00362f24,DAT_00362f20,uVar1,DAT_00362f1c,param_1 + 0x1e0,DAT_00362f28,1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
