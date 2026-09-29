// OoT3D decomp @ 00330370  name=FUN_00330370  size=88

void FUN_00330370(int param_1)

{
  short sVar1;
  short *psVar2;

  psVar2 = (short *)(param_1 + 0xbb6);
  if ((*psVar2 != 0) && (sVar1 = *psVar2 + -1, *psVar2 = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0xbb4) = *psVar2;
    if (2 < *psVar2) {
      *(short *)(param_1 + 0xbb4) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
