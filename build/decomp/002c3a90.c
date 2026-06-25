// OoT3D decomp @ 002c3a90  name=FUN_002c3a90  size=64

uint FUN_002c3a90(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_002c3ad0 + 0x60);
  if (uVar1 != 0) {
    if (*(char *)((uint)*(byte *)(DAT_002c3ad4 + 7) + DAT_002c3ad8) != '\a') {
      return (uint)*(byte *)((uint)*(byte *)(DAT_002c3ad4 + 8) + DAT_002c3ad8);
    }
    uVar1 = 7;
  }
  return uVar1;
}

