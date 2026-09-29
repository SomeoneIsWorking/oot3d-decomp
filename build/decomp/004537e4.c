// OoT3D decomp @ 004537e4  name=FUN_004537e4  size=44

undefined4 FUN_004537e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;

  if (*(int *)(DAT_00453814 + 8) != 0) {
    uVar1 = FUN_00465dec(*(int *)(DAT_00453814 + 8),param_1,param_2);
    return uVar1;
  }
  return DAT_00453810;
}
