// OoT3D decomp @ 0034eb00  name=FUN_0034eb00  size=76

void FUN_0034eb00(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,4);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0034ebfc,DAT_0034ebf8,uVar1,DAT_0034ebf4,param_1 + 0x1a4,4,1);
  *(undefined4 *)(param_1 + 0xa48) = 3;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
