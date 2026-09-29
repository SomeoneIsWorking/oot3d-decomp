// OoT3D decomp @ 0030de24  name=FUN_0030de24  size=96

int FUN_0030de24(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  puVar2 = param_1;
  while (((uint)puVar2 & 3) != 0) {
    puVar1 = (uint *)((int)puVar2 + 1);
    uVar4 = *puVar2;
    puVar2 = puVar1;
    if ((char)uVar4 == '\0') {
      return (int)puVar1 - ((int)param_1 + 1);
    }
  }
  do {
    puVar1 = puVar2 + 1;
    uVar4 = *puVar2 - DAT_0030de84 & ~*puVar2 & DAT_0030de84 << 7;
    puVar2 = puVar1;
  } while (uVar4 == 0);
  iVar3 = (int)puVar1 - (int)((int)param_1 + 1);
  if ((uVar4 & 0xff) != 0) {
    return iVar3 + -3;
  }
  if ((uVar4 & 0xffff) != 0) {
    return iVar3 + -2;
  }
  if ((uVar4 & 0xffffff) != 0) {
    iVar3 = iVar3 + -1;
  }
  return iVar3;
}
