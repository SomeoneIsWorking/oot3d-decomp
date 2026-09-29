// OoT3D decomp @ 0015e750  name=FUN_0015e750  size=168

void FUN_0015e750(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (0 < *(short *)(param_1 + 0x1fc)) {
    iVar3 = (int)*(short *)(param_1 + 0x1a8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(DAT_0015e948 + *(short *)(param_1 + 0x1aa) * 4);
    }
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4 + 0x1b0);
        if (iVar2 != 0) {
          param_3 = *(int *)(iVar2 + 0x128);
        }
        if ((iVar2 != 0 && param_3 != 0) && (param_3 = *(int *)(param_3 + 0x13c), param_3 == 0)) {
          *(undefined4 *)(iVar2 + 0x128) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
    return;
  }
  if (*(short *)(param_1 + 0x1fe) == 0) {
    *(undefined2 *)(param_1 + 0x1fe) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined2 *)(param_1 + 0x1fe) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
