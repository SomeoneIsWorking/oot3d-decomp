// OoT3D decomp @ 003d4b98  name=FUN_003d4b98  size=64

void FUN_003d4b98(int param_1)

{
  if ((*(byte *)(param_1 + 0x220) & 2) != 0) {
    *(byte *)(param_1 + 0x220) = *(byte *)(param_1 + 0x220) & 0xfd;
    FUN_00375bcc(param_1,DAT_003d4c9c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
