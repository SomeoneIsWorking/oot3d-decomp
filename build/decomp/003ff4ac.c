// OoT3D decomp @ 003ff4ac  name=FUN_003ff4ac  size=36

void FUN_003ff4ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;

  bVar1 = *(int *)(param_1 + 0xc) != 0;
  if (bVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x14);
  }
  if (!bVar1 || UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003ff4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(param_1 + 8),param_2,param_3,*(undefined4 *)(param_1 + 4));
  return;
}
