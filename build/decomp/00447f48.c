// OoT3D decomp @ 00447f48  name=FUN_00447f48  size=68

undefined4 FUN_00447f48(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_00435f68();
  (*(code *)param_1[1])(param_1[2],param_1[3]);
  (*(code *)*param_1)(param_1[3]);
  uVar1 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    uVar1 = FUN_004350ac();
  }
  software_interrupt(9);
  return uVar1;
}

