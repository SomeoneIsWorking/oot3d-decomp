// OoT3D decomp @ 004934c8  name=FUN_004934c8  size=84

void FUN_004934c8(void)

{
  uint uVar1;

  FUN_002db3b8(DAT_00493520,DAT_0049351c);
  FUN_002c1ab4(1);
  FUN_00497dc8(DAT_00493524);
  software_interrupt(0x19);
  uVar1 = *DAT_00493524 >> 0x1b;
  if ((*DAT_00493524 & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if ((uVar1 != 0xfffffff9 && uVar1 != 0) && uVar1 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}
