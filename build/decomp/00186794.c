// OoT3D decomp @ 00186794  name=FUN_00186794  size=80

void FUN_00186794(int param_1,undefined4 param_2)

{
  FUN_0036055c(param_2,param_1,DAT_001867e4,0);
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x10;
  FUN_003604f0(param_1 + 0x254,param_2,
               *(undefined4 *)(DAT_001867e8 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x408));
  return;
}
