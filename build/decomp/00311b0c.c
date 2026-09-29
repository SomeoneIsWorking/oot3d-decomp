// OoT3D decomp @ 00311b0c  name=FUN_00311b0c  size=32

void FUN_00311b0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = DAT_00311b2c;
  *(undefined4 *)(DAT_00311b2c + *(int *)(DAT_00311b2c + 0x124) * 4 + 0x134) = param_1;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x124) * 4 + 0x140) = param_2;
  return;
}
