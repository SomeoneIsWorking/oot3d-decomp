// OoT3D decomp @ 003fb2a8  name=FUN_003fb2a8  size=168

void FUN_003fb2a8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;

  puVar1 = puRam003fb354;
  *param_1 = uRam003fb350;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  piVar2 = (int *)*puVar1;
  (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x11f]);
  *(char *)(param_1[4] + 0x1b9) = *(char *)(param_1[4] + 0x1b9) + -1;
  uVar3 = func_0x00377d28(param_1[0x17],uRam003fb358);
  (**(code **)(*(int *)*puRam003fb35c + 0x10))((int *)*puRam003fb35c,uVar3);
  param_1[0x17] = 0;
  piVar2 = (int *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x003fb34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
  return;
}
