// OoT3D decomp @ 00369128  name=FUN_00369128  size=68

void FUN_00369128(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;

  iVar2 = DAT_00369174;
  iVar1 = DAT_0036916c;
  uVar4 = ((uint)*(ushort *)(DAT_00369174 + 0xb6) | *(int *)(DAT_0036916c + 8) << *DAT_00369170) ^
          8 << *DAT_00369170;
  *(short *)(DAT_00369174 + 0xb6) = (short)uVar4;
  if ((uVar4 & 0xffff & *(uint *)(iVar1 + 0xc)) == 0) {
    uVar3 = 0x3d;
  }
  else {
    uVar3 = 0x55;
  }
  *(undefined1 *)(iVar2 + 0x80) = uVar3;
  return;
}
