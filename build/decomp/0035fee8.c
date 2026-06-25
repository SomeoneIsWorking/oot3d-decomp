// OoT3D decomp @ 0035fee8  name=FUN_0035fee8  size=32

undefined4 FUN_0035fee8(void)

{
  int iVar1;
  
  iVar1 = FUN_00322088();
  return *(undefined4 *)(DAT_0035ff08 + ((uint)(iVar1 << 6) >> 0x1b) * 4);
}

