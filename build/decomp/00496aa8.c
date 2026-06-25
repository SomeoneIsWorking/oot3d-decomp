// OoT3D decomp @ 00496aa8  name=FUN_00496aa8  size=36

uint FUN_00496aa8(void)

{
  int iVar1;
  
  iVar1 = FUN_00322088();
  return *(uint *)(DAT_00496acc + ((uint)(iVar1 << 6) >> 0x1b) * 4) & 1;
}

