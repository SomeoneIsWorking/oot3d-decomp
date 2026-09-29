// OoT3D decomp @ 0016cb24  name=FUN_0016cb24  size=112

void FUN_0016cb24(void)

{
  int iVar1;

  if (((*DAT_0016cb94 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0016cb94), iVar1 != 0)) {
    FUN_0036788c(DAT_0016cb98);
  }
  *(undefined4 *)(DAT_0016cba4 + 0x20) = *(undefined4 *)(DAT_0016cb98 + 0x80);
  iVar1 = FUN_003d0e0c();
  if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0016cb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x10))(iVar1,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}
