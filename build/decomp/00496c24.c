// OoT3D decomp @ 00496c24  name=FUN_00496c24  size=28

void FUN_00496c24(void)

{
  int iVar1;
  
  iVar1 = FUN_00359690();
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x1b8) = *(byte *)(iVar1 + 0x1b8) | 4;
  }
  return;
}

