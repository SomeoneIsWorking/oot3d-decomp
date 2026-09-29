// OoT3D decomp @ 002e1b1c  name=FUN_002e1b1c  size=52

undefined4 FUN_002e1b1c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  *param_2 = 0xffffffff;
  uVar1 = DAT_002e1b50;
  if (*(int *)(DAT_002e1b54 + 8) != 0) {
    FUN_00465ee8(*(int *)(DAT_002e1b54 + 8),param_1,param_2);
  }
  return uVar1;
}
