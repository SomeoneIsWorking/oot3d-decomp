// OoT3D decomp @ 003ff138  name=FUN_003ff138  size=28

void FUN_003ff138(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ff14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))
              (*(undefined4 *)(param_1 + 8),param_2,param_3,*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}
