// OoT3D decomp @ 003fcb20  name=FUN_003fcb20  size=184

void FUN_003fcb20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = DAT_003fcbdc;
  *param_1 = DAT_003fcbd8;
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1[0x79]);
  param_1[0x79] = 0;
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1[0x7b]);
  param_1[0x7b] = 0;
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1[0x7a]);
  param_1[0x7a] = 0;
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1[0x7c]);
  param_1[0x7c] = 0;
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1[0x7d]);
  param_1[0x7d] = 0;
  FUN_0031067c(param_1);
  uVar2 = FUN_0031067c(param_1);
                    /* WARNING: Could not recover jumptable at 0x003fcbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar2);
  return;
}
