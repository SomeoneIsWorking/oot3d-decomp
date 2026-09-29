// OoT3D decomp @ 002e1b58  name=FUN_002e1b58  size=64

undefined4 FUN_002e1b58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  uVar1 = DAT_002e1b98;
  if (*(int *)(DAT_002e1b9c + 8) != 0) {
    uVar1 = FUN_00465e78(*(int *)(DAT_002e1b9c + 8),param_1,0,param_2,param_3,param_4);
  }
  return uVar1;
}
