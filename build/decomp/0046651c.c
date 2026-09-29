// OoT3D decomp @ 0046651c  name=FUN_0046651c  size=28

uint FUN_0046651c(void)

{
  uint uVar1;
  bool bVar2;

  bVar2 = *(char *)(DAT_00466538 + 2) == '\0';
  uVar1 = DAT_00466538;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(DAT_00466538 + 1);
  }
  if (!bVar2 || uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}
