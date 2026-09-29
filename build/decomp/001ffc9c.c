// OoT3D decomp @ 001ffc9c  name=FUN_001ffc9c  size=52

byte FUN_001ffc9c(int param_1)

{
  byte bVar1;
  int iVar2;

  iVar2 = 1 - *(uint *)(DAT_001ffcd0 + 4);
  if (1 < *(uint *)(DAT_001ffcd0 + 4)) {
    iVar2 = 0;
  }
  bVar1 = *(byte *)(DAT_001ffcd4 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 2 + iVar2);
  if (1 < bVar1) {
    bVar1 = 0;
  }
  return bVar1;
}
