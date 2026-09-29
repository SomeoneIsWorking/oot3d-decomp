// OoT3D decomp @ 00304200  name=FUN_00304200  size=36

uint FUN_00304200(void)

{
  uint uVar1;

  uVar1 = *DAT_00304224 * DAT_00304228 + DAT_0030422c;
  *DAT_00304224 = uVar1;
  return uVar1 >> 0x10;
}
