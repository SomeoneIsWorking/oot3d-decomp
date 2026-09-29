// OoT3D decomp @ 002faf2c  name=FUN_002faf2c  size=84

uint FUN_002faf2c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  piVar1 = DAT_002faf80;
  iVar2 = DAT_002faf80[1];
  iVar4 = *DAT_002faf80 + -1;
  uVar3 = *(int *)(DAT_002faf84 + iVar2 * 4) + *(int *)(DAT_002faf84 + *DAT_002faf80 * 4);
  *(uint *)(DAT_002faf84 + iVar2 * 4) = uVar3;
  iVar2 = iVar2 + -1;
  *piVar1 = iVar4;
  if (iVar4 < 0) {
    piVar1[1] = iVar2;
    *piVar1 = 0x36;
  }
  else {
    piVar1[1] = iVar2;
    if (iVar2 < 0) {
      piVar1[1] = 0x36;
    }
  }
  return uVar3 & 0x7fffffff;
}
