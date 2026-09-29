// OoT3D decomp @ 0028456c  name=FUN_0028456c  size=240

void FUN_0028456c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  iVar4 = *(int *)(DAT_00284704 + param_2);
  FUN_00370734(param_1 + 0x1e0);
  iVar2 = FUN_00328e08(param_2,param_1);
  if (iVar2 == 0) {
    uVar3 = (uint)(short)(*(short *)(iVar4 + 0xbe) - *(short *)(param_1 + 0xbe));
    if (*(int *)(param_1 + 0x98) < DAT_00284708) {
      bVar5 = *(char *)(iVar4 + 0x2227) != '\0';
      uVar1 = 0;
      if (bVar5) {
        uVar3 = uVar3 + 7999;
        uVar1 = DAT_00284710;
      }
      if (bVar5 && uVar1 < uVar3) {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    if (*(int *)(param_1 + 0x1c6c) == 0) {
      iVar2 = FUN_0036f18c(param_1,DAT_00284714);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (DAT_00284718 <= *(int *)(param_1 + 0x98) + 0xbcdfffffU) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(int *)(param_1 + 0x1c6c) = *(int *)(param_1 + 0x1c6c) + -1;
  }
  return;
}
