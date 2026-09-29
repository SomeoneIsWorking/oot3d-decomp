// OoT3D decomp @ 0040fd70  name=FUN_0040fd70  size=136

int FUN_0040fd70(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  iVar1 = *(int *)(*param_1 + 0xc);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = 4;
  }
  uVar3 = *(uint *)(*param_1 + 0x1c);
  if ((uVar3 & 0x80) == 0) {
    iVar4 = iVar1;
    if (iVar1 == 0) {
      iVar4 = 4;
    }
    iVar4 = iVar4 * 0xc;
  }
  else {
    iVar4 = 0;
  }
  if ((uVar3 & 0x10) == 0) {
    iVar5 = iVar1;
    if (iVar1 == 0) {
      iVar5 = 4;
    }
    iVar5 = iVar5 << 3;
  }
  else {
    iVar5 = 0;
  }
  if ((uVar3 & 8) == 0) {
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 << 4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1 + iVar5 + iVar2 * 0xc + iVar4;
}
