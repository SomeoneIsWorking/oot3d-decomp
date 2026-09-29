// OoT3D decomp @ 0024f78c  name=FUN_0024f78c  size=184

void FUN_0024f78c(int param_1)

{
  int iVar1;

  *(undefined4 *)(param_1 + 0x6c) = DAT_0024fa60;
  if ((int)*(float *)(param_1 + 0x1e0) == 10) {
    FUN_00375bcc(param_1,DAT_0024fa64);
  }
  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 == 0) {
    return;
  }
  FUN_00362384(*(undefined4 *)(param_1 + 0xa80));
  FUN_0035eb74();
  if ((*(short *)(param_1 + 0x1c) == -2) && (iVar1 = FUN_0036f18c(param_1,DAT_0024fa74), iVar1 == 0)
     ) {
    FUN_0034eb00(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
