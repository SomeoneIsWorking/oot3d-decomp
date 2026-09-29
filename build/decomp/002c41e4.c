// OoT3D decomp @ 002c41e4  name=FUN_002c41e4  size=100

undefined4 FUN_002c41e4(uint param_1)

{
  short *psVar1;

  psVar1 = (short *)(DAT_002c4248 + (param_1 & 3) * 0x24);
  if (((char)psVar1[4] == '\0') || ((int)*psVar1 != param_1)) {
    psVar1 = (short *)0x0;
  }
  if (psVar1 != (short *)0x0) {
    *(undefined1 *)(psVar1 + 4) = 0;
    psVar1[0xe] = -1;
    *(short *)(DAT_002c424c + 2) = *(short *)(DAT_002c424c + 2) + -1;
    return 1;
  }
  return 0;
}
