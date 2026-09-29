// OoT3D decomp @ 002f2eec  name=FUN_002f2eec  size=136

undefined4 FUN_002f2eec(int param_1,uint param_2)

{
  uint uVar1;

  if (((param_2 != 0) && ((param_2 & ~*(uint *)(*(int *)(param_1 + 4) + 0x14)) == 0)) &&
     (((param_2 != 0 && ((param_2 & ~*(uint *)(*(int *)(param_1 + 4) + 0x18)) == 0)) ||
      ((uVar1 = 0x20 - LZCOUNT(param_2 - 1 & ~param_2), uVar1 < 0x20 &&
       (*(int *)(param_1 + uVar1 * 4 + 0x18b4) == 0)))))) {
    return 1;
  }
  return 0;
}
