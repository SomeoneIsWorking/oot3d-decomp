// OoT3D decomp @ 00353998  name=FUN_00353998  size=60

void FUN_00353998(void)

{
  int iVar1;

  iVar1 = DAT_003539d4;
  if (*(char *)(DAT_003539d4 + 0x4e) != '\0') {
    *(undefined2 *)(DAT_003539d4 + 0x1582) = *(undefined2 *)(DAT_003539d4 + 0x1580);
    *(ushort *)(iVar1 + 0x1586) = (*(byte *)(iVar1 + 0x50) + 1) * 0x30;
    *(undefined2 *)(iVar1 + 0x1580) = 9;
  }
  return;
}
