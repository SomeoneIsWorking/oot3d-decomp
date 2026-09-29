// OoT3D decomp @ 0033398c  name=FUN_0033398c  size=88

void FUN_0033398c(int param_1)

{
  short sVar1;
  short *psVar2;

  psVar2 = (short *)(param_1 + 0x126a);
  if ((*psVar2 != 0) && (sVar1 = *psVar2 + -1, *psVar2 = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x1268) = *psVar2;
    if (2 < *psVar2) {
      *(short *)(param_1 + 0x1268) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
