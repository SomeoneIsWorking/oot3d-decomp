// OoT3D decomp @ 00330710  name=FUN_00330710  size=84

void FUN_00330710(int param_1)

{
  short sVar1;
  short *psVar2;

  psVar2 = (short *)(param_1 + 0xbb2);
  if ((*psVar2 != 0) && (sVar1 = *psVar2 + -1, *psVar2 = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0xbb0) = *psVar2;
    if (2 < *psVar2) {
      *(short *)(param_1 + 0xbb0) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
