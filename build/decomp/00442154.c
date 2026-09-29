// OoT3D decomp @ 00442154  name=FUN_00442154  size=60

undefined4 * FUN_00442154(undefined4 *param_1)

{
  undefined4 uVar1;

  *param_1 = DAT_00442190;
  if (*(char *)(param_1 + 2) != '\0' && *(char *)(param_1 + 2) != '\x06') {
    FUN_002fbb20(param_1);
  }
  uVar1 = DAT_00442194;
  param_1[1] = 0;
  param_1[4] = uVar1;
  return param_1;
}
