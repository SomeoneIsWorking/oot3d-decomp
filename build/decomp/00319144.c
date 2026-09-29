// OoT3D decomp @ 00319144  name=FUN_00319144  size=96

void FUN_00319144(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_1[3] = *param_3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  param_1[6] = *param_4;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  FUN_0033ae14(param_2,param_3,param_4,param_1 + 9,param_1 + 10,param_1 + 0xb,param_1 + 0xc);
  return;
}
