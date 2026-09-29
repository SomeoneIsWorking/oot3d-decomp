// OoT3D decomp @ 002db1f0  name=FUN_002db1f0  size=60

undefined4 * FUN_002db1f0(undefined4 *param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_002db230;
  *param_1 = DAT_002db22c;
  param_1[2] = uVar1;
  FUN_003051cc(param_1 + 2);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00305224(param_1);
  return param_1;
}
