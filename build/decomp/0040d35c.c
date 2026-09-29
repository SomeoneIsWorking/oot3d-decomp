// OoT3D decomp @ 0040d35c  name=FUN_0040d35c  size=52

undefined4 FUN_0040d35c(uint *param_1,uint *param_2)

{
  uint uVar1;

  uVar1 = (int)(param_1[1] - *param_1) >> 1;
  if (0x100 < uVar1) {
    return DAT_0040d390;
  }
  *param_2 = uVar1;
  param_2[1] = *param_1;
  return 0;
}
