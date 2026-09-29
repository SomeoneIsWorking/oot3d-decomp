// OoT3D decomp @ 002d2b84  name=FUN_002d2b84  size=32

void FUN_002d2b84(void)

{
  int iVar1;

  iVar1 = DAT_002d2ba4;
  *(undefined4 *)(DAT_002d2ba4 + 100) = 0xffffffff;
  if (*(int *)(iVar1 + 0x34) != 0) {
    FUN_002e0f90();
    return;
  }
  return;
}
