// OoT3D decomp @ 00498f70  name=FUN_00498f70  size=76

void FUN_00498f70(int param_1)

{
  int iVar1;

  iVar1 = DAT_00498fbc;
  if (*(int *)(DAT_00498fbc + 4) != 0 && param_1 != 0) {
    FUN_0049f234();
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x2c));
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00498fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 4))(param_1);
    return;
  }
  return;
}
