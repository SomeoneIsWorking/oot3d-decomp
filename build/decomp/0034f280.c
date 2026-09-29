// OoT3D decomp @ 0034f280  name=FUN_0034f280  size=68

void FUN_0034f280(int param_1)

{
  if (*(short *)(param_1 + 0x1c) == 2) {
    FUN_0036e734(param_1 + 0x1e0,0);
  }
  else {
    FUN_00370350(DAT_0034f380,param_1 + 0x1e0,3);
  }
  *(undefined1 *)(param_1 + 0x964) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
