// OoT3D decomp @ 0043c1ec  name=FUN_0043c1ec  size=64

int FUN_0043c1ec(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0043c22c + 0x14);
  if (iVar1 == 2 || iVar1 == 0xf) {
    return 3;
  }
  if (iVar1 == 0x10 || iVar1 == 1) {
    return 1;
  }
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}

