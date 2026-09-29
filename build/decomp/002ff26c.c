// OoT3D decomp @ 002ff26c  name=FUN_002ff26c  size=32

bool FUN_002ff26c(void)

{
  int iVar1;
  bool bVar2;

  bVar2 = *(int *)(DAT_002ff28c + 0x14) != 5;
  iVar1 = DAT_002ff28c;
  if (bVar2) {
    iVar1 = *(int *)(DAT_002ff28c + 0x28);
  }
  return bVar2 && iVar1 != 0;
}
