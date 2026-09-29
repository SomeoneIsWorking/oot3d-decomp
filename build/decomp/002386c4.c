// OoT3D decomp @ 002386c4  name=FUN_002386c4  size=84

void FUN_002386c4(void)

{
  int iVar1;

  if (((*DAT_00238718 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00238718), iVar1 != 0)) {
    FUN_0036788c(DAT_0023871c);
  }
                    /* WARNING: Could not recover jumptable at 0x00238714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00238728 + 0xc))();
  return;
}
