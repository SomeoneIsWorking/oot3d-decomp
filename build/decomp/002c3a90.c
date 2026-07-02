// OoT3D decomp @ 002c3a90  name=FUN_002c3a90  size=64

undefined1 FUN_002c3a90(void)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_002c3ad0 + 0x60) != 0) {
    if (*(char *)((uint)*(byte *)(DAT_002c3ad4 + 7) + DAT_002c3ad8) != '\a') {
      return *(undefined1 *)((uint)*(byte *)(DAT_002c3ad4 + 8) + DAT_002c3ad8);
    }
    uVar1 = 7;
  }
  return uVar1;
}

