// OoT3D decomp @ 002bb8b0  name=FUN_002bb8b0  size=40

uint FUN_002bb8b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00322088();
  return (*(uint *)(DAT_002bb8d8 + ((uint)(iVar1 << 6) >> 0x1b) * 4) & 4) >> 2;
}

