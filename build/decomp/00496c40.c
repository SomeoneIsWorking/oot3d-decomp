// OoT3D decomp @ 00496c40  name=FUN_00496c40  size=28

void FUN_00496c40(void)

{
  int iVar1;
  
  iVar1 = FUN_00359690();
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x1b8) = *(byte *)(iVar1 + 0x1b8) | 2;
  }
  return;
}

