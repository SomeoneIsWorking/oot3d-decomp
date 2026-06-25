// OoT3D decomp @ 00496a7c  name=FUN_00496a7c  size=40

uint FUN_00496a7c(void)

{
  int iVar1;
  
  iVar1 = FUN_00322088();
  return (*(uint *)(DAT_00496aa4 + ((uint)(iVar1 << 6) >> 0x1b) * 4) & 2) >> 1;
}

