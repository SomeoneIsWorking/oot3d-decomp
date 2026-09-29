// OoT3D decomp @ 0040fd28  name=FUN_0040fd28  size=72

int FUN_0040fd28(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar1 = *(int *)(*param_1 + 0xc);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = 4;
  }
  bVar3 = (*(uint *)(*param_1 + 0x1c) & 0x80) != 0;
  if (bVar3) {
    iVar1 = 0;
  }
  if (!bVar3) {
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 * 0xc;
  }
  return iVar1 + iVar2 * 0xc;
}
