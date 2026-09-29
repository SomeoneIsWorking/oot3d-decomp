// OoT3D decomp @ 003928cc  name=FUN_003928cc  size=92

void FUN_003928cc(int param_1)

{
  int iVar1;

  iVar1 = FUN_00370734(param_1 + 0x1e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  iVar1 = FUN_003736fc(DAT_003929f8,DAT_003929f4,param_1 + 0x1e0);
  if (iVar1 != 0) {
    FUN_00375bcc(param_1,DAT_003929fc);
    return;
  }
  return;
}
