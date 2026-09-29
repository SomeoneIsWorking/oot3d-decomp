// OoT3D decomp @ 002d5a0c  name=FUN_002d5a0c  size=24

undefined4 FUN_002d5a0c(void)

{
  undefined4 uVar1;

  if (*(char *)(DAT_002d5a24 + 2) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_002d5a24 + 0xc);
  }
  return uVar1;
}
