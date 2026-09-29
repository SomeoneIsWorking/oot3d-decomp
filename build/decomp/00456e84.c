// OoT3D decomp @ 00456e84  name=FUN_00456e84  size=76

uint FUN_00456e84(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 1;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 8);
    if (iVar1 != 0) {
      iVar1 = FUN_0031b9c0(iVar1,0);
      if (iVar1 == 0 || uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return uVar3 ^ 1;
}
