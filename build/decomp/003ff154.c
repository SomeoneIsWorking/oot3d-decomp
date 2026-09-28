// OoT3D decomp @ 003ff154  name=FUN_003ff154  size=92

void FUN_003ff154(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x00372224(param_3,*(int *)(*(int *)(param_1 + 0xc) + 0x78) + param_2 * 0x34);
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ff1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))
                (*(undefined4 *)(param_1 + 8),param_2,param_3,*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  return;
}
