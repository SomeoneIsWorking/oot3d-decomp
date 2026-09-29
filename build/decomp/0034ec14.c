// OoT3D decomp @ 0034ec14  name=FUN_0034ec14  size=144

void FUN_0034ec14(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  bool bVar3;

  iVar1 = FUN_00366684(0);
  bVar3 = iVar1 != -1;
  if (bVar3) {
    iVar1 = *(int *)(DAT_0034eca4 + 0x70);
    unaff_r4 = DAT_0034eca4;
  }
  if (bVar3 && iVar1 != -1) {
    iVar1 = FUN_00366684(0);
    uVar2 = iVar1 + DAT_0034eca8;
    if (0x54 < uVar2) {
      uVar2 = 0;
    }
    if ((*(byte *)(DAT_0034ecac + uVar2) & 8) != 0) {
      if (*(int *)(unaff_r4 + 0x70) == -1) {
        FUN_003655d0(0);
      }
      else {
        FUN_0034bdb8(0);
        FUN_0036ec40(0,*(undefined4 *)(unaff_r4 + 0x70));
      }
      *(undefined4 *)(unaff_r4 + 0x70) = 0xffffffff;
    }
  }
  return;
}
