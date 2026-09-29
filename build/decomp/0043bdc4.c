// OoT3D decomp @ 0043bdc4  name=FUN_0043bdc4  size=52

void FUN_0043bdc4(void)

{
  int iVar1;

  iVar1 = DAT_0043bdf8;
  *(undefined4 *)(DAT_0043bdf8 + 0x14) = 0x10;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
  FUN_002f53c8();
  FUN_002f663c();
  FUN_002f9a1c(*(undefined4 *)(iVar1 + 8));
  return;
}
