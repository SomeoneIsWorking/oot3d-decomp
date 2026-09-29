// OoT3D decomp @ 00352aa8  name=FUN_00352aa8  size=104

void FUN_00352aa8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = (int)*(short *)(param_1 + 0x1a8);
  if (iVar3 == 0) {
    iVar3 = *(int *)(DAT_00352b50 + *(short *)(param_1 + 0x1aa) * 4);
  }
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x1b0);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x128) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}
