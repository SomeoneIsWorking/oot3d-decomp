// OoT3D decomp @ 0040d7c0  name=FUN_0040d7c0  size=104

uint FUN_0040d7c0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  bVar1 = false;
  iVar4 = 0;
  uVar2 = 0;
  iVar3 = 2;
  do {
    if (((*param_1 & 1 << (uVar2 & 0xff)) != 0) && (iVar4 = iVar4 + 1, uVar2 == 1)) {
      bVar1 = true;
    }
    iVar3 = iVar3 + -1;
    uVar2 = uVar2 + 1;
  } while (iVar3 != 0);
  if (!bVar1) {
    iVar4 = 0;
  }
  uVar2 = DAT_0040d828;
  if (iVar4 != 0) {
    uVar2 = param_1[iVar4];
  }
  return uVar2;
}
