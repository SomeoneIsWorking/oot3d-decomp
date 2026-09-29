// OoT3D decomp @ 0021a5ac  name=FUN_0021a5ac  size=136

void FUN_0021a5ac(int param_1)

{
  float fVar1;

  if (0 < *(short *)(param_1 + 0x9c0)) {
    *(short *)(param_1 + 0x9c0) = *(short *)(param_1 + 0x9c0) + -1;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar1 = *(float *)(param_1 + 0x98);
  if (DAT_0021a7e4 <= (int)fVar1) {
    if (DAT_0021a800 < (int)fVar1) {
      fVar1 = DAT_0021a804;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(fVar1 - DAT_0021a808,DAT_0021a80c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
