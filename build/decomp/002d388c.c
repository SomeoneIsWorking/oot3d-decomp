// OoT3D decomp @ 002d388c  name=FUN_002d388c  size=248

uint FUN_002d388c(uint param_1)

{
  uint uVar1;
  uint uVar2;

  if (param_1 < 4) {
    return 3;
  }
  if (0x13 < param_1) {
    uVar2 = 0;
    do {
      uVar1 = param_1 + uVar2;
      if (((((uVar1 & 1) != 0) &&
           ((uint)((ulonglong)uVar1 * (ulonglong)DAT_002d3984 >> 0x21) * -3 + uVar1 != 0)) &&
          ((uint)((ulonglong)uVar1 * (ulonglong)DAT_002d3988 >> 0x22) * -5 + uVar1 != 0)) &&
         ((((uint)((ulonglong)DAT_002d398c * (ulonglong)uVar1 + (ulonglong)DAT_002d398c >> 0x21) *
            -7 + uVar1 != 0 &&
           ((uint)((ulonglong)uVar1 * (ulonglong)DAT_002d3990 >> 0x23) * -0xb + uVar1 != 0)) &&
          (((uint)((ulonglong)uVar1 * (ulonglong)DAT_002d3994 >> 0x22) * -0xd + uVar1 != 0 &&
           ((uint)((ulonglong)uVar1 * (ulonglong)DAT_002d3998 >> 0x24) * -0x11 + uVar1 != 0)))))) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 100);
  }
  return param_1 | 1;
}
