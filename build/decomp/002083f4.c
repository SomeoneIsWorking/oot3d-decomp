// OoT3D decomp @ 002083f4  name=FUN_002083f4  size=156

void FUN_002083f4(int param_1)

{
  uint in_fpscr;

  FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  VectorSignedToFloat(0,(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat(0xffffffc8,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
