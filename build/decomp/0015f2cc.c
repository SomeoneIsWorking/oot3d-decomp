// OoT3D decomp @ 0015f2cc  name=FUN_0015f2cc  size=64

int FUN_0015f2cc(int param_1)

{
  if (0 < *(short *)(param_1 + 0x1c)) {
    FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x18) * *(short *)(param_1 + 0x1c)));
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return (int)*(short *)(param_1 + 0x1c);
}
