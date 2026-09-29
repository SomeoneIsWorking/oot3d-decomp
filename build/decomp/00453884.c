// OoT3D decomp @ 00453884  name=FUN_00453884  size=44

undefined4 FUN_00453884(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;

  if (*(int *)(DAT_004538b4 + 8) != 0) {
    uVar1 = FUN_00465f28(*(int *)(DAT_004538b4 + 8),param_1,param_2);
    return uVar1;
  }
  return DAT_004538b0;
}
