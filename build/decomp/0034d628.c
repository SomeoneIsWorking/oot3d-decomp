// OoT3D decomp @ 0034d628  name=FUN_0034d628  size=84

undefined4 FUN_0034d628(int param_1)

{
  if (((*(uint *)(DAT_0034d67c + param_1) & 0x200) == 0) &&
     (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_0034d684 < 'Q')) ||
      ((*(uint *)(DAT_0034d67c + param_1) & 0x400) != 0)))) {
    return *(undefined4 *)(DAT_0034d680 + (uint)*(byte *)(param_1 + 0x1b3) * 4);
  }
  return *(undefined4 *)(DAT_0034d680 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x4f8);
}

