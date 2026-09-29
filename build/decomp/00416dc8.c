// OoT3D decomp @ 00416dc8  name=FUN_00416dc8  size=72

void FUN_00416dc8(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;

  puVar1 = (undefined4 *)FUN_0035010c(DAT_00416e10);
  *(undefined4 **)(DAT_00416e14 + 4) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  iVar3 = 0x570;
  puVar2 = (undefined2 *)((int)puVar1 + 0x12);
  do {
    iVar3 = iVar3 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
  } while (iVar3 != 0);
  return;
}
