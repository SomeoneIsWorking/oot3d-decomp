// OoT3D decomp @ 0035976c  name=FUN_0035976c  size=100

undefined4 FUN_0035976c(undefined4 param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(DAT_003597d0 + param_2) = param_3;
  FUN_0036055c(param_1,param_2,DAT_003597d4,0);
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 0x40;
  if ('\x01' < *(char *)(DAT_003597d8 + param_2)) {
    FUN_0034d688(param_1,param_2,0xff);
    return 1;
  }
  return 0;
}

