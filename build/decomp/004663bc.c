// OoT3D decomp @ 004663bc  name=FUN_004663bc  size=52

void FUN_004663bc(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;

  iVar1 = DAT_004663f0;
  if (*(code **)(DAT_004663f0 + 0x40) != (code *)0x0) {
    (**(code **)(DAT_004663f0 + 0x40))(*(undefined4 *)(DAT_004663f0 + 0x80));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x44);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004663e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(iVar1 + 0x84));
  return;
}
