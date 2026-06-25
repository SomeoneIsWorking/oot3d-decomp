// OoT3D decomp @ 0041ef58  name=FUN_0041ef58  size=52

undefined4 * FUN_0041ef58(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041ef90;
  *param_1 = DAT_0041ef8c;
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  param_1[4] = uVar1;
  FUN_002fbb20(param_1);
  return param_1;
}

