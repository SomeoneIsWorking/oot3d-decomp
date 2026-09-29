// OoT3D decomp @ 00486bf4  name=FUN_00486bf4  size=68

void FUN_00486bf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;

  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  uVar1 = FUN_00339384(param_3,param_4);
  param_1[2] = uVar1 & 0xffffffe0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}
