// OoT3D decomp @ 00367df4  name=FUN_00367df4  size=108

void FUN_00367df4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;

  uVar1 = FUN_00355780(*param_4,*param_5,param_2,param_3);
  *param_5 = uVar1;
  uVar1 = FUN_00355780(param_4[1],param_5[1],param_1,param_3);
  param_5[1] = uVar1;
  uVar1 = FUN_00355780(param_4[2],param_5[2],param_2,param_3);
  param_5[2] = uVar1;
  return;
}
