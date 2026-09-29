// OoT3D decomp @ 00326018  name=FUN_00326018  size=104

void FUN_00326018(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;

  psVar2 = (short *)(param_1 + 0x54a);
  psVar3 = (short *)(param_1 + 0x548);
  if ((*psVar2 != 0) && (sVar1 = *psVar2 + -1, *psVar2 = sVar1, sVar1 != 0)) {
    *psVar3 = *psVar2;
    if (2 < *psVar2) {
      *psVar3 = 0;
    }
    *(short *)(param_1 + 0x54c) = *psVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x5a);
}
