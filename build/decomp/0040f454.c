// OoT3D decomp @ 0040f454  name=FUN_0040f454  size=108

uint FUN_0040f454(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  bVar1 = false;
  iVar4 = 0;
  uVar2 = 0;
  iVar3 = 4;
  do {
    if (((*(uint *)(param_1 + 4) & 1 << (uVar2 & 0xff)) != 0) && (iVar4 = iVar4 + 1, uVar2 == 3)) {
      bVar1 = true;
    }
    iVar3 = iVar3 + -1;
    uVar2 = uVar2 + 1;
  } while (iVar3 != 0);
  if (!bVar1) {
    iVar4 = 0;
  }
  uVar2 = DAT_0040f4c0;
  if (iVar4 != 0) {
    uVar2 = ((uint *)(param_1 + 4))[iVar4];
  }
  return uVar2;
}
