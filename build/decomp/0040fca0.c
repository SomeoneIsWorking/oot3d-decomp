// OoT3D decomp @ 0040fca0  name=FUN_0040fca0  size=104

int FUN_0040fca0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar1 = *(int *)(*param_1 + 0xc);
  uVar4 = *(uint *)(*param_1 + 0x1c);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = 4;
  }
  if ((uVar4 & 0x80) == 0) {
    iVar3 = iVar1;
    if (iVar1 == 0) {
      iVar3 = 4;
    }
    iVar3 = iVar3 * 0xc;
  }
  else {
    iVar3 = 0;
  }
  if ((uVar4 & 0x10) == 0) {
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = 0;
  }
  return iVar1 + iVar3 + iVar2 * 0xc;
}
