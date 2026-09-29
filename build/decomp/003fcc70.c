// OoT3D decomp @ 003fcc70  name=FUN_003fcc70  size=56

void FUN_003fcc70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))(*(undefined4 *)(param_1 + 4));
  *param_3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x003fcca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 4),param_2);
  return;
}
